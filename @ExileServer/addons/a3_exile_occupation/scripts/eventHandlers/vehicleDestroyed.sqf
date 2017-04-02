_vehicle = _this select 0;
_vehicle setVariable ["SC_vehicleSpawnLocation", nil,true];
if((damage _vehicle) < 1) then
{
	_vehicle removeAllMPEventHandlers  "mphit";
};

SC_liveVehiclesArray 	= [];
SC_liveHelisArray		= [];
SC_liveBoatsArray		= [];

{
	_vehicle		= _x;
	_vehLocation 	= _x getVariable "SC_vehicleSpawnLocation";
	_transport 		= _x getVariable "SC_transport";

	if(!isNil "_vehLocation") then
	{
		if(_vehicle isKindOf "LandVehicle") then
		{		
			SC_liveVehiclesArray pushBack _vehicle; 
			SC_liveVehicles = count(SC_liveVehiclesArray);		
		};

		if(_vehicle isKindOf "Air" && isNil "_transport") then
		{   
			SC_liveHelisArray pushBack _vehicle; 
			SC_liveHelis = count(SC_liveHelisArray);
		};

		if(_vehicle isKindOf "Ship") then
		{   
			SC_liveBoatsArray pushBack _vehicle;
			SC_liveBoatss = count(SC_liveBoatsArray);
		};
	};
}forEach vehicles;