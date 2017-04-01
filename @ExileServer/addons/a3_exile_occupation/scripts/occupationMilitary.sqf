if (!isServer) exitWith {};

private["_wp","_wp2","_wp3"];
_logDetail = format ["[OCCUPATION Military]:: Starting Monitor"];
[_logDetail] call SC_fnc_log;

_maxDistance 	    = 500;			            // Max radius to scan
_maxAIcount 		= SC_maxAIcount;
_minFPS 			= SC_minFPS;
_useLaunchers 		= DMS_ai_use_launchers;
_scaleAI			= SC_scaleAI;

_buildings 			= SC_buildings; // Class names for the military buildings to patrol
_building 			= [];

_currentPlayerCount = count playableUnits;
if(_currentPlayerCount > _scaleAI) then 
{
	_maxAIcount = _maxAIcount - (_currentPlayerCount - _scaleAI) ;
};

// Don't spawn additional AI if the server fps is below _minFPS
if(diag_fps < _minFPS) exitWith 
{ 
    _logDetail = format ["[OCCUPATION Military]:: Held off spawning more AI as the server FPS is only %1",diag_fps]; 
    [_logDetail] call SC_fnc_log;
};

_aiActive = { !isPlayer _x } count allunits;

if(_aiActive > _maxAIcount) exitWith 
{ 
    _logDetail = format ["[OCCUPATION Military]:: %1 active AI, so not spawning AI this time",_aiActive]; 
    [_logDetail] call SC_fnc_log;
};



{
	_okToSpawn = true;
	Sleep 0.1;

	_foundBuilding = _x select 0;
	_location = getPos _foundBuilding;
	_pos = [_location select 0, _location select 1, 0];
	
	if(SC_extendedLogging) then 
	{ 
		_logDetail = format ["[OCCUPATION Military]:: Testing position: %1",_pos];
		[_logDetail] call SC_fnc_log;
	};
	
	while{_okToSpawn && !isNil "_pos"} do
	{			
		// Percentage chance to spawn (roll 80 or more to spawn AI)
		_spawnChance = round (random 100);
		if(_spawnChance < 80) exitWith 
		{ 
			_okToSpawn = false; 
			if(SC_extendedLogging) then 
			{ 
				_logDetail = format ["[OCCUPATION Military]:: Rolled %1 so not spawning AI this time",_spawnChance];
				[_logDetail] call SC_fnc_log;
			};
		};

		_safePos = [ _pos ] call SC_fnc_isSafePos;
		if(!_safePos OR isNil "_safePos") then 
		{ 
			_okToSpawn = false; 
			if(SC_extendedLogging) then 
			{ 
				_logDetail = format ["[OCCUPATION Military]:: %1 determined as an unsafe position to spawn AI",_pos];
				[_logDetail] call SC_fnc_log;
			}; 
		};
		
		
		// Don't spawn additional AI if there are already AI in range
		_aiNear = count(_pos nearEntities [DMS_AI_Classname, 500]);
		if(_aiNear > 0) exitwith 
		{ 
			_okToSpawn = false; 
			if(SC_extendedLogging) then 
			{ 
				_logDetail = format ["[OCCUPATION Military]:: %1 already has %2 active AI patrolling",_pos,_aiNear];
				[_logDetail] call SC_fnc_log;
			}; 
		};

		
		if(_okToSpawn) then
		{
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			// Get AI to patrol the area
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			_aiCount = 1 + (round (random 2)); 
			_groupRadius = 500;
			_difficulty = "random";
			_side = SC_BanditSide;
			_spawnPosition = _pos;				
									
			// Get the AI to shut the fuck up :)
			enableSentences false;
			enableRadio false;
				
			if(!SC_useWaypoints) then
			{
				DMS_ai_use_launchers = false;
				_groupInitial = [_spawnPosition, _aiCount, _difficulty, "random", "bandit"] call DMS_fnc_SpawnAIGroup;
				DMS_ai_use_launchers = _useLaunchers;

				_group = createGroup SC_BanditSide;   
				_group setVariable ["DMS_AllowFreezing",true];
				_group setVariable ["DMS_LockLocality",false];
				_group setVariable ["DMS_SpawnedGroup",true];
				_group setVariable ["DMS_Group_Side", "bandit"]; 
				
				{	
					_unit = _x;
					[_unit] joinSilent grpNull;
					[_unit] joinSilent _group;
					_unitName = ["bandit"] call SC_fnc_selectName;
					if(!isNil "_unitName") then { _unit setName _unitName; }; 
					reload _unit;						
					if(SC_debug) then
					{
						_tag = createVehicle ["Sign_Arrow_Blue_F", position _unit, [], 0, "CAN_COLLIDE"];
						_tag attachTo [_unit,[0,0,0.6],"Head"];  
					}; 
				}foreach units _group;

				[_group, _pos, _groupRadius] call bis_fnc_taskPatrol;
				_group setBehaviour "STEALTH";
				_group setCombatMode "RED";
			}
			else
			{
								
				DMS_ai_use_launchers = false;
				_groupInitial = [_spawnPosition, _aiCount, _difficulty, "random", "bandit"] call DMS_fnc_SpawnAIGroup;
				DMS_ai_use_launchers = _useLaunchers;

				_group = createGroup SC_BanditSide;   
				_group setVariable ["DMS_AllowFreezing",true];
				_group setVariable ["DMS_LockLocality",false];
				_group setVariable ["DMS_SpawnedGroup",true];
				_group setVariable ["DMS_Group_Side", "bandit"];				
				
				{	
					_unit = _x;
					[_unit] joinSilent grpNull;
					[_unit] joinSilent _group;
					_unitName = ["bandit"] call SC_fnc_selectName;
					if(!isNil "_unitName") then { _unit setName _unitName; }; 						
					if(SC_debug) then
					{
						_tag = createVehicle ["Sign_Arrow_Blue_F", position _unit, [], 0, "CAN_COLLIDE"];
						_tag attachTo [_unit,[0,0,0.6],"Head"];  
					}; 
				}foreach units _groupInitial;
				deleteGroup _groupInitial; 

				[ _group,_pos,_difficulty,"STEALTH" ] call DMS_fnc_SetGroupBehavior;
				
				_buildings = _pos nearObjects ["house", _groupRadius];
				{
					_buildingPositions = [_x, 10] call BIS_fnc_buildingPositions;
					if(count _buildingPositions > 0) then
					{
							_y = _x;
							
						// Find Highest Point
						_highest = [0,0,0];
						{
							if(_x select 2 > _highest select 2) then
							{
								_highest = _x;
							};

						} foreach _buildingPositions;		
						_spawnPosition = _highest;
						
						_i = _buildingPositions find _spawnPosition;
						_wp = _group addWaypoint [_spawnPosition, 0] ;
						_wp setWaypointBehaviour "AWARE";
						_wp setWaypointCombatMode "RED";
						_wp setWaypointCompletionRadius 1;
						_wp waypointAttachObject _y;
						_wp setwaypointHousePosition _i;
						_wp setWaypointType "MOVE";

					};
				} foreach _buildings;
				if(count _buildings > 0 ) then
				{
					_wp setWaypointType "CYCLE";
				};			
			};				
			
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			_logDetail = format ["[OCCUPATION Military]:: Spawning %1 AI in at %2 to patrol",_aiCount,_spawnPosition];
			[_logDetail] call SC_fnc_log;

			if(SC_mapMarkers) then 
			{
				_marker = createMarker [format ["%1", _foundBuilding],_pos];
				_marker setMarkerShape "Icon";
				_marker setMarkerSize [3,3];
				_marker setMarkerType "mil_dot";
				_marker setMarkerBrush "Solid";
				_marker setMarkerAlpha 0.5;
				_marker setMarkerColor "ColorRed";
				_marker setMarkerText "Occupied Military Area";	
			};		
			_okToSpawn = false;			
		};	
	};
}foreach SC_completeMilitaryList;

_logDetail = "[OCCUPATION Military]: Ended";
[_logDetail] call SC_fnc_log;