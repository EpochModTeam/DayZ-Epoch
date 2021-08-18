private ["_damageVeh","_VGobjID","_array","_backPack","_backPackCount","_charID","_class","_clientID","_colour","_colour2","_damage","_displayName","_fnc_sanitizeInput","_fuel","_gearCount","_hit","_hitpoints","_index","_inventory","_inventoryCount","_key","_magazine","_magazineCount","_message","_name","_objectID","_objectUID","_player","_playerUID","_selection","_vehicle","_weapons","_weaponsCount","_woGear"];

_vehicle = _this select 0;
_player = _this select 1;
_woGear = _this select 2;
_clientID = owner _player;
_playerUID = if (count _this > 3) then {_this select 3} else {getPlayerUID _player};

_gearCount = {
	private ["_counter"];
	_counter = 0;
	{_counter = _counter + _x;} count _this;
	_counter;
};

_fnc_sanitizeInput = {
	private ["_input","_badChars"];

	_input = _this;
	_input = toArray (_input);
	_badChars = [60,62,38,123,125,91,93,59,58,39,96,126,44,46,47,63,124,92,34];

	{
		_input = _input - [_x];
	} forEach _badChars;
	
	_input = toString (_input);
	_input
};

_class = typeOf _vehicle;
_displayName = (getText(configFile >> "cfgVehicles" >> _class >> "displayName")) call _fnc_sanitizeInput;
_name = if (alive _player) then {(name _player) call _fnc_sanitizeInput;} else {"unknown player";};

_charID = _vehicle getVariable ["CharacterID","0"];
_objectID = _vehicle getVariable ["ObjectID","0"];
_objectUID = _vehicle getVariable ["ObjectUID","0"];
_VGobjID = _vehicle getVariable ["VGObjectID","0"];
if (_VGobjID == "0") then {
	_VGobjID = (toString (18 call VG_RandomizeMyKey)); //normally spawned vehicle
} else {
	_index = vg_alreadySpawned find _VGobjID;
	if (_index >= 0) then {
		vg_alreadySpawned = vg_alreadySpawned - [_VGobjID];
	} else {
		diag_log format["VG Error: Could not find vehicle with VGobjUID = %1 in vg_alreadySpawned array (server_storeVehicle.sqf) - possible duplicate vehicle being stored. PlayerUID: %2", _VGobjID, (getPlayerUID _player)];
	};
};
_damageVeh = damage _vehicle;
_fuel = fuel _vehicle;
_colour = _vehicle getVariable ["Colour","0"];
_colour2 = _vehicle getVariable ["Colour2","0"];

_array = [];
_inventory = [[[],[]],[[],[]],[[],[]]];
_inventoryCount = [0,0,0];

if (isNil "_colour") then {_colour = "0";};
if (isNil "_colour2") then {_colour2 = "0";};

_hitpoints = _vehicle call vehicle_getHitpoints;

{
	_hit = [_vehicle,_x] call object_getHit;
	_damage = _hit select 0;
	_selection = getText (configFile >> "CfgVehicles" >> _class >> "HitPoints" >> _x >> "name");
	if (_damage > 0) then {_array set [count _array,[_selection,_damage]]};
} count _hitpoints;

if (!_woGear) then {
	_weapons = getWeaponCargo _vehicle;
	_magazine = getMagazineCargo _vehicle;
	_backPack = getBackpackCargo _vehicle;
	_weaponsCount = (_weapons select 1) call _gearCount;
	_magazineCount = (_magazine select 1) call _gearCount;
	_backPackCount = (_backPack select 1) call _gearCount;
	_inventory = [_weapons, _magazine, _backPack];
	_inventoryCount = [_weaponsCount, _magazineCount, _backPackCount];
};

_key = str formatText["CHILD:802:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:",_playerUID,_name,_displayName,_class,_charID,_inventory,_array,_fuel,_damageVeh,_colour,_colour2,vg_serverKey,_VGobjID,_inventoryCount];
_key call server_hiveWrite;

PVDZE_storeVehicleResult = true;

[_objectID,_objectUID,_vehicle] call server_deleteObjDirect;
deleteVehicle _vehicle;

if (!isNull _player) then {_clientID publicVariableClient "PVDZE_storeVehicleResult";};

_message = format["GARAGE: %1 (%2) stored %3 @%4 %5",_name,_playerUID,_class,mapGridPosition _player,getPosATL _player];
diag_log _message;
