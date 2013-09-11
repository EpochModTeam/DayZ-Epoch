/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_objInfo","_lenInfo","_started","_finished","_animState","_isMedic","_proceed","_counter","_itemOut","_countOut","_tree","_distance2d","_distance3d","_trees","_findNearestTree"];

if(TradeInprogress) exitWith { cutText ["\n\nHarvest already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// allowed trees list move this later
_trees = ["pumpkin.p3d","p_helianthus.p3d","p_fiberplant_ep1.p3d"];
_treesOutput = ["FoodPumpkin","FoodSunFlowerSeed","ItemKiloHemp"];

//_item = _this;
call gear_ui_init;

_countOut = 0;

_findNearestTree = [];
{
	if("" == typeOf _x) then {
			
		if (alive _x) then {
				
			_objName = _x call DZE_getModelName;

			// Exit since we found a tree
			if (_objName in _trees) exitWith { 
				_findNearestTree set [(count _findNearestTree),_x];

				_index = _trees find _objName;

				_itemOut = _treesOutput select _index;

				_countOut = 1; 

			};
		};
	};

} foreach nearestObjects [getPos player, [], 10];

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
			if (_started and !_isMedic) then {
				r_doLoop = false;
				_finished = true;
				[player,"chopwood",0,false] call dayz_zombieSpeak;
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

		if(_finished) exitWith {
			_isOk = false;
			_proceed = true;
		};
	};

	if (_proceed) then {

		for "_x" from 1 to _countOut do {
			player addMagazine _itemOut;
		};
			
		// chop down tree
		if("" == typeOf _tree) then {
			_tree setDamage 1;
		};
		//diag_log format["DEBUG TREE DAMAGE: %1", _tree];

		cutText [format["\n\n%1 of %2 has been successfully added to your inventory.", _countOut,_itemOut], "PLAIN DOWN"];

	} else {
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText ["\n\nCanceled Harvesting.", "PLAIN DOWN"];
	};

	

} else {
	cutText ["\n\nYou must be close to a plant to harvest.", "PLAIN DOWN"];
};
TradeInprogress = false;
