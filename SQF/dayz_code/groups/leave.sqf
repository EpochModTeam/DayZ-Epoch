private "_group";
_group = units group player;

if (count _group == 1 or (!scriptDone dayz_groupLeaveThread)) exitWith {};

dayz_groupLeft = nil;
PVDZ_Server_UpdateGroup = [3,player];
publicVariableServer "PVDZ_Server_UpdateGroup";

dayz_groupLeaveThread = [] spawn {
	//Wait for response from server to confirm group finished updating in DB
	waitUntil {!isNil "dayz_groupLeft"};	
	[player] joinSilent grpNull;
	
	terminate dayz_groupTags;
	80000 cutText ["","PLAIN"];
};