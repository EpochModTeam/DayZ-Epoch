private ["_close"];
lbClear 7101;
_closePeople =  player nearEntities ["CAManBase", 10];
if (!DZE_doorManagementMustBeClose) then {_closePeople = playableUnits};
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = [_x] call FNC_GetPlayerUID;
		_friendName = name  _x;
		Humans set [count Humans, [_friendUID,_friendName]];
		lbAdd [7101, _friendName];
	};
} forEach _closePeople;
