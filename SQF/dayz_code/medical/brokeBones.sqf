private ["_msg","_finished","_id","_unit","_item","_humanityGain"];

_unit = (_this select 3) select 0;
_item = (_this select 3) select 1;

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeMagazine _item;

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

_msg = if (_item == "equip_woodensplint") then {"STR_ITEM_NAME_WOODENSPLINT"} else {"STR_EQUIP_NAME_15"};

if (_finished) then {
	if (_unit == player) then {
		//Self Healing
		[player,player,_item] call player_medMorphine;
		
		format [localize "str_actions_medical_general_self", (localize _msg)] call dayz_rollingMessages;
	} else {
		//Give humanity reward to player giving the morphine to another player.
		_humanityGain = if (_item == "ItemMorphine") then {50} else {25};
		[_humanityGain,0] call player_humanityChange;
		
		PVDZ_send = [_unit,"Morphine",[_unit,player,_item]];
		publicVariableServer "PVDZ_send";
		
		format [localize "str_actions_medical_general_give", (localize _msg),(name _unit)] call dayz_rollingMessages;
	};
} else {
	player addMagazine _item;
};

dayz_actionInProgress = false;
