/**
 * ExileServer_world_spawnVehicles
 * edited by Warsheep(GER)
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_worldName","_worldSize","_middle","_quarter","_threeQuarter","_southwestPos","_southPos","_southeastPos","_westPos","_middlPos","_eastPos","_northwestPos","_northPos","_northeastPos","_groundVehicleAmount","_waterVehicleAmount","_airVehicleAmount","_vehicleAmount","_vehicleCount","_errorCount","_ground","_groundVehicleCount","_groundVehicleClassNames","_groundDebugMarkers","_groundDebugMarker","_groundSpawnRadiusRoad","_groundDamageChance","_groundMaximumDamage","_water","_waterVehicleCount","_waterVehicleClassNames","_waterDebugMarkers","_waterDebugMarker","_waterSpawnRadiusCoast","_waterDamageChance","_waterMaximumDamage","_air","_airVehicleCount","_airVehicleClassNames","_airDebugMarkers","_airDebugMarker","_airSpawnRadiusAirField","_airDamageChance","_airMaximumDamage","_mapPos","_spawnedPositions","_airportPositions"];

_debugLog                    = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "vehicleDebugLog");

_worldName                     = worldName;
_worldSize                    = worldSize;
_middle                        = worldSize / 2;
_quarter                    = worldSize / 4;
_threeQuarter                = _quarter * 3;

_southwestPos                = [_quarter,_quarter,0];
_southPos                    = [_middle,_quarter,0];
_southeastPos                = [_threeQuarter,_quarter,0];
_westPos                    = [_quarter,_middle,0];
_middlPos                    = [_middle,_middle,0];
_eastPos                    = [_threeQuarter,_middle,0];
_northwestPos                = [_quarter,_threeQuarter,0];
_northPos                    = [_middle,_threeQuarter,0];
_northeastPos                = [_threeQuarter,_threeQuarter,0];

_groundVehicleAmount            = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundVehicleAmount");
_waterVehicleAmount                = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "waterVehicleAmount");
_airVehicleAmount                = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "airVehicleAmount");
_vehicleAmount                    = _groundVehicleAmount + _waterVehicleAmount + _airVehicleAmount;
_vehicleCount                    = 0;
_errorCount                        = 0;

if(_vehicleAmount isEqualTo 0)exitWith{
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Spawning Dynamic Vehicles Disabled."] call ExileServer_util_log;
    };
};

if(_groundVehicleAmount isEqualTo 0) then {
    _ground                     = 0;
    if(_debugLog >= 1) then {                    
        format ["||WARSHEEP||Spawning Dynamic Ground Vehicles Disabled."] call ExileServer_util_log;
    };
}else{ 
    _ground                     = 1;
    _groundVehicleCount            = 0;
    _groundVehicleClassNames    = getArray (configFile >> "CfgSettings" >> "VehicleSpawn" >> "ground");
    _groundDebugMarkers            = ((getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundDebugMarkers")) isEqualTo 1);
    _groundSpawnRadiusRoad        = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundSpawnRadius");
    _groundDamageChance            = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundDamageChance");
    _groundMaximumDamage        = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "groundMaximumDamage");
};

if(_waterVehicleAmount isEqualTo 0) then {
    _water                         = 0;
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Spawning Dynamic Water Vehicles Disabled."] call ExileServer_util_log;
    };
}else{ 
    _water                         = 1;
    _waterVehicleCount            = 0;
    _waterVehicleClassNames        = getArray (configFile >> "CfgSettings" >> "VehicleSpawn" >> "water");
    _waterDebugMarkers            = ((getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "waterDebugMarkers")) isEqualTo 1);
    _waterSpawnRadiusCoast        = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "waterSpawnRadius");
    _waterDamageChance            = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "waterDamageChance");
    _waterMaximumDamage            = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "waterMaximumDamage");
};

if(_airVehicleAmount isEqualTo 0) then {
    _air                         = 0;
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Spawning Dynamic Air Vehicles Disabled."] call ExileServer_util_log;
    };
}else{ 
    _air                         = 1;
    _airVehicleCount            = 0;
    _airVehicleClassNames        = getArray (configFile >> "CfgSettings" >> "VehicleSpawn" >> "air");
    _airDebugMarkers            = ((getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "airDebugMarkers")) isEqualTo 1);
    _airSpawnRadiusAirField        = getNumber(configFile >> "CfgSettings" >> "VehicleSpawn" >> "airSpawnRadius");
    _airDamageChance            = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "airDamageChance");
    _airMaximumDamage            = getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "airMaximumDamage");
};

_mapPos                     = [_southwestPos,_middlPos,_southPos,_middlPos,_southeastPos,_middlPos,_westPos,_middlPos,_eastPos,_middlPos,_northwestPos,_middlPos,_northPos,_middlPos,_northeastPos,_middlPos];
_spawnedPositions             = [];
_airportPositions             = call ExileClient_util_world_getAllAirportPositions;

if(_debugLog >= 1) then {
    format ["||WARSHEEP||Spawning Dynamic Vehicles. Config loaded!"] call ExileServer_util_log;
};
while {_vehicleCount < _vehicleAmount} do {
    if (_ground isEqualTo 1) then {
        if (_groundVehicleCount < _groundVehicleAmount) then {
            _pos = selectRandom _mapPos;
            _vehiclePosition = [_pos, _middle] call ExileClient_util_world_findRoadPosition;
            _positionReal = [_vehiclePosition, 1, _groundSpawnRadiusRoad, 2, 0 , 0 , 0 , _spawnedPositions] call BIS_fnc_findSafePos;
            if(count _positionReal isEqualTo 3 ) then {
                _groundVehicleAmount = _groundVehicleAmount - 1;
                _vehicleAmount = _vehicleAmount - 1;
                _errorCount = _errorCount + 1;
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Error Position",_positionReal] call ExileServer_util_log;
                };
            }else{
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                _positionReal pushBack 0;
                _vehicleClassName = selectRandom _groundVehicleClassNames;
                _vehicle = [_vehicleClassName, _positionReal, random 360, true] call ExileServer_object_vehicle_createNonPersistentVehicle;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Spawned",_vehicleClassName] call ExileServer_util_log;
                };
                _hitpointsData = getAllHitPointsDamage _vehicle;
                if !(_hitpointsData isEqualTo []) then {
                    _hitpoints = _hitpointsData select 0;{
                        if ((random 100) < _groundDamageChance) then{
                            _vehicle setHitPointDamage [_x, random _groundMaximumDamage];
                        };
                    }forEach _hitpoints;
                };
                if (_groundDebugMarkers) then{
                    _groundDebugMarker = createMarker ["vehicleMarkerGround#"+str _groundVehicleCount, _positionReal];
                    _groundDebugMarker setMarkerColor "ColorGreen";
                    _groundDebugMarker setMarkerType "mil_dot_noShadow";
                };
                _groundVehicleCount = _groundVehicleCount + 1;
                _vehicleCount = _vehicleCount + 1;
            };
        }else{
            _ground = 0;
        };
    };
    
    if (_water isEqualTo 1) then {
        if (_waterVehicleCount < _waterVehicleAmount) then {
            _pos = selectRandom _mapPos;
            _vehiclePosition = [_pos, 1, _middle, 2, 1, 0, 1, _spawnedPositions] call BIS_fnc_findSafePos;
            _posSafe = _vehiclePosition call ExileClient_util_world_findCoastPosition;
            _positionReal = [_posSafe, 1, _waterSpawnRadiusCoast, 1, 2 , 0 , 0 , _spawnedPositions] call BIS_fnc_findSafePos;
            if(count _positionReal isEqualTo 3 ) then {
                _waterVehicleAmount = _waterVehicleAmount - 1;
                _vehicleAmount = _vehicleAmount - 1;
                _errorCount = _errorCount + 1;
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Error Position",_positionReal] call ExileServer_util_log;
                };
            }else{
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                _positionReal pushBack 0;
                _vehicleClassName = selectRandom _waterVehicleClassNames;
                _vehicle = [_vehicleClassName, _positionReal, random 360, true] call ExileServer_object_vehicle_createNonPersistentVehicle;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Spawned",_vehicleClassName] call ExileServer_util_log;
                };
                _hitpointsData = getAllHitPointsDamage _vehicle;
                if !(_hitpointsData isEqualTo []) then {
                    _hitpoints = _hitpointsData select 0;{
                        if ((random 100) < _waterDamageChance) then{
                            _vehicle setHitPointDamage [_x, random _waterMaximumDamage];
                        };
                    }forEach _hitpoints;
                };
                if (_waterDebugMarkers) then{
                    _waterDebugMarker = createMarker ["vehicleMarkerWater#"+str _waterVehicleCount, _positionReal];
                    _waterDebugMarker setMarkerColor "ColorBlue";
                    _waterDebugMarker setMarkerType "mil_dot_noShadow";
                };
                _waterVehicleCount = _waterVehicleCount + 1;
                _vehicleCount = _vehicleCount + 1;
            };
        }else{
            _water = 0;
        };
    };
    
    if (_air isEqualTo 1) then {
        if (_airVehicleCount < _airVehicleAmount) then {
            _pos = selectRandom _airportPositions;
            _vehiclePosition = [_pos, 750] call ExileClient_util_world_findRoadPosition;
            _positionReal = [_vehiclePosition, 1, _airSpawnRadiusAirField, 7, 0 , 0 , 0 , _spawnedPositions] call BIS_fnc_findSafePos;
            if(count _positionReal isEqualTo 3 ) then {
                _airVehicleAmount = _airVehicleAmount - 1;
                _vehicleAmount = _vehicleAmount - 1;
                _errorCount = _errorCount + 1;    
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Error Position",_positionReal] call ExileServer_util_log;
                };
            }else{
                _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
                _spawnedPositions pushBack _spawnControl;
                _positionReal pushBack 0;
                _vehicleClassName = selectRandom _airVehicleClassNames;
                _vehicle = [_vehicleClassName, _positionReal, random 360, true] call ExileServer_object_vehicle_createNonPersistentVehicle;
                if(_debugLog isEqualTo 1) then {
                    format ["||WARSHEEP||%1 Spawned",_vehicleClassName] call ExileServer_util_log;
                };
                _hitpointsData = getAllHitPointsDamage _vehicle;
                if !(_hitpointsData isEqualTo []) then {
                    _hitpoints = _hitpointsData select 0;{
                        if ((random 100) < _airDamageChance) then{
                            _vehicle setHitPointDamage [_x, random _airMaximumDamage];
                        };
                    }forEach _hitpoints;
                };
                if (_airDebugMarkers) then{
                    _airDebugMarker = createMarker ["vehicleMarkerAir#"+str _airVehicleCount, _positionReal];
                    _airDebugMarker setMarkerColor "ColorBlack";
                    _airDebugMarker setMarkerType "mil_dot_noShadow";
                };
                _airVehicleCount = _airVehicleCount + 1;
                _vehicleCount = _vehicleCount + 1;
            };
        }else{
            _air = 0;
        };
    };
};
if (_errorCount > 0)then {
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Dynamic Vehicles Error. Count : %1",_errorCount] call ExileServer_util_log;
    };
};
if (_groundVehicleAmount > 0) then {
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Dynamic Ground Vehicles Spawned. Count : %1/%2",_groundVehicleCount,_groundVehicleAmount] call ExileServer_util_log;
    };
};
if (_waterVehicleAmount > 0) then {
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Dynamic Water Vehicles Spawned. Count : %1/%2",_waterVehicleCount,_waterVehicleAmount] call ExileServer_util_log;
    };
};
if (_airVehicleAmount > 0) then {
    if(_debugLog >= 1) then {
        format ["||WARSHEEP||Dynamic Air Vehicles Spawned. Count : %1/%2",_airVehicleCount,_airVehicleAmount] call ExileServer_util_log;
    };
};
if(_debugLog >= 1) then {
        format ["||WARSHEEP||Dynamic Vehicles Spawned. Count : %1/%2",_vehicleCount,_vehicleAmount] call ExileServer_util_log;
};