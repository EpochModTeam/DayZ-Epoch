server_queryVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\garage\server_queryVehicle.sqf";
server_spawnVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\garage\server_spawnVehicle.sqf";
server_storeVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\garage\server_storeVehicle.sqf";
server_maintainGarage = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\garage\server_maintainVehicles.sqf";

"PVDZE_queryVehicle" addPublicVariableEventHandler {(_this select 1) spawn server_queryVehicle};
"PVDZE_spawnVehicle" addPublicVariableEventHandler {(_this select 1) spawn server_spawnVehicle};
"PVDZE_storeVehicle" addPublicVariableEventHandler {(_this select 1) spawn server_storeVehicle};
"PVDZE_maintainGarage" addPublicVariableEventHandler {(_this select 1) spawn server_maintainGarage};

// Thanks to icomrade/DayZ Epoch for this code: https://github.com/EpochModTeam/DayZ-Epoch/commit/8035df0ba0cd928b84085e288c5cb88260870a3e#diff-ad0636fc2328a27bd80bad9f46126307
VG_RandomizeMyKey = {
	_randomInput = toArray "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	_return = [];
	for "_i" from 0 to (_this) do {
		_return set [count _return, (_randomInput call BIS_fnc_selectRandom)];
	};
	_return;
};
vg_serverKey = toString (8 call VG_RandomizeMyKey);
vg_alreadySpawned = [];

VG_ClearTurrets = {
	//By denvdmj (probably, I found it on the biki)
	private ["_weaponArray","_findRecurse","_class","_obj","_turret","_mags"];
	_obj = _this;

	_weaponArray = [];
	_weaponArray set [count _weaponArray,[-1]];

	_findRecurse = {
		private ["_root", "_class", "_path", "_currentPath", "_thisThis"];
		_root = (_this select 0);
		_path = +(_this select 1);
		_thisThis = _this select 2;
		for "_i" from 0 to count _root -1 do {
		   _class = _root select _i;
		   if (isClass _class) then {
			  _currentPath = _path + [_i];
			  {_weaponArray set [count _weaponArray, _currentPath];} count getArray (_class >> "weapons");
			  _class = _class >> "turrets";
			  if (isClass _class) then {[_class, _currentPath, _thisThis] call _findRecurse;};
		   };
		};
	};

	[configFile >> "CfgVehicles" >> typeOf (_obj) >> "turrets", [], _this] call _findRecurse;

	{
		_turret = _x;
		_mags = _obj magazinesTurret _turret;
		{_obj removeMagazinesTurret[_x,_turret];} count _mags;
	} forEach _weaponArray;
};
