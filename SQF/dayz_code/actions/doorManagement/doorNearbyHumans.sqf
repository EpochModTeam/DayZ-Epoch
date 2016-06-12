private ["_close"];
lbClear 7101;
_closePeople =  player nearEntities ["CAManBase", 20];
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = getPlayerUID _x;
		_friendName = name  _x;
		Humans set [count Humans, [_friendUID,_friendName]];
		lbAdd [7101, _friendName];
	};
} forEach _closePeople;
