disableSerialization;
//_state = uiNamespace getVariable ['DZ_displayUI', 0];

// Hard code the GUI on and the Debug Monitor off
if (dayzState != 0) then {
	3 cutRsc ["playerStatusGUI", "PLAIN",0];
	//Update GUI
	call player_updateGui;
	call ui_initDisplay;
	hintSilent "";
};
dayzDebug = false;

/*
switch (_state) do {
	case 0: {
		if (dayzState != 0) then {
			3 cutRsc ["playerStatusGUI", "PLAIN",0];
			//Update GUI
			call player_updateGui;
			call ui_initDisplay;
			hintSilent "";
		};
		dayzDebug = false;
	};
	case 1: {
		if (dayzState != 1) then {
			3 cutRsc ["playerStatusGUI", "PLAIN",0];
			//Update GUI
			call player_updateGui;
			call ui_initDisplay;
		};
		dayzDebug = true;
	};
	case 2: {
		if (dayzState != 2) then {
			3 cutRsc ["default", "PLAIN",0];
			hintSilent "";
		};
		dayzDebug = false;
	};
};
dayzState = _state;
*/