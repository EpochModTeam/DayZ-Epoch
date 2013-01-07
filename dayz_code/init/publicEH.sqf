"dayzSetFuel"		addPublicVariableEventHandler {(_this select 1) call local_sefFuel};

if (isServer) then {
	"dayzDeath"			addPublicVariableEventHandler {(_this select 1) call server_playerDied};
	"dayzDiscoAdd"		addPublicVariableEventHandler {dayz_disco set [count dayz_disco,(_this select 1)];};
	"dayzDiscoRem"		addPublicVariableEventHandler {dayz_disco = dayz_disco - [(_this select 1)];};
	"dayzPlayerSave"	addPublicVariableEventHandler {(_this select 1) call server_playerSync;};
	"dayzPublishObj"	addPublicVariableEventHandler {(_this select 1) call server_publishObj};
	"dayzUpdateVehicle" addPublicVariableEventHandler {(_this select 1) call server_updateObject};
	"dayzDeleteObj"		addPublicVariableEventHandler {(_this select 1) call local_deleteObj};
	"dayzPublishVeh"	addPublicVariableEventHandler {(_this select 1) call server_publishVeh}; // for vehicle traders
	"dayzTradeObject"	addPublicVariableEventHandler {(_this select 1) call server_tradeObj}; // for vehicle traders
	"dayzTraderMenu"	addPublicVariableEventHandler {(_this select 1) call server_traders}; // for all traders
	"dayzLogin"			addPublicVariableEventHandler {(_this select 1) call server_playerLogin};
	"dayzLogin2"		addPublicVariableEventHandler {(_this select 1) call server_playerSetup};
	"dayzPlayerMorph"	addPublicVariableEventHandler {(_this select 1) call server_playerMorph};
	"dayzLoginRecord"	addPublicVariableEventHandler {(_this select 1) call dayz_recordLogin};
	"dayzCharDisco"		addPublicVariableEventHandler {(_this select 1) call server_characterSync};
	"dayzSetFix"		addPublicVariableEventHandler {(_this select 1) call object_setFixServer};
	"dayzGutBody"		addPublicVariableEventHandler {(_this select 1) spawn local_gutObject};

	"usecMorphine"		addPublicVariableEventHandler {	
						(_this select 1) select 0 setVariable["hit_legs",0];
						(_this select 1) select 0 setVariable["hit_hands",0];
					};
};

if (!isDedicated) then {
	"norrnRaLW"   		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf"};
	"norrnRLact"		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"};
	"usecMorphine"		addPublicVariableEventHandler {(_this select 1) call player_medMorphine};
	"usecBleed"			addPublicVariableEventHandler {_id = (_this select 1) spawn fnc_usec_damageBleed};
	"usecBandage"		addPublicVariableEventHandler {(_this select 1) call player_medBandage};
	"usecEpi"			addPublicVariableEventHandler {(_this select 1) call player_medEpi};
	"usecTransfuse"		addPublicVariableEventHandler {(_this select 1) call player_medTransfuse};
	"usecPainK"			addPublicVariableEventHandler {(_this select 1) call player_medPainkiller};
	"dayzHideBody"		addPublicVariableEventHandler {hideBody (_this select 1)};
	"dayzHumanity"		addPublicVariableEventHandler {(_this select 1) spawn player_humanityChange};
	"dayzHitV"			addPublicVariableEventHandler {(_this select 1) call fnc_usec_damageVehicle};

	"dayzSetDate"		addPublicVariableEventHandler {setDate (_this select 1)};
	"dayzFlies"			addPublicVariableEventHandler {(_this select 1) call spawn_flies};
	"dayzRoadFlare"		addPublicVariableEventHandler {(_this select 1) spawn object_roadFlare};
	"norrnRaDrag"   	addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\animDrag.sqf"};
	"dayzFire"			addPublicVariableEventHandler {nul=(_this select 1) spawn BIS_Effects_Burn};
};