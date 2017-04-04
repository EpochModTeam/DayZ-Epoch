private ["_unit","_ammo","_weapon","_projectile","_tree"];
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_projectile = 	_this select 6;

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
		
		if(_distance2d <= 5) then {

			// damage must be going down
			_damage = damage _tree;
			if (DZE_TEMP_treedmg < _damage) then {
				if (_damage < 0.99 && {(random 1) > 0.9}) then {
					PVDZ_objgather_Knockdown = [_tree,player]; // Ask server to setDamage on tree
					publicVariableServer "PVDZ_objgather_Knockdown";
				};
				_itemOut = if (_ammo == "Chainsaw_Swing_Ammo") then {"PartWoodLumber"} else {"PartWoodPile"}; // Log can be crafted to > 2x plank > 4x woodpile			
				[_itemOut,1,1] call fn_dropItem;

				[player,60,false,getPosATL player] spawn player_alertZombies;
			};
			DZE_TEMP_treedmg = _damage;
		};
	};
};
