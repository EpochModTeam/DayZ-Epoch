if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_typeOf"];

player setVariable["isBusy",true,true];
_typeOf = typeOf (_this select 3);

if !(_typeOf in ZSC_bankObjects || _typeOf in ZSC_bankTraders) exitWith {
	dayz_actionInProgress = false;
	player setVariable["isBusy",false,true];
	format[localize "STR_CL_ZSC_BANKING_NOT_AVAIL",_typeOf] call dayz_rollingMessages;
};

createDialog "atmDialog";
call AtmDialogUpdateAmounts;

waitUntil {!dialog};

dayz_actionInProgress = false;
