private["_object","_worldspace","_location","_dir","_character","_tent","_class","_id","_uid","_dam","_hitpoints","_selection","_array","_damage","_randFuel","_fuel","_key","_result","_outcome","_totaldam","_parts","_retry","_done"];
//[_veh,[_dir,_location],"V3S_Civ"]
_object = 		_this select 0;
_worldspace = 	_this select 1;
_class = 		_this select 2;
_uid =			_this select 3;

_fuel = 0;
_damage = 0;
_array = [];

diag_log ("PUBLISH: Attempt " + str(_object));
_dir = 		_worldspace select 0;
_location = _worldspace select 1;

//Generate UID
_uid = _worldspace call dayz_objectUID2;
// _uid = format["%1%2",dayZ_instance,_uid];

if (getNumber(configFile >> "CfgVehicles" >> _class >> "isBicycle") != 1) then {

	// Create randomly damaged parts
	
	_totaldam = 0;
	_hitpoints = _object call vehicle_getHitpoints;
	{
		_dam = 0;
		if(["Body",_x,false] call fnc_inString) then {
			_dam = call generate_new_damage;
		};
		if(["Engine",_x,false] call fnc_inString) then {
			_dam = call generate_exp_damage;
		};
		if(["HRotor",_x,false] call fnc_inString) then {
			_dam = call generate_new_damage;
		};
		if(["Fuel",_x,false] call fnc_inString) then {
			_dam = call generate_exp_damage;
		};
		if(["Wheel",_x,false] call fnc_inString) then {
			_dam = call generate_new_damage;
		};
		if(["Glass",_x,false] call fnc_inString) then {
			_dam = call generate_new_damage;
		};

		_selection = getText(configFile >> "cfgVehicles" >> _class >> "HitPoints" >> _x >> "name");
			
		if (_dam > 0) then {
			_array set [count _array,[_selection,_dam]];
			_totaldam = _totaldam + _dam;
		};
	} forEach _hitpoints;	


	// just set low base dmg - may change later
	_damage = 0;

	// 50% chance that vehicle will have a little gas
	_randFuel = random(1);
	if(_randFuel > 0.5) then {
		_fuel = random(0.5);
	};
	
};

//Send request
_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, _damage , 0, _worldspace, [], _array, _fuel,_uid];  // Change this to dynamic parts damage and fuel
diag_log ("HIVE: WRITE: "+ str(_key)); 
_key call server_hiveWrite;

// Wait just a little
sleep 0.1;

_done = false;
_retry = 0;
while{not _done} do {
	
    // GET DB ID
	_key = format["CHILD:388:%1:",_uid];
	diag_log ("HIVE: WRITE: "+ str(_key));
	_result = [_key] call server_hiveReadWrite;
	_outcome = _result select 0;
	if (_outcome == "PASS") then {
		_oid = _result select 1;
		_object setVariable ["ObjectID", _oid, true];
		diag_log("CUSTOM: Selected " + str(_oid));
		_done = true;

	} else {
		diag_log("CUSTOM: trying again to get id for: " + str(_uid));
		_done = false;
		_retry = _retry + 1;
		sleep 0.1;
	};
	if(_retry == 5) exitWith { deleteVehicle _object; diag_log("CUSTOM: failed to get id for : " + str(_uid)); };
};

// disable marker later
//_marker = createMarker [str(_location) , _location];
//_marker setMarkerShape "ICON";
//_marker setMarkerType "DOT";
//_marker setMarkerText (typeOf _object);
//_marker setMarkerColor "ColorBlue";

// not needed yet
// _object setVariable ["ObjectUID", _uid, true];

_object setVariable ["lastUpdate",time];
_object setVariable ["CharacterID", "0", true];

_object setDamage _damage;

// Set Hits after ObjectID is set
{
	_selection = _x select 0;
	_dam = _x select 1;
	if (_selection in dayZ_explosiveParts and _dam > 0.8) then {_dam = 0.8};
	[_object,_selection,_dam] call object_setFixServer;
} forEach _array;

_object setvelocity [0,0,1];
_object setFuel _fuel;

_id = _object spawn fnc_vehicleEventHandler;

dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

diag_log ("PUBLISH: Created " + (_class) + " with ID " + str(_uid));