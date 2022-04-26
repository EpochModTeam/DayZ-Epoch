local _vehicle = _this select 0;
local _clearAmmo = _this select 1;
local _addAmmo = _this select 2;
local _type = typeOf _vehicle;

local _skipAmmoClear = [];	//	Add vehicle classnames you do not want to clear the ammo
local _skipAmmoFill = [];	//	Add vehicle classnames you do not want to fill the ammo

if (_type in DZE_disableThermal) then {
	_vehicle disableTIEquipment true;
};

if (_clearAmmo && {!(_type in _skipAmmoClear)}) then {
	_vehicle call fn_clearTurrets;
};

if (_addAmmo && {!(_type in _skipAmmoFill)}) then {
	local _countMags = 2;	//	Number of how many magazines will be added to the vehicle
	[_vehicle,_countMags] call fn_fillTurrets;
};


//	Add/Remove extra weapons and ammo

/*

if (_type == "GNT_C185T") exitwith {
	_vehicle removeWeapon "FFARLauncher_12";
	_vehicle addWeapon "pook_M60_dual_DZ";
	_vehicle addMagazine "pook_1300Rnd_762x51_M60";
	_vehicle addMagazine "pook_1300Rnd_762x51_M60";
};

*/