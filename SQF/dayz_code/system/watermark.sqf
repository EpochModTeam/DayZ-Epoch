// Logo watermark: adding a logo in the bottom left corner of the screen with the server name in it
[] spawn {
	waitUntil {(!isNull Player) and (alive Player) and (player == player)};
	waituntil {!(isNull (findDisplay 46))};
	5 cutRsc ["wm_disp","PLAIN"];
	((uiNamespace getVariable "wm_disp") displayCtrl 1) ctrlSetText dayZ_serverName;
};
