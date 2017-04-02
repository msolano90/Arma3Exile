// Triggered if a player gets off the public transport

_transport	= _this select 0;
_unit	    = _this select 2;

_driver = driver _transport;
//_driver vehiclechat SC_occupyTransportGetOut; 

if(_transport isKindOf "LandVehicle") then
{
    _transport setFuel 0;
    _transportDriver = driver _transport;
    _transportDriver disableAI "MOVE";    
};