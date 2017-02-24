/*
	To return array of keys only on the players toolbelt (as per original script):
	_result = call epoch_tempKeys;
	Returns array: [["11148"],["Black Key (2eb5)"],[],[]]

	To return array of keys on the players toolbelt and inside a (valid) backpack:
	_result = [true] call epoch_tempKeys;
	Returns array: [["11148"],["Black Key (2eb5)"],["1457"],["Green Key (9c30)"]]
*/

private ["_temp_keys","_temp_keys_names","_key_colors","_ownerKeyId","_ownerKeyName","_bpKeys","_bpKeyNames"];

_temp_keys = [];
_temp_keys_names = [];
_bpKeys = [];
_bpKeyNames = [];

_key_colors = ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"];

{
	if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in _key_colors) then {
		_ownerKeyId = getNumber(configFile >> "CfgWeapons" >> _x >> "keyid");
		_ownerKeyName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
		_temp_keys_names set [count _temp_keys_names,_ownerKeyName];
		_temp_keys set [count _temp_keys,str _ownerKeyId];
	};
} count (items player);

if !(isNil "_this") then {
	dayz_myBackpack = unitBackpack player;
	if !(isNull dayz_myBackpack) then {
		{
			if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in _key_colors) then {
				_ownerKeyId = getNumber(configFile >> "CfgWeapons" >> _x >> "keyid");
				_ownerKeyName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
				_bpKeyNames set [count _bpKeyNames,_ownerKeyName];
				_bpKeys set [count _bpKeys,str _ownerKeyId];
			};
		} count ((getWeaponCargo unitBackpack player) select 0);
	};
};

[_temp_keys,_temp_keys_names,_bpKeys,_bpKeyNames]