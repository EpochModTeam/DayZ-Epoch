private ["_leader","_oldGroup","_savedGroup"];

uiSleep 1;
if (count (units group player) > 1) then {
	[player] joinSilent grpNull;
	diag_log "Clearing group";
};

_savedGroup = (PVCDZ_plr_Login select 10) - [getPlayerUID player];

if (count _savedGroup > 0 && {!dayz_requireRadio or {dayz_requireRadio && "ItemRadio" in items player}}) then {
	{
		//Only auto join player into group if leader is in their savedGroup
		_leader = leader _x;
		if (getPlayerUID _leader in _savedGroup) exitWith {
			_oldGroup = group player;
			[player] joinSilent _x;
			if (count (units _oldGroup) == 0) then {deleteGroup _oldGroup;};
			format[localize "STR_EPOCH_REJOINED_GROUP",name _leader] call dayz_rollingMessages;
			
			// Update saved group in DB
			PVDZ_Server_UpdateGroup = [1,player];
			publicVariableServer "PVDZ_Server_UpdateGroup";
		};
	} count allGroups;
};

dayz_oldBodyCount = 0;
dayz_oldGroupCount = 0;
dayz_oldMemberCount = 0;
dayz_disbandGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\disband.sqf";
dayz_filterGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\filter.sqf";
dayz_getCrew = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\getCrew.sqf";
dayz_getPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\getPlayer.sqf";
dayz_inviteToGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\invite.sqf";
dayz_joinGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\join.sqf";
dayz_kickFromGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\kick.sqf";
dayz_leaveGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\leave.sqf";
dayz_openGroupDialog = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\open.sqf";
dayz_pickGroupMember = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\pickGroupMember.sqf";
dayz_pickPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\pickPlayer.sqf";
dayz_promotePlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\promote.sqf";
dayz_rejectGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\reject.sqf";
dayz_groupInit = true;

//Initialize as script data type, no scriptNull in A2
dayz_groupDisbandThread = 0 spawn {};
dayz_groupLeaveThread = 0 spawn {};
dayz_groupTags = 0 spawn {};

execVM "DZE_Hotfix_1.0.6.1A\groups\groupMarkers.sqf";