private "_group";

_group = group player;
if (count (units _group) == 1 or (!isNil "dayz_groupDisbandThread" && {!scriptDone dayz_groupDisbandThread})) exitWith {
	_this ctrlShow false;
};

dayz_groupDisbanded = nil;
PVDZ_Server_UpdateGroup = [4,player];
publicVariableServer "PVDZ_Server_UpdateGroup";

dayz_groupDisbandThread = _group spawn {
	//Wait for response from server to confirm group finished updating in DB
	waitUntil {!isNil "dayz_groupDisbanded"};
	
	{
		[_x] join grpNull;
	} count (units _this);

	deleteGroup _this;
};