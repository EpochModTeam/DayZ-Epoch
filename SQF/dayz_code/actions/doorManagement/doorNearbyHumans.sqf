private ["_closePeople","_friendUID","_friendName","_userList"];
disableSerialization;

_userList = (findDisplay 711195) displayCtrl 7101;

lbClear _userList;

_closePeople = if (DZE_doorManagementMustBeClose) then { player nearEntities ["CAManBase", 10] } else { playableUnits };

{
	if (isPlayer _x) then {
		_friendUID = getPlayerUID _x;
		_friendName = name _x;
		_userList lbAdd _friendName;
		_userList lbSetData [(lbSize _userList) -1,_friendUID];
	};
} forEach _closePeople;

lbSort _userList;
