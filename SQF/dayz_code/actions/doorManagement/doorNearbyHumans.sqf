private ["_closePeople","_friendUID","_friendName","_lb"];
disableSerialization;

_lb = (findDisplay 711195) displayCtrl 7101;
lbClear _lb;
_closePeople =  player nearEntities ["CAManBase", 10];
if (!DZE_doorManagementMustBeClose) then {_closePeople = playableUnits};
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = [_x] call FNC_GetPlayerUID;
		_friendName = name  _x;
		Humans set [count Humans, [_friendUID,_friendName]];
		_lb lbAdd _friendName;
	};
} forEach _closePeople;

lbSort _lb;