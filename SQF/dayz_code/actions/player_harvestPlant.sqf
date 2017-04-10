/*
	DayZ Harvest Plant
	Usage: spawn player_harvestPlant;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_started","_finished","_animState","_isMedic","_proceed","_itemOut","_countOut","_plant","_findNearestPlant","_index","_invResult","_text","_playerNear"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_72" call dayz_rollingMessages;};
dayz_actionInProgress = true;

call gear_ui_init;
_countOut = 0;

_findNearestPlant = [];
{
	if (typeOf _x in dayz_plantTypes && {alive _x}) then {
		_objName = _x call fn_getModelName;
		if (_objName in dayz_plant) then {
			_findNearestPlant set [count _findNearestPlant,_x];
			_index = dayz_plant find _objName;
			_itemOut = dayz_plantOutput select _index;
			_countOut = 1;
		};
	};
} count nearestObjects [([player] call FNC_getPos), [], 10];

if (count _findNearestPlant >= 1) then {
	_plant = _findNearestPlant select 0;
	
	// Start chop plant loop
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
		// Make sure no other players are nearby
		_playerNear = {isPlayer _x} count (([_plant] call FNC_GetPos) nearEntities ["CAManBase",10]) > 1;
		if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};
		
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
			if ("" == typeOf _plant) then {
				// Ask server to setDamage on plant and sync for JIP
				PVDZ_objgather_Knockdown = [_plant,player];
				publicVariableServer "PVDZ_objgather_Knockdown";
			} else {
				deleteVehicle _plant;
			};
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
