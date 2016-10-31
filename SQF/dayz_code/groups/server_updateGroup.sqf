private ["_event","_groupUIDs","_key","_newGroup","_player","_playerUID","_targetUID"];

_event = _this select 0;
_player = _this select 1;
_targetUID = if (count _this > 2) then {_this select 2} else {"0"};
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
	//Login
	case 0;
	//Join
	case 1;
	//Kick (target was already kicked from group)
	case 2: {_groupUIDs};
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
	_save = if ((_event == 2 && _x == _targetUID) or (_event == 3 && _x == _playerUID)) then {[]} else {_newGroup};
	_key = format ["CHILD:204:%1:%2:%3:",_x,dayZ_instance,_save];
	_key call server_hiveWrite;
} count _groupUIDs;