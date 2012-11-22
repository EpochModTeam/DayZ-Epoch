waituntil {!isnil "bis_fnc_init"};

BIS_Effects_Burn =			{};
object_spawnDamVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_spawnDamVehicle.sqf";
server_playerLogin =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
server_updateObject =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_publishObj = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";
server_publishVeh = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf"; // Custom to add vehicles
server_publishBank = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishBank.sqf";
server_traders = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_traders.sqf";
local_publishObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_publishObj.sqf";		//Creates the object in DB
local_deleteObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_deleteObj.sqf";		//Creates the object in DB
local_createObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_createObj.sqf";		//Creates the object in DB
server_playerSync =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";

server_updateNearbyObjects =	compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateNearbyObjects.sqf";

vehicle_handleInteract = {
	private["_object"];
	_object = _this select 0;
	[_object, "all"] call server_updateObject;
};

player_combatLogged = {

};

//event Handlers
eh_localCleanup =			{
	private ["_object"];
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
	private ["_characterID","_playerPos","_playerGear","_playerBackp","_medical","_currentState","_currentModel","_key"];
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
	private["_data"];
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
	
	if (isDedicated) then {
	
		waituntil {!isnil "fnc_buildWeightedArray"};
		
		_weights = [];
		_weights = [AllowedVehiclesList,AllowedVehiclesChance] call fnc_buildWeightedArray;
		
		waitUntil{!isNil "BIS_fnc_selectRandom"};
		// get index from fnc_buildWeightedArray
		_index = _weights call BIS_fnc_selectRandom;
		
		// select vehicle 
		_vehicle = AllowedVehiclesList select _index;
		
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

			_veh setVehicleInit "this lock true; this lockCargo true;";
			processInitCommands;

			
			[_veh,[_dir,_objPosition],_vehicle,true,"0"] call server_publishVeh;
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
