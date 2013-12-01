private ["_weapons","_magazines","_weaponscnt","_magazinescnt","_backpack"];
_backpack = nearestObject [player, "Bag_Base_EP1"];
if (!(isNull _backpack) and local _backpack) then {
	_weapons = 		getWeaponCargo _backpack;
	_magazines = 	getMagazineCargo _backpack;
	_weaponscnt = count (_weapons select 0);
	_magazinescnt = count (_magazines select 0);
	if((_magazinescnt > 0) or (_weaponscnt > 0)) then {
		// hide backpack from everyone else
		PVDZE_obj_Hide = _backpack;
		publicVariable "PVDZE_obj_Hide";
	};
};