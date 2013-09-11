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
server_publishVeh2 = 		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle2.sqf"; // Custom to add vehicles
server_tradeObj = 			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_tradeObject.sqf";
server_traders = 			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_traders.sqf";
server_playerSync =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";
server_updateNearbyObjects =	compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateNearbyObjects.sqf";
server_spawnCrashSite  =    compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_spawnCrashSite.sqf";
server_handleZedSpawn =		compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_handleZedSpawn.sqf";
server_spawnEvents =			compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_spawnEvent.sqf";

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

object_handleServerKilled = {
	private["_unit","_objectID","_objectUID"];
	_unit = _this select 0;
	
	_objectID =	 _unit getVariable ["ObjectID","0"];
	_objectUID = _unit getVariable ["ObjectUID","0"];
		
	[_objectID,_objectUID] call server_deleteObj;
	
	_unit removeAllMPEventHandlers "MPKilled";
	_unit removeAllEventHandlers "Killed";
	_unit removeAllEventHandlers "HandleDamage";
	_unit removeAllEventHandlers "GetIn";
	_unit removeAllEventHandlers "GetOut";
};

check_publishobject = {
	private["_allowed","_object","_playername"];

	_object = _this select 0;
	_playername = _this select 1;
	
	_allowed = false;
       
	//diag_log format ["DEBUG: Checking if Object: %1 is allowed published by %2", _object, _playername];

	if ((typeOf _object) in dayz_allowedObjects) then {
			//diag_log format ["DEBUG: Object: %1 published by %2 is Safe",_object, _playername];
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

// Get all buildings and roads only once TODO: set variables to nil after done if nessicary 
MarkerPosition = getMarkerPos "center";
RoadList = MarkerPosition nearRoads DynamicVehicleArea;

BuildingList = [];
{
	if (isClass (configFile >> "CfgBuildingLoot" >> (typeOf _x))) then
	{
		BuildingList set [count BuildingList,_x];
	};
} forEach (MarkerPosition nearObjects ["building",DynamicVehicleArea]);

spawn_vehicles = {
	private ["_weights","_isOverLimit","_isAbort","_counter","_index","_vehicle","_velimit","_qty","_isAir","_isShip","_position","_dir","_istoomany","_veh","_objPosition","_marker","_iClass","_itemTypes","_cntWeights","_itemType","_num","_allCfgLoots"];
	
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
				
				if(DZEdebug) then {
					_marker = createMarker [str(_position) , _position];
					_marker setMarkerShape "ICON";
					_marker setMarkerType "DOT";
					_marker setMarkerText _vehicle;
				};	
			
				// Get position with ground
				_objPosition = getPosATL _veh;
			
				clearWeaponCargoGlobal  _veh;
				clearMagazineCargoGlobal  _veh;

				// Add 0-3 loots to vehicle using random cfgloots 
				_num = floor(random 4);
				_allCfgLoots = ["trash","civilian","food","generic","medical","military","policeman","hunter","worker","clothes","militaryclothes","specialclothes","trash"];
				
				for "_x" from 1 to _num do {
					_iClass = _allCfgLoots call BIS_fnc_selectRandom;

					_itemTypes = [] + ((getArray (configFile >> "cfgLoot" >> _iClass)) select 0);
					_index = dayz_CLBase find _iClass;
					_weights = dayz_CLChances select _index;
					_cntWeights = count _weights;
					
					_index = floor(random _cntWeights);
					_index = _weights select _index;
					_itemType = _itemTypes select _index;
					_veh addMagazineCargoGlobal [_itemType,1];
					//diag_log("DEBUG: spawed loot inside vehicle " + str(_itemType));
				};

				[_veh,[_dir,_objPosition],_vehicle,true,"0"] call server_publishVeh;
			};
		};
	};
};

spawn_roadblocks = {
	private ["_position","_veh","_num","_config","_itemType","_itemChance","_weights","_index","_iArray","_istoomany","_marker","_spawnloot","_nearby","_spawnveh","_WreckList"];
	_WreckList = ["SKODAWreck","HMMWVWreck","UralWreck","datsun01Wreck","hiluxWreck","datsun02Wreck","UAZWreck","Land_Misc_Garb_Heap_EP1","Fort_Barricade_EP1","Rubbish2"];
	
	waitUntil{!isNil "BIS_fnc_selectRandom"};
	if (isDedicated) then {
	
		_position = RoadList call BIS_fnc_selectRandom;
		
		_position = _position modelToWorld [0,0,0];
		
		waitUntil{!isNil "BIS_fnc_findSafePos"};
		_position = [_position,0,10,5,0,2000,0] call BIS_fnc_findSafePos;
		
		if ((count _position) == 2) then {
			// Get position with ground
			
			_istoomany = _position nearObjects ["All",5];
		
			if((count _istoomany) > 0) exitWith { diag_log("DEBUG: Too many at " + str(_position)); };
			
			if(DZEdebug) then {
				_marker = createMarker [str(_position) , _position];
				_marker setMarkerShape "ICON";
				_marker setMarkerType "DOT";
			};
			
			waitUntil{!isNil "BIS_fnc_selectRandom"};
			_spawnveh = _WreckList call BIS_fnc_selectRandom;
			_spawnloot =  "DynamicDebris";

			if((_spawnveh == "HMMWVWreck") or (_spawnveh == "UralWreck") or (_spawnveh == "UAZWreck")) then {
				_spawnloot = "DynamicDebrisMilitary";
			};
		
			//diag_log("DEBUG: Spawning a crashed " + _spawnveh + " with " + _spawnloot + " at " + str(_position));
			_veh = createVehicle [_spawnveh,_position, [], 0, "CAN_COLLIDE"];
			_veh enableSimulation false;

			// Randomize placement a bit
			_veh setDir round(random 360);
			_veh setpos _position;

			_veh setVariable ["ObjectID","1",true];
		};
	
	};
	
};

if(isnil "DynamicVehicleDamageLow") then {
	DynamicVehicleDamageLow = 0;
};
if(isnil "DynamicVehicleDamageHigh") then {
	DynamicVehicleDamageHigh = 100;
};

if(isnil "DynamicVehicleFuelLow") then {
	DynamicVehicleFuelLow = 0;
};
if(isnil "DynamicVehicleFuelHigh") then {
	DynamicVehicleFuelHigh = 100;
};

// Damage generator function
generate_new_damage = {
	private ["_damage"];
    _damage = ((random(DynamicVehicleDamageHigh-DynamicVehicleDamageLow))+DynamicVehicleDamageLow) / 100;
	_damage;
};

// Damage generator fuction
generate_exp_damage = {
	private ["_damage"];
    _damage = ((random(DynamicVehicleDamageHigh-DynamicVehicleDamageLow))+DynamicVehicleDamageLow) / 100;
	
	// limit this to 85% since vehicle would blow up otherwise.
	//if(_damage >= 0.85) then {
	//	_damage = 0.85;
	//};
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

// Cleanup flies
server_cleanFlies = 
{
    private ["_sound","_newdayz_flyMonitor"];
	
	DZE_FlyWorkingSet = DZE_FlyWorkingSet+dayz_flyMonitor;
	dayz_flyMonitor = [];

	_newdayz_flyMonitor = [];
	{
		_sound = _x select 0;
		_body = _x select 1;

		// Remove flies
		if (isNull _body) then {
			deleteVehicle _sound;
			[_body] call server_Delete;
		} else {
			_newdayz_flyMonitor set [count _newdayz_flyMonitor,_x];
		};

	} forEach DZE_FlyWorkingSet;
	
	DZE_FlyWorkingSet = _newdayz_flyMonitor;
};

server_cleanDead = {
	private ["_objectPos","_noPlayerNear","_body","_handled"];
	{
		if (_x isKindOf "zZombie_Base") then
		{
			_objectPos = getPosATL _x;
			_noPlayerNear = {isPlayer _x} count (_objectPos nearEntities ["CAManBase",35]) == 0;
			if (_noPlayerNear) then
			{
				deleteVehicle _x;
			};
		} else {
			_handle = _x getVariable ["handle",true];
			if (_handle) then {
				_x enableSimulation false;
				_body removeAllEventHandlers "HandleDamage";
				_body removeAllEventHandlers "Killed";
				_body removeAllEventHandlers "Fired";
				_body removeAllEventHandlers "FiredNear";
				_x setVariable ["handle",false];
			};
		};
	} forEach allDead;
};


server_cleanLoot =
{
private ["_deletedLoot","_startTime","_looted","_objectPos","_noPlayerNear","_nearObj"];

	_deletedLoot = 0;
	_startTime = diag_tickTime;

	{
		_looted = (_x getVariable ["looted",-0.1]);
		if (_looted != -0.1) then
		{
			_objectPos = getPosATL _x;
			_noPlayerNear = {isPlayer _x} count (_objectPos nearEntities ["CAManBase",35]) == 0;

			if (_noPlayerNear) then
			{
				_nearObj = nearestObjects [_objectPos,["ReammoBox","WeaponHolder","WeaponHolderBase"],((sizeOf (typeOf _x)) + 5)];
				{
					deleteVehicle _x;
					_deletedLoot = _deletedLoot + 1;
				} forEach _nearObj;
				_x setVariable ["looted",-0.1,true];
			};
		};
	} forEach BuildingList;

	_endTime = diag_tickTime;

	diag_log (format["CLEANUP: DELETED %1 ITEMS, RUNTIME: %2",_deletedLoot,(_endTime - _startTime)]);
};
