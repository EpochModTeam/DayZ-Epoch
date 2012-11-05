private["_car","_hitpoints","_dam","_selection","_type","_pos","_dir"];
_type = _this select 0;
_pos = _this select 1;
_dir = _this select 2;
_car = _type createVehicle _pos;
_car setpos _pos;
_car setdir _dir;
_hitpoints = _car call vehicle_getHitpoints;
_dam = 1;
_car setFuel 0;
{
	_selection = getText(configFile >> "cfgVehicles" >> typeOf _car >> "HitPoints" >> _x >> "name");
	if (_x != "HitEngine" and _x != "HitFuel") then {
		_dam = 1;
	} else {
		_dam = 0.85;
	};
	[_car,_selection,_dam] call object_setFixServer;
} forEach _hitpoints;	
_car setvelocity [1,0,0];
player reveal _car;
dayzVehicleInit = _car;
publicVariable "dayzVehicleInit";
if (isServer) then {
	_car call fnc_vehicleEventHandler;
	[0,_car,[_dir,_pos],_type] call local_publishObj;
};

//Wait for HIVE to be free
waitUntil{!hiveInUse};
hiveInUse = true;

//Send request
_hitpoints = _car call vehicle_getHitpoints;
_array = [];
_dam = 1;
{
	_hit = [_car,_x] call object_getHit;
	_selection = getText (configFile >> "CfgVehicles" >> (typeOf _car) >> "HitPoints" >> _x >> "name");
	if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
} forEach _hitpoints;

copyToClipboard str(_array);

_car