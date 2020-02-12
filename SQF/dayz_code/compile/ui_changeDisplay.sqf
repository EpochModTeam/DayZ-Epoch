disableSerialization;

if (profileNamespace getVariable ["statusUI",1] == 1) then {
	private "_style";
	_style = call {
		if (toLower DZE_UI == "vanilla") exitWith {"playerStatusGUI"};
		if (toLower DZE_UI in ["whiteborders","greenborders"]) exitWith {"playerStatusGUI_legacy"};
		"playerStatusGUI_epoch"; // default
	};
	3 cutRsc [_style,"PLAIN",0];
	call player_updateGui;
	call ui_initDisplay;
	hintSilent "";
} else {
	3 cutRsc ["default","PLAIN",0];
	hintSilent "";
};
