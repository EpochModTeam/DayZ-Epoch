if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

disableSerialization;
private ["_display","_isBusy"];

_isBusy = true;
player setVariable["isBusy",true,true];

if (isPlayer cursorTarget) then {
	ZSC_GiveMoneyTarget = cursorTarget;
	_isBusy = ZSC_GiveMoneyTarget getVariable["isBusy",false];
	if (_isBusy) exitWith {
		player setVariable ["isBusy",false,true];
		format[localize "STR_CL_ZSC_ALREADY_TRADING",name ZSC_GiveMoneyTarget] call dayz_rollingMessages;
	};
	if (!_isBusy) then {
		player setVariable["isBusy",true,true];	
		createDialog "GivePlayerDialog";
		_display = uiNamespace getVariable["zsc_dialogs", displayNull];
		_display displayCtrl 14002 ctrlSetText(format[localize "STR_CL_ZSC_TRANSFER_COINS",CurrencyName]);
		call GivePlayerDialogAmounts;
	};
} else {
	localize "STR_CL_ZSC_NOT_PLAYER" call dayz_rollingMessages;
};

waitUntil {!dialog};

dayz_actionInProgress = false;
