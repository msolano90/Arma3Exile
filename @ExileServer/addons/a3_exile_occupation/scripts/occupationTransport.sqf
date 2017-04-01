if (!isServer) exitWith {};

while {true} do
{
    _logDetail = format ["[OCCUPATION:transport]:: Starting @ %1",time];
    [_logDetail] call SC_fnc_log;

    private["_spawnLocation","_transport","_transportSpeed","_transportType","_wp","_transportBehaviour","_transportWaitingTime","_transportGunner"];

    if( count SC_occupyTransportStartPos   == 0) then 
    {
        _middle 		    = worldSize/2;			
        _spawnCenter 	    = [_middle,_middle,0];         
        SC_occupyTransportStartPos  = _spawnCenter;
    };

    SC_occupyTransportClassToUse = SC_occupyTransportClass call BIS_fnc_selectRandom;

    if!(SC_occupyTransportClassToUse isKindOf "LandVehicle" OR SC_occupyTransportClassToUse isKindOf "Air") exitWith 
    {  
        _logDetail = format ["[OCCUPATION:transport]:: Only land vehicles or helicopters can be used as public transport"];
        [_logDetail] call SC_fnc_log;    
    };

    if(SC_occupyTransportClassToUse isKindOf "LandVehicle") then 
    { 
        _transportType = "land"; 
        _logDetail = format ["[OCCUPATION:transport]:: Spawning near map centre %1 @ %2",SC_occupyTransportStartPos,time];
        [_logDetail] call SC_fnc_log;

        _positionOftransport = [SC_occupyTransportStartPos,0,500,25,0,10,0] call BIS_fnc_findSafePos;

        // Get position of nearest roads
        _nearRoads = _positionOftransport nearRoads 2000;
        _nearestRoad = _nearRoads select 0;
        _nearestRoadPos = position (_nearRoads select 0);
        _spawnLocation = [_nearestRoadPos select 0, _nearestRoadPos select 1, 0];    
        _transportSpeed = "LIMITED";
        _transportBehaviour = "SAFE";
        _transportWaitingTime = 20;
    } 
    else
    { 
        _transportType = "heli"; 
        _spawnLocation = [SC_occupyTransportStartPos select 0, SC_occupyTransportStartPos select 1, 200];
        _transportSpeed = "NORMAL";
        _transportBehaviour = "CARELESS";
        _transportWaitingTime = 120;
    };   


    // Check there are enough waypoints to use   
    _markerCount = 0;	


    _fixedWaypoints = [];
    SC_occupyTransportFixed = false;

    if(_transportType == "heli" && SC_TransportAirFixed) then
    {
        SC_occupyTransportFixed = true;
        _fixedWaypoints = SC_TransportAirWaypoints;
    };

    if(_transportType == "land" && SC_TransportLandFixed) then
    {
        SC_occupyTransportFixed = true;
        _fixedWaypoints = SC_TransportLandWaypoints;
    };




    if(SC_occupyTransportFixed) then
    {
        if(_transportType == "heli") then
        {
            _markerCount = count SC_TransportAirWaypoints;
        }
        else
        {
            _markerCount = count SC_TransportLandWaypoints;
        };
    }
    else
    {
        {
            _markerName = _x;
            _markerPos = getMarkerPos _markerName;
            if (markerType _markerName == "ExileTraderZone" OR markerType _markerName == "o_unknown") then 
            { 
                _markerCount = _markerCount + 1;
            };

        } forEach allMapMarkers;
    };



    if(_markerCount < 2) then 
    {  
        _logDetail = format ["[OCCUPATION:transport]:: failed to find more than 1 suitable waypoint @ %1",time];
        [_logDetail] call SC_fnc_log;
    }
    else
    {
        // Create the driver/pilot and ensure he doest react to gunfire or being shot at.
        _group = createGroup resistance;
        _group setCombatMode "BLUE";
        _group setVariable ["DMS_AllowFreezing",false,true];

        // Spawn Vehicle

        if(_transportType == "heli") then 
        {
            _transport = createVehicle [SC_occupyTransportClassToUse, _spawnLocation, [], 0, "NONE"];
            _transport setVehiclePosition [_spawnLocation, [], 0, "FLY"];
            _transport setVariable ["vehicleID", _spawnLocation, true];  
            _transport setFuel 1;
            _transport setDamage 0;
            _transport engineOn true;
            _transport flyInHeight 300;    
        }
        else
        {
            _transport = createVehicle [SC_occupyTransportClassToUse, _spawnLocation, [], 0, "CAN_COLLIDE"];    
        };

        sleep 0.2;

        if(isNull _transport) exitWith 
        {  
            _logDetail = format ["[OCCUPATION:transport]:: %1 failed to spawn, check it is a valid vehicle class name",SC_occupyTransportClassToUse];
            [_logDetail] call SC_fnc_log;
        };

        if(SC_secureTransport) then 
        {
            _transport addEventHandler ["handleDamage", { false }];
            _transport allowdamage false;
        };


        if( _transportType == "land" && SC_colourTransport) then
        {
            //_transport setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.518,0.519,0.7,0.2)"];    
        };
		
        if( _transportType == "air" && SC_colourTransport) then
        {
            _transport setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.518,0.519,0.7,0.2)"];
            _transport setObjectTextureGlobal [1,"#(argb,8,8,3)color(0.518,0.519,0.7,0.2)"];
            _transport setObjectTextureGlobal [2,"#(argb,8,8,3)color(0.518,0.519,0.7,0.2)"];    
        };


        _group addVehicle _transport;
            
        _transport enableCopilot false;

        _transportDriver = _group createUnit [DMS_AI_Classname, _spawnLocation, [], 0,"FORM"];
        removeGoggles _transportDriver;
        _transportDriver forceAddUniform "U_IG_Guerilla3_1";
        _transportDriver addVest "V_TacVest_blk_POLICE";
        _transportDriver addHeadgear "H_Cap_blk";
        removeBackpackGlobal _transportDriver;
        _transportDriver addBackpackGlobal "B_Parachute";
        _transportDriver disableAI 'AUTOTARGET'; 
        _transportDriver disableAI 'TARGET'; 
        _transportDriver disableAI 'SUPPRESSION';
        _transportDriver setCaptive true;   
        _transportDriver assignasdriver _transport;
        _transportDriver moveInDriver _transport;
        [_transportDriver] orderGetin true;
        _transport lockDriver true;
        _transport lockTurret [[0],true];

        if(SC_secureTransport) then 
        {
            _transportDriver allowDamage false;
        };

        SC_transportArray = SC_transportArray + [_transport];
        _transport setVariable ["SC_assignedDriver", _transportDriver,true];
        _transport setVariable ["SC_transport", true,true];
        _transport setVariable ["SC_vehicleSpawnLocation", _spawnLocation,true];
		_SC_vehicleSpawnLocation = [_spawnLocation,2000,worldName];
		_transport setVariable ["SC_vehicleSpawnLocation", _SC_vehicleSpawnLocation,true];
		
        _transportDriver setVariable ["DMS_AssignedVeh",_transport]; 
        _transportDriver setVariable ["SC_lastSpoke", time, true]; 
        _transport addEventHandler ["getin", "_this call SC_fnc_getOnBus;"];
        _transport addEventHandler ["getout", "_this call SC_fnc_getOffBus;"];

        clearBackpackCargoGlobal _transport;
        clearItemCargoGlobal _transport;
        clearMagazineCargoGlobal _transport;
        clearWeaponCargoGlobal _transport;
        _transport setVariable ["ExileIsPersistent", false];
        _transport setVariable["vehPos",_spawnLocation,true];
        _transport setFuel 1;

        _logDetail = format['[OCCUPATION:transport] Vehicle %1 spawned @ %2',SC_occupyTransportClassToUse,_spawnLocation];
        [_logDetail] call SC_fnc_log;

        _logDetail = format ["[OCCUPATION:transport]:: Found %1 markers to use as pickup points @ %2",_markerCount,time];
        [_logDetail] call SC_fnc_log;

        _textures = getObjectTextures _transport;

        _logDetail = format ["[OCCUPATION:transport]:: textures for vehicle are: %1",_textures];
        [_logDetail] call SC_fnc_log;

        _markerCount    = 0;	

        if(SC_occupyTransportFixed) then
        {
            {
                _markerPos = _x;
                _wp = _group addWaypoint [_markerPos, 100];
                _wp setWaypointType "MOVE";
                _wp setWaypointBehaviour _transportBehaviour;
                _wp setWaypointspeed _transportSpeed;
                
                _wp = _group addWaypoint [_markerPos, 25];
                _wp setWaypointType "TR UNLOAD";
                _wp setWaypointBehaviour "SAFE";
                _wp setWaypointspeed "LIMITED";
                _wp setWaypointTimeout [_transportWaitingTime,_transportWaitingTime,_transportWaitingTime]; 
                _markerCount = _markerCount + 1;
            } forEach _fixedWaypoints;
        }
        else
        {
            {
                _markerName = _x;
                _markerPos = getMarkerPos _markerName;
                if (markerType _markerName == "ExileTraderZone" OR markerType _markerName == "o_unknown") then 
                {
                    _wp = _group addWaypoint [_markerPos, 100];
                    _wp setWaypointType "MOVE";
                    _wp setWaypointBehaviour _transportBehaviour;
                    _wp setWaypointspeed _transportSpeed;
                    
                    _wp = _group addWaypoint [_markerPos, 25];
                    _wp setWaypointType "TR UNLOAD";
                    _wp setWaypointBehaviour "SAFE";
                    _wp setWaypointspeed "LIMITED";
                    _wp setWaypointTimeout [_transportWaitingTime,_transportWaitingTime,_transportWaitingTime]; 
                    _markerCount = _markerCount + 1;
                };
            
            } forEach allMapMarkers;
        };

        // Add a final CYCLE
        _wp = _group addWaypoint [_spawnLocation, 25];
        _wp setWaypointType "CYCLE";
        _wp setWaypointBehaviour _transportBehaviour;
        _wp setWaypointspeed _transportSpeed; 
        _wp setWaypointTimeout [_transportWaitingTime,_transportWaitingTime,_transportWaitingTime]; 

        _transportPos = position _transport;
        _mk = createMarker ["transportLocation",_transportPos];

        if(_transportType == "land") then
        {
            "transportLocation" setMarkerType "loc_BusStop";
            "transportLocation" setMarkerText "Occupation Public Bus";    
        }
        else
        {
            "transportLocation" setMarkerType "c_air";
            "transportLocation" setMarkerText "Occupation Airlines"; 
            "transportLocation" setMarkerColor "ColorBLUFOR";      
        };


        diag_log format['[OCCUPATION:transport] Running'];
        _transportDriver = _transport getVariable "SC_assignedDriver";

        // Make _transportDriver stop when players near him.
        while {true} do
        {
            
            _pos = position _transport;
            _mk setMarkerPos _pos;
            _nearPlayers = (count (_pos nearEntities [['Exile_Unit_Player'],25]));

            if (_nearPlayers >= 1 && _transportType == "land") then
            {
                uiSleep 0.5;
                _transport setFuel 1;
                _transport setVehicleAmmo 1;
                _transportDriver disableAI "MOVE";
                uiSleep 3;
            }
            else
            {	
                _transport setFuel 1;
                _transport setVehicleAmmo 1;
                uiSleep 3;
                _transportDriver enableAI "MOVE";     
            };
            if(!Alive _transportDriver) exitWith {};
            uiSleep 5;   
        };		
        deleteMarker _mk;
        _transport setDamage 1;
		_logDetail = format ["[OCCUPATION:transport]:: Transport destroyed @ %1",time];
		[_logDetail] call SC_fnc_log;
    };
	if(_markerCount < 2) exitWith {};

    // Spawn another heli
    uiSleep 15; // delay the start
};