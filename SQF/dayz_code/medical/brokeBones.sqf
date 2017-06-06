private ["_finished","_id","_unit","_item","_humanityGain"];

_unit = (_this select 3) select 0;
_item = (_this select 3) select 1;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine _item;

if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

if (_finished) then {
	_unit setVariable ["hit_legs",0];
	_unit setVariable ["hit_hands",0];
	
	if (_unit == player) then {
		//give to player, Ie the player fixed himself
		
		//Self Healing
		_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	} else {
		//give to remote player, ie the player fixed another player
		
		//Give humanity reward to player giving the morphine to another player.
		_humanityGain = switch true do {
			case (_item == "ItemMorphine"): { 50 };
			case (_item == "equip_woodensplint"): { 25 };
			default { 0 };
		};
		
		if (_humanityGain > 0) then {
			[_humanityGain,0] call player_humanityChange;
		};
	};

	PVDZ_send = [_unit,"Morphine",[_unit,player]];
	publicVariableServer "PVDZ_send";
} else {
	player addMagazine _item;
};

dayz_actionInProgress = false;