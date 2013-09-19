private ["_display","_btnRespawn","_btnAbort","_timeOut","_timeMax"];
		disableSerialization;
		waitUntil {
			_display = findDisplay 49;
			!isNull _display;
		};
		_btnRespawn = _display displayCtrl 1010;
		_btnAbort = _display displayCtrl 104;
		_btnRespawn ctrlEnable false;
		_btnAbort ctrlEnable false;
		_timeOut = 0;
		_timeMax = 10;
		dayz_lastCheckBit = time;
		
		// if(r_player_dead) exitWith {_btnAbort ctrlEnable true;};
		if(r_fracture_legs) then {_btnRespawn ctrlEnable true;};
		
		//force gear save
		if (!r_player_dead and time - dayz_lastCheckBit > 10) then {
			call dayz_forceSave;
		};			
				
		while {!isNull _display} do {
			switch true do {
				case (!r_player_dead and {isPlayer _x} count (player nearEntities ["AllVehicles", 6]) > 1) : {
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
					cutText [format ["Can Abort in %1", (_timeMax - _timeOut)], "PLAIN DOWN"];
				};
				default {
					_btnAbort ctrlEnable true;
					cutText ["", "PLAIN DOWN"];				
				};
			};
			sleep 1;
			_timeOut = _timeOut + 1;
		};
		cutText ["", "PLAIN DOWN"];