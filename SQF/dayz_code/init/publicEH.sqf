// Both client and server
"PVDZ_hlt_Bleed"		addPublicVariableEventHandler {(_this select 1) spawn fnc_usec_damageBleed};
"PVCDZ_veh_SH" 			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleDam}; // set damage to vehicle part
"PVDZ_veh_SF"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleRepair}; // repair a part from a vehicle
"PVCDZ_obj_GutBody"		addPublicVariableEventHandler {(_this select 1) spawn local_gutObject};
"PVCDZ_veh_SetFuel"		addPublicVariableEventHandler {(_this select 1) spawn local_setFuel};
"PVCDZ_veh_engineSwitch"		addPublicVariableEventHandler {(_this select 1) spawn dayz_engineSwitch};

// EPOCH ADDITIONS
"PVDZE_veh_Lock"			addPublicVariableEventHandler {(_this select 1) call local_lockUnlock};
"PVDZE_veh_Init"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_ResetEH};
"PVDZE_obj_Remove" 			addPublicVariableEventHandler {_pos = (_this select 1); _obj = nearestObjects [_pos, DZE_isWreckBuilding, 5]; if (count _obj > 0) then {deleteVehicle (_obj select 0);};};
if (dayz_groupSystem) then {
	"PVDZ_groupInvite" addPublicVariableEventHandler {(_this select 1) call dayz_groupInvite};
};

// Server Eventhandler moved to dayz_server\eventHandlers\server_eventhandler.sqf

//Client only
if (!isDedicated) then {
	"dayzSetDate" addPublicVariableEventHandler {
		local _newdate = _this select 1;
		local _date = +(date); // [year, month, day, hour, minute].
		//diag_log ['Date & time received:', _newdate, 'Local date on this client:', _date];
		{
			if (_x != _newdate select _forEachIndex) exitWith {
				setDate _newdate;
				//diag_log ['Date has been reset. Local date on this client:', date];
			};
		} forEach _date;
	};
	"PVDZ_obj_RoadFlare"		addPublicVariableEventHandler {(_this select 1) spawn object_roadFlare};
	"PVDZ_drg_RaDrag"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animDrag.sqf"};
	"PVDZ_drg_RaDrop"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animDrop.sqf"};
	"PVDZ_drg_RaCarry"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animCarry.sqf"};
	"PVDZ_drg_RaLW"				addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"};
	"PVDZ_drg_RaUW"   			addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\load\unload_wounded.sqf"};
	"PVDZ_obj_Fire"				addPublicVariableEventHandler {(_this select 1) spawn BIS_Effects_Burn};
	"PVCDZ_plr_Humanity"		addPublicVariableEventHandler {(_this select 1) spawn player_humanityChange};
	"PVDZE_plr_FriendRQ"		addPublicVariableEventHandler {if (player == ((_this select 1) select 0)) then {localize "str_epoch_player_2" call dayz_rollingMessages;};};

	//Medical
	"PVCDZ_hlt_Morphine"		addPublicVariableEventHandler {(_this select 1) call player_medMorphine};
	"PVCDZ_hlt_Bandage"			addPublicVariableEventHandler {(_this select 1) call player_medBandage};
	"PVCDZ_hlt_Epi"				addPublicVariableEventHandler {(_this select 1) call player_medEpi};
	"PVCDZ_hlt_Transfuse"		addPublicVariableEventHandler {(_this select 1) spawn player_medTransfuse; };
	"PVCDZ_hlt_PainK"			addPublicVariableEventHandler {(_this select 1) call player_medPainkiller};
	"PVCDZ_hlt_AntiB"			addPublicVariableEventHandler {(_this select 1) call player_medAntiBiotics};
	"PVCDZ_hlt_Wipe"			addPublicVariableEventHandler {(_this select 1) call player_medABWipe};

	"PVCDZ_plr_Legs" addPublicVariableEventHandler {
		local _entity = (_this select 1) select 0;
		_entity setHit ["legs", 1];

		if (isPlayer _entity) then {
			_entity setVariable ["hit_legs", 2, true];
		};
	};

	"PVDZ_receiveUnconscious" addPublicVariableEventHandler {
		local _unit = (_this select 1) select 0;
		local _duration = (_this select 1) select 1;

		diag_log format["%1,%2",_unit,_duration];
		[_unit,_duration] call fnc_usec_damageUnconscious;
		_unit setVariable ["NORRN_unconscious", true, true];
	};

	if (toLower DZE_DeathMsgChat != "none" or DZE_DeathMsgRolling or DZE_DeathMsgDynamicText) then {
		"PVDZE_deathMessage" addPublicVariableEventHandler {(_this select 1) call dze_deathMessage};
	};

	if (dayz_enableFlies) then {
		// flies and swarm sound sync
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\client_flies.sqf";
	};
	"PVDZE_PingReceived" addPublicVariableEventHandler {DZE_LastPingResp = diag_tickTime;};
	"PVDZE_SetWeather" addPublicVariableEventHandler {(_this select 1) call fnc_setWeather;};
	"RemoteMessage" addPublicVariableEventHandler {(_this select 1) call fnc_remoteMessage;};
};
