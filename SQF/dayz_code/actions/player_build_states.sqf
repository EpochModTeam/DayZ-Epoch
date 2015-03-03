if(!DZE_ActionInProgress) exitWith {};
//disallow building if these conditions are not met
private ["_isFine","_onLadder","_vehicle","_inVehicle"];

_isFine = "ok"; //define variable to avoid RPT errors
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);

if (dayz_isSwimming) exitWith { //end script if player is swimming
	DZE_ActionInProgress = false;
	cutText [localize "str_player_26", "PLAIN DOWN"];
	_isFine = "Swimming";
	_isFine
};

if (_inVehicle) exitWith { //end script if player is in vehicle
	DZE_ActionInProgress = false;
	cutText [(localize "str_epoch_player_42"), "PLAIN DOWN"];
	_isFine = "In vehicle";
	_isFine
};

if (_onLadder) exitWith { //end script if player is climbing on ladder
	DZE_ActionInProgress = false;
	cutText [localize "str_player_21", "PLAIN DOWN"];
	_isFine = "On ladder";
	_isFine
};

if (player getVariable["combattimeout", 0] >= time) exitWith { //end script if player is in combat
	DZE_ActionInProgress = false;
	cutText [(localize "str_epoch_player_43"), "PLAIN DOWN"];
	_isFine = "In combat";
	_isFine
};

_isFine //returns string to caller, default is "ok" if conditions were not met

