waituntil {!isnil "bis_fnc_init"};

BIS_MPF_remoteExecutionServer = {
	if ((_this select 1) select 2 == "JIPrequest") then {
		[nil,(_this select 1) select 0,"loc",rJIPEXEC,[any,any,"per","execVM","ca\Modules\Functions\init.sqf"]] call RE;
	};
};

BIS_Effects_Burn =			{};
server_playerLogin =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
server_updateObject =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_publishObj = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";	//Creates the object in DB
server_deleteObj =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObj.sqf"; 	//Removes the object from the DB
server_publishVeh = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf"; // Custom to add vehicles
server_tradeObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_tradeObject.sqf";
server_traders = 			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_traders.sqf";
server_playerSync =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";
server_updateNearbyObjects =	compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateNearbyObjects.sqf";
server_spawnCrashSite  =    compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_spawnCrashSite.sqf";
server_handleZedSpawn =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_handleZedSpawn.sqf";

fnc_plyrHit   = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\fnc_plyrHit.sqf";
server_deaths = 			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDeaths.sqf";


vehicle_handleInteract = {
	private["_object"];
	_object = _this select 0;
	needUpdate_objects = needUpdate_objects - [_object];
	[_object, "all"] call server_updateObject;
};

vehicle_handleServerKilled = {
	private["_unit","_killer"];
	_unit = _this select 0;
	_killer = _this select 1;
		
	[_unit, "killed"] call server_updateObject;
	
	_unit removeAllMPEventHandlers "MPKilled";
	_unit removeAllEventHandlers "Killed";
	_unit removeAllEventHandlers "HandleDamage";
	_unit removeAllEventHandlers "GetIn";
	_unit removeAllEventHandlers "GetOut";
};

check_publishobject = {
	private["_allowed","_object","_playername","_allowedObjects"];

	_object = _this select 0;
	_playername = _this select 1;
	
	_allowed = false;
       
	diag_log format ["DEBUG: Checking if Object: %1 is allowed published by %2", _object, _playername];
    _allowedObjects = ["TentStorage", "VaultStorageLocked", "Hedgehog_DZ", "Sandbag1_DZ","TrapBear","Fort_RazorWire","WoodGate_DZ","Land_HBarrier1_DZ"];   

	if ((typeOf _object) in _allowedObjects) then {
			diag_log format ["DEBUG: Object: %1 published by %2 is Safe",_object, _playername];
			_allowed = true;
	};
    _allowed
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
			 _myGroupUnit = group _unit;
 			_unit removeAllMPEventHandlers "mpkilled";
 			_unit removeAllMPEventHandlers "mphit";
 			_unit removeAllMPEventHandlers "mprespawn";
 			_unit removeAllEventHandlers "FiredNear";
			_unit removeAllEventHandlers "HandleDamage";
			_unit removeAllEventHandlers "Killed";
			_unit removeAllEventHandlers "Fired";
			_unit removeAllEventHandlers "GetOut";
			_unit removeAllEventHandlers "GetIn";
			_unit removeAllEventHandlers "Local";
			clearVehicleInit _unit;
			deleteVehicle _unit;
			deleteGroup _myGroupUnit;
			_unit = nil;
			diag_log ("CLEANUP: DELETED A " + str(_type) );
		};
	}];
};

server_hiveWrite = {
	private["_data"];
	//diag_log ("ATTEMPT WRITE: " + _this);
	_data = "HiveExt" callExtension _this;
	//diag_log ("WRITE: " +str(_data));
};

server_hiveReadWrite = {
	private["_key","_resultArray","_data"];
	_key = _this;
	//diag_log ("ATTEMPT READ/WRITE: " + _key);
	_data = "HiveExt" callExtension _key;
	//diag_log ("READ/WRITE: " +str(_data));
	_resultArray = call compile format ["%1",_data];
	_resultArray
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

//onPlayerConnected 		"[_uid,_name] spawn server_onPlayerConnect;";
onPlayerDisconnected 		"[_uid,_name] call server_onPlayerDisconnect;";

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

// Get all buildings and roads only once TODO: set variables to nil after done if nessicary 
MarkerPosition = getMarkerPos "center";
RoadList = MarkerPosition nearRoads DynamicVehicleArea;
BuildingList = MarkerPosition nearObjects ["House",DynamicVehicleArea];

spawn_vehicles = {
	private["_weights","_isOverLimit","_isAbort","_counter","_index","_vehicle","_velimit","_qty","_isAir","_isShip","_position","_dir","_istoomany","_veh","_objPosition"];
	
	if (isDedicated) then {
		waituntil {!isnil "fnc_buildWeightedArray"};
		
		_isOverLimit = true;
		_isAbort = false;
		_counter = 0;
		while {_isOverLimit} do {

			waitUntil{!isNil "BIS_fnc_selectRandom"};
			_index = AllowedVehiclesList call BIS_fnc_selectRandom;

			_vehicle = _index select 0;
			_velimit = _index select 1;

			_qty = {_x == _vehicle} count serverVehicleCounter;

			// If under limit allow to proceed
			if(_qty <= _velimit) then {
				_isOverLimit = false;
			};

			// counter to stop after 5 attempts
			_counter = _counter + 1;

			if(_counter >= 5) then {
				_isOverLimit = false;
				_isAbort = true;
			};
		};

		if (_isAbort) then {
			diag_log("DEBUG: unable to find sutable vehicle to spawn");
		} else {

			// add vehicle to counter for next pass
			serverVehicleCounter set [count serverVehicleCounter,_vehicle];
		
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
					_position = [MarkerPosition,0,DynamicVehicleArea,10,0,2000,0] call BIS_fnc_findSafePos;
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

				[_veh,[_dir,_objPosition],_vehicle,true,"0"] call server_publishVeh;
			};
		};
	};
};

spawn_roadblocks = {
	private["_position","_veh","_num","_config","_itemType","_itemChance","_weights","_index","_iArray","_isRoad","_roadlist","_istoomany"];
	_WreckList = ["SKODAWreck","HMMWVWreck","UralWreck","datsun01Wreck","hiluxWreck","datsun02Wreck","UAZWreck","Land_Misc_Garb_Heap_EP1","Fort_Barricade_EP1","Rubbish2"];
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

			_num = round(random 3);
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

dayz_objectUID3 = {
	private["_position","_dir","_key"];
	_dir = _this select 0;
	_key = "";
	_position = _this select 1;
	{
		_x = _x * 10;
		if ( _x < 0 ) then { _x = _x * -10 };
		_key = _key + str(round(_x));
	} forEach _position;
	_key = _key + str(round(_dir + time));
	_key
};

dayz_recordLogin = {
	private["_key"];
	_key = format["CHILD:103:%1:%2:%3:",_this select 0,_this select 1,_this select 2];
	_key call server_hiveWrite;
};
