//register client->server rpc
registerServerRpc = {
	if (isServer) then { 
		_this call registerBroadcastRpc; 
	};
};

["dayzDeath",			{ (_this select 1) call server_playerDied; } 			] call registerServerRpc;
["dayzDiscoAdd",		{ dayz_disco set [count dayz_disco,(_this select 1)]; }	] call registerServerRpc;
["dayzDiscoRem",		{ dayz_disco = dayz_disco - [(_this select 1)]; }		] call registerServerRpc;
["dayzPlayerSave",		{ (_this select 1) call server_playerSync; }			] call registerServerRpc;
["dayzPublishObj",		{ (_this select 1) call server_publishObj; }			] call registerServerRpc;
["dayzUpdateVehicle",	{ (_this select 1) call server_updateObject; }			] call registerServerRpc;
["dayzDeleteObj",		{ (_this select 1) call server_deleteObj; }				] call registerServerRpc;
["dayzLogin",			{ (_this select 1) call server_playerLogin; }			] call registerServerRpc;
["dayzLogin2",			{ (_this select 1) call server_playerSetup; }			] call registerServerRpc;
//missing sqf for server_playerMorph
//["dayzPlayerMorph",		{ (_this select 1) call server_playerMorph; }			] call registerServerRpc;
["dayzLoginRecord",		{ (_this select 1) call dayz_recordLogin; }				] call registerServerRpc;
["dayzCharDisco",		{ (_this select 1) call server_characterSync; }			] call registerServerRpc;
["dayzSpawnZed",		{ (_this select 1) call server_handleZedSpawn; }		] call registerServerRpc;
// DayZ Epoch Custom
["dayzPublishVeh",			{ (_this select 1) spawn server_publishVeh; }		] call registerServerRpc;
["dayzTradeObject",			{ (_this select 1) spawn server_tradeObj; }			] call registerServerRpc;
["dayzTraderMenu",			{ (_this select 1) spawn server_traders; }			] call registerServerRpc;
["dayzPlayerDeaths",		{ (_this select 1) spawn server_deaths; }			] call registerServerRpc;
	