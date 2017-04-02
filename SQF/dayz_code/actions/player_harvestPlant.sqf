/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_started","_finished","_animState","_isMedic","_proceed","_itemOut","_countOut","_tree","_trees","_findNearestTree","_index","_invResult","_treesOutput","_text","_obj"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_72" call dayz_rollingMessages;};
dayz_actionInProgress = true;

// allowed trees list move this later
_trees = ["pumpkin.p3d","p_helianthus.p3d","p_fiberplant_ep1.p3d"];
_treesOutput = ["FoodPumpkin","FoodSunFlowerSeed","ItemKiloHemp"];

//_item = _this;
call gear_ui_init;

_countOut = 0;

_findNearestTree = [];
{
	_obj=_x;
	if (((typeOf _obj) in ["fiberplant",""]) && (alive _obj)) then {
		_objName = _obj call fn_getModelName;			
		{
			if ([_x,_objName] call fnc_inString) exitWith {
				_findNearestTree set [(count _findNearestTree),_obj];
				_itemOut = _treesOutput select _forEachIndex;
				_countOut = 1;
			};
		}forEach _trees;
	};
} count nearestObjects [([player] call FNC_getPos), [], 10];

//diag_log format["DEBUG TREES: %1", _findNearestTree];

if (count(_findNearestTree) >= 1) then {
		
	_tree = _findNearestTree select 0;
	
	// Start chop tree loop
	_isOk = true;
	_proceed = false;
	while {_isOk} do {
		player playActionNow "Medic";
		[player,20,true,(getPosATL player)] spawn player_alertZombies;
	
		r_interrupt = false;
		_animState = animationState player;
		r_doLoop = true;
		_started = false;
		_finished = false;

		while {r_doLoop} do {
			_animState = animationState player;
			_isMedic = ["medic",_animState] call fnc_inString;
			if (_isMedic) then {
				_started = true;
			};
			if (_started && !_isMedic) then {
				r_doLoop = false;
				_finished = true;
				[player,"chopwood",0,false] call dayz_zombieSpeak;
			};
			if (r_interrupt) then {
				r_doLoop = false;
			};
		
			uiSleep 0.1;
		
		};

		if(!_finished) exitWith {
			_isOk = false;
			_proceed = false;
		};

		if(_finished) exitWith {
			_isOk = false;
			_proceed = true;
		};
	};

	if (_proceed) then {
		//fix many players collect 1 plant, and have many items
		if (({isPlayer _x && _x != player} count (_tree nearEntities ['CAManBase',10])) > 0 ) exitWith {
			localize "str_pickup_limit_5" call dayz_rollingMessages;
			dayz_actionInProgress = false;
		};
		
		//Remove melee magazines (BIS_fnc_invAdd fix)
		false call dz_fn_meleeMagazines;
		["Working",0,[3,2,4,0]] call dayz_NutritionSystem;
		_invResult = false;
		_i = 0;
		for "_x" from 1 to _countOut do {
			_invResult = [player,_itemOut] call BIS_fnc_invAdd;
			if(_invResult) then {
				_i = _i + 1;
			};
		};
		true call dz_fn_meleeMagazines;

		_text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");
		
		if(_i != 0) then {
			// chop down tree
			switch (typeOf _tree) do {
				case "" : {_tree setDamage 1;};
				case "fiberplant" : {deleteVehicle _tree;};
			};
			//diag_log format["DEBUG TREE DAMAGE: %1", _tree];
		
			format[localize "str_epoch_player_154",_i,_text] call dayz_rollingMessages;
		} else {
			format[localize "str_epoch_player_143",_i,_text] call dayz_rollingMessages;
		};
	} else {
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		localize "str_epoch_player_73" call dayz_rollingMessages;
	};
} else {
	localize "str_epoch_player_74" call dayz_rollingMessages;
};
dayz_actionInProgress = false;
