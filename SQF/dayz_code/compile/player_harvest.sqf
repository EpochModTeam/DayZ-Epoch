private ["_unit","_ammo","_distance","_weapon","_projectile","_endPos","_dir","_doWait","_vel"];
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_projectile = 	_this select 6;

if (_ammo in ["Hatchet_Swing_Ammo","Chainsaw_Swing_Ammo"]) then {	
	_findNearestTree = [];
	{
		if (("" == typeOf _x) && {alive _x}) then {			
			_objName = _x call fn_getModelName;
			// Exit since we found a tree
			if (_objName in dayz_trees) exitWith { _findNearestTree set [count _findNearestTree,_x]; };
		};
	} count nearestObjects [getPosATL player, [], 20];

	//diag_log ("POSITION: " + str(_endPos));

	if (count _findNearestTree > 0) then {

		_tree = _findNearestTree select 0;

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

				_distance = 60;
				[player,_distance,false,getPosATL player] spawn player_alertZombies;
			};
			DZE_TEMP_treedmg = _damage;
		};
	};
};
