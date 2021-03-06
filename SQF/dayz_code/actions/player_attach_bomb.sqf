if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_theBomb","_vehicle","_curFuel","_newFuel","_timeLeft","_hasToolbox","_hasCarBomb","_dis","_sfx","_alreadyBombed","_hasCrowbar","_finished"];

_vehicle = 		_this select 3;
_hasToolbox = 	"ItemToolbox" in items player;
_hasCrowbar = 	"ItemCrowbar" in items player;
_hasCarBomb = "ItemCarBomb" in magazines player;
_alreadyBombed = _vehicle getVariable["hasBomb",false];

if(!_hasToolbox or !_hasCrowbar) exitWith {
	dayz_actionInProgress = false;
	localize "str_bombToolMissing" call dayz_rollingMessages;
};
if(!_hasCarBomb) exitWith {
	dayz_actionInProgress = false;
	localize "str_bombMissing" call dayz_rollingMessages;
};

/*
if(_vehicle getVariable["hasBomb",false]) exitWith {
	localize "str_bombAlready" call dayz_rollingMessages;
};
*/

[player,(getPosATL player),20,"tentunpack"] spawn fnc_alertZombies;

_finished = ["Medic",1] call fn_loopAction;
if (!_finished or !("ItemCarBomb" in magazines player)) exitWith {
	dayz_actionInProgress = false;
};

player removeMagazine "ItemCarBomb";

//Send the Eventhandler to Server
if(!_alreadyBombed) then {
	PVDZ_dayzCarBomb = [_vehicle,getPlayerUID player];
	publicVariableServer "PVDZ_dayzCarBomb";
};
localize "str_bombAttached" call dayz_rollingMessages;
dayz_actionInProgress = false;