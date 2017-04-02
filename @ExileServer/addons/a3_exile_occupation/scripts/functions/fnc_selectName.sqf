// Select names for AI based on the side
_side	    = _this select 0;
_firstName  = "Tyler";
_lastName   = "Durden";

if(SC_useRealNames) then
{
    switch (_side) do 
    {
        case "survivor":
        {
            _firstName  = SC_SurvivorFirstNames call BIS_fnc_selectRandom; 
            _lastName   = SC_SurvivorLastNames call BIS_fnc_selectRandom;       
        };
        case "bandit":
        {
            _firstName  = SC_BanditFirstNames call BIS_fnc_selectRandom; 
            _lastName   = SC_BanditLastNames call BIS_fnc_selectRandom;              
        };
    };
    _name = format["%1 %2",_firstName,_lastName];
    _name    
};