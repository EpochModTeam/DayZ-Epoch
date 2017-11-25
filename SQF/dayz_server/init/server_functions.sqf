#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

waitUntil {!isNil "bis_fnc_init"};

BIS_MPF_remoteExecutionServer = {
	if ((_this select 1) select 2 == "JIPrequest") then {
		[nil,(_this select 1) select 0,"loc",rJIPEXEC,[any,any,"per","execVM","ca\Modules\Functions\init.sqf"]] call RE;
	};
};

call compile preprocessFileLineNumbers "\z\addons\dayz_code\util\compile.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\compile.sqf";

BIS_Effects_Burn = {};
dayz_disconnectPlayers = [];
dayz_serverKey = [];
for "_i" from 0 to 12 do {
	dayz_serverKey set [_i, ceil(random 128)];
};
dayz_serverKey = toString dayz_serverKey;
server_playerLogin = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
server_updateObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_publishObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";	//Creates the object in DB
server_deleteObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObj.sqf"; 	//Removes the object from the DB
server_deleteObjDirect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObjDirect.sqf"; 	//Removes the object from the DB, NO AUTH, ONLY CALL FROM SERVER, NO PV ACCESS
server_playerSync = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";
server_Wildgenerate = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_Wildgenerate.sqf";
base_fireMonitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
//server_systemCleanup = compile preprocessFileLineNumbers "\z\addons\dayz_server\system\server_cleanup.sqf";
spawnComposition = compile preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"; //"\z\addons\dayz_code\compile\object_mapper.sqf";
server_sendToClient = compile preprocessFileLineNumbers "\z\addons\dayz_server\eventHandlers\server_sendToClient.sqf";
server_verifySender = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_verifySender.sqf";

// EPOCH ADDITIONS
server_swapObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_swapObject.sqf"; //Used to downgrade and upgrade Epoch buildables
server_publishVeh = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf"; //Used to spawn random vehicles by server
server_publishVeh2 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle2.sqf"; //Used to purchase vehicles at traders
server_publishVeh3 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle3.sqf"; //Used for car upgrades
server_tradeObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_tradeObject.sqf";
server_traders = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_traders.sqf";
server_spawnEvents = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_spawnEvent.sqf";
server_deaths = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDeaths.sqf";
server_maintainArea = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_maintainArea.sqf";
server_checkIfTowed = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_checkIfTowed.sqf";
server_handleSafeGear = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_handleSafeGear.sqf";
spawn_ammosupply = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_ammosupply.sqf";
spawn_mineveins = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_mineveins.sqf";
spawn_roadblocks = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_roadblocks.sqf";
spawn_vehicles = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_vehicles.sqf";

server_medicalSync = {
	_player = _this select 0;
	_array = _this select 1;
	
	_player setVariable ["USEC_isDead",(_array select 0)]; //0
	_player setVariable ["NORRN_unconscious",(_array select 1)]; //1
	_player setVariable ["USEC_infected",(_array select 2)]; //2
	_player setVariable ["USEC_injured",(_array select 3)]; //3
	_player setVariable ["USEC_inPain",(_array select 4)]; //4
	_player setVariable ["USEC_isCardiac",(_array select 5)]; //5
	_player setVariable ["USEC_lowBlood",(_array select 6)]; //6
	_player setVariable ["USEC_BloodQty",(_array select 7)]; //7
	// _wounds; //8
	// [_legs,_arms]; //9
	_player setVariable ["unconsciousTime",(_array select 10)]; //10
	_player setVariable ["blood_type",(_array select 11)]; //11
	_player setVariable ["rh_factor",(_array select 12)]; //12
	_player setVariable ["messing",(_array select 13)]; //13
	_player setVariable ["blood_testdone",(_array select 14)]; //14
};
/*
dayz_Achievements = {
	_achievementID = (_this select 0) select 0;
	_player = (_this select 0) select 1;
	_playerOwnerID = owner _player;
	
	_achievements = _player getVariable "Achievements";
	_achievements set [_achievementID,1];
	_player setVariable ["Achievements",_achievements];
};
*/

//Send fences to this array to be synced to db, should prove to be better performaince wise rather then updaing each time they take damage.
server_addtoFenceUpdateArray = {
	private ["_class","_clientKey","_damage","_exitReason","_index","_object","_playerUID"];
	_object = _this select 0;
	_damage = _this select 1;
	_playerUID = _this select 2;
	_clientKey = _this select 3;
	_index = dayz_serverPUIDArray find _playerUID;
	_class = typeOf _object;

	_exitReason = switch true do {
		//Can't use owner because player may already be dead, can't use distance because player may be far from fence
		case (_clientKey == dayz_serverKey): {""};
		case (_index < 0): {
			format["Server_AddToFenceUpdateArray error: PUID NOT FOUND ON SERVER. PV ARRAY: %1",_this]
		};
		case ((dayz_serverClientKeys select _index) select 1 != _clientKey): {
			format["Server_AddToFenceUpdateArray error: CLIENT AUTH KEY INCORRECT OR UNRECOGNIZED. PV ARRAY: %1",_this]
		};
		case !(_class isKindOf "DZ_buildables"): {
			format["Server_AddToFenceUpdateArray error: setDamage request on non DZ_buildable. PV ARRAY: %1",_this]
		};
		default {""};
	};
	
	if (_exitReason != "") exitWith {diag_log _exitReason};	
	
	_object setDamage _damage;

	if !(_object in needUpdate_FenceObjects) then {
		needUpdate_FenceObjects set [count needUpdate_FenceObjects, _object];
		if (_playerUID != "SERVER") then {
			diag_log format["DAMAGE: PUID(%1) requested setDamage %2 on fence %3 ID:%4 UID:%5",_playerUID,_damage,_class,(_object getVariable["ObjectID","0"]),(_object getVariable["ObjectUID","0"])];
		};
	};
};

vehicle_handleServerKilled = {
	private ["_unit","_killer"];
	_unit = _this select 0;
	_killer = _this select 1;
		
	[_unit,"killed",false,false,"SERVER",dayz_serverKey] call server_updateObject;
	_unit removeAllMPEventHandlers "MPKilled";
	_unit removeAllEventHandlers "Killed";
	_unit removeAllEventHandlers "HandleDamage";
	_unit removeAllEventHandlers "GetIn";
	_unit removeAllEventHandlers "GetOut";
};

check_publishobject = {
	private ["_saveObject","_allowed","_allowedObjects","_object","_playername"];

	_object = _this select 0;
	_playername = _this select 1;
	_allowed = false;

	#ifdef OBJECT_DEBUG
		diag_log format["DEBUG: Checking if Object: %1 is allowed, published by %2",_object,_playername];
	#endif

	if ((typeOf _object) in DayZ_SafeObjects) then {
		_saveObject = "DayZ_SafeObjects";
		_allowed = true;
	};
	
	//Buildings
	if (_object isKindOf "DZ_buildables") then {
		_saveObject = "DZ_buildables";
		_allowed = true;
	};
	
	#ifdef OBJECT_DEBUG
		diag_log format["DEBUG: Object: %1 published by %2 is allowed by %3",_object,_playername,_saveObject];
	#endif

	_allowed
};

server_hiveWrite = {
	private "_data";
	//diag_log ("ATTEMPT WRITE: " + _this);
	_data = "HiveExt" callExtension _this;
	//diag_log ("WRITE: " +str(_data));
};

server_hiveReadWrite = {
	private ["_key","_resultArray","_data"];
	_key = _this;
	//diag_log ("ATTEMPT READ/WRITE: " + _key);
	_data = "HiveExt" callExtension _key;
	//diag_log ("READ/WRITE: " +str(_data));
	_resultArray = call compile str formatText["%1", _data];
	if (isNil "_resultArray") then {_resultArray = "HIVE CONNECTION ERROR";};
	_resultArray
};

onPlayerDisconnected "[_uid,_name] call server_onPlayerDisconnect;";

server_getStatsDiff = {
	private ["_player","_playerUID","_new","_old","_result","_statsArray"];
	_player = _this select 0;
	_playerUID = _this select 1;
	_result = [];
	_statsArray = missionNamespace getVariable _playerUID;
	
	if (isNil "_statsArray") exitWith {
		diag_log format["Server_getStatsDiff error: playerUID %1 not found on server",_playerUID];
		[0,0,0,0,0]
	};
	
	{
		_new = _player getVariable [_x,0];
		_old = _statsArray select _forEachIndex;
		_result set [_forEachIndex, (_new - _old)];
		_statsArray set [_forEachIndex, _new]; //updates original var too
	} forEach ["humanity","zombieKills","headShots","humanKills","banditKills"];
	
	#ifdef PLAYER_DEBUG
	diag_log format["Server_getStatsDiff - Object:%1 Diffs:%2 New:%3",_player,_result,_statsArray];
	#endif
	
	_result
};

//seems max is 19 digits
dayz_objectUID2 = {
    private["_position","_dir","_time" ,"_key"];
	_dir = _this select 0;
	_time = round diag_tickTime;
	if (_time > 99999) then {_time = round(random 99999);}; //prevent overflow if server isn't restarted
	_key = "";
	_position = _this select 1;
	_key = format["%1%2%3%4", round(_time + abs(_position select 0)), round(_dir), round(abs(_position select 1)), _time];
	_key;
};

dayz_recordLogin = {
	private ["_key","_status","_name"];
	_key = format["CHILD:103:%1:%2:%3:",_this select 0,_this select 1,_this select 2];
	_key call server_hiveWrite;
		
	_status = switch (1==1) do {
		case ((_this select 2) == 0): { "CLIENT LOADED & PLAYING" };
		case ((_this select 2) == 1): { "LOGIN PUBLISHING, Location " +(_this select 4) };
		case ((_this select 2) == 2): { "LOGGING IN" };
		case ((_this select 2) == 3): { "LOGGED OUT, Location " +(_this select 4) };
	};
	
	_name = if (typeName (_this select 3) == "ARRAY") then { toString (_this select 3) } else { _this select 3 };
	diag_log format["INFO - Player: %1(UID:%3/CID:%4) Status: %2",_name,_status,(_this select 0),(_this select 1)];
};

generate_new_damage = {
	private "_damage";
    _damage = ((random(DynamicVehicleDamageHigh-DynamicVehicleDamageLow))+DynamicVehicleDamageLow) / 100;
	_damage
};

server_hiveReadWriteLarge = {
	private["_key","_resultArray","_data"];
	_key = _this;
	_data = "HiveExt" callExtension _key;
	_resultArray = call compile _data;
	_resultArray
};

// coor2str: convert position to a GPS coordinates
fa_coor2str = {
	private["_pos","_res","_nearestCity","_town"];

	_pos = +(_this);
	if (count _pos < 1) then { _pos = [0,0]; }
	else { if (count _pos < 2) then { _pos = [_pos select 0,0]; };
	};
	_nearestCity = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal"],1000];
	_town = "Wilderness";
	if (count _nearestCity > 0) then {_town = text (_nearestCity select 0)};
	_res = format["%1 [%2]", _town, mapGridPosition _pos];

	_res
};

// print player player PID and name. If name unknown then print UID.
fa_plr2str = {
	private["_x","_res","_name"];
	_x = _this;
	_res = "nobody";
	if (!isNil "_x") then {
		_name = _x getVariable ["bodyName", nil];
		if ((isNil "_name" OR {(_name == "")}) AND ({alive _x})) then { _name = name _x; };
		if (isNil "_name" OR {(_name == "")}) then { _name = "UID#"+(getPlayerUID _x); };
		_res = format["PID#%1(%2)", owner _x, _name ];
	};
	_res
};

array_reduceSize = {
	private ["_array1","_array","_count","_num"];
	_array1 = _this select 0;
	_array = _array1 - ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing","Fishing_Swing","Sledge_Swing","CSGAS"];
	_count = _this select 1;
	_num = count _array;
	if (_num > _count) then {
		_array resize _count;
	};
	_array
};

// Precise base building 1.0.5
call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\kk_functions.sqf";
#include "mission_check.sqf"
