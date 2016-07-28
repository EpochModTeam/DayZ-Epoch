private ["_unitSending","_object","_object","_code"];

_unitSending = _this select 0;
_object = _this select 1;
_code = _this select 2;

//diag_log format["%1, %2-%3",_unitSending,_object,_code];

_ownerID = owner _unitSending;

if (_unitSending distance _object < 5) then {
	_currentCode = _object getVariable ["dayz_padlockCombination",[]];

	_result = [_currentCode,_code] call BIS_fnc_areEqual;
	
	PVCDZ_Client_processCode = [_object,_result,_code];
	_ownerID publicVariableClient "PVCDZ_Client_processCode";
	
	diag_log format["INFO: %1, %5 is trying to guess with %3 for %2 at time %4",(name _unitSending),(typeof _object),_code,time,(getPlayerUID _unitSending)];
} else {
	diag_log format["WARNING: %1, %5 is asking for code for %2 but is a range of %3 at time %4",(name _unitSending),(typeof _object),(_unit distance _object),time,(getPlayerUID _unitSending)];
};