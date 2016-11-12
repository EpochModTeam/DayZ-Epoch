private ["_display","_timeout","_inCombat","_playerCheck","_zedCheck"];
disableSerialization;
waitUntil {
	_display = findDisplay 49;
	!isNull _display;
};
_btnRespawn = _display displayCtrl 1010;
_btnAbort = _display displayCtrl 104;
_btnRespawn ctrlEnable false;
_btnAbort ctrlEnable false;
_btnAbortText = ctrlText _btnAbort;
_isPZombie = player isKindOf "PZombie_VB";
_testTime = diag_tickTime;

if (r_fracture_legs or _isPZombie) then {_btnRespawn ctrlEnable true;};

dayz_lastCheckSave = time;
//force gear save
if (time - dayz_lastCheckSave > 10) then {
	call player_forceSave;
};

while {(!isNull _display) && !r_player_dead} do {
	_timeout = 30;
	_timeout = player getVariable["combattimeout", 0];
	_inCombat = if (_timeout >= diag_tickTime) then {true} else {false};
	_playerCheck = if ({isPlayer _x} count (player nearEntities ["AllVehicles",5]) > 1) then {true} else {false};
	_zedCheck = if ((count (player nearEntities ["zZombie_Base",10]) > 0) && !_isPZombie) then {true} else {false};
	_gearDisplay = findDisplay 106;
	if (!isNull _gearDisplay) then {
		_gearDisplay closeDisplay 0;
	};
	switch true do {
		case (_playerCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 10)", _btnAbortText];
			[localize "str_abort_playerclose",1] call dayz_rollingMessages;
		};
		case (_zedCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in 10)", _btnAbortText];
			[localize "str_abort_zedsclose",1] call dayz_rollingMessages;
		};
		case (_inCombat && !_zedCheck && !_playerCheck) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in %2)", _btnAbortText, ceil (_timeout - diag_tickTime)];
			[localize "str_abort_playerincombat",1] call dayz_rollingMessages;
		};
		case (isInTraderCity) : {
			_btnAbort ctrlEnable false;
			[localize "str_epoch_player_12",1] call dayz_rollingMessages;
		};
		case (((diag_tickTime - _testTime) < 10) && !TimeOutDisplayed) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in %2)",_btnAbortText, str(ceil (((_testTime + 10) - diag_tickTime)*10)/10)];
		};
		default {
			if (!TimeOutDisplayed && (!isNull _display)) then {
				TimeOutDisplayed = true;
			};
			_btnAbort ctrlEnable true;
			_btnAbort ctrlSetText _btnAbortText;
		};
	};
	if (isNull _display) then { //this prevents the timeout from being skipped if the menu is quickly re-opened
		TimeOutDisplayed = false;
	};
	uiSleep 0.1;
};

TimeOutDisplayed = false;
if (r_player_dead) exitWith {_btnAbort ctrlEnable true;};
