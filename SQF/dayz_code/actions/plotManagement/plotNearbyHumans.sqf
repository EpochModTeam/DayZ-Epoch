private ["_closePeople","_friendUID","_friendName","_userList"];
disableSerialization;

_userList = (findDisplay 711194) displayCtrl 7001;

lbClear _userList;

if (!DZE_plotManagementMustBeClose) then { _closePeople = playableUnits; } else { _closePeople = player nearEntities ["CAManBase", 10]; };

{
	if (isPlayer _x) then {
		_friendUID = [_x] call FNC_GetPlayerUID;
		_friendName = name _x;
		_userList lbAdd _friendName;
		_userList lbSetData [(lbSize _userList) -1,_friendUID];
	};
} forEach _closePeople;

lbSort _userList;
