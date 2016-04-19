if (isServer) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\server_functions.sqf";
	pvs_processSetAccessCode = compile preprocessFile "\z\addons\dayz_code\eventHandlers\processSetAccessCode.sqf";
	server_spawnTraders = compile preprocessFile "\z\addons\dayz_server\compile\server_spawnTraders.sqf";
};

if (!isDedicated) then {
//	"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";
	"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";
	
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_padlock.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\util\compile.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\compile.sqf";
	
	fn_dropItem = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_dropItem.sqf"; //fnc to drop items. _item call fn_dropItem;
	BIS_Effects_Burn = compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf";
	spawn_flies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_flies.sqf";
	player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";	//Run on a players computer, checks if the player is near a zombie
	player_zombieAttack = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieAttack.sqf";	//Run on a players computer, causes a nearby zombie to attack them
	player_attackdelay = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_attackfsmdelay.sqf";
	fnc_usec_damageActions = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	fnc_inAngleSector = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inAngleSector.sqf";		//Checks which actions for nearby casualty
	fnc_usec_selfActions = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selfActions.sqf";		//Checks which actions for self
	fnc_usec_upgradeActions = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_upgradeActions.sqf";
	fnc_usec_unconscious = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player_temp_calculation = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_temperatur.sqf";		//Temperatur System //TeeChange
	player_weaponFiredNear = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponFiredNear.sqf";
	player_spawnCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnCheck.sqf";
	//player_spawnLootCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnlootCheck.sqf";
	//player_spawnZedCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnzedCheck.sqf";
	building_spawnLoot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnLoot.sqf";
	//player_taskHint = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_taskHint.sqf";
	building_spawnZombies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnZombies.sqf";
	//animal_monitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\animal_monitor.sqf";
	//building_monitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\building_monitor.sqf";
	player_fired = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";			//Runs when player fires. Alerts nearby Zeds depending on calibre and audial rating
	player_packTent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packTent.sqf";
	//control_zombieAgent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\control_zombieAgent.sqf";
	player_updateGui = switch (toLower DZE_UI) do {
		case "dark": {compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGuiDark.sqf";};
		case "epoch": {compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGuiEpoch.sqf";};
		case "vanilla": {compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGui.sqf";};
	};
	player_crossbowBolt = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_crossbowBolt.sqf";
	player_music = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_music.sqf";			//Used to generate ambient music
	//player_login = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_login.sqf";			//Used to generate ambient music
	player_death = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_death.sqf";
	player_switchModel = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_switchModel.sqf";
	player_checkStealth = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_checkStealth.sqf";
	world_sunRise = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_sunRise.sqf";
	world_surfaceNoise = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_surfaceNoise.sqf";
	player_humanityMorph = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityMorph.sqf";
	player_throwObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_throwObject.sqf";
	player_alertZombies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_alertZombies.sqf";
	player_fireMonitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
	player_countMagazines = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_countMagazines.sqf";
	player_forceSave = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_forceSave.sqf";
	//player_destroyTent = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_destroyTent.sqf";
	player_Bubble = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_Bubble.sqf";
	vehicle_getOut = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getOut.sqf";
	//Objects
	object_setpitchbank = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setpitchbank.sqf";
	object_monitorGear = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_monitorGear.sqf";
	object_dismantle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_dismantle.sqf";

	//Zombies
	zombie_findTargetAgent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_findTargetAgent.sqf";
	player_zombieSwarmAttack = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieSwarmAttack.sqf";
	zombie_loiter = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_loiter.sqf";			//Server compile, used for loiter behaviour
	zombie_generate = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_generate.sqf";			//Server compile, used for loiter behaviours
	//zombie_generateSwarm = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\swarm_generate.sqf";

	//actions
	player_addToolbelt = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_addToolbelt.sqf";
	player_addtoBack = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_addtoBack.sqf";
	player_reloadMag = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_reloadMags.sqf";
	player_createstash = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_createstash.sqf";
	player_drinkWater = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_drinkWater.sqf";
	player_consume = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_consume.sqf";
	player_emptyContainer = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_emptyContainer.sqf";
	player_useMeds = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useMeds.sqf";
	player_useAttchment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useAttchment.sqf";
	player_attachAttachment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_attachAttachment.sqf";
	player_removeAttachment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_removeAttachment.sqf";
	player_fillWater = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\water_fill.sqf";
	player_makeFire = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_makefire.sqf";
	player_chopWood = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_chopWood.sqf";
	player_mineStone = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_mineStone.sqf";
	if (DZE_modularBuild) then {
		player_build = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\modular_build.sqf";
		snap_build = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\snap_build.sqf";
	} else {
		player_build = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_build.sqf";
	};
	player_buildVanilla = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_buildVanilla.sqf";
	fn_buildCamera = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildCamera.sqf";
	object_build = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_build.sqf";
	object_upgradeFireplace = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_upgradeFireplace.sqf";
	player_wearClothes = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_wearClothes.sqf";
	player_dropWeapon = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_dropWeapon.sqf";
	//player_setTrap = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_setTrap.sqf";
	object_pickup = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_pickup.sqf";
	//player_flipvehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_flipvehicle.sqf";
	//player_sleep = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_sleep.sqf";
	player_combineMag = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_combineMags.sqf";
	player_createquiver = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_createQuiver.sqf";
	player_fillquiver = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_fillQuiver.sqf";
	//player_takearrow = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_takeArrow.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_switchWeapon.sqf";
	//player_goFishing = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_goFishing.sqf";
	player_gather = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_gather.sqf";
	player_fixBottle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_fixBottle.sqf";
	player_tearClothes = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_tearClothes.sqf";
	//object_remove = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\remove.sqf";
	player_fixHatchet = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_fixTools.sqf";
	player_sharpen = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_sharpen.sqf";

	//ui
	player_selectSlot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_selectSlot.sqf";
	player_gearSet = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSet.sqf";
	ui_changeDisplay = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_changeDisplay.sqf";
    ui_gear_sound = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_gear_sound.sqf";

	//playerstats
	horde_epeen_fnc_fill_page = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\fill_page_fnc.sqf";
	horde_epeen_determine_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\determine_humanity_fnc.sqf";
	horde_epeen_setText_journal_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_journal.sqf";
	horde_epeen_setText_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_humanity.sqf";
	horde_epeen_setText_stats_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_stats.sqf";
	horde_epeen_show_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\show_humanity_fnc.sqf";

	//System
	player_spawn_2 = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_2.sqf";
	infectedcamps = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_infectedcamps.sqf";
	//camp_spawnZombies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\camp_spawnZombies.sqf";			//Server compile, used for loiter behaviour

	//Crafting
	fn_updateCraftUI = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_updateCraftUI.sqf";
	player_craftItem = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem.sqf";
	player_craftItemVanilla = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItemVanilla.sqf";
	player_craftItemGUI = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItemGUI.sqf";
	player_checkRecipe = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_checkRecipe.sqf";	
		
	// EPOCH ADDITIONS
	autoRunOff = {autoRunActive = false; terminate autoRunThread; player playActionNow "Stop";};
	dog_findTargetAgent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dog_findTargetAgent.sqf";
	dze_getModelName = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_getModelName.sqf";
	dze_isnearest_player = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_isNearestPlayer.sqf"; 
	dze_surrender_off = {player setVariable ["DZE_Surrendered",false,true]; DZE_Surrender = false;};
	epoch_tempKeys = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_tempKeys.sqf";
	epoch_totalCurrency = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_totalCurrency.sqf";
	epoch_itemCost = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_itemCost.sqf";
	epoch_returnChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_returnChange.sqf";
	fn_gearMenuChecks = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_gearMenuChecks.sqf";
	player_addDuplicateTool = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_addDuplicateTool.sqf";
	player_antiWall = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_antiWall.sqf";
	player_changeCombo = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_changeCombo.sqf";
	player_checkItems =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_checkItems.sqf";
	player_copyKey = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_copyKey.sqf";
	player_deathBoard =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\list_playerDeathsAlt.sqf";
	player_harvest = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_harvest.sqf";
	player_harvestPlant = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_harvestPlant.sqf";
	player_hasTools = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_hasTools.sqf";
	player_loadCrate = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_loadCrate.sqf";
	player_lockVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_lockVault.sqf";
	player_packVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packVault.sqf";
	player_plotPreview = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_showPlotRadius.sqf";
	player_removeItems = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_removeItems.sqf";
	player_removeNearby = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_removeNearby.sqf";
	player_removeObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\remove.sqf";
	player_traderCity = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderCity.sqf";
	player_unlockDoor = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockDoor.sqf";
	player_unlockVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockVault.sqf";
	player_upgradeVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_upgradeVehicle.sqf";
	player_vaultPitch = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\vault_pitch.sqf";
	pz_attack = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\pzombie\pz_attack.sqf";
	
	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = _this select 0;
		_dis = _this select 1;
		_maxDis = _this select 2;
		//diag_log ("VAL:  " + str(_this));
		_maxDis = 0.1 max _maxDis;
		_val = (_maxDis - _dis) max 0;
		_maxExp = ((exp 2) * _maxDis);
		_myExp = ((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};

	ui_initDisplay = {
		private ["_ctrlBleed","_ctrlFracture"];
		disableSerialization;
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = _display displayCtrl 1204;
		_control ctrlShow false;
		if (!r_player_injured) then {
			_ctrlBleed = _display displayCtrl 1303;
			_ctrlBleed ctrlShow false;
		};
		if (!r_fracture_legs && !r_fracture_arms) then {
			_ctrlFracture = _display displayCtrl 1203;
			_ctrlFracture ctrlShow false;
		};
		/* // These controls don't exist yet
		_ctrlDogFoodBorder = _display displayCtrl 1501;
		_ctrlDogFoodBorder ctrlShow false;
		_ctrlDogFood = _display displayCtrl 1701;
		_ctrlDogFood ctrlShow false;

		_ctrlDogWaterBorder = _display displayCtrl 1502;
		_ctrlDogWaterBorder ctrlShow false;
		_ctrlDogWater = _display displayCtrl 1702;
		_ctrlDogWater ctrlShow false
		*/
	};

	dayz_angleCheck = {
		private ["_degree","_tPos","_zPos","_inAngle"];
		_target = _this select 0;
		_agent = _this select 1;
		_degree = _this select 2;
		_inAngle = false;
		_tPos = getPosASL _target;
		_zPos = getPosASL _agent;
		_eyeDir = direction _agent;
		_inAngle = [_zPos,_eyeDir,_degree,_tPos] call fnc_inAngleSector;
		_inAngle
	};
	
	dayz_losCheck = {
		private ["_cantSee","_target","_agent"];
		_target = _this select 0; // PUT THE PLAYER IN FIRST ARGUMENT!!!!
		_agent = _this select 1;
		_cantSee = true;
		
		if ((!isNull _target) && (!isNull _agent)) then {
			private ["_tPos","_zPos"];
			_tPos = eyePos _target;
			_zPos = eyePos _agent;
			if ((count _tPos > 0) && (count _zPos > 0)) then {
				_cantSee = terrainIntersectASL [(eyePos _target), (eyePos _agent)];
				//diag_log ("terrainIntersectASL: " + str(_cantSee));
				
				if (!_cantSee) then {
					_cantSee = lineIntersects [(eyePos _target), (eyePos _agent)];
					//diag_log ("lineIntersects: " + str(_cantSee));
				};
			};
		};
		_cantSee
	};
	/*
	dayz_dropItem = {
		private ["_nearByPile","_item"];
		
		_type = _this select 0;
		_dropItem = _this select 1;
		_dropAmount = _this select 2;
	
		_nearByPile = nearestObjects [(getPosATL player), ["WeaponHolder","WeaponHolderBase"],2];
		if (count _nearByPile == 0) then {
			_item = createVehicle ["WeaponHolder", (getPosATL player), [], 0.0, "CAN_COLLIDE"];
		} else {
			_item = _nearByPile select 0;
		};
		_item addMagazineCargoGlobal [_dropItem,_dropAmount];
		_item setvelocity [0,0,1];
	};
	*/
	dayz_NutritionSystem = {
		private ["_type","_baseRegen","_nutrition","_calorieCount","_hungerCount","_thirstCount","_tempCount","_Thirst","_Hunger","_bloodregen","_golbalNutrition"];
		//["type",regen,[NutritionTable,thirst(Working Class),hunger(Working Class)]]
		//info to be added
		_type = _this select 0;
		_baseRegen = _this select 1;
		_nutrition = _this select 2;
		
		//Nutrition array
		_calorieCount = ((_this select 2) select 0);
		//gain
		_hungerCount = ((_this select 2) select 1);
		_thirstCount = ((_this select 2) select 2);
		_tempCount = ((_this select 2) select 3);
		
		//3610 is based on a 80kg male 180cm tall
		if (_calorieCount > 0) then {
			_hungerCount = _hungerCount + (SleepFood * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_hunger / SleepFood))) / 100));
			_thirstCount = _thirstCount + (SleepWater * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_thirst / SleepWater))) / 100));
		};
		
		switch (_type) do {
			case "FoodDrink": {
				//hunger
				if (_hungerCount > 0) then { 
					if (dayz_hunger > _hungerCount) then {
						dayz_hunger = dayz_hunger - (_hungerCount);  
					} else {
						dayz_hunger = 0;
					};
				};
				//thirst
				if (_thirstCount > 0) then { 
					if (dayz_thirst > _thirstCount) then {
						dayz_thirst = dayz_thirst - _thirstCount;
					} else {
						dayz_thirst = 0;
					};
				};
				//temp
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + _tempCount; };
				//calorie
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition + _calorieCount; };
				//blood
				if (_baseRegen > 0) then { r_player_bloodregen = r_player_bloodregen + _baseRegen; };
			};
									
			case "Working": {
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition - _calorieCount; };
				if (_thirstCount > 0) then { dayz_thirst = dayz_thirst + _thirstCount; };
				if (_hungerCount > 0) then { dayz_hunger = dayz_hunger + _hungerCount; };
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + _tempCount; };
			};
		
		};

		dayz_thirst = (dayz_thirst min SleepWater) max 0;
		dayz_hunger = (dayz_hunger min SleepFood) max 0;
		dayz_temperatur = (dayz_temperatur min dayz_temperaturmax) max dayz_temperaturmin;
		//systemChat str [ "nutrition, r_player_bloodregen+=",_baseRegen,"dayz_nutrition+=", _calorieCount, "dayz_thirst+=", _thirstCount, "dayz_hunger+=", _hungerCount ];
		//systemChat format ["%6, Nutrition add: %1, Nutrition Total: %2, Thirst: %3, Hunger: %4, dayz_temperatur: %5",_this,dayz_nutrition,dayz_thirst,dayz_hunger,dayz_temperatur];
		//diag_log format ["%6, Nutrition add: %1, Nutrition Total: %7/%2, Thurst: %3, Hunger: %4, BloodRegen: %5",_this,r_player_Nutrition,_Thirst,_Hunger,_bloodregen,_type,_golbalNutrition];
	};

	gear_ui_offMenu = {
		private["_control","_parent","_menu","_grpPos"];
		disableSerialization;
		_control = _this select 0;
		_parent = findDisplay 106;
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
		//private["_control","_parent","_menu","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = _parent displayCtrl 6902;
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

	gear_ui_hide = {
		//private["_display","_BP"];
		disableSerialization;
		_display = findDisplay 106;
		_BP = unitBackpack player;
		if (ctrlShown (_display displayCtrl 159)) then {//prevent background images in backpack view
			for "_i" from 1006 to 1011 do {
				(_display displayCtrl _i) ctrlShow false;
			};
		} else {
			for "_i" from 1006 to 1011 do {
				if (!(ctrlShown (_display displayCtrl _i))) then {
					(_display displayCtrl _i) ctrlShow true;
				};
			};
		};
		//hide buttons if unnecessary
		if (isNull _BP || ((typeOf _BP) == "")) then {
			(_display displayCtrl 132) ctrlShow false;
			(_display displayCtrl 157) ctrlShow false;
			(_display displayCtrl 158) ctrlShow false;
		};

		// Prevent carrying 2 rifles 'exploit'
		if (primaryWeapon player == "" && dayz_onBack != "" && !(dayz_onBack in MeleeWeapons)) then {
			//["gear"] call player_switchWeapon;
			0 call dz_fn_switchWeapon;
		};

		if (primaryWeapon player != "" && (primaryWeapon player in MeleeWeapons || dayz_onBack in MeleeWeapons)) then {
			(_display displayCtrl 1204) ctrlShow true;
		} else {
			(_display displayCtrl 1204) ctrlShow false;
		};

		if (DayZ_onBack != "") then {
			(_display displayCtrl 1208) ctrlShow true;
		} else {
			(_display displayCtrl 1208) ctrlShow false;
		};

		for "_i" from 0 to (lbSize (_display displayCtrl 105)) - 1 do {
			(_display displayCtrl 105) lbSetColor [_i, [0.06, 0.05, 0.03, 1]];
		};
	};

	dayz_lowHumanity = {
		//private["_unit","_humanity","_delay"];
		_unit = _this;
		if ((_unit distance player) < 15) then {
			private "_humanity";
			_humanity = _unit getVariable["humanity",0];
			dayz_heartBeat = true;
			if (_humanity < -3000) then {
				private "_delay";
				_delay = ((10000 + _humanity) / 5500) + 0.3;
				playSound "heartbeat_1";
				uiSleep _delay;
			};
			dayz_heartBeat = false;
		};
	};
	
	dz_fn_meleeMagazines = {
		if (_this) then {
			{ player addMagazine _x } count MeleeMagazines;
		} else {
			{ player removeMagazines _x } count MeleeMagazines;
		};
	};
	
	dayz_meleeMagazineCheck = {
        //private["_meleeNum","_magType","_wpnType","_ismelee"];
        _wpnType = primaryWeapon player;
        _ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpnType >> "melee") == 1);
        if (_ismelee) then {
            private ["_meleeNum","_magType"];
            _magType = ([] + getArray (configFile >> "CfgWeapons" >> _wpnType >> "magazines")) select 0;
            _meleeNum = ({_x == _magType} count magazines player);
            if (_meleeNum < 1) then {
                player addMagazine _magType;
            };
        };

        // combine matchboxes
        private ["_matches","_fullBox","_remain"];
        _matches = 0;
        {
            if (configName inheritsFrom (configfile >> "cfgWeapons" >> _x) == "ItemMatchbox") then { // iskindOf does not work here?!
                 _matches = _matches + getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "matches");
                 player removeWeapon _x;
            };
        } count (items player);
        // limit to 1 fullbox and 1 used matchbox
        _fullBox = floor (_matches / 5);		
        _remain = _matches % 5;
        if (_fullBox > 0) then { player addWeapon "Item5Matchbox"; };
  		if (_fullBox > 1) then { 
			player addWeapon "Item4Matchbox"; 
		} else {
	        if (_remain > 0) then { player addWeapon ("Item"+str(_remain)+"Matchbox"); };
		};
    };
	
	dayz_rollingMessages = {
		//title and cutText are in the same layer, so both simultaneously on the same line overlaps and is unreadable
		if (typeName _this == "ARRAY") exitWith {cutText [_this select 0,"PLAIN DOWN"];}; //Special or multi-line message
		if ((diag_ticktime - Message_1_time) < 5) then {
			if ((time - Message_2_time) < 5) then {
				Message_3 = Message_2;
				Message_3_time = Message_2_time;
			} else {
				Message_3 = "";
			};
			
			Message_2 = Message_1;
			Message_2_time = Message_1_time;
		} else {
			Message_2 = "";
			Message_3 = "";
		};

		Message_1 = _this;
		Message_1_time = diag_ticktime;
		//"PLAIN DOWN" fits a maximum of 3 lines on screen at once
		cutText [format ["%1\n%2\n%3", Message_1, Message_2, Message_3], "PLAIN DOWN"];
	};
	
	dayz_originalPlayer = player;

	// trader menu code
	if (DZE_ConfigTrader) then {
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderMenuConfig.sqf";
	} else {
		call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderMenuHive.sqf";
	};
	// recent murders menu code
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_murderMenu.sqf";
};

//Both
BIS_fnc_selectRandom = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_selectRandom.sqf";
BIS_fnc_vectorAdd = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_vectorAdd.sqf";
BIS_fnc_halo = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_halo.sqf";
BIS_fnc_findNestedElement =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_findNestedElement.sqf";
BIS_fnc_param = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_param.sqf";
BIS_fnc_relativeDirTo = compile("private '_dir';_dir=_this call{" + (preprocessFileLineNumbers "ca\modules\Functions\geometry\fn_relativeDirTo.sqf")+"};if(_dir>180)then{_dir=_dir-360;};if(_dir<-180)then{_dir=_dir+360;};_dir");
fnc_buildWeightedArray = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";		//Checks which actions for nearby casualty
zombie_initialize = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_initialize.sqf";
object_getHit = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_getHit.sqf";			//gets the hit value for a HitPoint (i.e. HitLegs) against the selection (i.e. "legs"), returns the value
object_setHit = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHit.sqf";			//process the hit as a NORMAL damage (useful for persistent vehicles)
object_processHit = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_processHit.sqf";		//process the hit in the REVO damage system (records and sets hit)
//object_cargoCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_cargoCheck.sqf";		//Run by the player or server to monitor changes in cargo contents
fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";		//Event handler run on damage
// Vehicle damage fix
fnc_veh_handleDam = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleDam.sqf";
fnc_veh_handleKilled = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleKilled.sqf";
fnc_veh_handleRepair = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleRepair.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
fnc_veh_ResetEH = compile preprocessFileLineNumbers "\z\addons\dayz_code\init\veh_ResetEH.sqf";			//Initialize vehicle
fnc_veh_setFixServer = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_setFixServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
fnc_inString = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inString.sqf";
fnc_isInsideBuilding = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
dayz_zombieSpeak = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_speak.sqf";			//Used to generate random speech for a unit
vehicle_getHitpoints = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getHitpoints.sqf";
local_gutObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObject.sqf";		//Generated on the server (or local to unit) when gutting an object
local_zombieDamage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerZ.sqf";		//Generated by the client who created a zombie to track damage
local_setFuel = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_setFuel.sqf";			//Generated when someone refuels a vehicle
local_eventKill = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_eventKill.sqf";		//Generated when something is killed
//player_weaponCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponCheck.sqf";	//Run by the player or server to monitor whether they have picked up a new weapon
//curTimeStr = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_curTimeStr.sqf";
player_medBandage = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
//player_medInject = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medInject.sqf";
player_medEpi = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medEpi.sqf";
player_medTransfuse = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medTransfuse.sqf";
player_medMorphine = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
player_medPainkiller = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
player_medAntiBiotics = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medAntibiotics.sqf";
player_humanityChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityChange.sqf";
player_projectileNear = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_projectileNear.sqf";
player_bloodCalc = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\bloodCalc.sqf";
fn_selectRandomLocation = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandomLocation.sqf";
fn_chance = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandomChance.sqf";
fn_niceSpot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_niceSpot.sqf";
fnc_Obj_handleDam = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\obj_handleDam.sqf";
object_roadFlare = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_roadFlare.sqf";

call compile preprocessFileLineNumbers "\z\addons\dayz_code\traps\init.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\psrnd.sqf"; // pseudo random for plantSpanwer

// EPOCH ADDITIONS
local_lockUnlock = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lockUnlock.sqf"; //When vehicle is local to unit perform locking vehicle
local_gutObjectZ = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObjectZ.sqf"; //Generated on the server (or local to unit) when gutting an object
local_spawnTraderCities = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_spawnTraderCities.sqf";
FNC_GetPlayerUID = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fnc_getPlayerUID.sqf";
FNC_GetSetPos = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fnc_getSetPos.sqf";
FNC_GetPos = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fnc_getPos.sqf";
dayz_EjectPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_ejectPlayer.sqf";

player_sumMedical = {
	private["_character","_wounds","_legs","_arms","_medical","_status"];
	_character = _this;
	_wounds = [];
	if (_character getVariable["USEC_injured",false]) then {
		{
			_status = _character getVariable["hit_"+_x,false];
			if ((typeName _status == "BOOLEAN") && {(_status)}) then {
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
		_character getVariable["blood_type",""],
		_character getVariable["rh_factor",""],
		_character getVariable["messing",[0,0,0]],
		_character getVariable["blood_testdone",false]
	];
	_medical
};

init_keyboard = {
	waituntil {!(isNull (findDisplay 46))};
	keyboard_keys = nil;
	[controlNull, 1, false,false,false] call compile preprocessFileLineNumbers (MISSION_ROOT+'keyboard.sqf');
};

dayz_reduceItems = {
    private ["_item","_class","_amount","_qtyRemaining"];
	
	_item = _this select 0; //Item in current inventory.
	_class = _this select 1; //Class type to use.

	//Does player have the original item? (Not Really needed player_useMeds checks)
	if (_item in magazines player) exitWith {
		//Amount in current box (will be -1 for a random chance to start the reducing)
		_amount = getNumber(configfile >> "CfgMagazines" >> _item >> _class >> "amount");

		//Item to move too if there is some left
		_qtyRemaining = getText(configfile >> "CfgMagazines" >> _item >> _class >> "qtyRemaining");
				
		//Only run for the random amount.
		if (_amount == -1) then { 
			//Chance to start the reduction 
			if ([getNumber(configfile >> "CfgMagazines" >> _item >> _class >> "chance")] call fn_chance) then {
				player removeMagazine _item;
				player addMagazine _qtyRemaining;
			};
		} else {
			player removeMagazine _item;
			player addMagazine _qtyRemaining;
		};
	};
	true
};


dayz_inflame = {
    private ["_object","_hasTool"];

    _object = _this select 0;
	// true = light the fire
    if (_this select 1) then {
        _hasTool = false;
        {
            if (_x in items player) exitWith {
				if (dayz_matchboxCount) then {
					_matches = getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "matches");
					_qtyRemaining = getText(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "qtyRemaining");
					
					//diag_log format["%1[%2,%3]",_x,_matches,_qtyRemaining];
					if (_matches == -1) then { 
						if ([getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "chance")] call fn_chance) then {
							player removeWeapon _x;
							player addWeapon _qtyRemaining;
						};
					} else {
						// remove a match
						player removeWeapon _x;
						player addWeapon _qtyRemaining;
					};
				};
                _hasTool = true;
            };
        } count Dayz_Ignators;
		
        if (_hasTool) then { _object inflame true; };
    } else { // put out the fire
		_object inflame false;
    };
};

dayz_inflame_showMenu = {
    private ["_object","_ret","_flame","_islit","_hasTool","_whatIwant"];

    _object = _this select 0;
    _whatIwant = _this select 1;
    _ret = false;

    _islit = (inflamed _object);
	
    _hasTool = false;
    if (!_islit) then {
        {
            if (_x in items player) exitWith { _hasTool = true; };
        } count Dayz_Ignators;
    };
    _ret = (_whatIwant && !_islit && _hasTool) or (!_whatIwant && _isLit);

    _ret
};

dayz_inflame_other = {
    private ["_fireplace","_ret","_flame","_islit","_hasTool","_isLit","_pos"];

    _fireplace = _this select 0;
    if (_this select 1) then { // true = light the fire
        _flame = nearestObjects [_fireplace, ["flamable_DZ"], 1];
        _flame = if (count _flame > 0) then { _flame select 0 } else { objNull };
        if (isNull _flame) then {
            //_flame = if (local _fireplace) then { "flamable_DZ" createVehicleLocal getMarkerpos "respawn_west" } else {  createVehicle [ "flamable_DZ", getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"] };
            _flame = createVehicle [ "flamable_DZ", getPosATL _fireplace, [], 0, "CAN_COLLIDE"]; // fireplace can be local (towngenerator, poi...) but flames will be networked
            _pos = _fireplace modelToWorld (_fireplace selectionPosition "ohniste"); // ATL
            _flame setPosATL _pos;
        };

        _hasTool = false;
        {
            if (_x in items player) exitWith {
				if (dayz_matchboxCount) then {
					_matches = getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "matches");
					_qtyRemaining = getText(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "qtyRemaining");
					
					//diag_log format["%1[%2,%3]",_x,_matches,_qtyRemaining];

					if (_matches == -1) then { 
						if ([getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "chance")] call fn_chance) then {
							player removeWeapon _x;
							player addWeapon _qtyRemaining;
						};
					} else {
						// remove a match
						player removeWeapon _x;
						player addWeapon _qtyRemaining;
					};
				};
                _hasTool = true;
            };
        } count Dayz_Ignators;
        if (_hasTool) then { _flame inflame true; };

    } else { // put out the fire
        _flame = nearestObjects [_fireplace, ["flamable_DZ"], 1];
        if (count _flame > 0) then { (_flame select 0) inflame false; };
    };
};

dayz_inflame_showMenu_other = {
    private ["_fireplace","_ret","_flame","_islit","_hasTool","_whatIwant"];

    _fireplace = _this select 0;
    _whatIwant = _this select 1;
    _ret = false;
    // return a boolean. true <=> player can put out the lit fire, can light a fire with match
    _flame = nearestObjects [_fireplace, ["flamable_DZ"], 1];
    _flame = if (count _flame > 0) then { _flame select 0 } else { objNull };
    _islit = !(isNull _flame) && {(inflamed _flame)};
    _hasTool = false;
    if (!_islit) then {
        {
            if (_x in items player) exitWith { _hasTool = true; };
        } count Dayz_Ignators;
    };
    _ret = (_whatIwant && !_islit && _hasTool) or (!_whatIwant && _isLit);
	//systemChat str [_flame, _hasTool, _islit, _ret];

    _ret
};

isInflamed = {
    private "_flame";

    _flame = nearestObjects [_this, ["flamable_DZ"], 1];
    _flame = if (count _flame > 0) then { _flame select 0 } else { objNull };
    !(isNull _flame) && {(inflamed _flame)}
};

//Matchbox combine system.
dayz_combine_Inventory = {
	private ["_qty","_fullBox","_remain"];	
	//ItemMatchbox,ItemAntibiotic	
	_qty = 0;
	{
		if (configName inheritsFrom (configfile >> "cfgWeapons" >> _x) == "ItemMatchbox") then {
			 _qty = _qty + getNumber(configfile >> "cfgWeapons" >> _x >> "Ignators" >> "matches");
			 player removeWeapon _x;
		};
	} count (items player);
	
	// limit to 1 fullbox and 1 used matchbox
	_fullBox = floor (_qty / 5);
	_remain = _qty % 5;
	
	if (_fullBox > 0) then { player addWeapon "Item5Matchbox"; };
	
	if (_fullBox > 1) then { 
		player addWeapon "Item4Matchbox"; 
	} else {
		if (_remain > 0) then { player addWeapon ("Item"+str(_remain)+"Matchbox"); };
	};
};	

dayz_engineSwitch = {
	//private["_unit","_humanity","_delay"];
	_vehicle = _this select 0;
	_state = _this select 1;
	
	if (local _vehicle) then {
		_vehicle engineOn _state;
	} else {
		PVDZ_send = [_vehicle,"SetEngineState",[_vehicle,_state]];
		publicVariableServer "PVDZ_send";
	};
};