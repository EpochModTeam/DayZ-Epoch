/*
	Call this function to select primary or pistol (if no primary)
	when the player's currently selected weapon is a throwable.
*/

private ["_main","_muzzle"];

if (currentWeapon player == "Throw") then {
	_main = primaryWeapon player;
	if (_main == "") then {
		{
			if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 2) then {_main = _x;};
		} count (weapons player);
	};
	
	_muzzle = getArray (configFile >> "CfgWeapons" >> _main >> "muzzles");
	if (count _muzzle > 1) then {
		player selectWeapon (_muzzle select 0);
	} else {
		player selectWeapon _main;
	};
};