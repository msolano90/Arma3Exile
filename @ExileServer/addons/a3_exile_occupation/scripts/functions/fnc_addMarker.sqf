private["_newUniform","_newVest","_newHeadgear","_arrowClass"];

_side	= _this select 0;
_unit	= _this select 1;

_unit removeAllMPEventHandlers  "mphit";


switch (_side) do 
{
    case "survivor":
    {
        _arrowClass = "Sign_Arrow_Green_F"; 
        _unit addMPEventHandler ["mphit", "_this call SC_fnc_unitMPHit;"];        
    };
    case "bandit":
    {
        _arrowClass = "Sign_Arrow_F";      
    };    
};

if((vehicle _unit != _unit) && SC_debug) then
{
    _tag = createVehicle [_arrowClass, position _unit, [], 0, "CAN_COLLIDE"];
    _tag attachTo [_unit,[0,0,0.6],"Head"];        
};

_unit addMPEventHandler ["mpkilled", "_this call SC_fnc_unitMPKilled;"];
//_unit addEventHandler ["Fired", "_this call SC_fnc_unitFired;"];