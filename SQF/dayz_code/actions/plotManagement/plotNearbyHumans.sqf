private ["_close"];
lbClear 7001;
_closePeople = player nearEntities ["CAManBase", 10];
if (!DZE_plotManagementMustBeClose) then {_closePeople = playableUnits};
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = getPlayerUID _x;
		_friendName = name  _x;
		Humans  =  Humans + [[_friendUID,_friendName]] ;	
		lbAdd [7001, _friendName];
	};
} count _closePeople;

