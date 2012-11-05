waituntil {!isnil "bis_fnc_init"};

BIS_Effects_Burn =			{};
object_spawnDamVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_spawnDamVehicle.sqf";
server_playerLogin =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
server_routinePlayerCheck =	compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_routinePlayerCheck.sqf";
server_updateObject =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_updatePlayer	=		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updatePlayer.sqf";
server_playerStat =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerStat.sqf";
server_publishObj = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";
server_publishVeh = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf"; // Custom to add vehicles
local_publishObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_publishObj.sqf";		//Creates the object in DB
local_deleteObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_deleteObj.sqf";		//Creates the object in DB
local_createObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_createObj.sqf";		//Creates the object in DB
server_playerSync =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
//zombie_initialize =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_initialize.sqf";
zombie_findOwner =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";

server_updateNearbyObjects =	compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateNearbyObjects.sqf";

vehicle_handleInteract = {
	private["_object"];
	_object = _this select 0;
	[_object, "all"] call server_updateObject;
};

//event Handlers
eh_localCleanup =			{
	_object = _this select 0;
	_object addEventHandler ["local", {
		if(_this select 1) then {
			private["_type","_unit"];
			_unit = _this select 0;
			_type = typeOf _unit;
			deleteVehicle _unit;
			diag_log ("CLEANUP: DELETED A " + str(_type) );
		};
	}];
};

server_characterSync = {
	//dayzCharDisco = [_characterID,_playerPos,[_weapons,_magazines],[typeOf _backpack,getWeaponCargo _backpack,getMagazineCargo _backpack],_medical,_currentState,_currentModel];
	_characterID = 	_this select 0;	
	_playerPos =	_this select 1;
	_playerGear =	_this select 2;
	_playerBackp =	_this select 3;
	_medical = 		_this select 4;
	_currentState =	_this select 5;
	_currentModel = _this select 6;
	
	_key = format["CHILD:201:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16:",_characterID,_playerPos,_playerGear,_playerBackp,_medical,false,false,0,0,0,0,_currentState,0,0,_currentModel,0];
	//diag_log ("HIVE: WRITE: "+ str(_key) + " / " + _characterID);
	_key call server_hiveWrite;
};

//was missing for server
fnc_buildWeightedArray = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";		//Checks which actions for nearby casualty

//onPlayerConnected 		"[_uid,_name] spawn server_onPlayerConnect;";
onPlayerDisconnected 		"[_uid,_name] call server_onPlayerDisconnect;";

server_hiveWrite = {
	private["_resultArray","_data"];
	//diag_log ("ATTEMPT WRITE: " + _this);
	_data = "HiveEXT" callExtension _this;
	diag_log ("WRITE: " + _data);
};

server_hiveReadWrite = {
	private["_key","_resultArray","_data"];
	_key = _this select 0;
	//diag_log ("ATTEMPT READ/WRITE: " + _key);
	_data = "HiveEXT" callExtension _key;
	diag_log ("READ/WRITE: " + _data);
	_resultArray = call compile format ["%1;",_data];
	_resultArray;
};

// Setup globals allow overwrite from init.sqf
if(isnil "dayz_MapArea") then {
	dayz_MapArea = 10000;
};
if(isnil "DynamicVehicleArea") then {
	DynamicVehicleArea = dayz_MapArea / 2;
};
if(isnil "HeliCrashArea") then {
	HeliCrashArea = dayz_MapArea / 2;
};


spawn_heliCrash = {
	private["_position","_veh","_num","_config","_itemType","_itemChance","_weights","_index","_iArray"];
	
	waitUntil{!isNil "BIS_fnc_selectRandom"};
	if (isDedicated) then {
	_position = [getMarkerPos "center",0,HeliCrashArea,10,0,2000,0] call BIS_fnc_findSafePos;
	_veh = createVehicle ["UH1Wreck_DZ",_position, [], 0, "CAN_COLLIDE"];
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_veh];
	_veh setVariable ["ObjectID",1,true];
	dayzFire = [_veh,2,time,false,false];
	publicVariable "dayzFire";
	if (isServer) then {
		nul=dayzFire spawn BIS_Effects_Burn;
	};
	_num = round(random 4) + 3;
	_config = 		configFile >> "CfgBuildingLoot" >> "HeliCrash";
	_itemType =		[] + getArray (_config >> "itemType");
	//diag_log ("DW_DEBUG: _itemType: " + str(_itemType));	
	_itemChance =	[] + getArray (_config >> "itemChance");
	//diag_log ("DW_DEBUG: _itemChance: " + str(_itemChance));	
	//diag_log ("DW_DEBUG: (isnil fnc_buildWeightedArray): " + str(isnil "fnc_buildWeightedArray"));	
	
	waituntil {!isnil "fnc_buildWeightedArray"};
	
	_weights = [];
	_weights = 		[_itemType,_itemChance] call fnc_buildWeightedArray;
	//diag_log ("DW_DEBUG: _weights: " + str(_weights));	
	for "_x" from 1 to _num do {
		//create loot
		_index = _weights call BIS_fnc_selectRandom;
		sleep 1;
		if (count _itemType > _index) then {
			//diag_log ("DW_DEBUG: " + str(count (_itemType)) + " select " + str(_index));
			_iArray = _itemType select _index;
			_iArray set [2,_position];
			_iArray set [3,5];
			_iArray call spawn_loot;
			_nearby = _position nearObjects ["WeaponHolder",20];
			{
				_x setVariable ["permaLoot",true];
			} forEach _nearBy;
		};
	};
	};
};




// Get all buildings and roads only once 
MarkerPosition = getMarkerPos "center";
RoadList = MarkerPosition nearRoads DynamicVehicleArea;
BuildingList = MarkerPosition nearObjects ["House",DynamicVehicleArea];

spawn_vehicles = {
	private["_vehicle","_isAir","_isShip","_position","_roadlist","_buildinglist","_istoomany","_marker","_veh","_objPosition","_weights","_index","_uid"];
	
	// TODO: change this part either to DB or mission config.
	
	// 1 : Motocycles
	// 2 : Bicycles, ATV's
	// 3 : Trucks Unarmed
	// 4 : Trucks
	// 5 : Cars 
	// 6 : Jeeps
	// 7 : Bus, Tractor, SUV, Vans
	// 8 : Helicopters
	// 9 : Helicopters Unarmed
	// 10: Military Unarmed
	// 11: Military
	// 12: Boat Unarmed
	// 13: Boat
	// 14: Heavy Armor Unarmed
	// 15: Fuel Trucks
	
	_AllowedVehiclesList = ["M1030_US_DES_EP1","TT650_TK_CIV_EP1","Old_moto_TK_Civ_EP1","TT650_Civ","TT650_Ins",
							"MMT_Civ","Old_bike_TK_INS_EP1","ATV_US_EP1","BAF_ATV_D","ATV_CZ_EP1",
							"hilux1_civil_3_open_EP1","hilux1_civil_2_covered","hilux1_civil_1_open","datsun1_civil_3_open","datsun1_civil_2_covered","datsun1_civil_1_open",
							"Pickup_PK_TK_GUE_EP1","Offroad_DSHKM_TK_GUE_EP1","Offroad_SPG9_TK_GUE_EP1","Pickup_PK_GUE","Pickup_PK_INS",
							"policecar","Octavia_ACR","Lada1","Lada2","LadaLM","Skoda","SkodaBlue","SkodaGreen","SkodaRed","VWGolf","car_hatchback","car_sedan","Lada1_TK_CIV_EP1","Lada2_TK_CIV_EP1","VolhaLimo_TK_CIV_EP1","Volha_1_TK_CIV_EP1","Volha_2_TK_CIV_EP1",
							"UAZ_CDF","UAZ_INS","UAZ_RU","UAZ_Unarmed_TK_CIV_EP1","UAZ_Unarmed_TK_EP1","UAZ_Unarmed_UN_EP1",
							"Ikarus","Ikarus_TK_CIV_EP1","tractor","TowingTractor","SUV_TK_CIV_EP1","S1203_TK_CIV_EP1","S1203_ambulance_EP1",
							"UH1H_DZ","UH1H_TK_EP1","CH_47F_EP1","Mi17_TK_EP1","Mi17_UN_CDF_EP1","Mi171Sh_CZ_EP1","UH60M_EP1","Mi17_CDF","MH60S","UH1Y",
							"Mi17_Civilian","MH6J_EP1","UH60M_MEV_EP1","MV22",
							"LandRover_ACR","LandRover_CZ_EP1","LandRover_TK_CIV_EP1","HMMWV","HMMWV_DES_EP1","HMMWV_M1035_DES_EP1","HMMWV_Ambulance","HMMWV_Ambulance_CZ_DES_EP1","GAZ_Vodnik_MedEvac","Ural_TK_CIV_EP1","Ural_UN_EP1","V3S_Open_TK_CIV_EP1","V3S_Open_TK_EP1","MTVR_DES_EP1","Kamaz",
							"HMMWV_M998A2_SOV_DES_EP1","HMMWV_M1151_M2_CZ_DES_EP1","LandRover_Special_CZ_EP1","LandRover_MG_TK_EP1","ArmoredSUV_PMC",
							"Fishing_Boat","PBX","PBX_ACR","Smallboat_1","Smallboat_2","Zodiac",
							"RHIB","RHIB2Turret",
							"M113Ambul_UN_EP1","M113Ambul_TK_EP1","BMP2_Ambul_CDF","BMP2_Ambul_INS",
							"KamazRefuel","MtvrRefuel_DES_EP1","UralRefuel_TK_EP1","V3S_Refuel_TK_GUE_EP1","T810Refuel_Des_ACR","T810Refuel_ACR"];
	
	
	_AllowedVehiclesChance = [0.55,0.65,0.25,0.35,0.45,
							  0.25,0.75,0.45,0.45,0.45,
							  0.40,0.35,0.35,0.25,0.20,0.25,
							  0.25,0.75,0.45,0.45,0.45,
							  0.2,0.25,0.45,0.45,0.45,0.45,0.45,0.45,0.45,0.35,0.40,0.40,0.40,0.25,0.45,0.45,0.45,
							  0.30,0.30,0.30,0.30,0.30,0.30,
							  0.15,0.15,0.15,0.05,0.05,0.30,0.15,
							  0.05,0.05,0.01,0.025,0.025,0.025,0.025,0.02,0.02,0.02,
							  0.09,0.08,0.07,0.01,
							  0.11,0.11,0.11,0.10,0.10,0.10,0.05,0.05,0.05,0.05,0.10,0.10,0.10,0.10,0.10,
							  0.05,0.05,0.01,0.05,0.01,
							  0.15,0.15,0.15,0.15,0.15,0.15,
							  0.01,0.01,
							  0.001,0.001,0.001,0.001,
							  0.001,0.001,0.001,0.001,0.001,0.001];

	
	if (isDedicated) then {
	
		waituntil {!isnil "fnc_buildWeightedArray"};
		
		_weights = [];
		_weights = [_AllowedVehiclesList,_AllowedVehiclesChance] call fnc_buildWeightedArray;
		
		waitUntil{!isNil "BIS_fnc_selectRandom"};
		// get index from fnc_buildWeightedArray
		_index = _weights call BIS_fnc_selectRandom;
		
		// select vehicle 
		_vehicle = _AllowedVehiclesList select _index;
		
		// Find Vehicle Type to better control spawns
		_isAir = _vehicle isKindOf "Air";
		_isShip = _vehicle isKindOf "Ship";
		
		

		if(_isShip || _isAir) then {
			if(_isShip) then {
				// Spawn anywhere on coast on water
				waitUntil{!isNil "BIS_fnc_selectRandom"};
				_position = [MarkerPosition,0,DynamicVehicleArea,10,1,2000,1] call BIS_fnc_findSafePos;
				//diag_log("DEBUG: spawning boat near coast " + str(_position));
			} else {
				// Spawn air anywhere that is flat
				waitUntil{!isNil "BIS_fnc_selectRandom"};
				_position = [MarkerPosition,0,DynamicVehicleArea,25,0,1,0] call BIS_fnc_findSafePos;
				//diag_log("DEBUG: spawning air anywhere flat " + str(_position));
			};
			
			
		} else {
			// Spawn around buildings and 50% near roads
			if((random 1) > 0.5) then {
							
				
				
				waitUntil{!isNil "BIS_fnc_selectRandom"};
				_position = RoadList call BIS_fnc_selectRandom;
				
				_position = _position modelToWorld [0,0,0];
				
				waitUntil{!isNil "BIS_fnc_findSafePos"};
				_position = [_position,0,10,10,0,2000,0] call BIS_fnc_findSafePos;
				
				//diag_log("DEBUG: spawning near road " + str(_position));
				
			} else {
				
				
				
				waitUntil{!isNil "BIS_fnc_selectRandom"};
				_position = BuildingList call BIS_fnc_selectRandom;
				
				_position = _position modelToWorld [0,0,0];
				
				waitUntil{!isNil "BIS_fnc_findSafePos"};
				_position = [_position,0,40,5,0,2000,0] call BIS_fnc_findSafePos;
				
				//diag_log("DEBUG: spawning around buildings " + str(_position));
			
			};
		};
		// only proceed if two params otherwise BIS_fnc_findSafePos failed and may spawn in air
		if ((count _position) == 2) then { 
		
			_dir = round(random 180);
			
			_istoomany = _position nearObjects ["AllVehicles",50];
			if((count _istoomany) > 0) exitWith { diag_log("DEBUG: Too many vehicles at " + str(_position)); };
			
			//place vehicle 
			_veh = createVehicle [_vehicle, _position, [], 0, "CAN_COLLIDE"];
			_veh setdir _dir;
			_veh setpos _position;			
			
			// Get position with ground
			_objPosition = getPosATL _veh;
			
			clearWeaponCargoGlobal  _veh;
			clearMagazineCargoGlobal  _veh;
			
			[_veh,[_dir,_objPosition],_vehicle,_uid] call server_publishVeh;
		};
	};
};

spawn_roadblocks = {
	private["_position","_veh","_num","_config","_itemType","_itemChance","_weights","_index","_iArray","_isRoad","_roadlist","_istoomany"];
	_WreckList = ["SKODAWreck","HMMWVWreck","UralWreck","datsun01Wreck","hiluxWreck","datsun02Wreck","UAZWreck","Land_Misc_Garb_Heap_EP1","Fort_Barricade_EP1"];
	_WreckLoot = ["DynamicDebris"];
	waitUntil{!isNil "BIS_fnc_selectRandom"};
	if (isDedicated) then {
	
		waitUntil{!isNil "BIS_fnc_selectRandom"};
		_position = RoadList call BIS_fnc_selectRandom;
		
		_position = _position modelToWorld [0,0,0];
		
		waitUntil{!isNil "BIS_fnc_findSafePos"};
		_position = [_position,0,10,5,0,2000,0] call BIS_fnc_findSafePos;
		
		if ((count _position) == 2) then {
			// Get position with ground
			
		
			_istoomany = _position nearObjects ["All",5];
		
			if((count _istoomany) > 0) exitWith { diag_log("DEBUG: Too many at " + str(_position)); };
		
			//_isRoad = isOnRoad _position;
		
			//_marker = createMarker [str(_position) , _position];
			//_marker setMarkerShape "ICON";
			//_marker setMarkerType "DOT";
			//_marker setMarkerText "ON";
		
	
			waitUntil{!isNil "BIS_fnc_selectRandom"};
			_spawnveh = _WreckList call BIS_fnc_selectRandom;
			waitUntil{!isNil "BIS_fnc_selectRandom"};
			_spawnloot = _WreckLoot call BIS_fnc_selectRandom;
		
			diag_log("DEBUG: Spawning a crashed " + _spawnveh + " with " + _spawnloot + " at " + str(_position));
			_veh = createVehicle [_spawnveh,_position, [], 0, "CAN_COLLIDE"];
			// Randomize placement a bit
			_veh setDir round(random 360);
			_veh setpos _position;
		

		
			dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_veh];
			_veh setVariable ["ObjectID",1,true];

			_num = round(random 4) + 3;
			_config = 		configFile >> "CfgBuildingLoot" >> _spawnloot;
			_itemType =		[] + getArray (_config >> "itemType");
			_itemChance =	[] + getArray (_config >> "itemChance");

			waituntil {!isnil "fnc_buildWeightedArray"};
		
			_weights = [];
			_weights = 		[_itemType,_itemChance] call fnc_buildWeightedArray;
			for "_x" from 1 to _num do {
				//create loot
				_index = _weights call BIS_fnc_selectRandom;
				sleep 1;
				if (count _itemType > _index) then {
					_iArray = _itemType select _index;
					_iArray set [2,_position];
					_iArray set [3,5];
					_iArray call spawn_loot;
					_nearby = _position nearObjects ["WeaponHolder",20];
					{
						_x setVariable ["permaLoot",true];
					} forEach _nearBy;
				};
			};
		};
	
	};
	
};

// Damage generator fuction
generate_new_damage = {
	private ["_damage","_rnd"];
	_rnd = random 1;
	if(_rnd > 0.5) then {
		_damage = 0;
	} else {
		_rnd = random 1;
		if(_rnd > 0.5) then {
			_damage = 0.50;
		} else {
			_damage = 1;
		};
	};
	_damage;
};

// Damage generator fuction
generate_exp_damage = {
	private ["_damage","_rnd"];
	_rnd = random 1;
	if(_rnd > 0.5) then {
		_damage = 0;
	} else {
		_rnd = random 1;
		if(_rnd > 0.5) then {
			_damage = 0.50;
		} else {
			_damage = 0.85;
		};
	};
	_damage;
};

server_getDiff =	{
	private["_variable","_object","_vNew","_vOld","_result"];
	_variable = _this select 0;
	_object = 	_this select 1;
	_vNew = 	_object getVariable[_variable,0];
	_vOld = 	_object getVariable[(_variable + "_CHK"),_vNew];
	_result = 	0;
	if (_vNew < _vOld) then {
		//JIP issues
		_vNew = _vNew + _vOld;
		_object getVariable[(_variable + "_CHK"),_vNew];
	} else {
		_result = _vNew - _vOld;
		_object setVariable[(_variable + "_CHK"),_vNew];
	};
	_result
};

server_getDiff2 =	{
	private["_variable","_object","_vNew","_vOld","_result"];
	_variable = _this select 0;
	_object = 	_this select 1;
	_vNew = 	_object getVariable[_variable,0];
	_vOld = 	_object getVariable[(_variable + "_CHK"),_vNew];
	_result = _vNew - _vOld;
	_object setVariable[(_variable + "_CHK"),_vNew];
	_result
};

dayz_objectUID = {
	private["_position","_dir","_key","_object"];
	_object = _this;
	_position = getPosATL _object;
	_dir = direction _object;
	_key = [_dir,_position] call dayz_objectUID2;
    	_key
};

dayz_objectUID2 = {
	private["_position","_dir","_key"];
	_dir = _this select 0;
	_key = "";
	_position = _this select 1;
	{
		_x = _x * 10;
		if ( _x < 0 ) then { _x = _x * -10 };
		_key = _key + str(round(_x));
	} forEach _position;
	_key = _key + str(round(_dir));
	_key
};

dayz_recordLogin = {
	private["_key"];
	_key = format["CHILD:103:%1:%2:%3:",_this select 0,_this select 1,_this select 2];
	diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
};
