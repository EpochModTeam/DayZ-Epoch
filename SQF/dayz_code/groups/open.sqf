if (!isNull findDisplay 80000) exitWith {};

private ["_disbandButton","_display","_group","_index","_inviteButton","_inviter","_inviterUID","_kickButton","_leader","_leaveButton","_myGroup","_playerList","_promoteButton","_uid"];
disableSerialization;
createDialog "DZ_GroupDialog";
_display = findDisplay 80000;
_uid = getPlayerUID player;
_playerList = _display displayCtrl 1;
_myGroup = _display displayCtrl 2;
_inviteButton = _display displayCtrl 3;
_kickButton = _display displayCtrl 4;
_disbandButton = _display displayCtrl 5;
_leaveButton = _display displayCtrl 6;
_joinButton = _display displayCtrl 7;
_rejectButton = _display displayCtrl 8;
_inviteText = _display displayCtrl 9;
_promoteButton = _display displayCtrl 10;
{_x ctrlShow false;} count [_disbandButton,_inviteButton,_joinButton,_kickButton,_leaveButton,_promoteButton,_rejectButton];

while {!isNull findDisplay 80000} do {
	//Fill my group list
	_group = group player;
	_leader = leader _group;
	lbClear _myGroup;
    {
		if (alive _x && isPlayer _x) then {
			_index = _myGroup lbAdd (name _x);
			_myGroup lbSetData [_index,getPlayerUID _x];
			_myGroup lbSetPicture [_index, if (_x == _leader) then {"\ca\ui\data\icon_unit_teamleader_ca.paa"} else {"\ca\ui\data\map_bush_ca.paa"}];
		};
    } count (units _group);
	lbSort _myGroup;
	
    if (lbSize _myGroup > 1) then {
		if (scriptDone dayz_groupLeaveThread) then {
			_leaveButton ctrlShow true;
		} else {
			_leaveButton ctrlShow false;
		};
		if (player == _leader && scriptDone dayz_groupDisbandThread) then {
			_disbandButton ctrlShow true;
		} else {
			_disbandButton ctrlShow false;
		};
    } else {
		{_x ctrlShow false} count [_disbandButton,_leaveButton,_kickButton,_promoteButton];
    };
    
	_hasInvite = false;
    {
		if (_x select 1 == _uid) then {
			_hasInvite = true;
			_inviterUID = _x select 0; //Take most recent invite
		};
	} forEach dayz_activeInvites;
	
    if (_hasInvite) then {
		{_x ctrlShow true} count [_inviteText,_joinButton,_rejectButton];
		_inviter = _inviterUID call dayz_getPlayer;		
		if (!isNull _inviter) then {
			_inviteText ctrlSetStructuredText parseText (format ["%1<br/>%2",localize "STR_EPOCH_INVITE_FROM",name _inviter]);
		};
    } else {
		{_x ctrlShow false} count [_inviteText,_joinButton,_rejectButton];
    };
	
	//Fill player list
	lbClear _playerList;
	{
		if (isPlayer _x && _x != player) then {
			_index = _playerList lbAdd (name _x);
			_playerList lbSetData [_index, getPlayerUID _x];
			_playerList lbSetPicture [_index, if (count (units group _x) > 1) then {"\ca\ui\data\ui_task_failed_ca.paa"} else {"\ca\ui\data\ui_task_done_ca.paa"}];
		};	    
	} count allUnits;
	lbSort _playerList;
     
	uiSleep 1;
};