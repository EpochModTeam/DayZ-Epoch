private["_display","_btnRespawn","_btnAbort","_timeOut","_timeMax"];
disableSerialization;
_display = _this select 0;
_btnRespawn = _display displayCtrl 1010;
_btnAbort = _display displayCtrl 104;
_btnRespawn ctrlEnable false;
_btnAbort ctrlEnable false;
_timeOut = 0;
_timeMax = 30;

while {!isNull _display} do {
	switch true do {
		case ({isPlayer _x} count (player nearEntities ["AllVehicles", 6]) > 1) : {
			_btnAbort ctrlEnable false;
			cutText ["Cannot Abort near another player!", "PLAIN DOWN"];
		};
		case (_timeOut < _timeMax && count (player nearEntities ["zZombie_Base", 50]) > 0) : {
			_btnAbort ctrlEnable false;
			cutText [format ["Can Abort in %1", (_timeMax - _timeOut)], "PLAIN DOWN"];
			_timeOut = _timeOut + 1;

		};
		case (player getVariable["combattimeout", 0] >= time) : {
			_btnAbort ctrlEnable false;
			cutText ["Cannot Abort while in combat!", "PLAIN DOWN"];
		};
		default {
			_btnAbort ctrlEnable true;
			cutText ["", "PLAIN DOWN"];
		};
	};
	sleep 1;
};
cutText ["", "PLAIN DOWN"];