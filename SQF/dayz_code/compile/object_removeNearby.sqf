private ["_nearByObjects","_targetObject"];

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

_nearByObjects = nearestObjects _this;

if (count _nearByObjects == 0) exitWith {
	cutText [(localize "str_epoch_player_8"), "PLAIN DOWN"];
};

_targetObject = _nearByObjects select 0;
if (!isNull _targetObject and _canDo) then {
	[0,1,2,_targetObject] spawn player_removeObject;
};
