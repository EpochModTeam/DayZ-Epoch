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
		if(r_fracture_legs) then {_btnRespawn ctrlEnable true;};
		
		//force gear save
		if (!r_player_dead and time - dayz_lastCheckBit > 10) then {
			call dayz_forceSave;
		};			
				
		while {!isNull _display} do {
			switch true do {
				case (!r_player_dead and {isPlayer _x} count (player nearEntities ["AllVehicles", 12]) > 1) : {
					_btnAbort ctrlEnable false;
					cutText [localize "str_abort_playerclose", "PLAIN DOWN"];
				};
				case (!r_player_dead and !canbuild) : {
					_btnAbort ctrlEnable false;
					cutText ["Cannot Abort while in a trader city!", "PLAIN DOWN"];
				};
				case (!r_player_dead and player getVariable["combattimeout", 0] >= time) : {
					_btnAbort ctrlEnable false;
					//cutText ["Cannot Abort while in combat!", "PLAIN DOWN"];
					cutText [localize "str_abort_playerincombat", "PLAIN DOWN"];					
				};
				case (_timeOut < _timeMax) : {
					_btnAbort ctrlEnable false;
					_btnAbort ctrlSetText format["%1 (in %2)", _btnAbortText, ceil (_timeMax - diag_tickTime)];
				};
				default {
					_btnAbort ctrlEnable true;
					_btnAbort ctrlSetText _btnAbortText;
					cutText ["", "PLAIN DOWN"];				
				};
			};
			sleep 1;
			_timeOut = diag_tickTime;
		};
		cutText ["", "PLAIN DOWN"];