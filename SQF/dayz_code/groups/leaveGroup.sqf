private "_group";
_group = units group player;

if (count _group == 1 or (!isNil "dayz_groupLeftThread" && {!scriptDone dayz_groupLeftThread})) exitWith {
	_this ctrlShow false;
};

dayz_groupLeft = nil;
PVDZ_Server_UpdateGroup = [3,player];
publicVariableServer "PVDZ_Server_UpdateGroup";

dayz_groupLeftThread = [] spawn {
	//Wait for response from server to confirm group finished updating in DB
	waitUntil {!isNil "dayz_groupLeft"};	
	[player] join grpNull;
};