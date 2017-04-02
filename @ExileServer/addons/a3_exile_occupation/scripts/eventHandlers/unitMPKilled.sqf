// Get the variables from the event handler
_unit 			= _this select 0;
_killer 	    = _this select 1;

// remove all eventhandlers from the dead unit
_unit removeAllMPEventHandlers  "mphit";
_unit removeAllEventHandlers  "fired";
[_unit] join grpNull;

if(SC_debug) then
{
    { deleteVehicle _x; } forEach attachedObjects _unit;
};
