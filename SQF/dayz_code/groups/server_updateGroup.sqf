private ["_event","_groupUIDs","_kickedUID","_name","_newGroup","_player","_playerUID","_save","_unit"];

_event = _this select 0;
_player = _this select 1;
_kickedUID = ["0",_this select 2] select (count _this > 2);
_name = ["unknown",name _player] select (alive _player);
_playerUID = getPlayerUID _player;

if (_event < 3) then {
	//Small delay needed for group changes to propagate to server
	uiSleep 1;
};

//Do not update if calling player is dead. Prevent saving dayz_firstGroup.
if (damage _player >= 1) exitWith {};

if (_event == -1) exitWith {
	//Promote _player
	PVDZ_groupInvite = [-1,_player];
	(owner (leader group _player)) publicVariableClient "PVDZ_groupInvite";
};

_groupUIDs = [];
{
	if (damage _x < 1 && {isPlayer _x}) then {
		_groupUIDs set [count _groupUIDs,getPlayerUID _x];
	};
} count (units group _player);

_newGroup = [];
_newGroup = call {
	//Join
	if (_event == 1) exitwith {_groupUIDs};
	//Kick (target was already kicked from group)
	if (_event == 2) exitwith {
		_name = _kickedUID;
		format["CHILD:204:%1:%2:%3:",_name,dayZ_instance,[]] call server_hiveWrite;
		_groupUIDs
	};
	//Leave
	if (_event == 3) exitwith {
		dayz_groupLeft = true;
		(owner _player) publicVariableClient "dayz_groupLeft";
		(_groupUIDs - [_playerUID])
	};
	//Disband
	if (_event == 4) exitwith {
		_name = 0; //Not needed
		dayz_groupDisbanded = true;
		(owner _player) publicVariableClient "dayz_groupDisbanded";
		[]
	};
};

//Update all group members' saved group in DB
{
	_save = [_newGroup,[]] select (_event == 3 && {_x == _playerUID});
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
