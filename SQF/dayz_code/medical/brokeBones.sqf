if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

local _unit = (_this select 3) select 0;
local _item = (_this select 3) select 1;
local _finished = false;

player removeMagazine _item;

call fnc_usec_medic_removeActions;
r_action = false;

if (vehicle player == player) then {
	_finished = ["Medic",1] call fn_loopAction;
} else {
	uiSleep 3;
	_finished = true;
};

local _displayName = getText(configFile >> "CfgMagazines" >> _item >> "displayName");

if (_finished) then {
	if (_unit == player) then {
		//Self Healing
		[player,player,_item] call player_medMorphine;

		format [localize "str_actions_medical_general_self",_displayName] call dayz_rollingMessages;
	} else {
		//Give humanity reward to player giving the morphine to another player.
		local _humanityGain = [25,50] select (_item == "ItemMorphine");
		_humanityGain call player_humanityChange;

		PVDZ_send = [_unit,"Morphine",[_unit,player,_item]];
		publicVariableServer "PVDZ_send";

		format [localize "str_actions_medical_general_give",_displayName,(name _unit)] call dayz_rollingMessages;
	};
} else {
	player addMagazine _item;
};

dayz_actionInProgress = false;
