private "_ui";
disableSerialization;

DZE_UI = (profileNamespace getVariable ["statusUI",1]);

if !(DZE_UI == 0) then {
	_ui = call {
		if (DZE_UI == 1) exitWith {"playerStatusGUI"};
		if (DZE_UI == 2) exitWith {"playerStatusGUI_epoch"};
		"playerStatusGUI_legacy";
	};
	3 cutRsc [_ui,"PLAIN",0];
	if (Z_singleCurrency) then {16 cutRsc ["ZSC_Money_Display","PLAIN"];};
	call player_updateGui;
} else {
	3 cutRsc ["default","PLAIN",0];
	if (Z_singleCurrency) then {16 cutRsc ["default","PLAIN"];};
};
