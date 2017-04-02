// Triggered when the designated driver for a vehicle is killed
// Attempts to select a new driver from the same group

if(SC_extendedLogging) then 
{ 
	_logDetail = format ["[OCCUPATION:Vehicle]:: Unit %2 (driver) killed at %1",time,_this select 0]; 
	[_logDetail] call SC_fnc_log;
};

_deadDriver	= _this select 0;
_vehicle = _deadDriver getVariable "SC_drivenVehicle";
_vehicle removeAllMPEventHandlers  "mphit";
_vehicle setVariable ["SC_repairStatus",false,true];

if(SC_debug) then
{
    { detach _x; deleteVehicle _x; } forEach attachedObjects _deadDriver;
};

// Select a replacement driver
_group = group _vehicle;

// Remove dead units from the group
{
    if(!alive _x) then { [_x] join grpNull; };     
}forEach units _group;

if(count units _group > 0) then
{
    if(SC_extendedLogging) then 
    { 
        _logDetail = format ["[OCCUPATION:Vehicle]:: vehicle: %1 group: %2 units left:%3",_vehicle,_group,count units _group]; 
        [_logDetail] call SC_fnc_log; 
    };      
  
    _groupMembers = units _group;
    _driver = _groupMembers call BIS_fnc_selectRandom;
    
    if(_deadDriver == _driver) exitWith { [_vehicle]  call SC_fnc_vehicleDestroyed; };
    
    _driver assignAsDriver _vehicle;
    _driver setVariable ["DMS_AssignedVeh",_vehicle];  
    _driver setVariable ["SC_drivenVehicle", _vehicle,true];	 
    _vehicle setVariable ["SC_assignedDriver", _driver,true];        
    _vehicle addMPEventHandler ["mphit", "_this call SC_fnc_hitLand;"];
    _driver removeAllMPEventHandlers  "mphit";
    _driver addMPEventHandler ["mpkilled", "_this call SC_fnc_driverKilled;"];

    if(SC_debug) then
    {
        _tag = createVehicle ["Sign_Arrow_Yellow_F", position _driver, [], 0, "CAN_COLLIDE"];
        _tag attachTo [_driver,[0,0,0.6],"Head"];  
    };

    _driver doMove (position _vehicle);   	
    _driver action ["movetodriver", _vehicle];
    
    if(SC_extendedLogging) then 
    {
        _logDetail = format ["[OCCUPATION:Vehicle]:: Replacement Driver found (%1) for vehicle %2",_driver,_vehicle]; 
        [_logDetail] call SC_fnc_log;
    };

}
else
{
    _logDetail = format ["[OCCUPATION:Vehicle]:: No replacement Driver found for vehicle %1",_vehicle]; 
    [_logDetail] call SC_fnc_log;        
    _vehicle lock 0;			
    _vehicle setVehicleLock "UNLOCKED";
    _vehicle setVariable ["ExileIsLocked", 0, true];  
	[_vehicle]  call SC_fnc_vehicleDestroyed;	
};
