// Get the variables from the event handler
_unit 			= _this select 0;
_weapon 	    = _this select 1;
_ammoType       = _this select 4; 

_count = _unit ammo _weapon;


if(_count < 1) then
{
    diag_log format ["[OCCUPATION:unitFired]:: unit: %1 out of ammo for weapon %2",_unit,_weapon];

    _weaponHolder = nearestObjects [_unit, ["WeaponHolder"], 75];
    _weapons = weapons _unit;
    _magazinesCompatible = [];
    
    {
        _weaponCurrent = _x;
        _magazinesCompatible = _magazinesCompatible + getArray (configFile >> "CfgWeapons" >> _weaponCurrent >> "magazines");        
    }forEach _weapons;

    _magazinesToAdd = [];
    for "_i" from 0 to (count _weaponHolder)-1 do 
    {
        _item = _weaponHolder select _i;
        _content = getMagazineCargo _item;
        {
            _ammo = _x select 0;
            if(_ammo in _magazinesCompatible) then
            {
                _magazinesToAdd = _magazinesToAdd + [_ammo];
            };
            
        }forEach _content;
        
        _unit doMove (position _item);
        {
            _unit action ["TakeMagazine", _item, _x];
            diag_log format ["[OCCUPATION:unitFired]:: unit: %1 took ammo %2",_unit,_x];	
        }forEach _magazinesToAdd;
        
        {
            diag_log format ["[processReporter] %1 @ %2",_x,time];
        } forEach diag_activeSQFScripts;

        {
            diag_log format ["[processReporter] %1 @ %2",_x,time];
        } forEach diag_activeSQSScripts;
    };    
};
