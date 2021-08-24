#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

waitUntil {!isNil "bis_fnc_init"};

BIS_MPF_remoteExecutionServer = {
	if ((_this select 1) select 2 == "JIPrequest") then {
		[nil,(_this select 1) select 0,"loc",rJIPEXEC,[any,any,"per","execVM","ca\Modules\Functions\init.sqf"]] call RE;
	};
};

call compile preprocessFileLineNumbers "\z\addons\dayz_code\util\compile.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\init.sqf";

BIS_Effects_Burn = {};
dayz_disconnectPlayers = [];
dayz_serverKey = [59]; //makes sure client is kicked by publicvariableval.txt if they try to send it
for "_i" from 1 to 12 do {
	dayz_serverKey set [_i, ceil(random 128)];
};
dayz_serverKey = toString dayz_serverKey;
server_playerLogin = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\updateObject_functions.sqf";
server_updateObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_publishObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";	//Creates the object in DB
server_deleteObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObj.sqf"; 	//Removes the object from the DB
server_deleteObjDirect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObjDirect.sqf"; 	//Removes the object from the DB, NO AUTH, ONLY CALL FROM SERVER, NO PV ACCESS
server_playerSync = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";
//server_Wildgenerate = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_Wildgenerate.sqf";
base_fireMonitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
spawnComposition = compile preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"; //"\z\addons\dayz_code\compile\object_mapper.sqf";
server_sendToClient = compile preprocessFileLineNumbers "\z\addons\dayz_server\eventHandlers\server_sendToClient.sqf";
server_verifySender = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_verifySender.sqf";

// EPOCH ADDITIONS
server_swapObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_swapObject.sqf"; //Used to downgrade and upgrade Epoch buildables
server_publishVeh = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf"; //Used to spawn random vehicles by server
server_publishVeh2 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle2.sqf"; //Used to purchase vehicles at traders
server_publishVeh3 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle3.sqf"; //Used for car upgrades
server_tradeObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_tradeObject.sqf";
server_deaths = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDeaths.sqf";
server_maintainArea = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_maintainArea.sqf";
server_checkIfTowed = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_checkIfTowed.sqf";
server_handleSafeGear = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_handleSafeGear.sqf";
server_spawnTraders = compile preprocessFile "\z\addons\dayz_server\compile\server_spawnTraders.sqf";
server_updateGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\server_updateGroup.sqf";
server_changeCode = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_changeCode.sqf";

spawn_ammosupply = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_ammosupply.sqf";
spawn_mineveins = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_mineveins.sqf";
spawn_roadblocks = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_roadblocks.sqf";
spawn_vehicles = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\spawn_vehicles.sqf";

fnc_veh_setFixServer = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_setFixServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)

server_medicalSync = {
	local _player = _this select 0;
	local _array = _this select 1;

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

vehicle_handleServerKilled = {
	local _unit = _this select 0;

	[_unit,"killed",false,false,"SERVER",dayz_serverKey] call server_updateObject;
	_unit removeAllMPEventHandlers "MPKilled";
	_unit removeAllEventHandlers "Killed";
	_unit removeAllEventHandlers "HandleDamage";
	_unit removeAllEventHandlers "GetIn";
	_unit removeAllEventHandlers "GetOut";
};

check_publishobject = {
	local _object = _this select 0;
	local _playername = _this select 1;
	local _allowed = false;	

	#ifdef OBJECT_DEBUG
		diag_log format["DEBUG: Checking if Object: %1 is allowed, published by %2",_object,_playername];
	#endif

	if ((typeOf _object) in DayZ_SafeObjects) then {		
		_allowed = true;
	};

	#ifdef OBJECT_DEBUG
		local _saveObject = "DayZ_SafeObjects";
		diag_log format["DEBUG: Object: %1 published by %2 is allowed by %3",_object,_playername,_saveObject];
	#endif

	_allowed
};

server_hiveWrite = {
	//diag_log ("ATTEMPT WRITE: " + _this);
	local _data = "HiveExt" callExtension _this;
	//diag_log ("WRITE: " +str(_data));
};

server_hiveReadWrite = {
	local _key = _this;
	//diag_log ("ATTEMPT READ/WRITE: " + _key);
	local _data = "HiveExt" callExtension _key;
	//diag_log ("READ/WRITE: " +str(_data));
	local _resultArray = call compile str formatText["%1", _data];
	if (isNil "_resultArray") then {_resultArray = "HIVE CONNECTION ERROR";};
	_resultArray
};

onPlayerDisconnected "[_uid,_name] call server_onPlayerDisconnect;";

server_getStatsDiff = {
	local _player = _this select 0;
	local _playerUID = _this select 1;
	local _result = [];
	local _statsArray = missionNamespace getVariable _playerUID;
	local _new = 0;
	local _old = 0;

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
	local _dir = _this select 0;
	local _time = round diag_tickTime;
	if (_time > 99999) then {_time = round(random 99999);}; //prevent overflow if server isn't restarted
	local _key = "";
	local _position = _this select 1;
	_key = format["%1%2%3%4", round(_time + abs(_position select 0)), round(_dir), round(abs(_position select 1)), _time];
	_key;
};

dayz_recordLogin = {
	local _key = format["CHILD:103:%1:%2:%3:",_this select 0,_this select 1,_this select 2];
	_key call server_hiveWrite;

	local _status = call {
		if ((_this select 2) == 0) exitwith { "CLIENT LOADED & PLAYING" };
		if ((_this select 2) == 1) exitwith { "LOGIN PUBLISHING, Location " +(_this select 4) };
		if ((_this select 2) == 2) exitwith { "LOGGING IN" };
		if ((_this select 2) == 3) exitwith { "LOGGED OUT, Location " +(_this select 4) };
	};

	local _name = if (typeName (_this select 3) == "ARRAY") then { toString (_this select 3) } else { _this select 3 };
	diag_log format["INFO - Player: %1(UID:%3/CID:%4) Status: %2",_name,_status,(_this select 0),(_this select 1)];
};

generate_new_damage = {
    local _damage = ((random(DynamicVehicleDamageHigh-DynamicVehicleDamageLow))+DynamicVehicleDamageLow) / 100;
	_damage
};

server_hiveReadWriteLarge = {
	local _key = _this;
	local _data = "HiveExt" callExtension _key;
	local _resultArray = call compile _data;
	_resultArray
};

// coor2str: convert position to a GPS coordinates
fa_coor2str = {
	local _pos = +(_this);
	if (count _pos < 1) then {
		_pos = [0,0];
	} else {
		if (count _pos < 2) then { _pos = [_pos select 0,0]; };
	};
	local _nearestCity = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage","NameLocal"],1000];
	local _town = "Wilderness";
	if (count _nearestCity > 0) then {_town = text (_nearestCity select 0)};
	local _res = format["%1 [%2]", _town, mapGridPosition _pos];

	_res
};

// print player player PID and name. If name unknown then print UID.
fa_plr2str = {
	local _y = _this;
	local _res = "nobody";	
	if (!isNil "_y") then {
		local _name = _y getVariable ["bodyName", nil];
		if ((isNil "_name" OR {(_name == "")}) AND ({alive _y})) then { _name = name _y; };
		if (isNil "_name" OR {(_name == "")}) then { _name = "UID#"+(getPlayerUID _y); };
		_res = format["PID#%1(%2)", owner _y, _name ];
	};
	_res
};

array_reduceSize = {
	local _array1 = _this select 0;
	local _array = _array1 - ["Hatchet_Swing","Crowbar_Swing","Machete_Swing","Bat_Swing","BatBarbed_Swing","BatNails_Swing","Fishing_Swing","Sledge_Swing","CSGAS"];
	local _count = _this select 1;
	local _num = count _array;
	if (_num > _count) then {
		_array resize _count;
	};
	_array
};

// Precise base building 1.0.5
call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\kk_functions.sqf";
call compile preprocessFileLineNumbers "\z\addons\dayz_server\eventHandlers\server_eventHandler.sqf";
#include "mission_check.sqf"
