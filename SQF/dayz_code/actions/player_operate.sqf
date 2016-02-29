private ["_target","_type","_fn_Lock","_fn_UnLock","_fn_Open","_fn_Closed"];

_target = ((_this select 3) select 0);
_type = ((_this select 3) select 1);

_fn_Set = {
	if (typeOf _target in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target animate ["DoorR", 0];
		_target animate ["DoorL", 0];
		//_target setVariable ["isOpen", "0", true];
		[_target,true] spawn padlock_open;
	};
};

_fn_Lock = {
	if (typeOf _target in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target animate ["DoorR", 0];
		_target animate ["DoorL", 0];
		_target setVariable ["isOpen", "0", true];
		_target setVariable ["dayz_padlockLockStatus",true,true];
	};
};

_fn_UnLock = {
	if (typeOf _target in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		[_target,false] spawn padlock_open;
	};
};

_fn_Lockold = {
	if (typeOf _target in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target animate ["DoorR", 0];
		_target animate ["DoorL", 0];
		_target setVariable ["isOpen", "0", true];
		cutText ["Gates locked.", "PLAIN DOWN"];
	};
};

_fn_UnLockold = {
	if (typeOf _target in ["WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target setVariable ["isOpen", "1", true];
		cutText ["Gates Unlocked.", "PLAIN DOWN"];
	};
};

_fn_Open = {
	if (typeOf _target in ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target animate ["DoorR", 1];
		_target animate ["DoorL", 1];
		cutText ["Gates Opened.", "PLAIN DOWN"];
	};
};

_fn_Closed = {
	if (typeOf _target in ["WoodenGate_1","WoodenGate_2","WoodenGate_3","WoodenGate_4"]) then {
		_target animate ["DoorR", 0];
		_target animate ["DoorL", 0];
		cutText ["Gates Closed.", "PLAIN DOWN"];
	};
};

_fn_BuildLock = {
	_target setVariable ["BuildLock",true,true];
	
	PVDZ_Server_buildLock = [_target];
	publicVariableServer "PVDZ_Server_buildLock";
};
_fn_BuildUnLock = {
	_target setVariable ["BuildLock",false,true];
	
	PVDZ_Server_buildLock = [_target];
	publicVariableServer "PVDZ_Server_buildLock";
};

switch (_type) do {
    case "Lock": { call _fn_Lock; };
    case "Unlock": { call _fn_UnLock; };
    case "Open": { call _fn_Open; };
    case "Close": { call _fn_Closed; };
	case "Set": { call _fn_Set; };
	case "BuildLock": { call _fn_BuildLock; };
	case "BuildUnLock": { call _fn_BuildUnLock; };
};