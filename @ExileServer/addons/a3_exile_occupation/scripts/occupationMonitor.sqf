_logDetail = format ["[OCCUPATION:Unstick]:: Initialised at %1",time];
[_logDetail] call SC_fnc_log;

SC_liveVehiclesArray 	= [];
SC_liveHelisArray		= [];
SC_liveBoatsArray		= [];

{
	_vehicle		= _x;
	_vehLocation 	= _x getVariable "SC_vehicleSpawnLocation";
	_transport 		= _x getVariable "SC_transport";
	
	if(!isNil "_vehLocation") then
	{
		if(_vehicle isKindOf "LandVehicle") then
		{		
			SC_liveVehiclesArray pushBack _vehicle; 
			SC_liveVehicles = count(SC_liveVehiclesArray);		
		};

		if(_vehicle isKindOf "Air" && isNil "_transport") then
		{   
			SC_liveHelisArray pushBack _vehicle; 
			SC_liveHelis = count(SC_liveHelisArray);
		};

		if(_vehicle isKindOf "Ship") then
		{   
			SC_liveBoatsArray pushBack _vehicle;
			SC_liveBoatss = count(SC_liveBoatsArray);
		};
	};
}forEach vehicles;

SC_liveHelis = count(SC_liveHelisArray);
{
    if(isNull _x) exitWith { SC_liveHelisArray = SC_liveHelisArray - [_x];  };
    _logDetail = format ["[OCCUPATION:Unstick]:: Air: %1 is active",_x];
    [_logDetail] call SC_fnc_log; 
    _x setFuel 1;
    sleep 2;
	_tempLocation = _x getVariable "SC_vehicleSpawnLocation";
	_originalSpawnLocation = _tempLocation select 0;
	diag_log format ["[occupationMonitor] _tempLocation: %1 _originalSpawnLocation: %2",_tempLocation,_originalSpawnLocation];
	_radius = _tempLocation select 1;	

	_pos = position _x;	
	_nearestMarker = [allMapMarkers, _pos] call BIS_fnc_nearestPosition; // Nearest Marker to the Location		
	_posNearestMarker = getMarkerPos _nearestMarker;
    
    _group = group _x;
    _isFrozen =  _group getVariable["DMS_isGroupFrozen",false];
    if (!_isFrozen) then 
    {
        _GroupLeader = leader (group _x); 
        _GroupLeader doMove _originalSpawnLocation;
    }
    else
    {
        _logDetail = format ["[OCCUPATION:Unstick]:: Air: %1 is currently frozen, resetting DMS_AllowFreezing variable and forcing unfreeze",_x];
        [_logDetail] call SC_fnc_log;    
		_group setVariable ["DMS_AllowFreezing",false]; 
		[_group,false] call DMS_fnc_FreezeToggle;		
    }; 
    if (_pos distance _posNearestMarker < 750) then 
    {
        _logDetail = format ["[OCCUPATION:Unstick]:: Air: %1 is too close to a map marker, redirecting destination",_x];
        [_logDetail] call SC_fnc_log; 
		_GroupLeader = leader (group _x); 
        _GroupLeader doMove _originalSpawnLocation;
    }
	
}forEach SC_liveHelisArray;

SC_liveVehicles = count(SC_liveVehiclesArray);
{
    if(isNull _x) exitWith { SC_liveVehiclesArray = SC_liveVehiclesArray - [_x];  };
    _logDetail = format ["[OCCUPATION:Unstick]:: Land: %1 is active",_x];
    [_logDetail] call SC_fnc_log; 
    _x setFuel 1; 
    _group = group _x;
    _isFrozen =  _group getVariable["DMS_isGroupFrozen",false];    
    if (!_isFrozen) then 
    {
        [_x] call SC_fnc_unstick;
    }
    else
    {
        _logDetail = format ["[OCCUPATION:Unstick]:: Land: %1 is currently frozen, resetting DMS_AllowFreezing variable and forcing unfreeze",_x];
        [_logDetail] call SC_fnc_log; 
		_group setVariable ["DMS_AllowFreezing",false];
		[_group,false] call DMS_fnc_FreezeToggle;	        
    };
    sleep 2;       
}forEach SC_liveVehiclesArray;

SC_liveBoats = count(SC_liveBoatsArray);
{
    if(isNull _x) exitWith { SC_liveBoatsArray = SC_liveBoatsArray - [_x];  };
    _logDetail = format ["[OCCUPATION:Unstick]:: Sea: %1 is active",_x];
    [_logDetail] call SC_fnc_log; 
    _x setFuel 1; 
    _group = group _x;
    _isFrozen =  _group getVariable["DMS_isGroupFrozen",false];         
    if (!_isFrozen) then 
    {
        [_x] call SC_fnc_unstick;
    }
    else
    {
        _logDetail = format ["[OCCUPATION:Unstick]:: Sea: %1 is currently frozen, resetting DMS_AllowFreezing variable and forcing unfreeze",_x];
        [_logDetail] call SC_fnc_log;
		_group setVariable ["DMS_AllowFreezing",false];
		[_group,false] call DMS_fnc_FreezeToggle;			
    };
    sleep 2; 
}forEach SC_liveBoatsArray;


_logDetail = format ["[OCCUPATION:Unstick]:: Finished at %1",time];
[_logDetail] call SC_fnc_log;