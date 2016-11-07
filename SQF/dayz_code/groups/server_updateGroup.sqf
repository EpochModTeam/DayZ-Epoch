private ["_event","_groupUIDs","_newGroup","_player","_playerUID"];

_event = _this select 0;
_player = _this select 1;
_playerUID = getPlayerUID _player;

if (_event < 3) then {
	//Small delay needed for group changes to propagate to server
	uiSleep 1;
};

if (_event == -1) exitWith {
	//Promote _player
	PVDZ_groupInvite = [_player,0];
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
		format["CHILD:204:%1:%2:%3:",(_this select 2),dayZ_instance,[]] call server_hiveWrite;
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
		dayz_groupDisbanded = true;
		(owner _player) publicVariableClient "dayz_groupDisbanded";
		[]
	};
};

// Update all group members' saved group in DB
{
	_save = if (_event == 3 && _x == _playerUID) then {[]} else {_newGroup};
	format["CHILD:204:%1:%2:%3:",_x,dayZ_instance,_save] call server_hiveWrite;
} count _groupUIDs;