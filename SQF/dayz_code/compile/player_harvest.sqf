private ["_ammo","_tree","_distance2d","_damage","_itemOut"];

_ammo = _this select 4;

if (_ammo in ["Hatchet_Swing_Ammo","Chainsaw_Swing_Ammo"]) then {
	_tree = objNull;
	{
		if (typeOf _x in dayz_treeTypes && {alive _x} && {(_x call fn_getModelName) in dayz_trees}) exitWith {
			// Exit since we found a tree
			_tree = _x;
		};
	} count nearestObjects [getPosATL player, [], 20];

	if (!isNull _tree) then {
		// get 2d distance
		_distance2d = [player, _tree] call BIS_fnc_distance2D;

		if (_distance2d <= 5) then {
			// damage must be going down
			_damage = damage _tree;
			if (DZE_TEMP_treedmg < _damage) then {
				if (isNil "DZE_WoodCounter") then {
					DZE_WoodCounter = 0;
				};
				DZE_WoodCounter = DZE_WoodCounter + 1;
				if (_damage < 0.99 && {(random 1) > 0.9} && {DZE_WoodCounter > 15}) then {
					if (typeOf _tree == "") then {
						// Ask server to setDamage on tree and sync for JIP
						PVDZ_objgather_Knockdown = [_tree,player];
						publicVariableServer "PVDZ_objgather_Knockdown";
					} else {
						deleteVehicle _tree;
					};
					DZE_TEMP_treedmg = 1;
					DZE_WoodCounter = nil;
				};
				_itemOut = [["PartWoodPile","PartWoodPile","ItemLog"] call BIS_fnc_selectRandom,"PartWoodLumber"] select (_ammo == "Chainsaw_Swing_Ammo");
				[_itemOut,1,1] call fn_dropItem;

				[player,60,false,getPosATL player] spawn player_alertZombies;
			};
			DZE_TEMP_treedmg = _damage;
		};
	};
};
