/*	
	FUNCTION COMPILES
*/
//Player only
if (!isDedicated) then {
	_config = 	configFile >> "CfgLoot";
	_config1 = 	configFile >> "CfgMagazines" >> "FoodEdible";
	_config2 = 	configFile >> "CfgWeapons" >> "Loot";

	"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

	BIS_Effects_Burn = 			compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf"; 
	player_zombieCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";	//Run on a players computer, checks if the player is near a zombie
	player_zombieAttack = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieAttack.sqf";	//Run on a players computer, causes a nearby zombie to attack them
	fnc_usec_damageActions =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	fnc_inAngleSector =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inAngleSector.sqf";		//Checks which actions for nearby casualty
	fnc_usec_selfActions =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selfActions.sqf";		//Checks which actions for self
	fnc_usec_unconscious =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player_temp_calculation	=	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_temperatur.sqf";		//Temperatur System	//TeeChange
	player_weaponFiredNear =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponFiredNear.sqf";
	player_animalCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_animalCheck.sqf";
	player_spawnCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnCheck.sqf";
	player_dumpBackpack = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_dumpBackpack.sqf";
	// player_spawnLootCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnlootCheck.sqf";
	// player_spawnZedCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnzedCheck.sqf";
	building_spawnLoot =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnLoot.sqf";
	// player_taskHint =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_taskHint.sqf";
	building_spawnZombies =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnZombies.sqf";
	//animal_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\animal_monitor.sqf";
	// building_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\building_monitor.sqf";
	player_fired =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";			//Runs when player fires. Alerts nearby Zeds depending on calibre and audial rating
	player_packTent =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packTent.sqf";
	player_packVault =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packVault.sqf";
	player_unlockVault =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockVault.sqf";
	
	player_unlockDoor =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockDoor.sqf";
	player_changeCombo =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_changeCombo.sqf";
	
	player_lockVault =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_lockVault.sqf";
	// control_zombieAgent = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\control_zombieAgent.sqf";
	player_updateGui =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGui.sqf";
	player_crossbowBolt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_crossbowBolt.sqf";
	spawn_flies = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_flies.sqf";
	// stream_locationFill = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationFill.sqf";
	// stream_locationDel = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationDel.sqf";
	// stream_locationCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationCheck.sqf";
	player_music = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_music.sqf";			//Used to generate ambient music
	player_login = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_login.sqf";			//Used to generate ambient music
	player_death =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_death.sqf";
	player_switchModel =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_switchModel.sqf";
	player_checkStealth =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_checkStealth.sqf";
	world_sunRise =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_sunRise.sqf";
	world_surfaceNoise =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_surfaceNoise.sqf";
	player_humanityMorph =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityMorph.sqf";
	player_throwObject = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_throwObject.sqf";
	player_alertZombies = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_alertZombies.sqf";
	player_fireMonitor = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
	player_friendliesCheck =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_friendliesCheck.sqf";
	
	//Objects
	object_roadFlare = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_roadFlare.sqf";
	object_setpitchbank	=		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setpitchbank.sqf";
	object_monitorGear =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_monitorGear.sqf";
	
	//Zombies
	zombie_findTargetAgent = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_findTargetAgent.sqf";
	zombie_loiter = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_loiter.sqf";			//Server compile, used for loiter behaviour
	zombie_generate = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_generate.sqf";			//Server compile, used for loiter behaviour
	wild_spawnZombies = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\wild_spawnZombies.sqf";			//Server compile, used for loiter behaviour
	
	//
	dog_findTargetAgent = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dog_findTargetAgent.sqf";
	
	// Vehicle damage fix
	vehicle_handleDamage    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
	vehicle_handleKilled    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";

	//actions
	player_countmagazines =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_countmagazines.sqf";
	player_addToolbelt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_addToolbelt.sqf";
	player_copyKey =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_copyKey.sqf";
	player_reloadMag =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_reloadMags.sqf";
	player_loadCrate =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_loadCrate.sqf";
	player_craftItem =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem.sqf";
	player_craftItem1 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem1.sqf";
	player_craftItem2 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem2.sqf";
	player_craftItem3 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem3.sqf";
	player_craftItem4 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem4.sqf";
	player_tentPitch =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\tent_pitch.sqf";
	player_vaultPitch =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\vault_pitch.sqf";
	player_drink =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_drink.sqf";
	player_eat =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_eat.sqf";
	player_useMeds =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useMeds.sqf";
	player_fillWater = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\water_fill.sqf";
	player_makeFire =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_makefire.sqf";
	player_chopWood =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_chopWood.sqf";
	player_harvestPlant =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_harvestPlant.sqf";
	player_goFishing =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_goFishing.sqf";
	player_build =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_build.sqf";
	player_wearClothes =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_wearClothes.sqf";
	player_dropWeapon =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_dropWeapon.sqf";
	player_setTrap =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_setTrap.sqf";
	object_pickup = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_pickup.sqf";
	player_flipvehicle = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_flipvehicle.sqf";
	player_sleep = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_sleep.sqf";
	
	//ui
	player_selectSlot =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_selectSlot.sqf";
	player_gearSync	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSync.sqf";
	player_gearSet	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSet.sqf";
	ui_changeDisplay = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_changeDisplay.sqf";
	
	//System
	player_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_monitor.sqf";
	player_spawn_1 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_1.sqf";
	player_spawn_2 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_2.sqf";
	onPreloadStarted 			"dayz_preloadFinished = false;";
	onPreloadFinished 			"dayz_preloadFinished = true;";
	
	// TODO: need move it in player_monitor.fsm
	// allow player disconnect from server, if loading hang, kicked by BE etc.
	[] spawn {
		private["_timeOut","_display","_control1","_control2"];
		disableSerialization;
		_timeOut = 0;
		dayz_loadScreenMsg = "";
		diag_log "DEBUG: loadscreen guard started.";
		_display = uiNameSpace getVariable "BIS_loadingScreen";
		_control1 = _display displayctrl 8400;
		_control2 = _display displayctrl 102;
		// 120 sec timeout
		while { _timeOut < 3000 && !dayz_clientPreload && !dayz_authed } do {

			if ( isNull _display ) then {
				waitUntil { !dialog; };
				startLoadingScreen ["","RscDisplayLoadCustom"];
				_display = uiNameSpace getVariable "BIS_loadingScreen";
				_control1 = _display displayctrl 8400;
				_control2 = _display displayctrl 102;
			};

			if ( dayz_loadScreenMsg != "" ) then {
				_control1 ctrlSetText dayz_loadScreenMsg;
				dayz_loadScreenMsg = "";
			};
			_control2 ctrlSetText format["%1",round(_timeOut*0.01)];
			_timeOut = _timeOut + 1;
			sleep 0.01;
		};
		endLoadingScreen;
		/*
		if ( !dayz_clientPreload && !dayz_authed ) then {
			diag_log "DEBUG: loadscreen guard ended with timeout.";
			disableUserInput false;
			1 cutText ["Disconnected!", "PLAIN"];
			player enableSimulation false;
		} else { diag_log "DEBUG: loadscreen guard ended."; };
		*/
	}; 

	//
	RunTime = 0;
	TotalRuns = 0;
	
	fnc_dump = {
		private["_code","_benchmark","_averageRunTime"];
		_code = _this select 0;
		_benchmark = _this select 1;
		
		RunTime = RunTime + _benchmark;
		TotalRuns = TotalRuns + 1;
		_averageRunTime = RunTime/TotalRuns;

		diag_log format["%1 - %2 (%3 / %4)",_code,_benchmark,_averageRunTime,TotalRuns];
	};
	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = 	_this select 0;
		_dis =		_this select 1;
		_maxDis = 	_this select 2;
		// diag_log ("VAL:  " + str(_this));
		_val = 		(_maxDis - _dis) max 0;
		_maxExp = 	((exp 2) * _maxDis);
		_myExp = 	((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};
	
	ui_initDisplay = {
		private["_control","_ctrlBleed","_display","_ctrlFracture","_ctrlDogFood","_ctrlDogWater","_ctrlDogWaterBorder", "_ctrlDogFoodBorder"];
		disableSerialization;
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = 	_display displayCtrl 1204;
		_control ctrlShow false;
		if (!r_player_injured) then {
			_ctrlBleed = 	_display displayCtrl 1303;
			_ctrlBleed ctrlShow false;
		};
		if (!r_fracture_legs and !r_fracture_arms) then {
			_ctrlFracture = 	_display displayCtrl 1203;
			_ctrlFracture ctrlShow false;
		};
		_ctrlDogFoodBorder = _display displayCtrl 1501;
		_ctrlDogFoodBorder ctrlShow false;
		_ctrlDogFood = _display displayCtrl 1701;
		_ctrlDogFood ctrlShow false;
		
		_ctrlDogWaterBorder = _display displayCtrl 1502;
		_ctrlDogWaterBorder ctrlShow false;
		_ctrlDogWater = _display displayCtrl 1702;
		_ctrlDogWater ctrlShow false
	};
	
	dayz_losCheck = {
		private["_target","_agent","_cantSee"];
		_target = _this select 0; // PUT THE PLAYER IN FIRST ARGUMENT!!!!
		_agent = _this select 1;
		_cantSee = true;
		if (!isNull _target) then {
			_tPos = aimPos _target;
			_zPos = aimPos _agent;
			if ((count _tPos > 0) and (count _zPos > 0)) then {
				_cantSee = terrainIntersectASL [_tPos, _zPos];
				if (!_cantSee) then {
					_cantSee = lineIntersects [_tPos, _zPos, _agent, vehicle _target];
				};
			};
		};
		_cantSee
	};
	
	eh_zombieInit = 	{
		private["_unit","_pos"];
		//_unit = 	_this select 0;
		//_pos =		getPosATL _unit;
		//_id = [_pos,_unit] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
	};
	
	dayz_equipCheck = {
		private ["_empty", "_needed","_diff","_success"];
		_config = _this;
		_empty = [player] call BIS_fnc_invSlotsEmpty;
		_needed = [_config] call BIS_fnc_invSlotType;
		_diff = [_empty,_needed] call BIS_fnc_vectorDiff;
		
		_success = true;
		{
			if (_x > 0) then {_success = false};
		} forEach _diff;
		hint format["Config: %5\nEmpty: %1\nNeeded: %2\nDiff: %3\nSuccess: %4",_empty,_needed,_diff,_success,_config];
		_success
	};

	vehicle_gear_count = {
		private["_counter"];
		_counter = 0;
		{
			_counter = _counter + _x;
		} forEach _this;
		_counter
	};
	
	dayz_spaceInterrupt = {
		private ["_dikCode", "_handled"];
		_dikCode = 	_this select 1;
		_handled = false;
		if (_dikCode in (actionKeys "GetOver")) then {
			
			if (player isKindOf  "PZombie_VB") exitWith {
				player switchAction "walkf";
			};
			if (!r_fracture_legs and (time - dayz_lastCheckBit > 4)) then {
				_inBuilding = [player] call fnc_isInsideBuilding;
				_nearbyObjects = nearestObjects[getPosATL player, dayz_disallowedVault, 8];
				if (!_inBuilding and (count _nearbyObjects == 0)) then {
					dayz_lastCheckBit = time;
					call player_CombatRoll;
				};
			};
		};
		//if (_dikCode == 57) then {_handled = true}; // space
		//if (_dikCode in actionKeys 'MoveForward' or _dikCode in actionKeys 'MoveBack') then {r_interrupt = true};
		if (_dikCode == 210) then //SCROLL LOCK
			{
				_nill = execvm "\z\addons\dayz_code\actions\playerstats.sqf";
			};
		//Prevent exploit of drag body
		if ((_dikCode in actionKeys "Prone") and r_drag_sqf) then { force_dropBody = true; };
		if ((_dikCode in actionKeys "Crouch") and r_drag_sqf) then { force_dropBody = true; };
		if (_dikCode in actionKeys "MoveLeft") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveRight") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveForward") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveBack") then {r_interrupt = true};
		if (_dikCode in actionKeys "ForceCommandingMode") then {_handled = true};
		if (_dikCode in actionKeys "PushToTalk" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "VoiceOverNet" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "PushToTalkDirect" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "Chat" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "User20" and (time - dayz_lastCheckBit > 5)) then {
			dayz_lastCheckBit = time;
			_nill = execvm "\z\addons\dayz_code\actions\playerstats.sqf";
		};
		// numpad 8 0x48 now pgup 0xC9
		if (_dikCode == 0xC9 or (_dikCode in actionKeys "User15")) then {
			DZE_Q = true;
		};
		// numpad 2 0x50 now pgdn 0xD1
		if (_dikCode == 0xD1 or (_dikCode in actionKeys "User16")) then {
			DZE_Z = true;
		};
		// numpad 4 0x4B now Q 0x10
		if (_dikCode == 0x10 or (_dikCode in actionKeys "User17")) then {
			DZE_4 = true;
		};		
		// numpad 6 0x4D now E 0x12
		if (_dikCode == 0x12 or (_dikCode in actionKeys "User18")) then {
			DZE_6 = true;
		};
		// numpad 5 0x4C now space 0x39
		if (_dikCode == 0x39 or (_dikCode in actionKeys "User19")) then {
			DZE_5 = true;
		};

		// esc
		if (_dikCode == 0x01) then {
			DZE_cancelBuilding = true;
		};
		
		if ((_dikCode == 0x3E or _dikCode == 0x0F or _dikCode == 0xD3) and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			call dayz_forceSave;
		};
		/*
		if (_dikCode in actionKeys "IngamePause") then {
			_idOnPause = [] spawn dayz_onPause;
		};
		*/
		_handled
	};
	
	player_CombatRoll = {
		DoRE = ({isPlayer _x} count (player nearEntities ["AllVehicles",100]) > 1);
		if (canRoll && animationState player in ["amovpercmrunslowwrfldf","amovpercmrunsraswrfldf","amovpercmevaslowwrfldf","amovpercmevasraswrfldf"]) then {
			canRoll = false;
			null = [] spawn {
				if (DoRE) then {
					[nil, player, rSWITCHMOVE, "ActsPercMrunSlowWrflDf_FlipFlopPara"] call RE;
				} else {
					player switchMove "ActsPercMrunSlowWrflDf_FlipFlopPara";
				};
				sleep 0.3;
				player setVelocity [(velocity player select 0) + 1.5 * sin direction player, (velocity player select 1) + 1.5 * cos direction player, (velocity player select 2) + 4];
				sleep 1;
				canRoll = true;
			};
			_handled = true;
		};
	};
	
	player_serverModelChange = {
		private["_object","_model"];
		_object = _this select 0;
		_model = _this select 1;
		if (_object == player) then {
			_model call player_switchModel;
		};
	};
	
	player_guiControlFlash = 	{
		private["_control"];
		_control = _this;
		if (ctrlShown _control) then {
			_control ctrlShow false;
		} else {
			_control ctrlShow true;
		};
	};
	
	gear_ui_offMenu = {
		private["_control","_parent","_menu"];
		disableSerialization;
		_control = 	_this select 0;
		_parent = 	findDisplay 106;
		if (!(_this select 3)) then {
			for "_i" from 0 to 9 do {
				_menu = _parent displayCtrl (1600 + _i);
				_menu ctrlShow false;
			};
			_grpPos = ctrlPosition _control;
			_grpPos set [3,0];
			_control ctrlSetPosition _grpPos;
			_control ctrlShow false;
			_control ctrlCommit 0;
		};
	};
	

	gear_ui_init = {
		private["_control","_parent","_menu","_dspl","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = 	_parent displayCtrl 6902;
		for "_i" from 0 to 9 do {
			_menu = _parent displayCtrl (1600 + _i);
			_menu ctrlShow false;
		};
		_grpPos = ctrlPosition _control;
		_grpPos set [3,0];
		_control ctrlSetPosition _grpPos;
		_control ctrlShow false;
		_control ctrlCommit 0;
	};
	
	dayz_eyeDir = {
		private["_vval","_vdir"];
		_vval = (eyeDirection _this);
		_vdir = (_vval select 0) atan2 (_vval select 1);
		if (_vdir < 0) then {_vdir = 360 + _vdir};
		_vdir
	};

	DZE_getModelName = {
		_objInfo = toArray(str(_this));
		_lenInfo = count _objInfo - 1;
		_objName = [];
		_i = 0;
		// determine where the object name starts
		{
			if (58 == _objInfo select _i) exitWith {};
			_i = _i + 1;
		} forEach _objInfo;
		_i = _i + 2; // skip the ": " part
		for "_k" from _i to _lenInfo do {
			_objName = _objName + [_objInfo select _k];
		};
		_objName = toLower(toString(_objName));
		_objName
	};
	
	dayz_originalPlayer =		player;
	
	
	// trader menu gui by maca134
	TraderDialogCatList = 12000;
	TraderDialogItemList = 12001;
	TraderDialogBuyPrice = 12002;
	TraderDialogSellPrice = 12003;

	TraderCurrentCatIndex = -1;
	TraderCatList = -1;
	TraderItemList = -1;

	TraderDialogLoadItemList = {
		private ["_index", "_trader_id", "_activatingPlayer"];
		TraderItemList = -1;
		_index = _this select 0;

		if (_index < 0 or TraderCurrentCatIndex == _index) exitWith {};
		TraderCurrentCatIndex = _index;

		_trader_id = TraderCatList select _index;
		_activatingPlayer = player;

		lbClear TraderDialogItemList;
		ctrlSetText [TraderDialogBuyPrice, ""];
		ctrlSetText [TraderDialogSellPrice, ""];

		lbAdd [TraderDialogItemList, "Loading items..."];

		dayzTraderMenuResult = call compile format["tcacheBuy_%1;",_trader_id];

		if(isNil "dayzTraderMenuResult") then {
			dayzTraderMenu = [_activatingPlayer,_trader_id];
			publicVariableServer  "dayzTraderMenu";
			waitUntil {!isNil "dayzTraderMenuResult"};
		};

		lbClear TraderDialogItemList;
		_item_list = [];
		{
			private ["_header", "_item", "_name", "_type", "_textPart", "_qty", "_buy", "_bqty", "_bname", "_btype", "_btextCurrency", "_sell", "_sqty", "_sname", "_stype", "_stextCurrency", "_order", "_order", "_afile", "_File", "_count", "_bag", "_bagclass", "_index", "_image"];
			_header = _x select 0; // "TRD"
			_item = _x select 1;
			_name = _item select 0;
			_type = _item select 1;
			switch (true) do { 
				case (_type == 1): { 
					_type = "CfgMagazines";
				}; 
				case (_type == 2): { 
					_type = "CfgVehicles";
				}; 
				case (_type == 3): { 
					_type = "CfgWeapons";
				}; 
			}; 
			// Display Name of item
			_textPart =	getText(configFile >> _type >> _name >> "displayName");

			// Total in stock
			_qty = _x select 2;

			// Buy Data from array
			_buy = _x select 3;	
			_bqty = _buy select 0;
			_bname = _buy select 1;
			_btype = _buy select 2;
			switch(true)do{ 
				case (_btype == 1): { 
					_btype = "CfgMagazines";
				}; 
				case (_btype == 2): { 
					_btype = "CfgVehicles";
				}; 
				case (_btype == 3): { 
					_btype = "CfgWeapons";
				}; 
			}; 

			// Display Name of buy item
			_btextCurrency = getText(configFile >> _btype >> _bname >> "displayName");

			_sell = _x select 4;
			_sqty = _sell select 0;
			_sname = _sell select 1;
			_stype = _sell select 2;
			switch(true)do{ 
				case (_stype == 1): { 
					_stype = "CfgMagazines";
				}; 
				case (_stype == 2): { 
					_stype = "CfgVehicles";
				}; 
				case (_stype == 3): { 
					_stype = "CfgWeapons";
				}; 
			}; 
			// Display Name of sell item
			_stextCurrency =	getText(configFile >> _stype >> _sname >> "displayName");

			// Menu sort order
			_order = _x select 5;

			// Action file to use for trade
			_afile = _x select 7;
			_File = "\z\addons\dayz_code\actions\" + _afile + ".sqf";
			
			_count = 0;
			if(_type == "CfgVehicles") then {
				if (_afile == "trade_backpacks") then {
					_bag = unitBackpack player;
					_bagclass = typeOf _bag;
					if(_name == _bagclass) then {
						_count = 1;
					};
				} else {
					_count = {(typeOf _x) == _name} count (nearestObjects [player, [_name], 20]);
				}
			};

			if(_type == "CfgMagazines") then {
				_count = {_x == _name} count magazines player;
			};

			if(_type == "CfgWeapons") then {
				_count = {_x == _name} count weapons player;
			};

			_index = lbAdd [TraderDialogItemList, format["%1 (%2)", _textPart, _name]];

			if (_count > 0) then {
				lbSetColor [TraderDialogItemList, _index, [0, 1, 0, 1]];
			};

			_image = getText(configFile >> _type >> _name >> "picture");
			lbSetPicture [TraderDialogItemList, _index, _image];

			_item_list set [count _item_list, [
				_name,
				_textPart,
				_bqty,
				_bname,
				_btextCurrency,
				_sqty,
				_sname,
				_stextCurrency,
				_header,
				_File
			]];
		} forEach dayzTraderMenuResult;
		TraderItemList = _item_list;
	};

	TraderDialogShowPrices = {
		private ["_index", "_item"];
		_index = _this select 0;
		if (_index < 0) exitWith {};
		while {count TraderItemList < 1} do { sleep 1; };
		_item = TraderItemList select _index;
		ctrlSetText [TraderDialogBuyPrice, format["%1 %2", _item select 2, _item select 4]];
		ctrlSetText [TraderDialogSellPrice, format["%1 %2", _item select 5, _item select 7]];
	};

	TraderDialogBuy = {
		private ["_index", "_item", "_data"];
		_index = _this select 0;
		if (_index < 0) exitWith {
			cutText ["Trading canceled." , "PLAIN DOWN"];
		};
		_item = TraderItemList select _index;
		_data = [_item select 0, _item select 3, 1, _item select 2, "buy", _item select 4, _item select 1, _item select 8];
		[0, player, '', _data] execVM (_item select 9);
		TraderItemList = -1;
	};

	TraderDialogSell = {
		private ["_index", "_item", "_data"];
		_index = _this select 0;
		if (_index < 0) exitWith {
			cutText ["Trading canceled." , "PLAIN DOWN"];
		};
		_item = TraderItemList select _index;
		_data = [_item select 6, _item select 0, _item select 5, 1, "sell", _item select 1, _item select 7, _item select 8];
		[0, player, '', _data] execVM (_item select 9);
		TraderItemList = -1;
	};

	// murder message boards by maca134
	/*
	_death_record = [
		0_victimName,
		1_killerName,
		2_weapon,
		3_distance,
		4ServerCurrentTime
	];
	*/
	EpochDeathBoardDialogList = 21000;
	EpochDeathBoardDialogSText = 21001;
	EpochDeathBoardDeaths = [];


	EpochDeathBoardLoad = {
		createdialog "EpochDeathBoardDialog";
		/*dayzPlayerDeathsResult = [
			["maca134","Bob","AK_107_Kobra",100,[8,30]],
			["Fred","Jonny","FN_FAL",42,[8,32]],
			["maca134","Bob","M9SD",100,[5,30]],
			["Fred","Jonny","BAF_AS50_scoped",42,[8,34]]
		];*/
		{
			lbAdd [EpochDeathBoardDialogList, (_x select 0)];
		} forEach dayzPlayerDeathsResult;
	};


	EpochDeathBoardClick = {
		disableSerialization;
		private ["_i", "_record", "_output", "_record_stxt", "_name", "_image", "_h", "_m", "_format"];
		_quotes = [
			"Death is God's way of telling you not to be such a wise guy.",
			"What happens if you get scared half to death, twice?",
			"Don't upset me.. I'm running out of places to hide the bodies.",
			"Don't run, you'll just die tired.",
			"Give me immortality or give me death.",
			"I can't live with death; he's always leaving the toilet seat up.",
			"Why won't you die?!?!",
			"Guns don't kill people; death kills people. It's a proven medical fact."
		];
		_i = _this select 0;
		if (_i < 0) exitWith {};
		_output = _this select 1;
		_record = dayzPlayerDeathsResult select _i;
		_record_stxt = call compile format["epoch_death_board_record_%1;",_i];
		if(isNil "_record_stxt") then {
			_record_stxt = format["<t size='1.6' align='left'>%1</t><br /><br />", (_record select 0)];

			_format = {
				private ["_codeCount", "_str"];
				_str = format["%1", _this];
				_codeCount = (count (toArray _str));
				if (_codeCount == 1) then {
					_str = format["0%1", _str];
				};
				_str;
			};
			_h = (_record select 4) select 0;
			_m = (_record select 4) select 1;
		
			_record_stxt = format["%1<t size='1' align='left'>Died at %2:%3</t><br /><br />", _record_stxt, (_h call _format), (_m call _format)];
		
			if ((_record select 1) != 'unknown') then {
				_record_stxt = format["%1<t size='1' align='left'>Was killed by %2</t><br /><br />", _record_stxt, (_record select 1)];
			};
		
			if ((_record select 2) != 'unknown') then {
				_name = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "displayName");
				_image = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "picture");
				_record_stxt = format["%1<t size='1' align='left'>With a %2<br /><img size='3' image='%3' /></t><br /><br />", _record_stxt, _name, _image];
			};
		
			if (format["%1", (_record select 3)] != 'unknown') then {
				_record_stxt = format["%1<t size='1' align='left'>At a distance of %2m</t><br /><br />", _record_stxt, (_record select 3)];
			};
			_record_stxt = format["%1<t font='Bitstream'>%2</t>", _record_stxt, (_quotes call BIS_fnc_selectRandom)];
			call compile format["epoch_death_board_record_%1 = ""%2"";" ,_i , _record_stxt];
		};
		_output ctrlSetStructuredText parseText _record_stxt;
	};

	
	
};

	progressLoadingScreen 0.8;
	
//Both
	BIS_fnc_selectRandom =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandom.sqf";		//Checks which actions for nearby casualty
	fnc_buildWeightedArray = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";		//Checks which actions for nearby casualty
	fnc_usec_damageVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerVehicle.sqf";		//Event handler run on damage
	zombie_initialize = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\init\zombie_init.sqf";
	// object_vehicleKilled =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_vehicleKilled.sqf";		//Event handler run on damage
	object_setHitServer =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHitServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_setFixServer =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setFixServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_getHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_getHit.sqf";			//gets the hit value for a HitPoint (i.e. HitLegs) against the selection (i.e. "legs"), returns the value
	object_setHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHit.sqf";			//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_processHit =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_processHit.sqf";		//process the hit in the REVO damage system (records and sets hit)
	object_delLocal =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_delLocal.sqf";
	// object_cargoCheck =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_cargoCheck.sqf";		//Run by the player or server to monitor changes in cargo contents
	fnc_usec_damageHandler =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";		//Event handler run on damage
	fnc_veh_ResetEH = compile preprocessFileLineNumbers "\z\addons\dayz_code\init\veh_ResetEH.sqf";			//Initialize vehicle
	// Vehicle damage fix
	vehicle_handleDamage    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
	vehicle_handleKilled    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";
	//fnc_vehicleEventHandler = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\init\vehicle_init.sqf";			//Initialize vehicle
	fnc_inString = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inString.sqf";	
	fnc_isInsideBuilding = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
	fnc_isInsideBuilding2 = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding2.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
	fnc_isInsideBuilding3 = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding3.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
	dayz_zombieSpeak = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_speak.sqf";			//Used to generate random speech for a unit
	vehicle_getHitpoints =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getHitpoints.sqf";
	local_gutObject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObject.sqf";		//Generated on the server (or local to unit) when gutting an object
	local_lockUnlock =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lockUnlock.sqf";		//When vehicle is local to unit perform locking vehicle
	local_gutObjectZ =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObjectZ.sqf";		//Generated on the server (or local to unit) when gutting an object
	local_zombieDamage = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerZ.sqf";		//Generated by the client who created a zombie to track damage
	local_setFuel =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_setFuel.sqf";			//Generated when someone refuels a vehicle
	local_eventKill = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_eventKill.sqf";		//Generated when something is killed
	//player_weaponCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponCheck.sqf";	//Run by the player or server to monitor whether they have picked up a new weapon
	curTimeStr =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_curTimeStr.sqf";
	player_medBandage =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
	player_medInject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medInject.sqf";
	player_medEpi =				compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medEpi.sqf";
	player_medTransfuse =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medTransfuse.sqf";
	player_medMorphine =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	player_breaklegs =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBreakLegs.sqf";
	player_medPainkiller =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
	world_isDay = 				{if ((daytime < (24 - dayz_sunRise)) and (daytime > dayz_sunRise)) then {true} else {false}};
	player_humanityChange =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityChange.sqf";
	spawn_loot =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_loot.sqf";
	spawn_loot_small =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_loot_small.sqf";
	// player_projectileNear = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_projectileNear.sqf";
	
	player_sumMedical = {
		private["_character","_wounds","_legs","_arms","_medical"];
		_character = 	_this;
		_wounds =		[];
		if (_character getVariable["USEC_injured",false]) then {
			{
				if (_character getVariable[_x,false]) then {
					_wounds set [count _wounds,_x];
				};
			} forEach USEC_typeOfWounds;
		};
		_legs = _character getVariable ["hit_legs",0];
		_arms = _character getVariable ["hit_arms",0];
		_medical = [
			_character getVariable["USEC_isDead",false],
			_character getVariable["NORRN_unconscious", false],
			_character getVariable["USEC_infected",false],
			_character getVariable["USEC_injured",false],
			_character getVariable["USEC_inPain",false],
			_character getVariable["USEC_isCardiac",false],
			_character getVariable["USEC_lowBlood",false],
			_character getVariable["USEC_BloodQty",12000],
			_wounds,
			[_legs,_arms],
			_character getVariable["unconsciousTime",0],
			_character getVariable["messing",[0,0]]
		];
		_medical
	};
	
	
	//Server Only
	if (isServer) then {
		call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\server_functions.sqf";
	} else {
		eh_localCleanup = {};
	};
	
	
	//Start Dynamic Weather
	execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";
	initialized = true;