/**
 * ExileServer_world_spawnSpawnZoneVehicles
 * editet by warsheep(GER)
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_debugMarker","_debugMarkers","_vehicleCount","_spawnRadius","_vehiclesToSpawn","_markerName","_markerCenterPosition","_numberOfVehiclesToSpawn","_vehicleClassName","_i","_vehiclePosition","_vehicleDirection"];
"Creating spawn zone vehicles..." call ExileServer_util_log;
_debugMarkers = ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "vehiclesDebugMarkers")) isEqualTo 1);
_vehicleCount = 0;
_spawnRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
_vehiclesToSpawn = getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneVehicles");
{
    _markerName = _x;
    if (getMarkerType _markerName == "ExileSpawnZone") then
    {
        _markerCenterPosition = getMarkerPos _markerName;
        {
            _numberOfVehiclesToSpawn = _x select 0;
            _vehicleClassName = _x select 1;
            for "_i" from 1 to _numberOfVehiclesToSpawn do
            {
                _vehiclePosition = [_markerCenterPosition, _spawnRadius] call ExileClient_util_world_findRoadPosition;
                if(_vehiclePosition isEqualTo [])exitWith{};
                _vehicleDirection = (random 360);
                [_vehicleClassName, _vehiclePosition, _vehicleDirection, true] call ExileServer_object_vehicle_createNonPersistentVehicle;
            };
            if (_debugMarkers) then
            {
                _debugMarker = createMarker ["vehicleMarkerSpawn#"+str _vehicleCount, _vehiclePosition];
                _debugMarker setMarkerColor "ColorYellow";
                _debugMarker setMarkerType "mil_dot_noShadow";
            };
            _vehicleCount = _vehicleCount + 1;
        }
        forEach _vehiclesToSpawn;
    };
}
forEach allMapMarkers;

format ["Dynamic Spawn Zone Vehicle spawned. Count : %1",_vehicleCount] call ExileServer_util_log;
true