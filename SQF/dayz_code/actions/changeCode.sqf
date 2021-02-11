/*
	changeCode - Safe, Lockbox and Door code changing script by salival (https://github.com/oiad)
*/

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

if (isNull cursorTarget) exitWith {dayz_actionInProgress = false; systemChat localize "str_cursorTargetNotFound";};

private ["_backupCode","_badCode","_cursorTarget","_dialog","_dir","_doorFriends","_isDoor","_isLockBox","_isSafe","_isStorage","_location","_lockCode","_object","_ownerID","_typeOf","_vector"];

_cursorTarget = _this select 3;
_typeOf = typeOf (_cursorTarget);

_isSafe = _typeOf in ["VaultStorage","VaultStorage2","TallSafe"];
_isLockBox = _typeOf in ["LockboxStorage","LockboxStorage2","LockboxStorageWinter","LockboxStorageWinter2"];
_isStorage = (_isSafe || _isLockBox);
_isDoor = _typeOf in DZE_DoorsLocked;

_badCode = false;

_dialog = call {
	if (_isLockBox) exitwith {"KeyPadUI"};
	if (_isSafe) exitwith {"SafeKeyPad"};
	if (_isDoor) exitwith {"ComboLockUI"};
};

if (_isStorage) then {
	_backupCode = dayz_combination;
	dayz_combination = "";
	dayz_selectedVault = objNull;
} else {
	DZE_topCombo = 0;
	DZE_midCombo = 0;
	DZE_botCombo = 0;
	_backupCode = DZE_Lock_Door;
	DZE_Lock_Door = "";
	dayz_selectedDoor = objNull;
};

createDialog _dialog;

waitUntil {!dialog};

if (keypadCancel) exitWith {
	dayz_actionInProgress = false;
	if (_isStorage) then {dayz_combination = _backupCode;} else {DZE_Lock_Door = _backupCode;};
};

if (_isStorage) then {
	if (_isSafe) then {
		if ((parseNumber dayz_combination) > 9999 || count (toArray (dayz_combination)) < 4) then {_badCode = true;};
	} else {
		_lockCode = dayz_combination call fnc_lockCode;
		if (typeName _lockCode == "SCALAR") then {_badCode = true;};
	};
} else {
	if (parseNumber DZE_Lock_Door == 0) then {_badCode = true};
};

if (_badCode) exitWith {
	dayz_actionInProgress = false;
	if (_isStorage) then {dayz_combination = _backupCode;} else {DZE_Lock_Door = _backupCode;};
	systemChat localize "STR_CL_CC_CODE_INVALID";
};

if (_isStorage) then {
	sk_changeCode = [player,_cursorTarget,dayz_combination,dayz_authKey];
	publicVariableServer "sk_changeCode";
} else {
	_location = _cursorTarget getVariable["OEMPos",getPosATL _cursorTarget];
	_dir = getDir _cursorTarget;
	_vector = [vectorDir _cursorTarget,vectorUp _cursorTarget];

	_object = createVehicle [_typeOf, [0,0,0], [], 0, "CAN_COLLIDE"];
	_object setDir _dir;
	_object setVectorDirAndUp _vector;
	_object setPosATL _location;
	_object setVariable ["memDir",_dir,true];

	if (DZE_permanentPlot) then {
		_ownerID = _cursorTarget getVariable["ownerPUID","0"];
		_object setVariable ["ownerPUID",_ownerID,true];
		_doorFriends = _cursorTarget getVariable ["doorfriends",[]];
		if (isNil "_ownerID" || _ownerID == "0") then {_ownerID = dayz_playerUID;};
		if (count _doorFriends == 0) then {_doorFriends = [[dayz_playerUID,toArray (name player)]];};
		_object setVariable ["doorfriends",_doorFriends,true];
		PVDZE_obj_Swap = [DZE_Lock_Door,_object,[_dir,_location,_ownerID,_vector],_typeOf,_cursorTarget,player,_doorFriends,dayz_authKey];
	} else {
		PVDZE_obj_Swap = [DZE_Lock_Door,_object,[_dir,_location,_vector],_typeOf,_cursorTarget,player,[],dayz_authKey];
	};

	publicVariableServer "PVDZE_obj_Swap";
};

systemChat format[localize "STR_CL_CC_CODE_CHANGED",if (_isStorage) then {if (_isSafe) then {dayz_combination} else {(dayz_combination call fnc_lockCode)}} else {DZE_Lock_Door}];
dayz_actionInProgress = false;
