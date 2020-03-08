/*-----------------------------------*/
// by strikerforce						//
/*--------------------------------*/

private ["_todo", "_selected"];

_todo = _this select 3 select 2;

if (_todo == 0) then {
	vectorActionState = _this select 3 select 0;
	degreeActionState = _this select 3 select 1;
} else {
	if (_todo == 1) then {
		vectorActionState = _this select 3 select 0;
	} else {
		degreeActionState = _this select 3 select 1;
	};
};

_selected = _this select 3 select 3;

if (_todo == 1 || {_todo == 0}) then {
	call {
		if (vectorActionState == "Init") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_OPEN";
			[1,0] call fnc_vectorActionCleanup;

			[] spawn {
				while {1==1} do {
					if (DZE_cancelBuilding || {!dayz_actionInProgress}) exitWith {
						[0,0] call fnc_vectorActionCleanup;
						vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
					};

					uisleep 2;
				};
			};
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_OPEN") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
		};

		if (vectorActionState == localize "STR_EPOCH_VECTORS_CLOSE") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_OPEN";
			[1,0] call fnc_vectorActionCleanup;
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_PITCH_FORWARD") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memForBack = DZE_memForBack + (DZE_curDegree * -1);
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_PITCH_BACK") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memForBack = DZE_memForBack + DZE_curDegree;
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_BANK_LEFT") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memLeftRight = DZE_memLeftRight + (DZE_curDegree * -1);
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_BANK_RIGHT") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_updateVec = true;
			DZE_memLeftRight = DZE_memLeftRight + DZE_curDegree;
		};
		if (vectorActionState == localize "STR_EPOCH_VECTORS_RESET") exitwith {
			vectorActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_vectorActionCleanup;
			DZE_memForBack = 0;
			DZE_memLeftRight = 0;
			DZE_memDir = 0;
			DZE_updateVec = true;
		};
	};
};

if (_todo == 2 || {_todo == 0}) then{
	call {
		if (degreeActionState == "Init") exitwith {
			degreeActionState = localize "STR_EPOCH_VECTORS_OPEN";
			[1,0] call fnc_degreeActionCleanup;
			[] spawn {
				while {1==1} do {
					if (DZE_cancelBuilding || {!dayz_actionInProgress}) exitWith {
						[0,0] call fnc_degreeActionCleanup;
						degreeActionState = localize "STR_EPOCH_VECTORS_CLOSE";
					};

					uisleep 2;
				};
			};
		};
		if (degreeActionState == localize "STR_EPOCH_VECTORS_OPEN") exitwith {
			degreeActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			[1,1] call fnc_degreeActionCleanup;
		};

		if (degreeActionState == localize "STR_EPOCH_VECTORS_CLOSE") exitwith {
			degreeActionState = localize "STR_EPOCH_VECTORS_OPEN";
			[1,0] call fnc_degreeActionCleanup;
		};
		if (degreeActionState == "SELECT") exitwith {
			degreeActionState = localize "STR_EPOCH_VECTORS_CLOSE";
			DZE_curDegree = _selected;
			[1,1] call fnc_degreeActionCleanup;
		};
	};
};
