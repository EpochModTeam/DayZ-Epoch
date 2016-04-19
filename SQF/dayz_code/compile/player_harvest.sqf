private ["_unit","_ammo","_distance","_weapon","_projectile","_endPos","_dir","_doWait","_vel"];
_unit = 		_this select 0;
_weapon = 		_this select 1;
_ammo = 		_this select 4;
_projectile = 	_this select 6;

if (_ammo isKindOf "Hatchet_Swing_Ammo" || _ammo isKindOf "Chainsaw_Swing_Ammo") then {
	
	_findNearestTree = [];
	{
		if("" == typeOf _x) then {
			
			if (alive _x) then {
				
				_objName = _x call fn_getModelName;

				// Exit since we found a tree
				if (_objName in dayz_trees) exitWith { 
					_findNearestTree set [(count _findNearestTree),_x];
				};
			};
		};
	} count nearestObjects [getPosATL player, [], 20];

	//diag_log ("POSITION: " + str(_endPos));

	if (count(_findNearestTree) >= 1) then {

		_tree = _findNearestTree select 0;

		// get 2d distance
		_distance2d = [player, _tree] call BIS_fnc_distance2D;
		
		if(_distance2d <= 5) then {

			// damage must be going down
			_damage = damage _tree;
			if (DZE_TEMP_treedmg < _damage) then {

				if (_damage < 0.99) then {
					if("" == typeOf _tree) then {
						PVDZ_objgather_Knockdown = [_tree,player]; // Ask server to setDamage on tree
						publicVariableServer "PVDZ_objgather_Knockdown";
					};
				};

				//diag_log ("DAMAGE: " + str(damage _tree)); 

				_itemOut = if (_ammo isKindOf "Chainsaw_Swing_Ammo") then {"PartWoodLumber"} else {"ItemLog"}; // Log can be crafted to > 2x plank > 4x woodpile			
				_itemOut call fn_dropItem;

				_distance = 60;
				[player,_distance,false,getPosATL player] spawn player_alertZombies;
				// Working-Factor for chopping wood.
				["Working",0,[100,15,10,0]] call dayz_NutritionSystem;
			};
			DZE_TEMP_treedmg = _damage;
		};
	};
};