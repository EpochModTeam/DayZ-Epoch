// Both client and server
"PVDZ_drg_RaLW"   		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf"};
"PVDZ_drg_RLact"		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"};
"PVDZ_hlt_Bleed"		addPublicVariableEventHandler {(_this select 1) spawn fnc_usec_damageBleed};
"PVCDZ_veh_SH" 			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleDam}; // set damage to vehicle part
"PVCDZ_obj_Damage" 		addPublicVariableEventHandler {(_this select 1) call fnc_Obj_FenceHandleDam}; // set damage to object.
"PVDZ_veh_SF"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleRepair}; // repair a part from a vehicle
"PVCDZ_obj_HideBody"	addPublicVariableEventHandler {hideBody (_this select 1)};
"PVCDZ_obj_GutBody"		addPublicVariableEventHandler {(_this select 1) spawn local_gutObject};
"PVCDZ_veh_SetFuel"		addPublicVariableEventHandler {(_this select 1) spawn local_setFuel};
"PVCDZ_veh_engineSwitch"		addPublicVariableEventHandler {(_this select 1) spawn dayz_engineSwitch};
"PVCDZ_OpenTarget_Reset" addPublicVariableEventHandler { OpenTarget_Time = diag_tickTime; }; //reset OpenTarget timer

// EPOCH ADDITIONS
"PVDZE_veh_Lock"			addPublicVariableEventHandler {(_this select 1) call local_lockUnlock};
"PVDZE_veh_Init"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_ResetEH};
"PVDZE_obj_Remove" 			addPublicVariableEventHandler {_pos = (_this select 1); _obj = nearestObjects [_pos, DZE_isWreckBuilding, 5]; if (count _obj > 0) then {deleteVehicle (_obj select 0);};};
if (dayz_groupSystem) then {
	"PVDZ_groupInvite" addPublicVariableEventHandler {(_this select 1) call dayz_groupInvite};
};

if (toLower worldName == "chernarus") then { //need to add building coordinates for other maps
	{
		private ["_building","_fckingcode"];

		_fckingcode = {
			private ["_building","_part","_dmgLvl","_who","_ammo","_dist"];

			_building = _this select 0;
			_part = _this select 1;
			_dmgLvl = 1 min (_this select 2);
			_who = _this select 3;
			_ammo = _this select 4;
			if (_part != 'glass' && _dmgLvl > 0.01) then {
				if (isServer) then {
					diag_log ['Log building damage', _this];
				} else {
					if (isNull _who) then {
						if (_ammo != "" && _ammo isKindOf "HelicopterExploSmall") then {
							_who = player;
							_dist = round (_who distance _building);
							PVDZ_sec_atp = toArray (format ["UID#%1 d4maged %2 %5 to %3pct with ammo %4 at dist4nce %6m.",
								getPlayerUID _who, typeOf _building, round (100 * _dmgLvl), _ammo, _part, _dist]);
							publicVariableServer "PVDZ_sec_atp";
						};
					} else {
						if (_who == player) then {
							_dist = round (_who distance _building);
							PVDZ_sec_atp = toArray (format ["UID#%1 d4maged %2 %5 to %3pct with ammo %4 at dist4nce %6m.",
								getPlayerUID _who, typeOf _building, round (100 * _dmgLvl), _ammo, _part, _dist]);
							publicVariableServer "PVDZ_sec_atp";
						};
					};
				};
			};
			if ((!isNull _who) && {(_who distance _building < 150)}) then {_dmgLvl} else {0}
		};
		_building = [_x select 0,_x select 1,0] nearestObject (_x select 2);
		_building removeAllEventHandlers "handleDamage";
		_building addEventHandler ["handleDamage", _fckingcode];
	} forEach [
		[7069,7727,206458], [6009,7815,203486], [10638,8016,272598], [6553,5598,223435], [6914,11431,141876], 
		[4660,9596,145234], [4788,10257,143923], [11467,7479,276453], [4628,10489,137736], [4551,6395,212964], 
		[3815,8948,132069], [3804,8925,132182], [11957,9120,261904], [12031,9158,261252], [12057,9103,261945], 
		[12227,9518,256625], [12237,9493,262727], [12256,9508,262732], [12275,9479,262631], [3064,7975,172476],
		[3055,7855,172835], [12742,9593,259691], [11254,12210,236245], [12780,10128,257815], [12805,10089,258268], 
		[12803,10119,258288], [11251,4274,353940], [13100,7177,297715], [7098,2738,966951], [6817,2702,966613], 
		[6379,2791,965644], [6414,2760,965688], [6371,2747,965657], [6386,2735,965658], [6410,2716,965659], 
		[6383,2691,965643], [6899,2561,969372], [6854,2556,969371], [6770,2525,968272], [6901,2484,969736], 
		[6783,2485,968116], [6507,2532,967694], [6835,2388,969223], [6578,2402,968509], [6661,2345,968949], 
		[6679,2302,969332], [2587,5069,188570], [6537,2302,968797], [10424,2562,362226], [10420,2368,363222], 
		[10443,2345,363318], [10481,2358,363308], [10365,2241,363748], [10518,2288,364628], [10457,2256,363454], 
		[10174,1810,366820], [3589,2175,328944]
	];
};

// Server only
if (isServer) then {
	"PVDZ_plr_Death"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerDied};
	"PVDZ_plr_Save"			addPublicVariableEventHandler {_id = (_this select 1) call server_playerSync;};
	"PVDZ_plr_SwitchMove"	addPublicVariableEventHandler {((_this select 1) select 0) switchMove ((_this select 1) select 1);}; //Needed to execute switchMove on server machine. rSwitchMove only executes on other clients
	"PVDZ_obj_Publish"		addPublicVariableEventHandler {(_this select 1) call server_publishObj}; //Used by built items (Epoch and Vanilla)
	"PVDZ_veh_Save" 		addPublicVariableEventHandler {(_this select 1) call server_updateObject};
	//"PVDZ_fence_Update"		addPublicVariableEventHandler {(_this select 1) call server_addtoFenceUpdateArray};
	"PVDZ_plr_Login1"		addPublicVariableEventHandler {_id = (_this select 1) call server_playerLogin};
	"PVDZ_plr_Login2"		addPublicVariableEventHandler {(_this select 1) call server_playerSetup};
	"PVDZ_plr_LoginRecord"	addPublicVariableEventHandler {_id = (_this select 1) spawn dayz_recordLogin};
	"PVDZ_obj_Destroy"		addPublicVariableEventHandler {(_this select 1) call server_deleteObj};
	"PVDZ_send" addPublicVariableEventHandler {(_this select 1) call server_sendToClient};
	//"PVDZ_dayzCarBomb" addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\actions\detonate_bomb.sqf";};
	//[player,[medical Array]];
	"PVDZ_playerMedicalSync" addPublicVariableEventHandler { (_this select 1) call server_medicalSync; ((_this select 1) select 0) setVariable["Medical",((_this select 1) select 1),false]; }; //diag_log format["%1 - %2",((_this select 1) select 0),((_this select 1) select 1)]; };
	
	// EPOCH ADDITIONS
	"PVDZE_maintainArea" 	addPublicVariableEventHandler {(_this select 1) spawn server_maintainArea};
	"PVDZE_obj_Swap" 		addPublicVariableEventHandler {(_this select 1) spawn server_swapObject}; //Used to downgrade and upgrade Epoch buildables
	"PVDZE_veh_Publish2"	addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh2}; //Used to purchase vehicles at traders
	"PVDZE_veh_Upgrade"		addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh3}; //Used for car upgrades
	"PVDZE_obj_Trade"		addPublicVariableEventHandler {(_this select 1) spawn server_tradeObj};
	"PVDZE_plr_TradeMenu"	addPublicVariableEventHandler {(_this select 1) spawn server_traders};
	"PVDZE_plr_DeathB"		addPublicVariableEventHandler {(_this select 1) spawn server_deaths};
	"PVDZE_handleSafeGear" 	addPublicVariableEventHandler {(_this select 1) spawn server_handleSafeGear};
	if (dayz_groupSystem) then {
		"PVDZ_Server_UpdateGroup" addPublicVariableEventHandler {(_this select 1) spawn server_updateGroup};
	};

	//Added as part of the maintenance system to allow the server to replace the damaged model with a normal model.
	/*"PVDZ_object_replace" addPublicVariableEventHandler {
		_object = _this select 1;
		_vars = _object getVariable "MaintenanceVars";
		_ownerArray = _object getVariable ["ownerArray",[]];
		
		if (!isNil "_vars" && _object isKindOf "DZ_buildables") then {
			deleteVehicle _object;
			_object = createVehicle [(_vars select 0), (_vars select 1), [], 0, if ((_vars select 0) in DayZ_nonCollide) then {"NONE"} else {"CAN_COLLIDE"}];
			_object setVariable["Maintenance",false,true];
			_object setVariable["ownerArray", _ownerArray, true];
		};
	};*/
	
	"PVDZ_sendUnconscious" addPublicVariableEventHandler {	
		_owner = (_this select 1) select 0;
		_duration = (_this select 1) select 1;
		
		diag_log format["%1,%2",_owner,_duration];
		
		PVDZ_receiveUnconscious = [_owner,_duration];
		(owner _owner) publicVariableClient "PVDZ_receiveUnconscious";
	};

	"PVDZ_Server_Simulation" addPublicVariableEventHandler {
		_agent = (_this select 1) select 0;
		_control = (_this select 1) select 1;
		
		_agent enableSimulation _control;
	};
	
	"PVDZ_obj_Delete" addPublicVariableEventHandler {
		_obj = (_this select 1) select 0;
		_player = (_this select 1) select 1;
		_type = typeOf _obj;
		_dis = _player distance _obj;

		if (_type in Dayz_plants) then {
			if (_dis < 3) then {
				deleteVehicle _obj;
			};
		};
		
		if (_type == "Blood_Trail_DZ") then {
			deleteVehicle _obj;
		};
		
		//Make sure object is a cardboardbox and make sure the player distance is under 15 meters from object
		if (_type iskindOf "CardboardBox") then {
			if (_dis < 15) then {
				deleteVehicle _obj;
			};
		};
	};

	"PVDZ_serverStoreVar" addPublicVariableEventHandler {
		_obj = (_this select 1) select 0;
		_name = (_this select 1) select 1;
		_value = (_this select 1) select 2;
			
		_obj setVariable [_name, _value];
		/*
		switch (_name) do {
			case "looted": {
				_obj =  ((_this select 1) select 0);
				_name = "looted";
				_value = ((_this select 1) select 2);
				
				_obj setVariable [_name, _value];
			};
			case "zombieSpawn": {
				_obj = ((_this select 1) select 0);
				_name = "zombieSpawn";
				_value = ((_this select 1) select 2);
				
				_obj setVariable [_name, _value];
			};
			case "USEC_BloodQty": {
				_obj = ((_this select 1) select 0);
				_name = ((_this select 1) select 1);
				_value = ((_this select 1) select 2);
				//diag_log format ["%1, %2, %3", _obj, _name, _value]; 
				if (isPlayer _obj) then {
					_obj setVariable [_name, _value];
				};
			};
		};
		*/
	};
	
	/*"PVDZ_Server_LogIt" addPublicVariableEventHandler {
		_unitSending = _this select 0;
		_info = _this select 1;
		
		diag_log format["WARNING: %1",_info];
	};*/
	
	//"PVDZ_Server_processSetAccessCode" addPublicVariableEventHandler {(_this select 1) call pvs_processSetAccessCode};
	
	//"PVDZ_Server_processCode" addPublicVariableEventHandler {(_this select 1) call pvs_processAccessCode};
	
	/*
	"PVDZ_Server_processSetAccessCode" addPublicVariableEventHandler {
		private ["_unitSending","_object","_object","_code"];
		_unitSending = (_this select 1) select 0;
		_object = (_this select 1) select 1;
		_code = (_this select 1) select 2;
		
		//diag_log format["%1, %2-%3",_unitSending,_object,_code];
		
		_ownerID = owner _unitSending;
		_ownerArray = _object getVariable ["ownerArray",["0"]];
		
		if ((_ownerArray select 0) == (getPlayerUID _unitSending)) then {
			if (_unitSending distance _object < 5) then {
				_object setVariable ["dayz_padlockCombination",_code,false];
				
				PVCDZ_Client_processAccessCode = [_code];
				_ownerID publicVariableClient "PVCDZ_Client_processAccessCode";
				
				[_object,"accessCode",_code] call server_updateObject;
				
				_object setVariable ["dayz_padlockHistory", [], true];
				_object setVariable ["dayz_padlockLockStatus", true,true];
				
				diag_log format["INFO: %1, %5 has changed the access code for %2 with %3 at time %4",(name _unitSending),(typeof _object),_code,time,(getPlayerUID _unitSending)];
			} else {
				diag_log format["WARNING: %1, %5 is asking to change access code of %2 from a distance of %3 at time %4",(name _unitSending),(typeof _object),(_unit distance _object),time,(getPlayerUID _unitSending)];
			};
		} else {
			diag_log format["WARNING: %1, %2 is trying to set a code for a gate he does not own.",(name _unitSending),(getPlayerUID _unitSending)];
		};
	};
	*/
	
	/*"PVDZ_Server_buildLock" addPublicVariableEventHandler {
		_object = (_this select 1) select 0;
		[_object,"buildLock"] call server_updateObject;
	};*/
};

//Client only
if (!isDedicated) then {
	"dayzSetDate" addPublicVariableEventHandler {
		_newdate = _this select 1;
		_date = +(date); // [year, month, day, hour, minute].
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
	"PVDZ_obj_Fire"				addPublicVariableEventHandler {(_this select 1) spawn BIS_Effects_Burn};
	"PVCDZ_plr_Humanity"		addPublicVariableEventHandler {(_this select 1) spawn player_humanityChange};
	"PVDZE_plr_FriendRQ"	addPublicVariableEventHandler {if (player == ((_this select 1) select 0)) then {localize "str_epoch_player_2" call dayz_rollingMessages;};};
	
	//Medical
	"PVCDZ_hlt_Morphine"		addPublicVariableEventHandler {(_this select 1) call player_medMorphine};
	"PVCDZ_hlt_Bandage"			addPublicVariableEventHandler {(_this select 1) call player_medBandage};
	"PVCDZ_hlt_Epi"				addPublicVariableEventHandler {(_this select 1) call player_medEpi};
	"PVCDZ_hlt_Transfuse"		addPublicVariableEventHandler {(_this select 1) spawn player_medTransfuse; };
	"PVCDZ_hlt_Transfuse_completed" addPublicVariableEventHandler {player setVariable["TransfusionCompleted",true]; };
	"PVCDZ_hlt_PainK"			addPublicVariableEventHandler {(_this select 1) call player_medPainkiller};
	"PVCDZ_hlt_AntiB"			addPublicVariableEventHandler {(_this select 1) call player_medAntiBiotics};
	
	"PVCDZ_plr_Legs" addPublicVariableEventHandler {
		_entity = (_this select 1) select 0;
		_entity setHit ["legs", 1];

		if (isPlayer _entity) then {
			_entity setVariable ["hit_legs", 2, true];
		};
	};

	"PVDZ_receiveUnconscious" addPublicVariableEventHandler {	
		_unit = (_this select 1) select 0;
		_duration = (_this select 1) select 1;
		
		diag_log format["%1,%2",_unit,_duration];	
		[_unit,_duration] call fnc_usec_damageUnconscious;
		_unit setVariable ["NORRN_unconscious", true, true];
	};
	
	/*"PVCDZ_Client_processCode" addPublicVariableEventHandler {
		_object = (_this select 1) select 0;
		_result = (_this select 1) select 1;
		_codeGuess = (_this select 1) select 2;
		
		if (_result) then {
			_object setVariable ["dayz_padlockLockStatus", false,true];
			_object setVariable ["isOpen", "1", true];
			_object setVariable ["dayz_padlockHistory", [], true];
			format[localize "STR_BLD_UNLOCKED",typeOf _object] call dayz_rollingMessages;
		} else {
			format[localize "STR_BLD_WRONG_COMBO",typeOf _object] call dayz_rollingMessages;
			_object setVariable ["dayz_padlockHistory", _codeGuess, true];
		};
	};*/
	
	/*"PVCDZ_Client_processAccessCode" addPublicVariableEventHandler {
		_codeGuess = (_this select 1) select 0;
		format[localize "STR_BLD_COMBO_SET",_codeGuess] call dayz_rollingMessages;
	};*/
	
	if (toLower DZE_DeathMsgChat != "none" or DZE_DeathMsgRolling or DZE_DeathMsgDynamicText) then {
		"PVDZE_deathMessage" addPublicVariableEventHandler {(_this select 1) call dze_deathMessage};
	};
	
	if (dayz_enableFlies) then {
		// flies and swarm sound sync
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\client_flies.sqf";
	};
};
