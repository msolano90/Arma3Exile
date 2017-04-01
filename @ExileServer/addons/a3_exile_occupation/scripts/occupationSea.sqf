if (!isServer) exitWith {};

_logDetail = format['[OCCUPATION:Sea] Started'];
[_logDetail] call SC_fnc_log;

// more than _scaleAI players on the server and the max AI count drops per additional player
_currentPlayerCount = count playableUnits;
_maxAIcount 		= SC_maxAIcount;


if(_currentPlayerCount > SC_scaleAI) then 
{
	_maxAIcount = _maxAIcount - (_currentPlayerCount - SC_scaleAI) ;
};

// Don't spawn additional AI if the server fps is below _minFPS
if(diag_fps < SC_minFPS) exitWith 
{ 
    _logDetail = format ["[OCCUPATION:Sea]:: Held off spawning more AI as the server FPS is only %1",diag_fps]; 
    [_logDetail] call SC_fnc_log; 
};

_aiActive = {alive _x && (side _x == SC_BanditSide OR side _x == SC_SurvivorSide)} count allUnits;
if(_aiActive > _maxAIcount) exitWith 
{ 
    _logDetail = format ["[OCCUPATION:Sea]:: %1 active AI, so not spawning AI this time",_aiActive]; 
    [_logDetail] call SC_fnc_log; 
};

if(SC_liveBoats >= SC_maxNumberofBoats) exitWith 
{
    if(SC_extendedLogging) then 
    { 
        _logDetail = format['[OCCUPATION:Sea] End check %1 currently active (max %2) @ %3',SC_liveBoats,SC_maxNumberofBoats,time]; 
        [_logDetail] call SC_fnc_log;
    };    
};

_vehiclesToSpawn = (SC_maxNumberofBoats - SC_liveBoats);
_middle = worldSize/2;
_spawnCenter = [_middle,_middle,0];
_maxDistance = _middle;

for "_i" from 1 to _vehiclesToSpawn do
{
	if (_vehiclesToSpawn > 0) then
	{
		private["_group"];
		
		_locationArray = SC_occupyBoatFixedPositions;
		// Select the spawn position
		_spawnLocation = [0,0,0];
		_radius = 4000;
		if(SC_occupyBoatUseFixedPos) then
		{
			{
				_vehLocation = _x getVariable "SC_vehicleSpawnLocation";
				_locationArray = _locationArray - _vehLocation;				
			}forEach SC_liveBoatsArray;
			
			if(count _locationArray > 0)  then
			{
				_randomLocation = _locationArray call BIS_fnc_selectRandom;
				diag_log format["_randomLocation: %1",_randomLocation];
				_tempLocation = _randomLocation select 0;
				_spawnLocation = [_tempLocation select 0, _tempLocation select 1, _tempLocation select 2];
				_radius = _randomLocation select 1;
				_locationArray = _locationArray - _randomLocation;

			}
			else
			{
				_potentialspawnLocation = [ _spawnCenter, 0, _maxDistance + 500, 25, 2, 1, 1] call BIS_fnc_findSafePos;
				_spawnLocation = [_potentialspawnLocation select 0, _potentialspawnLocation select 1,0];
				_radius = 4000;
			};
		}
		else
		{
			_potentialspawnLocation = [ _spawnCenter, 0, _maxDistance + 500, 25, 2, 1, 1] call BIS_fnc_findSafePos;
			_spawnLocation = [_potentialspawnLocation select 0, _potentialspawnLocation select 1,0];
			_radius = 4000;
		};

		diag_log format["[OCCUPATION:Sea] found position %1",_spawnLocation]; 
		_group = createGroup SC_BanditSide;
		_group setVariable ["DMS_AllowFreezing",false];
		[_group,false] call DMS_fnc_FreezeToggle;
		_group setVariable ["DMS_LockLocality",true];
		_group setVariable ["DMS_SpawnedGroup",true];
		_group setVariable ["DMS_Group_Side", SC_BanditSide];  
		_VehicleClass = SC_BoatClassToUse call BIS_fnc_selectRandom;
		_VehicleClassToUse = _VehicleClass select 0; 

		boatOkToSpawn = false;
		while{!boatOkToSpawn} do
		{
			_VehicleClass = SC_BoatClassToUse call BIS_fnc_selectRandom;
			_VehicleClassToUse = _VehicleClass select 0;
			_VehicleClassAllowedCount = _VehicleClass select 1;
			_vehicleCount = 0;
			{
				if(_VehicleClassToUse == typeOf _x) then { _vehicleCount = _vehicleCount + 1; };    
			}forEach SC_liveHelisArray;
			if(_vehicleCount < _VehicleClassAllowedCount OR _VehicleClassAllowedCount == 0) then { boatOkToSpawn = true; };
		};       

		_vehicle = createVehicle [_VehicleClassToUse, _spawnLocation, [], 0, "NONE"];
		
		if(!isNull _vehicle) then
		{    
			_vehicle setPosASL _spawnLocation;
			_vehicle setVariable["vehPos",_spawnLocation,true];
			_vehicle setVariable["vehClass",_VehicleClassToUse,true];
			
			_SC_vehicleSpawnLocation = [_spawnLocation,_radius,worldName];
			_vehicle setVariable ["SC_vehicleSpawnLocation", _SC_vehicleSpawnLocation,true];
			
			// Remove the overpowered weapons from boats
			_vehicle removeWeaponTurret  ["HMG_01",[0]];
			_vehicle removeWeaponTurret  ["GMG_40mm",[0]];

			SC_liveBoats = SC_liveBoats + 1;
			SC_liveBoatsArray = SC_liveBoatsArray + [_vehicle];

			_vehicle setVehiclePosition [_spawnLocation, [], 0, "NONE"];
			_vehicle setVariable ["vehicleID", _spawnLocation, true];  
			_vehicle setFuel 1;
			_vehicle setDamage 0;
			_vehicle engineOn true;
			_vehicle lock 0;			
			_vehicle setVehicleLock "UNLOCKED";
			_vehicle setVariable ["ExileIsLocked", 0, true];
			_vehicle setVariable ["ExileIsPersistent", false];
			_vehicle action ["LightOn", _vehicle];
			sleep 0.2;
			_group addVehicle _vehicle;	
			
			// Calculate the number of seats in the vehicle and fill the required amount
			_crewRequired = SC_minimumCrewAmount;
			if(SC_maximumCrewAmount > SC_minimumCrewAmount) then 
			{ 
				_crewRequired = floor(random[SC_minimumCrewAmount,SC_maximumCrewAmount-SC_minimumCrewAmount,SC_maximumCrewAmount]); 
			};       
			_amountOfCrew = 0;
			_unitPlaced = false;
			_vehicleRoles = (typeOf _vehicle) call bis_fnc_vehicleRoles;
			{
				_unitPlaced = false;
				_vehicleRole = _x select 0;
				_vehicleSeat = _x select 1;
				if(_vehicleRole == "Driver") then
				{
					_unit = [_group,_spawnLocation,"assault","random","bandit","Vehicle"] call DMS_fnc_SpawnAISoldier;           
					_amountOfCrew = _amountOfCrew + 1;  
					_unit assignAsDriver _vehicle;
					_unit moveInDriver _vehicle;
					_unit setVariable ["DMS_AssignedVeh",_vehicle]; 
					_unitPlaced = true;
				};
				if(_vehicleRole == "Turret") then
				{
					_unit = [_group,_spawnLocation,"assault","random","bandit","Vehicle"] call DMS_fnc_SpawnAISoldier;         
					_amountOfCrew = _amountOfCrew + 1;   
					_unit moveInTurret [_vehicle, _vehicleSeat];
					_unit setVariable ["DMS_AssignedVeh",_vehicle]; 
					_unitPlaced = true;
				};
				if(_vehicleRole == "CARGO" && _amountOfCrew < _crewRequired) then
				{
					_unit = [_group,_spawnLocation,"assault","random","bandit","Vehicle"] call DMS_fnc_SpawnAISoldier;           
					_amountOfCrew = _amountOfCrew + 1;  
					_unit assignAsCargo _vehicle; 
					_unit moveInCargo _vehicle;
					_unit setVariable ["DMS_AssignedVeh",_vehicle];
					_unitPlaced = true; 
				};  

				if(SC_extendedLogging && _unitPlaced) then 
				{ 
					_logDetail = format['[OCCUPATION:Sky] %1 added to %2',_vehicleRole,_vehicle]; 
					[_logDetail] call SC_fnc_log;
				};                    
			} forEach _vehicleRoles;
			
			{	
				_unit = _x;
				_unitName = ["bandit"] call SC_fnc_selectName;
				if(!isNil "_unitName") then { _unit setName _unitName; }; 
				[_unit] joinSilent grpNull;
				[_unit] joinSilent _group;
			}foreach units _group;

			if(SC_infiSTAR_log) then 
			{ 
				_logDetail = format['[OCCUPATION:Sea] %1 spawned @ %2',_VehicleClassToUse,_spawnLocation];	
				[_logDetail] call SC_fnc_log;
			};

			
			clearMagazineCargoGlobal _vehicle;
			clearWeaponCargoGlobal _vehicle;
			clearItemCargoGlobal _vehicle;

			_vehicle addMagazineCargoGlobal ["HandGrenade", (random 2)];
			_vehicle addItemCargoGlobal ["ItemGPS", (random 1)];
			_vehicle addItemCargoGlobal ["Exile_Item_InstaDoc", (random 1)];
			_vehicle addItemCargoGlobal ["Exile_Item_PlasticBottleFreshWater", 2 + (random 2)];
			_vehicle addItemCargoGlobal ["Exile_Item_EMRE", 2 + (random 2)];
			
			// Add weapons with ammo to the vehicle
			_possibleWeapons = 
			[			
				"arifle_MXM_Black_F",
				"arifle_MXM_F",
				"srifle_DMR_01_F",
				"srifle_DMR_02_camo_F",
				"srifle_DMR_02_F",
				"srifle_DMR_02_sniper_F",
				"srifle_DMR_03_F",
				"srifle_DMR_03_khaki_F",
				"srifle_DMR_03_multicam_F",
				"srifle_DMR_03_tan_F",
				"srifle_DMR_03_woodland_F",
				"srifle_DMR_04_F",
				"srifle_DMR_04_Tan_F",
				"srifle_DMR_05_blk_F",
				"srifle_DMR_05_hex_F",
				"srifle_DMR_05_tan_f",
				"srifle_DMR_06_camo_F",
				"srifle_DMR_06_olive_F",
				"srifle_EBR_F",
				"srifle_GM6_camo_F",
				"srifle_GM6_F",
				"srifle_LRR_camo_F",
				"srifle_LRR_F"
			];
			_amountOfWeapons = 1 + (random 3);
			
			for "_i" from 1 to _amountOfWeapons do
			{
				_weaponToAdd = _possibleWeapons call BIS_fnc_selectRandom;
				_vehicle addWeaponCargoGlobal [_weaponToAdd,1];
			
				_magazinesToAdd = getArray (configFile >> "CfgWeapons" >> _weaponToAdd >> "magazines");
				_vehicle addMagazineCargoGlobal [(_magazinesToAdd select 0),round random 3];
			};

			
			[_group, _spawnLocation, _radius] call bis_fnc_taskPatrol;
			_group setBehaviour "AWARE";
			_group setCombatMode "RED";
			_vehicle addEventHandler ["getin", "_this call SC_fnc_claimVehicle;"];	
			_vehicle addMPEventHandler ["mpkilled", "_this call SC_fnc_vehicleDestroyed;"];
			_vehicle addMPEventHandler ["mphit", "_this call SC_fnc_hitSea;"];
			_vehicle setVariable ["SC_crewEjected", false,true];	
			sleep 0.2;               
		}
		else
		{
			_logDetail = format['[OCCUPATION:Sea] vehicle %1 failed to spawn (check classname is correct)',_VehicleClassToUse]; 
			[_logDetail] call SC_fnc_log;         
		};
	   
	};
   
};


_logDetail = format['[OCCUPATION:Sea] Running'];
[_logDetail] call SC_fnc_log;