private ["_close"];
lbClear 7001;
_closePeople = player nearEntities ["CAManBase", 10];
if (!DZE_plotManagementMustBeClose) then {_closePeople = playableUnits};
Humans = [];
{
	if (isPlayer _x) then {
		_friendUID = [_x] call FNC_GetPlayerUID;
		_friendName = name  _x;
		Humans  =  Humans + [[_friendUID,_friendName]];
		lbAdd [7001, _friendName];
	};
} forEach _closePeople; // count causes Error Type Number, expected Bool here