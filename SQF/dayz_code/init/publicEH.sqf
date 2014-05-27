//Medical Event Handlers
"norrnRaLW"					addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf"};
"norrnRLact"				addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"};
"norrnRDead"				addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\deadState.sqf"};
"usecBleed"					addPublicVariableEventHandler {_id = (_this select 1) spawn fnc_usec_damageBleed};
"usecBandage"				addPublicVariableEventHandler {(_this select 1) call player_medBandage};
"usecInject"				addPublicVariableEventHandler {(_this select 1) call player_medInject};
"usecEpi"					addPublicVariableEventHandler {(_this select 1) call player_medEpi};
"usecTransfuse"				addPublicVariableEventHandler {(_this select 1) call player_medTransfuse};
"usecMorphine"				addPublicVariableEventHandler {(_this select 1) call player_medMorphine};
"usecPainK"					addPublicVariableEventHandler {(_this select 1) call player_medPainkiller};
"PVDZE_plr_Hit" 			addPublicVariableEventHandler {(_this select 1) call fnc_usec_damageHandler};
"PVDZE_plr_HitV" 			addPublicVariableEventHandler {(_this select 1) call fnc_usec_damageVehicle};
"usecBreakLegs"				addPublicVariableEventHandler {(_this select 1) call player_breaklegs};

//Both
"PVDZE_veh_SFuel"			addPublicVariableEventHandler {(_this select 1) spawn local_setFuel};
"PVDZE_veh_SFix"			addPublicVariableEventHandler {(_this select 1) call object_setFixServer};
"PVDZE_plr_HideBody"		addPublicVariableEventHandler {hideBody (_this select 1)};
"PVDZE_obj_Hide"			addPublicVariableEventHandler {hideObject  (_this select 1)};
"PVDZE_veh_Lock"			addPublicVariableEventHandler {(_this select 1) spawn local_lockUnlock};
"PVDZE_plr_GutBody"			addPublicVariableEventHandler {(_this select 1) spawn local_gutObject};
"PVDZE_plr_GutBodyZ"		addPublicVariableEventHandler {(_this select 1) spawn local_gutObjectZ};
"PVDZE_plr_DelLocal"		addPublicVariableEventHandler {(_this select 1) call object_delLocal};
"PVDZE_veh_Init"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_ResetEH};
"PVDZE_plr_HumanityChange"	addPublicVariableEventHandler {(_this select 1) spawn player_humanityChange};
"PVDZE_serverObjectMonitor" addPublicVariableEventHandler {PVDZE_serverObjectMonitor = dayz_safety};
/* PVS/PVC - Skaronator */
"PVCDZE_vehSH" 			addPublicVariableEventHandler {(_this select 1) call vehicle_handleDamage}; // set damage to vehicle part

"PVDZE_Server_Simulation" addPublicVariableEventHandler {
	_agent = ((_this select 1) select 0);
	_control = ((_this select 1) select 1);

	_agent enableSimulation _control;
};

//Server only
if (isServer) then {
	/* PVS/PVC - Skaronator */
	"PVDZE_send" addPublicVariableEventHandler {(_this select 1) call server_sendToClient};
	"PVDZE_maintainArea" addPublicVariableEventHandler {(_this select 1) spawn server_maintainArea};

	"PVDZE_atp" addPublicVariableEventHandler {
		_x = _this select 1;
		if (typeName _x == "STRING") then {
			diag_log _x;
		};
	};
	"PVDZE_plr_Died"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerDied};
	"PVDZE_plr_Save"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerSync;};
	"PVDZE_obj_Publish"		addPublicVariableEventHandler {(_this select 1) call server_publishObj};
	"PVDZE_veh_Update"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_updateObject};
	"PVDZE_plr_Login"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerLogin};
	"PVDZE_plr_Login2"		addPublicVariableEventHandler {(_this select 1) call server_playerSetup};
	"PVDZE_plr_Morph"		addPublicVariableEventHandler {(_this select 1) call server_playerMorph};
	"PVDZE_plr_LoginRecord"	addPublicVariableEventHandler {_id = (_this select 1) spawn dayz_recordLogin};
	//Checking
	"PVDZE_obj_Delete"		addPublicVariableEventHandler {(_this select 1) spawn server_deleteObj};
	// upgrade && maintain
	"PVDZE_obj_Swap"		addPublicVariableEventHandler {(_this select 1) spawn server_swapObject};
	// disable zombies server side
	"PVDZE_zed_Spawn"		addPublicVariableEventHandler {(_this select 1) spawn server_handleZedSpawn};

	// Dayz epoch custom
	"PVDZE_veh_Publish"		addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh};
	"PVDZE_veh_Publish2"	addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh2};
	"PVDZE_veh_Upgrade"	addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh3};
	"PVDZE_obj_Trade"		addPublicVariableEventHandler {(_this select 1) spawn server_tradeObj};
	"PVDZE_plr_TradeMenu"	addPublicVariableEventHandler {(_this select 1) spawn server_traders};
	"PVDZE_plr_DeathB"		addPublicVariableEventHandler {(_this select 1) spawn server_deaths};

	"PVDZE_log_lockUnlock" addPublicVariableEventHandler {(_this select 1) spawn server_logUnlockLockEvent};
};

//Client only
if (!isDedicated) then {
	"PVDZE_plr_SetDate"		addPublicVariableEventHandler {setDate (_this select 1)};
	"PVDZE_plr_SetSaveTime"	addPublicVariableEventHandler {DZE_SaveTime = (_this select 1)};
	"PVDZE_obj_RoadFlare"	addPublicVariableEventHandler {(_this select 1) spawn object_roadFlare};
	"PVDZE_plr_Morph2"		addPublicVariableEventHandler {(_this select 1) call player_serverModelChange};
	"PVDZE_plr_Morph"		addPublicVariableEventHandler {(_this select 1) call server_switchPlayer};
	"PVDZE_obj_Fire"		addPublicVariableEventHandler {nulexp=(_this select 1) spawn BIS_Effects_Burn};
	"PVDZE_plr_FriendRQ"	addPublicVariableEventHandler {(_this select 1) call player_tagFriendlyMsg};

	// "PVDZE_obj_Debris"		addPublicVariableEventHandler {(_this select 1) call local_roadDebris};

	"norrnRaDrag"			addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animDrag.sqf"};
	"norrnRnoAnim"			addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\noAnim.sqf"};
};
