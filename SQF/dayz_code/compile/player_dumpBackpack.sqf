private ["_weapons","_magazines","_weaponscnt","_magazinescnt","_backpack"];
_backpack = nearestObject [player, "Bag_Base_EP1"];
if (!(isNull _backpack) and local _backpack) then {
	_weapons = 		getWeaponCargo _backpack;
	_magazines = 	getMagazineCargo _backpack;
	_weaponscnt = count (_weapons select 0);
	_magazinescnt = count (_magazines select 0);
	if((_magazinescnt > 0) or (_weaponscnt > 0)) then {
		/* PVS/PVC - Skaronator */
		_pos = getPosATL player;
		_inRange = _pos nearEntities ["CAManBase",300];
		{
			// run only on other players 
			if(isPlayer _x and _x != player) then {
				PVDZE_send = [_x,"HideObj",[_backpack]];
				publicVariableServer "PVDZE_send";
			};
		} forEach _inRange;
	};
};