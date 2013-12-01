/*
	DayZ Enhanced ChopWood
	Usage: spawn player_chopWood;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_objName","_finished","_proceed","_counter","_itemOut","_countOut","_tree","_distance2d","_distance3d","_trees","_findNearestTree","_finishedTime","_item"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_53") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

if((currentWeapon player) != "MeleeHatchet_DZE") exitWith {DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_54"), "PLAIN DOWN"]; };

// allowed trees list move this later
_trees = DZE_trees;

//_item = _this;
call gear_ui_init;

_findNearestTree = [];
{
	if("" == typeOf _x) then {
			
		if (alive _x) then {
				
			_objName = _x call DZE_getModelName;

			// Exit since we found a tree
			if (_objName in _trees) exitWith { 
				_findNearestTree set [(count _findNearestTree),_x];
			};
		};
	};

} foreach nearestObjects [getPos player, [], 20];

//diag_log format["DEBUG TREES: %1", _findNearestTree];

if (count(_findNearestTree) >= 1) then {

	closeDialog 1;
		
	_tree = _findNearestTree select 0;

	// get 2d distance
	_distance2d = [player, _tree] call BIS_fnc_distance2D;
	_distance3d = player distance _tree;

	if(_distance2d <= 5) then {

		_countOut = ceil(_distance3d-_distance2d);

		//diag_log format["DEBUG TREE DISTANCE: %1 - %2 = %3", _distance3d,_distance2d,(_distance3d-_distance2d)];
	
		// Start chop tree loop
		_counter = 0;
		_isOk = true;
		_proceed = false;
		while {_isOk} do {

			closeDialog 1;

			// player playActionNow "Medic";
			player playActionNow "GestureSwing";
			[player,"chopwood",0,false] call dayz_zombieSpeak;
			[player,20,true,(getPosATL player)] spawn player_alertZombies;

			r_interrupt = false;
			r_doLoop = true;
			
			_finished = false;
			_finishedTime = diag_tickTime+3;

			while {r_doLoop} do {
				if (diag_tickTime >= _finishedTime) then {
					r_doLoop = false;
					_finished = true;
				};
				if (r_interrupt) then {
					r_doLoop = false;
				};
				sleep 0.1;
			};

			if(!_finished) exitWith {
				_isOk = false;
				_proceed = false;
			};

			if(_finished) then {
				_counter = _counter + 1;
			};

			cutText [format[(localize "str_epoch_player_147"), _counter,  _countOut], "PLAIN DOWN"];

			if(_counter == _countOut) exitWith {
				_isOk = false;
				_proceed = true;
				sleep 1;
			};
		};

		if (_proceed) then {

			_itemOut = "PartWoodPile";
			
			_item = createVehicle ["WeaponHolder", getPosATL player, [], 1, "CAN_COLLIDE"];
			_item addMagazineCargoGlobal [_itemOut,_countOut];

			player reveal _item;
			
			// chop down tree
			if("" == typeOf _tree) then {
				_tree setDamage 1;
			};
			//diag_log format["DEBUG TREE DAMAGE: %1", _tree];

			cutText [format[(localize "str_epoch_player_148"), _countOut], "PLAIN DOWN"];

			player action ["Gear", _item];

		} else {
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};
			cutText [(localize "str_epoch_player_55"), "PLAIN DOWN"];
		};

	} else {
		cutText [localize "str_player_23", "PLAIN DOWN"];
	};

} else {
	cutText [localize "str_player_23", "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
