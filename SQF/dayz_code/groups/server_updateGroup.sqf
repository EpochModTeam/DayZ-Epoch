private ["_event","_groupUIDs","_kickedUID","_name","_newGroup","_player","_playerUID","_save","_unit"];

_event = _this select 0;
_player = _this select 1;
_kickedUID = if (count _this > 2) then {_this select 2} else {"0"};
_name = if (alive _player) then {name _player} else {"unknown"};
_playerUID = getPlayerUID _player;

if (_event < 3) then {
	//Small delay needed for group changes to propagate to server
	uiSleep 1;
};

if (_event == -1) exitWith {
	//Promote _player
	PVDZ_groupInvite = [-1,_player];
	(owner (leader group _player)) publicVariableClient "PVDZ_groupInvite";
};

_groupUIDs = [];
{
	if (alive _x && isPlayer _x) then {
		_groupUIDs set [count _groupUIDs,getPlayerUID _x];
	};
} count (units group _player);

_newGroup = [];
_newGroup = switch _event do {
	//Join
	case 1: {_groupUIDs};
	//Kick (target was already kicked from group)
	case 2: {
		_name = _kickedUID;
		format["CHILD:204:%1:%2:%3:",_name,dayZ_instance,[]] call server_hiveWrite;
		_groupUIDs
	};
	//Leave
	case 3: {
		dayz_groupLeft = true;
		(owner _player) publicVariableClient "dayz_groupLeft";
		(_groupUIDs - [_playerUID])
	};
	//Disband
	case 4: {
		_name = 0; //Not needed
		dayz_groupDisbanded = true;
		(owner _player) publicVariableClient "dayz_groupDisbanded";
		[]
	};
};

//Update all group members' saved group in DB
{
	_save = if (_event == 3 && _x == _playerUID) then {[]} else {_newGroup};
	format["CHILD:204:%1:%2:%3:",_x,dayZ_instance,_save] call server_hiveWrite;
} count _groupUIDs;

//Notify group members of the change
PVDZ_groupInvite = [_event,_name];
_groupUIDs set [count _groupUIDs,_kickedUID];
{
	_unit = getPlayerUID _x;
	if (_unit in _groupUIDs && {_unit != _playerUID}) then {
		owner _x publicVariableClient "PVDZ_groupInvite";
	};
} count allUnits;