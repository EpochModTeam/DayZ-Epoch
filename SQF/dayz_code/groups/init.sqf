private ["_leader","_oldGroup"];

if (count (units group player) > 1) then {
	[player] joinSilent grpNull;
};

if (count dayz_myGroup > 1 && {!dayz_requireRadio or {dayz_requireRadio && "ItemRadio" in items player}}) then {
	{
		//Only auto join player into group if leader is in their savedGroup
		_leader = leader _x;
		if (getPlayerUID _leader in dayz_myGroup) exitWith {
			_oldGroup = group player;
			[player] joinSilent _x;
			if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup;};
			systemChat format [localize "STR_EPOCH_REJOINED_GROUP",name _leader];
			
			// Update saved group in DB
			PVDZ_Server_UpdateGroup = [0,player];
			publicVariableServer "PVDZ_Server_UpdateGroup";
		};
	} count allGroups;
};

dayz_oldGroupCount = 0;
dayz_oldMemberCount = 0;
dayz_disbandGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\disband.sqf";
dayz_filterGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\filter.sqf";
dayz_getCrew = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\getCrew.sqf";
dayz_getPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\getPlayer.sqf";
dayz_groupIcons = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\groupIcons.sqf";
dayz_groupMarkers = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\groupMarkers.sqf";
dayz_inviteToGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\invite.sqf";
dayz_joinGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\join.sqf";
dayz_kickFromGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\kick.sqf";
dayz_leaveGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\leave.sqf";
dayz_openGroupDialog = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\open.sqf";
dayz_promotePlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\promote.sqf";
dayz_rejectGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\reject.sqf";
dayz_selectGroupMember = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\selectGroupMember.sqf";
dayz_selectPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\selectPlayer.sqf";
dayz_groupInit = true;