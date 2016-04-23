private ["_temp_keys","_temp_keys_names","_key_colors","_ownerKeyId","_ownerKeyName"];
_temp_keys = [];
_temp_keys_names = [];
// find available keys
_key_colors = ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"];
{
	if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in _key_colors) then {
		_ownerKeyId = getNumber(configFile >> "CfgWeapons" >> _x >> "keyid");
		_ownerKeyName = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
		_temp_keys_names set [_ownerKeyId,_ownerKeyName];
		_temp_keys set [count _temp_keys,str(_ownerKeyId)];
	};
} count (items player);
[_temp_keys,_temp_keys_names]