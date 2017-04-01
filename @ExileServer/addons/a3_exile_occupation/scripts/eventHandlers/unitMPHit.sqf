// Get the variables from the event handler
_unit 			= _this select 0;
_aggressor 	    = _this select 1;
_damage         = _this select 2;

// remove the eventhandler to stop it triggering multiple times simultaneously
_unit removeAllMPEventHandlers  "mphit";

if (side _aggressor == RESISTANCE) then 
{
    // Make victim and his group aggressive to players
    _initialGroup = group _unit;
    _group =  createGroup WEST;
    {
        _unit = _x;           
        //[_unit] joinSilent grpNull;
        [_unit] joinSilent _group;  
        _unit removeAllMPEventHandlers  "mphit";    
    }foreach units _initialGroup;
    
    _group reveal [_aggressor, 2.5]; 
    _group move (position _aggressor); 
};