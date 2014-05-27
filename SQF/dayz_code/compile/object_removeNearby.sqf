private ["_nearByObjects","_targetObject","_error","_range","_objects"];

_objects = _this select 0;
_range = _this select 1;
_error = _this select 2;


_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder);

_nearByObjects = nearestObjects [player,_objects,_range];

if (count _nearByObjects == 0) exitWith {
	cutText [(localize _error), "PLAIN DOWN"];
};

_targetObject = _nearByObjects select 0;
if (!isNull _targetObject && _canDo) then {
	[0,1,2,_targetObject] spawn player_removeObject;
} else {
	cutText [(localize _error), "PLAIN DOWN"];
};