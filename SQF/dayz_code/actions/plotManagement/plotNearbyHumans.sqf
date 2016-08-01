private ["_closePeople", "_friendUID","_friendName","_lb"];
disableSerialization;

_lb = (findDisplay 711194) displayCtrl 7001;
lbClear _lb;
if (!DZE_plotManagementMustBeClose) then {_closePeople = playableUnits;} else {_closePeople = player nearEntities ["CAManBase", 10];};
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = [_x] call FNC_GetPlayerUID;
		_friendName = name _x;
		Humans  =  Humans + [[_friendUID,_friendName]];
		_lb lbAdd _friendName;
	};
} forEach _closePeople;

lbSort _lb;