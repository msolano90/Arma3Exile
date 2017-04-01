// Get the variables from the event handler
_unit 			= _this select 0;
_side           = _unit getVariable "SC_unitSide";
_locationName   = _unit getVariable "SC_unitLocationName";
_pos            = _unit getVariable "SC_unitLocationPosition";

_unit removeAllMPEventHandlers  "mphit";

if(SC_mapMarkers) then 
{
    deleteMarker format ["%1", _locationName];   
    _nearBanditAI = { side _x == SC_BanditSide AND (_x getVariable "SC_unitLocationName" == _locationName) AND alive _x  } count allUnits;
    _nearSurvivorAI = { side _x == SC_SurvivorSide AND (_x getVariable "SC_unitLocationName" == _locationName) AND alive _x } count allUnits;
    
    _logDetail = format ["[OCCUPATION:locationUnitMPKilled]:: unit: %1 side: %2 location: %3 nearbandits: %4 nearsurvivors: %5",_unit,_side,_locationName,_nearBanditAI,_nearSurvivorAI];
    [_logDetail] call SC_fnc_log;	

    _markerName = "Bandits"; 
    _markerColour = "ColorRed";      
    
    if(_nearBanditAI == 0 && _nearSurvivorAI == 0) exitWith {};
    
    if(_nearBanditAI > 0 && _nearSurvivorAI > 0) then
    {
        _markerName = "Survivors and Bandits"; 
        _markerColour = "ColorOrange";   
    };  
    if(_nearBanditAI == 0 && _nearSurvivorAI > 0) then
    {
        _markerName = "Survivors"; 
        _markerColour = "ColorGreen";   
    };                                         
    
    _marker = createMarker [format ["%1", _locationName],_pos];
    _marker setMarkerShape "Icon";
    _marker setMarkerSize [3,3];
    _marker setMarkerType "mil_dot";
    _marker setMarkerBrush "Solid";
    _marker setMarkerText _markerName;
    _marker setMarkerColor _markerColour;
    _marker setMarkerAlpha 0.5;
        
};		
