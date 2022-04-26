private ["_legacyStreamingMethod","_hiveLoaded","_timeStart","_i","_key","_result","_shutdown","_res","_myArray","_val","_status","_fileName","_lastFN",
		"_VehicleQueue","_vQty","_idKey","_type","_ownerID","_worldspace","_inventory","_damage","_storageMoney","_vector","_vecExists","_ownerPUID",
		"_wsCount","_ws2TN","_ws3TN","_dir","_posATL","_wsDone","_object","_doorLocked","_isPlot","_isTrapItem","_isSafeObject",
		"_weaponcargo","_magcargo","_backpackcargo","_weaponqty","_magqty","_backpackqty","_lockable","_codeCount","_codeCount","_isTrapItem","_xTypeName","_x1",
		"_isAir","_selection","_dam","_hitpoints","_fuel","_pos"];

#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

waitUntil {!isNil "BIS_MPF_InitDone" && initialized};
if (!isNil "sm_done") exitWith {}; // prevent server_monitor be called twice (bug during login of the first player)
sm_done = false;

_legacyStreamingMethod = false; //use old object streaming method, more secure but will be slower and subject to the callExtension return size limitation.

dayz_serverIDMonitor = [];
dayz_versionNo = getText (configFile >> "CfgMods" >> "DayZ" >> "version");
dayz_hiveVersionNo = getNumber (configFile >> "CfgMods" >> "DayZ" >> "hiveVersion");
_hiveLoaded = false;
_serverVehicleCounter = [];
diag_log "HIVE: Starting";

//Stream in objects
/* STREAM OBJECTS */
//Send the key
_timeStart = diag_tickTime;

for "_i" from 1 to 5 do {
	diag_log "HIVE: trying to get objects";
	_key = format["CHILD:302:%1:%2:",dayZ_instance, _legacyStreamingMethod];
	_result = _key call server_hiveReadWrite;
	if (typeName _result == "STRING") then {
		_shutdown = format["CHILD:400:%1:",(profileNamespace getVariable "SUPERKEY")];
		_res = _shutdown call server_hiveReadWrite;
		diag_log ("HIVE: attempt to kill.. HiveExt response:"+str(_res));
	} else {
		diag_log ("HIVE: found "+str(_result select 1)+" objects" );
		_i = 99; // break
	};
};

if (typeName _result == "STRING") exitWith {
	diag_log "HIVE: Connection error. Server_monitor.sqf is exiting.";
};

diag_log "HIVE: Request sent";
_myArray = [];
_val = 0;
_status = _result select 0; //Process result
_val = _result select 1;

if (_legacyStreamingMethod) then {
	if (_status == "ObjectStreamStart") then {
		profileNamespace setVariable ["SUPERKEY",(_result select 2)];
		_hiveLoaded = true;
		//Stream Objects
		diag_log ("HIVE: Commence Object Streaming...");
		for "_i" from 1 to _val do  {
			_result = _key call server_hiveReadWriteLarge;
			_status = _result select 0;
			_myArray set [count _myArray,_result];
		};
	};
} else {
	if (_val > 0) then {
		_fileName = _key call server_hiveReadWrite;
		_lastFN = profileNamespace getVariable["lastFN",""];
		profileNamespace setVariable["lastFN",_fileName];
		saveProfileNamespace;
		if (_status == "ObjectStreamStart") then {
			profileNamespace setVariable ["SUPERKEY",(_result select 2)];
			_hiveLoaded = true;
			_myArray = Call Compile PreProcessFile _fileName;
			_key = format["CHILD:302:%1:%2:",_lastFN, _legacyStreamingMethod];
			_result = _key call server_hiveReadWrite; //deletes previous object data dump
		};
	} else {
		if (_status == "ObjectStreamStart") then {
			profileNamespace setVariable ["SUPERKEY",(_result select 2)];
			_hiveLoaded = true;
		};
	};
};

//Stream objects first then load in the vehicles
_VehicleQueue = [];
_vQty = 0;
diag_log ("HIVE: Streamed " + str(count _myArray) + " Objects.");

// Don't spawn objects if no clients are online (createVehicle fails with Ref to nonnetwork object)
if ((playersNumber west + playersNumber civilian) == 0) exitWith {
	diag_log "All clients disconnected. Server_monitor.sqf is exiting.";
};

//spawn objects
{
	//Parse Array
	_idKey = _x select 1;
	_type = _x select 2;
	_ownerID = _x select 3;
	_worldspace = _x select 4;
	_inventory = _x select 5;
	_damage = _x select 8;
	_storageMoney = _x select 9;

	if ((_type isKindOf "AllVehicles") && {!(_type isKindOf "StaticWeapon") && {!(_type in DZE_StaticWeapons)}}) then {
		_VehicleQueue set [_vQty,_x];
		_vQty = _vQty + 1;
	} else {
		_dir = 90;
		_pos = [0,0,0];
		_wsDone = false;
		_wsCount = count _worldspace;

		//Vector building
		_vector = [[0,0,0],[0,0,0]];
		_vecExists = false;
		_ownerPUID = "0";

		call {
			if (_wsCount == 4) exitwith {
				_dir = _worldspace select 0;
				_posATL = _worldspace select 1;
				if (count _posATL == 3) then {
					_pos = _posATL;
					_wsDone = true;
				};
				_ws2TN = typename (_worldspace select 2);
				_ws3TN = typename (_worldspace select 3);
				if (_ws3TN == "STRING") then {
					_ownerPUID = _worldspace select 3;
				} else {
					if (_ws2TN == "STRING") then {
						_ownerPUID = _worldspace select 2;
					};
				};
				if (_ws2TN == "ARRAY") then {
					_vector = _worldspace select 2;
					_vecExists = true;
				} else {
					if (_ws3TN == "ARRAY") then {
						_vector = _worldspace select 3;
						_vecExists = true;
					};
				};
			};
			if (_wsCount == 3) exitwith {
				_dir = _worldspace select 0;
				_posATL = _worldspace select 1;
				if (count _posATL == 3) then {
					_pos = _posATL;
					_wsDone = true;
				};
				_ws2TN = typename (_worldspace select 2);
				_ws3TN = typename (_worldspace select 3);
				if (_ws2TN == "STRING") then {
					_ownerPUID = _worldspace select 2;
				} else {
					 if (_ws2TN == "ARRAY") then {
						_vector = _worldspace select 2;
						_vecExists = true;
					};
				};
			};
			if (_wsCount == 2) then {
				_dir = _worldspace select 0;
				_posATL = _worldspace select 1;
				if (count _posATL == 3) then {
					_pos = _posATL;
					_wsDone = true;
				};
			};
			if (_wsCount < 2) exitwith {
				_worldspace set [count _worldspace, "0"];
			};
		};

		if (!_wsDone) then {
			if ((count _posATL) >= 2) then {
				_pos = [_posATL select 0,_posATL select 1,0];
				diag_log format["MOVED OBJ: %1 of class %2 with worldspace array = %3 to pos: %4",_idKey,_type,_worldspace,_pos];
			} else {
				diag_log format["MOVED OBJ: %1 of class %2 with worldspace array = %3 to pos: [0,0,0]",_idKey,_type,_worldspace];
			};
		};

		_object = _type createVehicle [0,0,0]; //more than 2x faster than createvehicle array				
		_object setDamage _damage;
		
		if (_vecExists) then {
			_object setVectorDirAndUp _vector;
		} else {
			_object setDir _dir; // setdir is incompatible with setVectorDirAndUp and should not be used together on the same object https://community.bistudio.com/wiki/setVectorDirAndUp
		};
		_object enableSimulation false;
		_object setPosATL _pos;

		_doorLocked = _type in DZE_DoorsLocked;
		_isPlot = _type == "Plastic_Pole_EP1_DZ";

		// prevent immediate hive write when vehicle parts are set up
		_object setVariable ["lastUpdate",diag_ticktime];
		_object setVariable ["ObjectID", _idKey];
		_object setVariable ["OwnerPUID", _ownerPUID, true];
		if (Z_SingleCurrency && {_type in DZE_MoneyStorageClasses}) then {
			_object setVariable ["cashMoney", _storageMoney, true];
		};

		dayz_serverIDMonitor set [count dayz_serverIDMonitor,_idKey];

		if (!_wsDone) then {[_object,"position",true] call server_updateObject;};
		if (_type == "Base_Fire_DZ") then {_object spawn base_fireMonitor;};

		_isTrapItem = _object isKindOf "TrapItems";
		_isSafeObject = _type in DayZ_SafeObjects;

		//Dont add inventory for traps.
		if (!_isTrapItem) then {
			clearWeaponCargoGlobal _object;
			clearMagazineCargoGlobal _object;
			clearBackpackCargoGlobal _object;
			if( (count _inventory > 0) && !_isPlot && !_doorLocked) then {
				if (_type in DZE_LockedStorage) then {
					// Do not send big arrays over network! Only server needs these
					_object setVariable ["WeaponCargo",(_inventory select 0),false];
					_object setVariable ["MagazineCargo",(_inventory select 1),false];
					_object setVariable ["BackpackCargo",(_inventory select 2),false];
				} else {
					_weaponcargo = _inventory select 0 select 0;
					_magcargo = _inventory select 1 select 0;
					_backpackcargo = _inventory select 2 select 0;
					_weaponqty = _inventory select 0 select 1;
					{_object addWeaponCargoGlobal [_x, _weaponqty select _foreachindex];} foreach _weaponcargo;
					_magqty = _inventory select 1 select 1;
					{if (_x != "CSGAS") then {_object addMagazineCargoGlobal [_x, _magqty select _foreachindex];};} foreach _magcargo;
					_backpackqty = _inventory select 2 select 1;
					{_object addBackpackCargoGlobal [_x, _backpackqty select _foreachindex];} foreach _backpackcargo;
				};
			} else {
				if (_isPlot) then {
					_object setVariable ["plotfriends", _inventory, true];
				};
				if (DZE_doorManagement && _doorLocked) then {
					_object setVariable ["doorfriends", _inventory, true];
				};
			};
		};

		// Fix for leading zero issues on safe codes after restart
		_lockable = getNumber (configFile >> "CfgVehicles" >> _type >> "lockable");
		_codeCount = count (toArray _ownerID);
		call {
			if (_lockable == 4) exitwith {
				call {
					if (_codeCount == 3) exitwith {_ownerID = format["0%1",_ownerID];};
					if (_codeCount == 2) exitwith {_ownerID = format["00%1",_ownerID];};
					if (_codeCount == 1) exitwith {_ownerID = format["000%1",_ownerID];};
				};
			};
			if (_lockable == 3) exitwith {
				call {
					if (_codeCount == 2) exitwith {_ownerID = format["0%1",_ownerID];};
					if (_codeCount == 1) exitwith {_ownerID = format["00%1",_ownerID];};
				};
			};
		};
		
		if (_type isKindOf "StaticWeapon" || {_type in DZE_StaticWeapons}) then {
			[_object,DZE_clearStaticAmmo,false] call fn_vehicleAddons;
		};
		
		_setGlobal = [false,true] select ((_type in DZE_LockedStorage) || (_type in DZE_DoorsLocked));
		_object setVariable ["CharacterID", _ownerID, _setGlobal];
		if (_isSafeObject && !_isTrapItem) then {
			_object setVariable["memDir",_dir,true];
			if (DZE_GodModeBase && {!(_type in DZE_GodModeBaseExclude)}) then {
				_object addEventHandler ["HandleDamage",{0}];
			} else {
				_object addMPEventHandler ["MPKilled",{if !(isServer) exitWith {};_this call vehicle_handleServerKilled;}];
			};
		} else {
			_object enableSimulation true;
		};
		if (_isTrapItem) then {
			//Use inventory traps armed state
			{
				_xTypeName = typeName _x;
				if (_xTypeName == "ARRAY") then {
					_x1 = _x select 1;
 					_object setVariable ["armed", _x1, true];
				} else {
					_object setVariable ["armed", _x, true];
				};
			} count _inventory;
		};
		dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object]; //Monitor the object
	};
} foreach _myArray;

//spawn vehicles
{
	//Parse Array
	_idKey = _x select 1;
	_type = _x select 2;
	_ownerID = _x select 3;
	_worldspace = _x select 4;
	_inventory = _x select 5;
	_hitPoints = _x select 6;
	_fuel = _x select 7;
	_damage = _x select 8;
	_storageMoney = _x select 9;

	_dir = 90;
	_pos = [0,0,0];
	_wsDone = false;
	_wsCount = count _worldspace;

	call {
		if (_wsCount == 2) exitwith {
			_dir = _worldspace select 0;
			_posATL = _worldspace select 1;
			if (count _posATL == 3) then {
				_pos = _posATL;
				_wsDone = true;
			};
		};
		if (_wsCount < 2) exitwith {
			_worldspace set [count _worldspace, "0"];
		};
	};

	if (!_wsDone) then {
		if ((count _posATL) >= 2) then {
			_pos = [_posATL select 0,_posATL select 1,0];
			diag_log format["MOVED OBJ: %1 of class %2 with worldspace array = %3 to pos: %4",_idKey,_type,_worldspace,_pos];
		} else {
			diag_log format["MOVED OBJ: %1 of class %2 with worldspace array = %3 to pos: [0,0,0]",_idKey,_type,_worldspace];
		};
	};

	_object = _type createVehicle [0,0,0]; //more than 2x faster than createvehicle array
	_object setDir _dir;
	_object setPosATL _pos;
	_object setDamage _damage;
	_object enableSimulation false;

	// prevent immediate hive write when vehicle parts are set up
	_object setVariable ["lastUpdate",diag_ticktime];
	_object setVariable ["ObjectID", _idKey];
	if (Z_SingleCurrency && {ZSC_VehicleMoneyStorage}) then {
		_object setVariable ["cashMoney", _storageMoney, true];
	};

	dayz_serverIDMonitor set [count dayz_serverIDMonitor,_idKey];

	if (!_wsDone) then {[_object,"position",true] call server_updateObject;};

	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearBackpackCargoGlobal _object;
	if (count _inventory > 0) then {
		_weaponcargo = _inventory select 0 select 0;
		_magcargo = _inventory select 1 select 0;
		_backpackcargo = _inventory select 2 select 0;
		_weaponqty = _inventory select 0 select 1;
		{_object addWeaponCargoGlobal [_x, _weaponqty select _foreachindex];} foreach _weaponcargo;
		_magqty = _inventory select 1 select 1;
		{if (_x != "CSGAS") then {_object addMagazineCargoGlobal [_x, _magqty select _foreachindex];};} foreach _magcargo;
		_backpackqty = _inventory select 2 select 1;
		{_object addBackpackCargoGlobal [_x, _backpackqty select _foreachindex];} foreach _backpackcargo;
	};

	_setGlobal = [false,true] select (_ownerID != "0");
	_object setVariable ["CharacterID", _ownerID, _setGlobal];
	
	[_object,_hitpoints] call server_setHitpoints;
	
	_object setFuel _fuel;
	
	[_object,"all",true] call server_updateObject;
	
	[_object,DZE_clearVehicleAmmo,DZE_addVehicleAmmo] call fn_vehicleAddons;
	
	_object call fnc_veh_ResetEH;
	if (_ownerID != "0" && {!(_object isKindOf "Bicycle")}) then {_object setVehicleLock "locked";};
	_serverVehicleCounter set [count _serverVehicleCounter,_type]; // total each vehicle
	_object enableSimulation true;
	_object setVelocity [0,0,1];
	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object]; //Monitor the object
} foreach _VehicleQueue;

diag_log ("HIVE: Streamed " + str((count _myArray) -_vQty) + " Objects and " + str(_vQty) + " Vehicles.");

diag_log format["HIVE: BENCHMARK - Server_monitor.sqf finished streaming %1 objects in %2 seconds (unscheduled)",_val,diag_tickTime - _timeStart];

// # END OF STREAMING #
if (dayz_townGenerator) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_plantSpawner.sqf"; // Draw the pseudo random seeds
};
#ifndef OBJECT_DEBUG
	object_debug = false;
#else
	object_debug = true;
#endif
execFSM "\z\addons\dayz_server\system\server_vehicleSync.fsm";
execVM "\z\addons\dayz_server\system\scheduler\sched_init.sqf"; // launch the new task scheduler
execFSM "\z\addons\dayz_server\system\server_weather.fsm"; // new weather system for 1.0.7

createCenter civilian;

actualSpawnMarkerCount = 0;
// count valid spawn markers, since different maps have different amounts
for "_i" from 0 to 10 do {
	if ((getMarkerPos format["spawn%1",_i]) distance [0,0,0] > 0) then {
		actualSpawnMarkerCount = actualSpawnMarkerCount + 1;
	} else {
		_i = 11; // exit since we did not find any further markers
	};
};
diag_log format["Total Number of spawn locations %1", actualSpawnMarkerCount];

if (isDedicated) then {endLoadingScreen;};
allowConnection = true;
sm_done = true;
publicVariable "sm_done";

execVM "\z\addons\dayz_server\system\lit_fireplaces.sqf";

if (_hiveLoaded) then {
	_serverVehicleCounter spawn {
		private ["_startTime","_cfgLootFile","_vehLimit"];
		//  spawn_vehicles
		// Get all buildings and roads only once. Very taxing, but only on first startup
		_serverVehicleCounter = _this;
		_vehiclesToUpdate = [];
		_startTime = diag_tickTime;
		_buildingList = [];
		_cfgLootFile = missionConfigFile >> "CfgLoot" >> "Buildings";
		{
			if (isClass (_cfgLootFile >> typeOf _x)) then {
				_buildingList set [count _buildingList,_x];
			};
		} count (getMarkerPos "center" nearObjects ["building",((getMarkerSize "center") select 1)]);
		_roadList = getMarkerPos "center" nearRoads ((getMarkerSize "center") select 1);
		//diag_log format ["_serverVehicleCounter: %1",_serverVehicleCounter];
		_vehLimit = MaxVehicleLimit - (count _serverVehicleCounter);
		if (_vehLimit > 0) then {
			diag_log ("HIVE: Spawning # of Vehicles: " + str(_vehLimit));
			for "_x" from 1 to _vehLimit do {call spawn_vehicles;};
		} else {
			diag_log "HIVE: Vehicle Spawn limit reached!";
			_vehLimit = 0;
		};

		if (dayz_townGenerator) then {
			// Vanilla town generator spawns debris locally on each client
			MaxDynamicDebris = 0;
		} else {
			// Epoch global dynamic debris
			diag_log ("HIVE: Spawning # of Debris: " + str(MaxDynamicDebris));
			for "_x" from 1 to MaxDynamicDebris do {call spawn_roadblocks;};
		};

		diag_log ("HIVE: Spawning # of Ammo Boxes: " + str(MaxAmmoBoxes));
		for "_x" from 1 to MaxAmmoBoxes do {call spawn_ammosupply;};

		diag_log ("HIVE: Spawning # of Veins: " + str(MaxMineVeins));
		for "_x" from 1 to MaxMineVeins do {call spawn_mineveins;};

		diag_log format["HIVE: BENCHMARK - Server finished spawning %1 DynamicVehicles, %2 Debris, %3 SupplyCrates and %4 MineVeins in %5 seconds (scheduled)",_vehLimit,MaxDynamicDebris,MaxAmmoBoxes,MaxMineVeins,diag_tickTime - _startTime];

		//Update gear last after all dynamic vehicles are created to save random loot to database (low priority)
		{[_x,"gear"] call server_updateObject} count _vehiclesToUpdate;
	};
	if (DZE_SafeZone_Relocate) then {
		execVM "\z\addons\dayz_server\system\safeZoneRelocate.sqf";
	};	
};
