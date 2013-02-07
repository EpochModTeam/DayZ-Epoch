private["_display","_btnRespawn","_btnAbort","_timeOut","_timeMax","_isDead"];
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
		_timeMax = 30;
		
		if(r_player_dead) exitWith {_btnAbort ctrlEnable true;};
		if(r_fracture_legs) exitWith {_btnRespawn ctrlEnable true;};
		
		while {!isNull _display} do {
			switch true do {
				case ({isPlayer _x} count (player nearEntities ["AllVehicles", 6]) > 1) : {
					_btnAbort ctrlEnable false;
					cutText ["Cannot Abort near another player!", "PLAIN DOWN"];
				};
				case (_timeOut < _timeMax && count (player nearEntities ["zZombie_Base", 25]) > 0) : {
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