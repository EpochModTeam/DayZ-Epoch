private ["_add","_inviter","_recipient","_uid","_unit"];

_add = _this select 0;
_uid = _this select 1;

if (typeName _add == "SCALAR") exitWith {
	call {
		if (_add == -1) exitWith { //Promote
			(group player) selectLeader _uid;
		};
		if (_add == 1) exitWith {
			systemChat format[localize "STR_EPOCH_PLAYER_JOINED",_uid];
		};
		if (_add == 2) exitWith {
			if (_uid == getPlayerUID player) then {
				localize "STR_EPOCH_GROUP_KICKED" call dayz_rollingMessages;
				terminate dayz_groupTags;
				8 cutText ["","PLAIN"];
			} else {
				systemChat format[localize "STR_EPOCH_PLAYER_KICKED",name (_uid call dayz_getPlayer)];
			};
		};
		if (_add == 3) exitWith {
			systemChat format[localize "STR_EPOCH_PLAYER_LEFT",_uid];
			if (count (player call dayz_filterGroup) == 1) then {
				terminate dayz_groupTags;
				8 cutText ["","PLAIN"];
			};
		};
		if (_add == 4) exitWith {
			localize "STR_EPOCH_GROUP_DISBANDED" call dayz_rollingMessages;
			terminate dayz_groupTags;
			8 cutText ["","PLAIN"];
		};
	};
};

// Update active invites on all machines with the change
if (_add) then {
	_inviter = _uid select 0;
	_recipient = _uid select 1;
	dayz_activeInvites set [count dayz_activeInvites,_uid];
	if (!isDedicated && {_recipient == getPlayerUID player} && {!dayz_requireRadio or {dayz_requireRadio && {"ItemRadio" in items player}}}) then {
		private "_name";

		_name = toString(_uid select 2);

		 format[localize "STR_EPOCH_INVITE_NEW",_name] call dayz_rollingMessages;
	};
} else {
	// Remove all invites to this player
	_inviter = "0";
	_recipient = _uid;
	{
		if (_recipient == _x select 1) then {
			dayz_activeInvites set [_forEachIndex,"delete"];
		};
	} forEach dayz_activeInvites;
	dayz_activeInvites = dayz_activeInvites - ["delete"];
};

// Send change to all active clients except the originator (they already updated themself)
if (isServer) then {
	PVDZ_groupInvite = _this;
	{
		_unit = getPlayerUID _x;
		if (_unit != "" && {(!_add && {_unit != _recipient}) or (_add && {_unit != _inviter})}) then {
			// Don't use regular PV because JIP clients don't need it (dayz_activeInvites is synced to them in server_playerLogin)
			owner _x publicVariableClient "PVDZ_groupInvite";
		};
	} count allUnits;
};
