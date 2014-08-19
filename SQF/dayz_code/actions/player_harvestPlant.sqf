/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distribute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_started","_finished","_animState","_isMedic","_proceed","_itemOut","_countOut","_tree","_findNearestTree","_index","_invResult","_text","_ObjectID", "_ObjectUID","_plantInfo","_plantType","_plantGrownUp","_plantObjects","_plantOutput","_tmp"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_72") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

//_item = _this;
call gear_ui_init;

_countOut = 0;

_findNearestTree = [];
{
	if (alive _x) then {
		_plantInfo = [_x] call plant_getInfo;
		_plantType = _plantInfo select 0;
		_plantGrownUp = _plantInfo select 1;
		_plantObjects = _plantInfo select 2;
		_plantOutput = _plantInfo select 3;
		
		if (_plantType != "undef" && _plantGrownUp) exitWith {
			_findNearestTree set [(count _findNearestTree),_x];
			_itemOut = (_plantOutput select 0) select 0;
			_countOut = (_plantOutput select 0) select 1; 
		};
	};
} count nearestObjects [([player] call FNC_getPos), [], 10];

//diag_log format["DEBUG TREES: %1", _findNearestTree];

if (count(_findNearestTree) >= 1) then {
		
	_tree = _findNearestTree select 0;
	
	// Start chop tree loop
	_isOk = true;
	_proceed = false;
	while {_isOk} do {

		[1,1] call dayz_HungerThirst;
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

		_invResult = false;
		_i = 0;
		for "_x" from 1 to _countOut do {
			_invResult = [player,_itemOut] call BIS_fnc_invAdd;
			if(_invResult) then {
				_i = _i + 1;
			};
		};

		_text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");
		
		if(_i != 0) then {
			// chop down tree
			if("" == typeOf _tree) then {
				_tree setDamage 1;
			} else {
				_ObjectID = _tree getVariable ["ObjectID","unset"];
				_ObjectUID = _tree getVariable ["ObjectUID","unset"];

				deleteVehicle _tree;
				
				if(_ObjectID != "0" && _ObjectUID != "0") then {
					if(DZE_PlantingReUsePlant) then {
						cutText ["ReUsePlant is not implemented\nPlant will not be downgraded", "PLAIN DOWN"];
					} else {
						PVDZE_obj_Delete = [_ObjectID,_ObjectUID,player];
						publicVariableServer "PVDZE_obj_Delete";
					};
				};
			};
			//diag_log format["DEBUG TREE DAMAGE: %1", _tree];
		
			cutText [format[(localize "str_epoch_player_154"), _i,_text], "PLAIN DOWN"];
		} else {
			cutText [format[(localize "str_epoch_player_143"), _i,_text], "PLAIN DOWN"];
		};
	} else {
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText [(localize "str_epoch_player_73"), "PLAIN DOWN"];
	};

	

} else {
	cutText [(localize "str_epoch_player_74"), "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
