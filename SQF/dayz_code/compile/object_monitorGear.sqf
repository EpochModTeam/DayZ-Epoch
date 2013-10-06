private["_countMagazines","_countWeapons","_countBackpacks","_countFreeSlots","_getControlText","_setControlText","_object","_objectName","_controlText","_magazinesMax","_weaponsMax","_backpacksMax","_distance","_isVehicle","_isMan","_isStorage","_isOK","_magazines","_weapons","_backpacks","_freeSlots","_timeout"];

_countWeapons = {
	private["_weapons","_return"];	
	_weapons = [];
	_return = 0;
	
	_weapons = (getWeaponCargo _object) select 1;
	{ _return = _return + _x } foreach _weapons;
	_return;
};

_countMagazines = {
	private["_magazines","_return"];
	_magazines = [];
	_return = 0;
	
	_magazines = (getMagazineCargo _object) select 1;
	{ _return = _return + _x } foreach _magazines;
	_return;
};

_countBackpacks = {
	private["_backpacks","_return"];
	_backpacks = [];
	_return = 0;
	
	_backpacks = (getBackpackCargo _object) select 1;
	{ _return = _return + _x } foreach _backpacks;
	_return;
};

_countFreeSlots = {
	private["_return"];
	_return = [(_weaponsMax - _weapons), (_magazinesMax - _magazines), (_backpacksMax - _backpacks)];
	_return;
};

_getControlText = {
	private["_control","_return"];
	disableSerialization;
	_control = (findDisplay 106) displayCtrl 156;
	_return = ctrlText _control;
	_return;
};

_setControlText = {
	private["_control"];
	disableSerialization;
	_control = (findDisplay 106) displayCtrl 156;
	_control ctrlSetText format["%1 (%2/%3/%4)", _objectName, _freeSlots select 0, _freeSlots select 1, _freeSlots select 2];
};

if (vehicle player != player) then {
	_object = vehicle player;
} else {
	_object = cursorTarget;
};

_isVehicle = _object isKindOf "AllVehicles";
_isMan = _object isKindOf "Man";
_isStorage = _object isKindOf "Land_A_tent";
_isnewstorage = (typeOf _object) in DZE_isNewStorage;

_timeout = time + 2;
waitUntil { !(isNull (findDisplay 106)) or (_timeout < time) };

//diag_log format["object_monitorGear.sqf: _object: %1 _isStorage: %4 _isVehicle: %2 _isMan: %3 _display: %5", _object, _isVehicle, _isMan, _isStorage, findDisplay 106];

if ((_isVehicle or _isStorage or _isnewstorage) and (!_isMan) and (!(isNull (findDisplay 106)))) then {
	_objectName = getText (configFile >> "CfgVehicles" >> (typeof _object) >> "displayName");
	_controlText = [] call _getControlText;
	
	if (_objectName == _controlText) then {
		_weaponsMax = getNumber (configFile >> "CfgVehicles" >> (typeof _object) >> "transportMaxWeapons");
		_magazinesMax = getNumber (configFile >> "CfgVehicles" >> (typeof _object) >> "transportMaxMagazines");
		_backpacksMax = getNumber (configFile >> "CfgVehicles" >> (typeof _object) >> "transportMaxBackpacks");
		
		while {!(isNull (findDisplay 106))} do {
			_weapons = [] call _countWeapons;
			_magazines = [] call _countMagazines;
			_backpacks = [] call _countBackpacks;
			_freeSlots = [] call _countFreeSlots;

			[] call _setControlText;
			sleep 0.01;
		};
	};
};
