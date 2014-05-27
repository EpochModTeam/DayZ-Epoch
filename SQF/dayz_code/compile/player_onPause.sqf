private ["_display","_btnRespawn","_btnAbort","_timeOut","_timeMax","_btnAbortText"];
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
_timeOut = 0;
_timeMax = diag_tickTime+10;
dayz_lastCheckBit = time;
		
// if(r_player_dead) exitWith {_btnAbort ctrlEnable true;};
if(r_fracture_legs && !r_player_dead) then {_btnRespawn ctrlEnable true;};
		
//force gear save
if (!r_player_dead && time - dayz_lastCheckBit > 10) then {
	call dayz_forceSave;
};			

if (r_player_dead || (!alive player)) exitWith {_btnAbort ctrlEnable true; _btnAbort ctrlSetText _btnAbortText;};		
_sleep = 1;

while {!isNull _display} do {
	switch true do {
		case (!r_player_dead && {isPlayer _x} count (player nearEntities ["AllVehicles", 12]) > 1) : {
			_btnAbort ctrlEnable false;
			cutText [localize "str_abort_playerclose", "PLAIN DOWN"];
			_sleep = 1;
		};
		case (!r_player_dead && !canbuild) : {
			_btnAbort ctrlEnable false;
			cutText [(localize "str_epoch_player_12"), "PLAIN DOWN"];
			_sleep = 1;
		};
		case (!r_player_dead && player getVariable["combattimeout", 0] >= time) : {
			_btnAbort ctrlEnable false;
			//cutText ["Cannot Abort while in combat!", "PLAIN DOWN"];
			cutText [localize "str_abort_playerincombat", "PLAIN DOWN"];
			_sleep = 1;
		};
		case (_timeOut < _timeMax) : {
			_btnAbort ctrlEnable false;
			_btnAbort ctrlSetText format["%1 (in %2)", _btnAbortText, (ceil ((_timeMax - diag_tickTime)*10)/10)];
			cutText ["", "PLAIN DOWN"];	
			_sleep = 0.1;
		};
		default {
			_btnAbort ctrlEnable true;
			_btnAbort ctrlSetText _btnAbortText;
			cutText ["", "PLAIN DOWN"];	
			_sleep = 1;
		};
	};
	sleep _sleep;
	_timeOut = diag_tickTime;
};
cutText ["", "PLAIN DOWN"];
