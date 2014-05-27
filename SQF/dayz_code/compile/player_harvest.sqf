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
				
				_objName = _x call DZE_getModelName;

				// Exit since we found a tree
				if (_objName in DZE_trees) exitWith { 
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
						_tree setDamage 0.99;
					};
				};

				//diag_log ("DAMAGE: " + str(damage _tree)); 

				if (round(random 1) > 0.5) then {

					_countOut = 1;
					_itemOut = "PartWoodPile";

					if(_ammo isKindOf "Chainsaw_Swing_Ammo") then {
						_itemOut = "PartWoodLumber";
					};

					_nearByPile= nearestObjects [getPosATL player, ["WeaponHolder"],2];
					if (count _nearByPile == 0) then { 
						_item = createVehicle ["WeaponHolder", getPosATL player, [], 1, "CAN_COLLIDE"];
						_item addMagazineCargoGlobal [_itemOut,_countOut];
						player reveal _item;
					} else {
						_item = _nearByPile select 0;
						_item addMagazineCargoGlobal [_itemOut,_countOut];
					};

					_distance = 60;
					[player,_distance,false,getPosATL player] spawn player_alertZombies;
				};
			};
			DZE_TEMP_treedmg = _damage;
		};
	};
};