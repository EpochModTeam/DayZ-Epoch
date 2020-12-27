"PVDZ_plr_Death"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerDied};
"PVDZ_plr_Save"			addPublicVariableEventHandler {_id = (_this select 1) call server_playerSync;};
"PVDZ_plr_SwitchMove"	addPublicVariableEventHandler {((_this select 1) select 0) switchMove ((_this select 1) select 1);}; //Needed to execute switchMove on server machine. rSwitchMove only executes on other clients
"PVDZ_obj_Publish"		addPublicVariableEventHandler {(_this select 1) call server_publishObj}; //Used by built items (Epoch and Vanilla)
"PVDZ_veh_Save" 		addPublicVariableEventHandler {(_this select 1) call server_updateObject};
"PVDZ_plr_Login1"		addPublicVariableEventHandler {_id = (_this select 1) call server_playerLogin};
"PVDZ_plr_Login2"		addPublicVariableEventHandler {(_this select 1) call server_playerSetup};
"PVDZ_plr_LoginRecord"	addPublicVariableEventHandler {_id = (_this select 1) spawn dayz_recordLogin};
"PVDZ_obj_Destroy"		addPublicVariableEventHandler {(_this select 1) call server_deleteObj};
"PVDZ_plr_Delete"		addPublicVariableEventHandler {(_this select 1) spawn sched_co_deleteVehicle}; // Delete hided players
"PVDZ_send" addPublicVariableEventHandler {(_this select 1) call server_sendToClient};
//"PVDZ_dayzCarBomb" addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\actions\detonate_bomb.sqf";};
//[player,[medical Array]];
"PVDZ_playerMedicalSync" addPublicVariableEventHandler { (_this select 1) call server_medicalSync; ((_this select 1) select 0) setVariable["Medical",((_this select 1) select 1),false]; }; //diag_log format["%1 - %2",((_this select 1) select 0),((_this select 1) select 1)]; };

// EPOCH ADDITIONS
"PVDZE_maintainArea" 	addPublicVariableEventHandler {(_this select 1) spawn server_maintainArea};
"PVDZE_obj_Swap" 		addPublicVariableEventHandler {(_this select 1) spawn server_swapObject}; //Used to downgrade and upgrade Epoch buildables
"PVDZE_veh_Publish2"	addPublicVariableEventHandler {(_this select 1) call server_publishVeh2}; //Used to purchase vehicles at traders
"PVDZE_veh_Upgrade"		addPublicVariableEventHandler {(_this select 1) spawn server_publishVeh3}; //Used for car upgrades
"PVDZE_obj_Trade"		addPublicVariableEventHandler {(_this select 1) spawn server_tradeObj};	//Logs trading
"PVDZE_plr_DeathB"		addPublicVariableEventHandler {(_this select 1) spawn server_deaths};
"PVDZE_handleSafeGear" 	addPublicVariableEventHandler {(_this select 1) call server_handleSafeGear};
"SK_changeCode" 		addPublicVariableEventHandler {(_this select 1) call server_changeCode};

if (dayz_groupSystem) then {
	"PVDZ_Server_UpdateGroup" addPublicVariableEventHandler {(_this select 1) spawn server_updateGroup};
};

"PVDZE_PingSend" addPublicVariableEventHandler {PVDZE_PingReceived = 1; (owner (_this select 1)) publicVariableClient "PVDZE_PingReceived";};

"PVDZ_Server_Simulation" addPublicVariableEventHandler {
	local _agent = (_this select 1) select 0;
	local _control = (_this select 1) select 1;

	_agent enableSimulation _control;
};

"PVDZ_obj_Delete" addPublicVariableEventHandler {
	local _obj = (_this select 1) select 0;
	local _player = (_this select 1) select 1;
	local _type = typeOf _obj;
	local _dis = _player distance _obj;

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
	local _obj = (_this select 1) select 0;
	local _name = (_this select 1) select 1;
	local _value = (_this select 1) select 2;

	_obj setVariable [_name, _value];
};

"PVDZ_sec_atp" addPublicVariableEventHandler {
	local _y = _this select 1;

	call {
		if (typeName _y == "STRING") exitwith { // just some logs from the client
			diag_log _y;
		};
		if (count _y == 2) exitwith { // wrong side
			diag_log format["P1ayer %1 reports possible 'side' hack. Server may be compromised!",(_y select 1) call fa_plr2Str];
		};
 		// player hit		
		local _source = _y select 1;
		if (!isNull _source) then {
			local _unit = _y select 0;
			diag_log format ["P1ayer %1 hit by %2 %3 from %4 meters in %5 for %6 damage",
			_unit call fa_plr2Str, if (!isPlayer _source && alive _source) then {"AI"} else {_source call fa_plr2Str}, _y select 2, _y select 3, _y select 4, _y select 5];
		};
	};
};

"PVDZ_objgather_Knockdown" addPublicVariableEventHandler {
	local _tree = (_this select 1) select 0;
	local _player = (_this select 1) select 1;
	local _dis = _player distance _tree;
	local _name = if (alive _player) then {name _player} else {"DeadPlayer"};
	local _uid = getPlayerUID _player;
	local _treeModel = _tree call fn_getModelName;

	if (_dis < 30 && {_treeModel in dayz_trees or (_treeModel in dayz_plant)} && {_uid != ""}) then {
		_tree setDamage 1;
		dayz_choppedTrees set [count dayz_choppedTrees,_tree];
		diag_log format["Server setDamage on tree or plant %1 chopped down by %2(%3)",_treeModel,_name,_uid];
	};
};