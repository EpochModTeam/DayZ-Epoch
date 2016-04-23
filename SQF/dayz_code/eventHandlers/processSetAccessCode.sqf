private ["_unitSending","_object","_object","_code"];
_unitSending = _this select 0;
_object = _this select 1;
_code = _this select 2;

//diag_log format["%1, %2-%3",_unitSending,_object,_code];

_ownerID = owner _unitSending;
_ownerArray = _object getVariable ["ownerArray",["0"]];

if ((_ownerArray select 0) == (getPlayerUID _unitSending)) then {
	if (_unitSending distance _object < 5) then {
		_object setVariable ["dayz_padlockCombination",_code,false];
		
		PVCDZ_Client_processAccessCode = [_code];
		_ownerID publicVariableClient "PVCDZ_Client_processAccessCode";
		
		[_object,"accessCode",_code] call server_updateObject;
		
		_object setVariable ["dayz_padlockHistory", [], true];
		_object setVariable ["dayz_padlockLockStatus", true,true];
		
		diag_log format["INFO: %1, %5 has changed the access code for %2 with %3 at time %4",(name _unitSending),(typeof _object),_code,time,(getPlayerUID _unitSending)];
	} else {
		diag_log format["WARNING: %1, %5 is asking to change access code of %2 from a distance of %3 at time %4",(name _unitSending),(typeof _object),(_unit distance _object),time,(getPlayerUID _unitSending)];
	};
} else {
	diag_log format["WARNING: %1, %2 is trying to set a code for a gate he does not own.",(name _unitSending),(getPlayerUID _unitSending)];
};