private["_timeMultiplier"];
if (daytime > SC_fastNightsStarts || daytime < SC_fastNightsEnds) then 
{ 
    _timeMultiplier = SC_fastNightsMultiplierNight; 
} 
else  
{
    _timeMultiplier = SC_fastNightsMultiplierDay;
};

if(timeMultiplier != _timeMultiplier) then { setTimeMultiplier _timeMultiplier; };

_hour = floor daytime;
_minute = floor ((daytime - _hour) * 60);
_time24 = text format ["%1:%2",_hour,_minute];

_logDetail = format ["[OCCUPATION:FastNights]::  Current in game time is %1 multipler is %2",_time24,_timeMultiplier];
[_logDetail] call SC_fnc_log;