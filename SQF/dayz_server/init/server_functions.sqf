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
server_playerLogin = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerLogin.sqf";
server_playerSetup = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSetup.sqf";
server_onPlayerDisconnect = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_onPlayerDisconnect.sqf";
server_updateObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_updateObject.sqf";
server_playerDied = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDied.sqf";
server_publishObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishObject.sqf";	//Creates the object in DB
server_deleteObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_deleteObj.sqf"; 	//Removes the object from the DB
server_playerSync = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerSync.sqf";
zombie_findOwner = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_findOwner.sqf";
server_Wildgenerate = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\zombie_Wildgenerate.sqf";
server_plantSpawner = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_plantSpawner.sqf";
base_fireMonitor = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
server_systemCleanup = compile preprocessFileLineNumbers "\z\addons\dayz_server\system\server_cleanup.sqf";
spawnComposition = compile preprocessFileLineNumbers "ca\modules\dyno\data\scripts\objectMapper.sqf"; //"\z\addons\dayz_code\compile\object_mapper.sqf";
server_sendToClient = compile preprocessFileLineNumbers "\z\addons\dayz_server\eventHandlers\server_sendToClient.sqf";

// EPOCH ADDITIONS
server_swapObject = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_swapObject.sqf"; 
server_publishVeh = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle.sqf";
server_publishVeh2 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle2.sqf";
server_publishVeh3 = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_publishVehicle3.sqf";
server_tradeObj = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_tradeObject.sqf";
server_traders = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_traders.sqf";
server_spawnEvents = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_spawnEvent.sqf";
server_deaths = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_playerDeaths.sqf";
server_maintainArea = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_maintainArea.sqf";
server_checkIfTowed = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_checkIfTowed.sqf";
server_logUnlockLockEvent = compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\server_logUnlockLockEvent.sqf";
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

dayz_Achievements = {
	_achievementID = (_this select 0) select 0;
	_player = (_this select 0) select 1;
	_playerOwnerID = owner _player;
	
	_achievements = _player getVariable "Achievements";
	_achievements set [_achievementID,1];
	_player setVariable ["Achievements",_achievements];
};

vehicle_handleServerKilled = {
	private ["_unit","_killer"];
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
	_resultArray = call compile _data;
	_resultArray
};

onPlayerDisconnected "[_uid,_name] call server_onPlayerDisconnect;";

server_getDiff = {
	private ["_variable","_object","_vNew","_vOld","_result"];
	_variable = _this select 0;
	_object = _this select 1;
	_vNew = _object getVariable [_variable,0];
	_vOld = _object getVariable [(_variable + "_CHK"),_vNew];
	_result = 0;
	if (_vNew < _vOld) then {
		//JIP issues
		_vNew = _vNew + _vOld;
		_object getVariable [(_variable + "_CHK"),_vNew];
	} else {
		_result = _vNew - _vOld;
		_object setVariable [(_variable + "_CHK"),_vNew];
	};
	_result
};

server_getDiff2 = {
	private ["_variable","_object","_vNew","_vOld","_result"];
	_variable = _this select 0;
	_object = _this select 1;
	_vNew = _object getVariable [_variable,0];
	_vOld = _object getVariable [(_variable + "_CHK"),_vNew];
	_result = _vNew - _vOld;
	_object setVariable [(_variable + "_CHK"),_vNew];
	_result
};

dayz_objectUID2 = {
	private ["_p","_d","_key"];
	_d = _this select 0;
	_p = _this select 1;
	_key = format ["%1%2%3%4", 
		abs round(10 * (_p select 0)), 
		abs round(10 * (_p select 1)), 
		abs round(100 * (_p select 2)), 
		abs round((_d * diag_tickTime) % 1000)
	];
	// Make sure the generated key is not a duplicate
	while {true} do {
		if !(_key in currentObjectUIDs) exitWith {currentObjectUIDs set [count currentObjectUIDs,_key];};
		keyStartNumber = keyStartNumber + 1;
		_key = str keyStartNumber;
	};
	_key
};

dayz_recordLogin = {
	private "_key";
	_key = format["CHILD:103:%1:%2:%3:",_this select 0,_this select 1,_this select 2];
	_key call server_hiveWrite;
};

dayz_reseed = {
	private ["_loc","_i","_radius","_ref"];
	_loc = _this select 0;
	_ref = _this select 1;
	
	diag_log str(_loc);
	//_lootspawner = [[10416.695, 4198.4634],[7982.2563, 1419.8256],[10795.93, 1419.8263],[7966.083, 4088.7463],[9259.7266, 2746.1985],[5200.5234, 3915.3274],[6494.1665, 2572.7798],[5216.6968, 1246.407],[2564.7244, 3915.3296],[3858.3674, 2572.782],[2580.8977, 1246.4092],[13398.995, 4400.5874],[12242.025, 2948.3196],[13551.842, 1832.2257],[14870.512, 3009.5117],[-178.19415, 1062.4478],[1099.2754, 2388.8206],[-194.36755, 3731.3679],[10394.215, 8322.1719],[7959.7759, 5543.5342],[10773.449, 5543.5342],[7943.6025, 8212.4551],[9237.2461, 6869.9063],[5178.043, 8039.0361],[6471.686, 6696.4883],[5194.2163, 5370.1152],[2542.2439, 8039.0381],[3835.887, 6696.4902],[2558.4172, 5370.1172],[13376.514, 8524.2969],[12219.544, 7072.0273],[13529.361, 5955.9336],[14848.032, 7133.2197],[-200.67474, 5186.1563],[1076.7949, 6512.5283],[-216.84814, 7855.0771],[10293.751, 12197.736],[7859.312, 9419.0996],[10672.988, 9419.0996],[7843.1387, 12088.021],[9136.7822, 10745.474],[5077.5791, 11914.601],[6371.2222, 10572.052],[5093.7524, 9245.6816],[2441.78, 11914.604],[3735.4231, 10572.055],[2457.9534, 9245.6816],[13276.053, 12399.861],[12119.08, 10947.596],[13428.897, 9831.501],[14747.566, 11008.786],[-301.13867, 9061.7207],[976.33112, 10388.096],[-317.31201, 11730.642],[10271.271, 16321.429],[7836.8315, 13542.813],[10650.506, 13542.813],[7820.6582, 16211.718],[9114.3018, 14869.175],[5055.0986, 16038.3],[6348.7417, 14695.758],[5071.272, 13369.392],[2419.2996, 16038.305],[3712.9426, 14695.76],[2435.4729, 13369.392],[13253.568, 16523.553],[12096.6, 15071.295],[13406.416, 13955.209],[14725.089, 15132.486],[-323.61914, 13185.43],[953.85059, 14511.8],[-339.79248, 15854.346]];
	//{
		_radius = 1500;
		dayz_lootspawner = [_loc,_radius,_ref] spawn server_lootSpawner;
		waitUntil {scriptDone dayz_lootspawner};
	//} forEach dayz_grid;
};

dze_diag_fps = {
	if (DZE_DiagVerbose) then {
		diag_log format["SERVER FPS: %1  PLAYERS: %2  OBJECTS: %3",diag_fps,playersNumber west,count (allMissionObjects "")];
	} else {
		diag_log format["SERVER FPS: %1  PLAYERS: %2",diag_fps,playersNumber west];
	};
};

generate_new_damage = {
	private "_damage";
    _damage = ((random(DynamicVehicleDamageHigh-DynamicVehicleDamageLow))+DynamicVehicleDamageLow) / 100;
	_damage
};

call compile preprocessFileLineNumbers "\z\addons\dayz_server\compile\fa_hiveMaintenance.sqf";