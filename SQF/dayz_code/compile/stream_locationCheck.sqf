//private ["_location","_distCfg","_configClass","_distAct","_rubbish","_config","_locHdr","_w8","_ahead","_forEachIndex"];
_w8 = _this select 0;
_rubbish = dayz_Trash == 1;
{
	_location = _x select 0;
	_distCfg = (_x select 2);
	_configClass = _x select 1;
	_distAct = player distance _location;
	_ahead = (speed player) / 3.6 * 6;

	if (!(_forEachIndex in dayz_locationsActive)) then {
		if ((_distAct < _distCfg + dayz_spawnArea + _ahead) and _rubbish) then {
			dayz_locationsActive set [count dayz_locationsActive,_forEachIndex];
			_config = configFile >> "CfgTownGeneratorChernarus" >> _configClass;
			_locHdr = configName _config;
			//if (typeName _locHdr != "STRING") then { _locHdr = str _location; };
			diag_log format ["%1: creating %2 objects at '%3'", __FILE__, count _config, _locHdr];
			[_config, _w8] call stream_locationFill; // create wrecks & rubbish as local objects
		
		};
	} else {
		if (_distAct > _distCfg + dayz_canDelete + _ahead) then {
			_config = configFile >> "CfgTownGeneratorChernarus" >> _configClass;
			_locHdr = configName _config;
			//if (typeName _locHdr != "STRING") then { _locHdr = str _location; };
			diag_log format ["%1: removing %2 objects from '%3'", __FILE__, count _config, _locHdr];
			[_config, _w8] call stream_locationDel; // delete wrecks & rubbish
			dayz_locationsActive = dayz_locationsActive - [_forEachIndex];
		};
		
	};
} forEach dayz_Locations;

/*
_location = 0;
_distCfg = 0;
_configClass = 0;
_distAct = 0;
{
	_location = _x select 0;
	_distCfg = (_x select 2);
	_configClass = _x select 1;
	_distAct = player distance _location;

	if (!(_forEachIndex in dayz_gridsActive)) then {
		if (_distAct < _distCfg) then {
			dayz_gridsActive set [count dayz_gridsActive,_forEachIndex];
			
			PVDZ_gridsActive = [_forEachIndex,_location];
			publicVariableServer "PVDZ_gridsActive";
			
			systemChat (str(_configClass));
		};
	} else {
		if (_distAct > _distCfg) then {
			dayz_gridsActive = dayz_gridsActive - [_forEachIndex];
			
			PVDZ_gridsRemove = [_forEachIndex,_location];
			publicVariableServer "PVDZ_gridsRemove";
			
			diag_log("Out of Range: "+str(_forEachIndex));
		};
	};
} forEach dayz_GridSystem;
*/
