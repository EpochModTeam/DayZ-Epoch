private ["_valueIDCs","_object","_display","_weaponsMax","_magazinesMax","_backpacksMax","_weapons","_magazines","_backpacks","_freeSlots","_type"];

disableSerialization;

_countWeapons = {
	_return = 0;
	{ _return = _return + _x } count ((getWeaponCargo _object) select 1);
	_return
};

_countMagazines = {
	_return = 0;
	{ _return = _return + _x } count ((getMagazineCargo _object) select 1);
	_return
};

_countBackpacks = {
	_return = 0;
	{ _return = _return + _x } count ((getBackpackCargo _object) select 1);
	_return
};

_countFreeSlots = {
	_return = [(_weaponsMax - _weapons), (_magazinesMax - _magazines), (_backpacksMax - _backpacks)];
	_return
};

_getControlText = {
	_return = ctrlText (_display displayCtrl 156);
	_return
};

_setControlText = {
	for [{_i = 0}, {_i < (count _valueIDCs)}, {_i = _i + 1}] do {
		_control = _display displayCtrl (_valueIDCs select _i);
		_control ctrlSetText format ["%1", (_freeSlots select _i)];
	};
};

_titleIDC = 1001;
_imageIDCs = [9001,9003,9005];
_valueIDCs = [9002,9004,9006];

if (vehicle player != player) then {
	_object = vehicle player;
} else {
	_object = cursorTarget;
};

_isVehicle = _object isKindOf "AllVehicles";
_isMan = _object isKindOf "Man";
_isStorage = _object isKindOf "Land_A_tent";
_type=typeOf _object;
_isNewStorage = _type in DZE_isNewStorage;

_timeout = time + 2;
waitUntil { !(isNull (findDisplay 106)) or (_timeout < time) };

//diag_log format["object_monitorGear.sqf: _object: %1 _isStorage: %4 _isVehicle: %2 _isMan: %3 _display: %5", _object, _isVehicle, _isMan, _isStorage, findDisplay 106];

if (!(isNull (findDisplay 106))) then {
	_display = findDisplay 106;

	if ((_isVehicle or _isStorage or _isNewStorage) && !_isMan) then {
		_objectName = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
		_controlText = call _getControlText;

		if (_objectName == _controlText) then {
			_weaponsMax = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxWeapons");
			_magazinesMax = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxMagazines");
			_backpacksMax = getNumber (configFile >> "CfgVehicles" >> _type >> "transportMaxBackpacks");

			while {!(isNull (findDisplay 106))} do {
				if(_isVehicle&&((locked _object)&&(vehicle player==player)))exitWith{(findDisplay 106)closeDisplay 1;};
				_weapons = call _countWeapons;
				_magazines = call _countMagazines;
				_backpacks = call _countBackpacks;
				_freeSlots = call _countFreeSlots;

				call _setControlText;
				uiSleep 0.01;
			};
		} else {
			(_display displayCtrl _titleIDC) ctrlShow false;

			for [{_i = 0}, {_i < (count _valueIDCs)}, {_i = _i + 1}] do {
				(_display displayCtrl (_imageIDCs select _i)) ctrlShow false;
				(_display displayCtrl (_valueIDCs select _i)) ctrlShow false;
			};
		};
	} else {
		(_display displayCtrl _titleIDC) ctrlShow false;

		for [{_i = 0}, {_i < (count _valueIDCs)}, {_i = _i + 1}] do {
			(_display displayCtrl (_imageIDCs select _i)) ctrlShow false;
			(_display displayCtrl (_valueIDCs select _i)) ctrlShow false;
		};
		if (DZE_R3F_WEIGHT && {isNull _object}) then {
			while {!(isNull (findDisplay 106))} do {
				R3F_Weight = call R3F_WEIGHT_FNCT_GetWeight;
				_control = _display displayCtrl 156;
				_control ctrlSetText format[localize "STR_R3F_WEIGHT_InGearBox",R3F_Weight];
				uiSleep 1;
			};
		};
	};
};
