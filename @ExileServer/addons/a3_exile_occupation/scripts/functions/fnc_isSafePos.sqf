private _position       = _this select 0;
private _validspot      = true; 

// Check if position is near a blacklisted area
{
    private _blacklistPos       = _x select 0;
    private _blacklistRadius    = _x select 1;
    private _blacklistMap       = _x select 2;
    if(isNil "_blacklistPos" OR isNil "_blacklistRadius" OR isNil "_blacklistMap") exitWith 
    { 
        _logDetail = format["[OCCUPATION]:: Invalid blacklist position supplied check SC_blackListedAreas in your config.sqf"];
        [_logDetail] call SC_fnc_log;           
        
    };
    if (worldName == _blacklistMap) then
    {
        	
		_distance = _position distance2D _blacklistPos;
		if(_distance < _blacklistRadius) then
        {
            _validspot = false;
			diag_log format["[OCCUPATION]:: %1 is %2m from blacklisted position %3 (blacklisted)",_position,_distance,_blacklistPos];			
        };
    };
}forEach SC_blackListedAreas;

if(_validspot) then
{
    //Check if near player territory
    private _nearBase = (nearestObjects [_position,["Exile_Construction_Flag_Static"],SC_minDistanceToTerritory]) select 0;
    if (!isNil "_nearBase") then { _validspot = false;  };	

    // is position in range of a territory?
    if([_position, SC_minDistanceToTerritory] call ExileClient_util_world_isTerritoryInRange) exitwith { _validspot = false; };

    // is position in range of a trader zone?
    if([_position, SC_minDistanceToTraders] call ExileClient_util_world_isTraderZoneInRange) exitwith { _validspot = false; };

    // is position in range of a spawn zone?
    if([_position, SC_minDistanceToSpawnZones] call ExileClient_util_world_isSpawnZoneInRange) exitwith { _validspot = false; };

    // is position in range of a player?
    if([_position, SC_minDistanceToPlayer] call ExileClient_util_world_isAlivePlayerInRange) exitwith { _validspot = false; }; 
	
	// is position in range of a map marker?
	{
		_markerPos = getMarkerPos _x;
		if ((_markerPos distance2D _position) < 350) exitWith { _validspot = false; };
	}
	forEach allMapMarkers;
};       

_validspot	