private ["_isAir","_VG_ObjID","_characterID","_class","_clientID","_clrinit","_clrinit2","_colour","_colour2","_dam","_damage","_dir","_fuel","_hitpoints","_id","_inventory","_key","_location","_message","_object","_oid","_outcome","_player","_result","_selection","_serverKey","_uid","_worldSpace"];

_worldSpace = _this select 0;
_player = _this select 1;
_id = _this select 2;
_dir = _worldSpace select 0;
_location = _worldSpace select 1;
_worldSpace = [_dir,_location];
_uid = _worldSpace call dayz_objectUID2;
_key = str formatText["CHILD:801:%1:%2:%3:",_id,_worldSpace,_uid];

_result = _key call server_hiveReadWrite;
_outcome = _result select 0;
if (_outcome != "PASS") exitWith {diag_log("HIVE VIRTUAL GARAGE SPAWN VEHICLE FAILED TO EXECUTE: " + _key);};
_class = _result select 1;
_characterID = _result select 2;
_inventory = _result select 3;
_hitpoints = _result select 4;
_fuel = _result select 5;
_damage = _result select 6;
_colour = _result select 7;
_colour2 = _result select 8;
_serverKey = _result select 9;
_VG_ObjID = _result select 10;
_clientID = owner _player;

if (_VG_ObjID in vg_alreadySpawned) exitWith {
	diag_log format["VG ERROR: Vehicle with VGObjID = %1 has already been spawned and will not be spawned again. PlayerUID: %2", _VG_ObjID, (getPlayerUID _player)];
};

_key = format["CHILD:388:%1:",_uid];

#ifdef OBJECT_DEBUG
diag_log ("HIVE: WRITE: "+ str(_key));
#endif

_result = _key call server_hiveReadWrite;
_outcome = _result select 0;

if (_outcome != "PASS") then {
	diag_log("CUSTOM: failed to get id for : " + str(_uid));
} else {
	_VG_ObjID = (toString (18 call VG_RandomizeMyKey)); //new ID
	vg_alreadySpawned set [(count vg_alreadySpawned), _VG_ObjID];
	_oid = _result select 1;

	#ifdef OBJECT_DEBUG
	diag_log("CUSTOM: Selected " + str(_oid));
	#endif

	_object = _class createVehicle _location;
	if (surfaceIsWater _location && {({_x != _object} count (_location nearEntities ["Ship",8])) == 0}) then {
		_object setPos _location;
	};

	_object addEventHandler ["HandleDamage",{false}];

	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	if (vg_clearAmmo && {vg_serverKey == _serverKey}) then {_object call VG_ClearTurrets;};

	_object setFuel _fuel;
	_object setDamage _damage;

	[_inventory select 0,_inventory select 1,_inventory select 2,_object] call fn_addCargo;

	_object setVariable ["ObjectID", _oid, true];
	_object setVariable ["lastUpdate",diag_tickTime];
	_object setVariable ["VGObjectID",_VG_ObjID, false];

	if (_colour != "0") then {
		_object setVariable ["Colour",_colour,true];
		_clrinit = format ["#(argb,8,8,3)color(%1)",_colour];
		_object setVehicleInit "this setObjectTexture [0,"+str _clrinit+"];";
	};

	if (_colour2 != "0") then {
		_object setVariable ["Colour2",_colour2,true];
		_clrinit2 = format ["#(argb,8,8,3)color(%1)",_colour2];
		_object setVehicleInit "this setObjectTexture [1,"+str _clrinit2+"];";
	};

	processInitCommands;

	_characterID = str(_characterID);
	_object setVariable ["CharacterID", _characterID, true];

	if (_characterID != "0" && !(_object isKindOf "Bicycle")) then {_object setVehicleLock "LOCKED";};
	_isAir = _object isKindOf "Air";

	{
		_selection = _x select 0;
		_dam = _x select 1;
		_dam = [_x select 1,(_x select 1) min 0.8] select (!_isAir && {_selection in dayZ_explosiveParts});
		[_object,_selection,_dam] call fnc_veh_setFixServer;
	} forEach _hitpoints;

	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	_object call fnc_veh_ResetEH;
	{if (_object isKindOf _x) exitWith {_object disableTIEquipment true;}} count vg_disableThermal;

	PVDZE_veh_Init = _object;
	publicVariable "PVDZE_veh_Init";

	PVDZE_spawnVehicleResult = _characterID;

	if (!isNull _player) then {_clientID publicVariableClient "PVDZE_spawnVehicleResult";};
	
	_message = format["%1 (%2) retrieved %3 @%4 %5",if (alive _player) then {name _player} else {"DeadPlayer"},getPlayerUID _player,_class,mapGridPosition _player,getPosATL _player];
	diag_log _message;
};
