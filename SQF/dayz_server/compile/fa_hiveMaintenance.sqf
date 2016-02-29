/*
        Created exclusively for ArmA2:OA - DayZMod.
        Please request permission to use/alter/distribute from project leader (R4Z0R49) AND the author (facoptere@gmail.com)
*/

#include "fa_hiveMaintenance.hpp"

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
	_res = format["%1 [%2:%3]", _town, round((_pos select 0)/100), round((15360-(_pos select 1))/100)];

	_res
};

// print vehicle OID and name. if OID is unknown, it should be an hacked vehicle so print hacker PID.
fa_veh2str = {
	private["_res","_oid", "_type"];

	_res = "anything";
	if (!isNil "_this") then {
		_oid = _this getVariable ["ObjectID", nil];
		if (isNil "_oid" OR {(_oid == "")}) then { 
			_oid = "Hacked vehicle owned by PID#" + str(owner _this); 
		} 
		else { 
			_oid = "OID#" + _oid; 
		};
		_type = getText(configFile >> "CfgVehicles" >> (typeOf _this) >> "displayName");
		if (_type == "") then { _type = typeOf _this; };
		_res = format["%1(%2)", _oid, _type ];
	};

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


// isoutofmap: return true if position is out of map
fa_isoutofmap = {
	private ["_SWcorner","_NEcorner"];
	_SWcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "SWcorner");
	_NEcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "NEcorner");
	(!((((_this select 0 >= _SWcorner select 0) AND {(_this select 0 <= _NEcorner select 0)})  
		AND {(_this select 1 >= _SWcorner select 1)}) AND {(_this select 1 <= _NEcorner select 1)}))
};
 
// spawninventory: draw preexisting loot in the vehicle. helicrash loot type is taken here + parts taken as arg
fa_spawninventory = { 	
	private["_partType","_partChance","_lootWeight","_config","_itemType","_itemChance","_weights",
		"_index","_y","_partWeight","_spawnType","_spawnChance","_inventory","_weaponType","_weaponQty" ];

	_partType = _this select 0;
	_partChance = _this select 1;
	_config = configFile >> "CfgLoot" >> "Buildings" >> "HeliCrash";
	// append parts to loot item
	_itemType =	(getArray (_config >> "itemType"));
	{ _itemType set [count _itemType, [_x,"object"]] } forEach _partType;
	_itemChance = getArray (_config >> "itemChance");
	//diag_log (format["FACO _itemType:%1  _itemChance:%2", _itemType, _itemChance]);
	// _partWeight : sum of weights of parts list
	_partWeight = 0; { _partWeight = _partWeight + _x; } forEach _partChance;				
	// _lootWeight : sum of weights of loot list
	_lootWeight = 0; { _lootWeight = _lootWeight + _x; } forEach _itemChance;
	// multiply parts weight so that  parts have same chance to be chosen as regular loot
	// and append parts chance to loot item weight array
	{ _itemChance set [count _itemChance, _x  * _lootWeight / _partWeight]; } forEach _partChance;				
	// _partWeight : now, number of item to be chosen
	_partWeight = ceil(random(_partWeight));
	// lets choose the inventory
	_spawnType = [];
	_spawnQty = [];
	_weaponType = [];
	_weaponQty = [];
	_weights = [_itemType,_itemChance] call fnc_buildWeightedArray;
	for "_x" from 0 to _partWeight do {
		_index = _weights call BIS_fnc_selectRandom;
		if (_index < count _itemType) then {
			_y=(_itemType select _index) select 0;
			if (_y != "") then {
				if (_y isKindOf "Pistol" OR _y isKindOf "RifleCore" OR _y isKindOf "Binocular") then {
					_weaponType set [count _weaponType, _y ];
					_weaponType set [count _weaponType, 1];  
				}
				else {
					_spawnType set [count _spawnType, _y ];
					_spawnQty set [count _spawnQty, 1];  
				};
			};
		};
	};
	_inventory = [[_weaponType,_weaponQty],[_spawnType,_spawnQty],[[],[]]];
	_inventory
};

// populateCargo: add item and quantity to the 3 cargos (magazines,weapons,backpack) of an unit
fa_populateCargo = {
	private["_entity","_config","_magItemTypes","_magItemQtys","_i","_inventory"];
	_entity = _this select 0;
	_inventory = _this select 1;

	clearWeaponCargoGlobal  _entity;
	clearMagazineCargoGlobal  _entity;
	clearBackpackCargoGlobal  _entity;	 
	_config = ["CfgWeapons", "CfgMagazines", "CfgVehicles" ];
	{
		_magItemTypes = _x select 0;
		_magItemQtys = _x select 1;
		_i = _forEachIndex;
		{    
			if (_x == "Crossbow") then { _x = "Crossbow_DZ" }; // Convert Crossbow to Crossbow_DZ
            if (_x == "BoltSteel") then { _x = "WoodenArrow" }; // Convert BoltSteel to WoodenArrow
			if (_x == "ItemBloodbag") then { _x = "bloodBagONEG" }; // Convert ItemBloodbag into universal blood type/rh bag
			// Convert to DayZ Weapons
			if (_x == "DMR") then { _x = "DMR_DZ" };
			//if (_x == "M14_EP1") then { _x = "M14_DZ" };
			if (_x == "SVD") then { _x = "SVD_DZ" }; 
			if (_x == "SVD_CAMO") then { _x = "SVD_CAMO_DZ" };
			if (isClass(configFile >> (_config select _i) >> _x) &&
				getNumber(configFile >> (_config select _i) >> _x >> "stopThis") != 1) then {
				if (_forEachIndex < count _magItemQtys) then {
					switch (_i) do {
						case 0: { _entity addWeaponCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
						case 1: { _entity addMagazineCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
						case 2: { _entity addBackpackCargoGlobal [_x,(_magItemQtys select _forEachIndex)]; }; 
					};
				};
			};
		} forEach _magItemTypes;
	} forEach _inventory;	
};


// all damageable parts names defined in Legacy/dayz_vehicles/config.cpp, some of them commented.
// other damageables parts, defined in other CfgVehicles, are ignored.
dayZ_damageableParts = [ "motor", "sklo predni P", "sklo predni L", "karoserie", "palivo", "wheel_1_1_steering", "wheel_2_1_steering", "wheel_1_2_steering", "wheel_2_2_steering", "glass1", "glass2", "glass3", "glass4"
//, "glass5", "glass6", "door_fl", "door_rl", "door_fr", "door_rr"
];

// setDamagedParts: declare some damageable parts of a vehicle. Randomly set damage to 80% (very damaged) to some parts
// compute global damage of the vehicle
// return: global damage,  "_this" is modified and should be _hitpoints array from server_monitor
fa_setDamagedParts = {
	private ["_part_damage", "_part_name", "_damage", "_hitpoints"];
	_damage = 0; 
	_hitpoints = _this;
	{
		_part_damage = 0.05; // don't put 0, otherwise server_updateObject will think it's repaired
		if (random(3)<1) then { _part_damage =  0.80; };
		_part_name = getText (configFile >> "CfgVehicles" >> (typeOf _entity) >> "HitPoints" >> _x >> "name");
		if (_part_name IN dayZ_damageableParts) then {
			_damage = _damage + _part_damage;
			_hitpoints set [count _hitpoints, [ _part_name, _part_damage ]];
		};
	} forEach (_entity call vehicle_getHitpoints);
	_damage = _damage / (1 + (count _hitpoints)); // avoid DIV0
	
	_damage
};

fa_tentEmpty = {
	 ( (count _this == 0) || {
		(count ((_this select 0) select 0) == 0) &&
		(count ((_this select 1) select 0) == 0) &&
		(count ((_this select 2) select 0) == 0)
	})
};

// ignore empty tents from array of objects fetched from hive
fa_removeExtraTents = {
	private ["_emptytenttotal",  "_idx", "_intentory", "_k", "_maxEmptyTents", "_allowedEmptyTents", "_ownerID", "_stall", "_tentcur", "_tentidx", "_tentowner", "_y", "_z", "_myArray"];
	
	_myArray = _this select 0;
	_maxEmptyTents = _this select 1;
	_allowedEmptyTents = _this select 2;
	
	_tentowner=[];
	_tentidx=[];
	_tentcur=[];
	_emptytenttotal=0;
	
	{
		if ((_x select 2) == "TentStorage") then {
			_idx=_forEachIndex;
			_ownerID = _x select 3;	
			if (!(_ownerID IN _tentowner)) then {
				_tentidx set [count _tentidx, []];
				_tentcur set [count _tentcur, 0];
				_tentowner set [count _tentowner, _ownerID];
			};
			_intentory = (_x select 5);
			if (_intentory call fa_tentEmpty) then {
				{
					if (_x == _ownerID) then {
						(_tentidx select _forEachIndex) set [count (_tentidx select _forEachIndex), _idx];
						_emptytenttotal = _emptytenttotal + 1;
					};
				} forEach _tentowner;
			};
		};
	} forEach _myArray;
	diag_log (format [ "fa_removeExtraTents: Empty tents: %1, would like less than %2.",
		_emptytenttotal,
		_maxEmptyTents
	]);
	if (_emptytenttotal > _maxEmptyTents) then {
		for [{_k = _emptytenttotal / 2}, {_k >= 2}, {_k = _k / 2}] do {
			_stall = 0;
			while {_emptytenttotal > _maxEmptyTents && _stall == 0} do {
				_stall = 1;
				for [{_x = (count _tentidx) - 1}, {_x >= 0 && _emptytenttotal >= _maxEmptyTents}, {_x = _x - 1}] do {
					_y = _tentidx select _x;
					_z = _tentcur select _x;
					if (_z < (count _y) -_allowedEmptyTents + 2 - _k) then {
						_idx = _myArray select (_y select _z);
						/*diag_log (format ["fa_removeExtraTents: will remove Tent ID=%1, owner=%2",
							_idx select 1,
							_idx select 3 
						]);*/	
						_idx set [ 8, 1 ]; // Set damage to 100%	
						_emptytenttotal = _emptytenttotal - 1;
						_tentcur set [_x, _z + 1];
						_stall=0;
					};
				};
				_z =_z + 1;
			};
		};
	};
};	

// check that vehicles list from the Hive has the right count of each vehicle
// if some vehicles are missing, add them to the array
// if a vehicle is illegal or outnumbered, delete it
fa_checkVehicles = {
	private ["_vehcat", "_myArray", "_y", "_j","_type", "_count", "_idKey" ];
	_myArray = _this select 0;
	
	// populate catalogue by browsing configFile
	_vehcat = [];
	_list = configFile >> "CfgPatches" >> "vehMaint";
	for "_x" from 0 to (count _list - 1) do {
		_class = configname (_list select _x);
		_qty = getNumber(CONFIGBASE_VEHMAINTENANCE >> _class >> "quantity");
		if (_qty > 0) then {
			_vehcat set [count _vehcat, [_class, _qty]];
//			diag_log(format["class:%1 val:%2", _class, _qty]);
		};
	};

	// check the amount of vehicles of each kind
	{
		_type =	_x select 2;
		for "_j" from 0 to (count _vehcat-1) do {
			if (_type == ((_vehcat select _j) select 0)) then {
				_count = ((_vehcat select _j) select 1);
				if (_count > 0) then {
					(_vehcat select _j) set [1, (_count-1)];
					if ((_x select 8) >= 1) then { 
#ifdef VEH_MAINTENANCE_ADD_MISSING	
						(_myArray select _forEachIndex) set [8, 0.9] ; // damage = 0.9 so this veh will me respawned
						diag_log (format["fa_checkVehicles: recycling vehicle class=%1, oid=%2", _x select 2, _x select 1]);
#endif
					};
				}
#ifdef VEH_MAINTENANCE_IGNORE_UNKNOWN
				else {
					(_myArray select _forEachIndex) set [8,2]; // damage=2, so this veh will be deleted
					diag_log (format["fa_checkVehicles: skipping vehicle class=%1, oid=%2", 
										_x select 2, _x select 1]);
				}
#endif
				;_j = 999999; // break;
			};
		};
	} foreach _myArray;

#ifdef VEH_MAINTENANCE_ADD_MISSING	
	// create missing vehicles of each kind.
	{
		for "_y" from 1 to (_x select 1) do {
			// create a new one at the end of _myArray list
			_type = (_x select 0);
			_idKey = format["%1%2",48,60000+floor(random 10000)];
			// "1" as Character ID since if I put "0" the vehicle is not stored in hive (since january 2013)
			_myArray set [count _myArray, ["CREATED",_idKey,_type,"1",[0,[0,0,0]],[[[],[]],[[],[]],[[],[]]],[],0,0.9]];
			diag_log (format["fa_checkVehicles: inserting in HIVE: vehicle class=%1, chosen oid=%2", _type, _idKey]);
		};
	} foreach _vehcat;
#endif
};

// move object to map boundary if it's out of map
fa_staywithus = {

	private["_a","_dir","_px","_py","_b","_cx","_cy","_k", "_SWcorner", "_NEcorner"];
	
	_dir = +(_this select 0);  // current position of player / vehicle
	_a = +(_this select 1);  // current position of player / vehicle

	_SWcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "SWcorner");
	_NEcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "NEcorner");

	_a = ASLtoATL [_a select 0, _a select 1, 0];
	if ((((_a select 2) > 9) AND {(surfaceisWater _a)})  // entity in water and sea depth above 9 meters?
		OR {(_a call fa_isoutofmap)}) then { // or entity is out of map?
		// first : put object close to the map boundary, following an axis to the center of the map.
		_px = _a select 0;
		_py = _a select 1; 
		_b = getMarkerpos "center";

		_cx = (_b select 0) - _px; if (_cx == 0) then { _cx = 0.00001; };
		_cy = (_b select 1) - _py; if (_cy == 0) then { _cy = 0.00001; };
		if (_px <= (_SWcorner select 0)) then { _py = _py + (1 + (_SWcorner select 0) - _px) / _cx * _cy; _px = 1 + (_SWcorner select 0); };
		if (_py <= (_SWcorner select 1)) then { _px = _px + (1 + (_SWcorner select 1) - _py) / _cy * _cx; _py = 1 + (_SWcorner select 1); };
		if (_px >= (_NEcorner select 0)) then { _py = _py + ((_NEcorner select 0) - 1 - _px) / _cx * _cy; _px = (_NEcorner select 0) - 1; };
		if (_py >= (_NEcorner select 1)) then { _px = _px + ((_NEcorner select 1) - 1 - _py) / _cy * _cx; _py = (_NEcorner select 1) - 1; };
		// 2nd: compute the object direction, so that it heads toward the center of the map.
		_dir = atan(_cx / _cy);
		if (_cy < 0) then { _dir = _dir + 180; };
		
		// 3rd: if the object is on shalow sea, make it virtually swim so that sea depth is below 9 meters. 
		_a = [_px,_py,0];
		for "_k" from 0 to 1 step 0.005 do {
			_a = [_px + _cx * _k, _py + _cy * _k, 0];
//			if ((_k*200) mod 5 == 4) then { diag_log (format["fa_staywithus:  a:%1 water:%2 zx:%3", _a, surfaceisWater _a, (getPosATL _o) select 2]); };
			if (surfaceisWater _a) then {
				_a = ASLtoATL [_a select 0, _a select 1, 0];
				if (((_a select 2) < 9) AND{(!(_a call fa_isoutofmap))}) then { _k = 2; }
				else { if ((_a select 2) < 30) then { _k = _k - 0.0045; };}; // slow down on the axis
			}
			else {
				if (!(_a call fa_isoutofmap)) then { _k = 2; };
			};
		};
		/*diag_log (format["FACO out-of-map new pos:%1  direction:%2  in water:%3  out-of-map:%4  ",
			(getPosATL _o) call fa_coor2str,
			round(_dir),
			surfaceisWater _a,
			(if ([_a] call fa_isoutofmap == 1) then { true } else { false })
		]);*/
	};
	
	// cancel the change if it is too near original pos
	if (([(_this select 1),_a] call BIS_fnc_distance2Dsqr) <= 30) then { 
		[_this select 0, +(_this select 1)]
	}
	else {
		[ _dir, [_a select 0, _a select 1, 0]]
	}
};

// used only by fa_server_locationCheck
stream_locationFill = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationFill.sqf";
dayz_locationsActive = [];
// used only by fa_smartlocation. Same as stream_locationCheck, but without any deletion.
fa_server_locationCheck = {
	private ["_point","_rad","_config","_i","_location","_distCfg","_distAct"];

	_point = _this select 0;
	_rad = _this select 1;
	_config = configFile >> "CfgTownGeneratorChernarus";
	
	if (count _point >= 2) then {
		for "_i" from (count _config -1) to 0 step -1 do {
			_x = _config select _i;
			_location = getArray (_x >> "position");
			_distCfg = getNumber (_x >> "size");
			_distAct = [_point select 0, _point select 1, 0] distance [_location select 0, _location select 1, 0];

			if (!(_i in dayz_locationsActive)) then {
				if (_distAct < _distCfg + _rad) then {
					dayz_locationsActive set [count dayz_locationsActive,_i];
					diag_log format ["%1::fa_server_locationCheck : creating %2 objects at '%3'", __FILE__, count _x, _location];
					[_x, false] call stream_locationFill; // create wrecks & rubbish as local objects
				};
			};
		};
	};
};

// used only by fa_smartlocation
fa_smartlocation_commonTests = { // [_type, _pos, _minAltitude, _maxAltitude, _found]
	private ["_found", "_point", "_worldspace"];

	_found = false;
	_point = _this select 1;
		
	//diag_log(format["fa_smartlocation %1 %2", __LINE__, _this]); 

	_point set [2, 0];
	_point = ATLtoASL _point;
	if (((_point select 2) < _this select 3) AND {((_point select 2) > _this select 2)}) then {
		if (count (_point nearEntities [["Air", "LandVehicle", "Ship"], _this select 4]) <= 0) then { 
			if (_this select 3 < 0) then { // boats
				_found = surfaceisWater _point;
			}
			else { // not boats
				_point set [2, 0];
				_worldspace = [_this select 0, _point] call fn_niceSpot;						
				if (count _worldspace == 2) then {
					_point = _worldspace select 1;
					(_this select 1) set [0, _point select 0];
					(_this select 1) set [1, _point select 1];
					(_this select 1) set [2, 0];
					_found = true;
				};
			};
		};
	};
//		diag_log(format["fa_smartlocation %1 %2", __LINE__, _this]); 
	
	_found
};

// move vehicle to a safe position, respawn vehicle.
fa_smartlocation = { 
private ["_type","_class","_dir","_oldpos","_action","_distance","_minAltitude","_maxAltitude","_tmpobject","_width","_found","_wp","_worldCenter","_worldRadius","_locations","_radius","_nearObjectTypes","_types","_pickedLocation","_o","_objects","_counter","_locpos","_loc","_y","_r","_deg","_veh","_size","_old", "_point"];

	_type = _this select 0; // vehicle "typeOf"
	_class = _type;
	if (_type isKindOf "Air") then { _class = "Land_Ind_TankBig"; }; // for helis we take a big circular tank as a footprint
	_dir = _this select 1;
	_oldpos	= +(_this select 2); // current vehicle position (from hive)
	_action	= _this select 3; // "OBJ"=> read from hive, keep position the best we can. Otherwise: choose a random position.
	_distance = 500; // distance from other vehicles. decrease as soon as we can't find a spot

	_minAltitude = getNumber(CONFIGBASE_VEHMAINTENANCE >> _type >> "minAltitude");
	_maxAltitude = getNumber(CONFIGBASE_VEHMAINTENANCE >> _type >> "maxAltitude");

	// workaround for sizeof bug -- do not remove
	_tmpobject = _class createVehicleLocal (getMarkerPos "respawn_west");
	sleep 0.01; // wait object loading
	_width = (((boundingBox _tmpobject) select 1) select 0);
	//diag_log(format["fa_smartlocation _this:%1 %2", _this, (sizeOf _class)]); 

	_point = [];
	_found = false;
	// try to place the object in a safe position near current position
	if ((!(_action IN [ "CREATED", "SPAWNED"])) and {(count _oldpos>=2)}) then {
#ifdef VEH_MAINTENANCE_FIX_OUTOFMAP
		// move object back on the map
		_wp = [0, _oldpos] call fa_staywithus;  // use ATL format
		_point = +(_wp select 1);
		if (count _point < 2) then { _point = _oldpos; };
#else
		_point = +(_oldpos);
#endif
		// find a safe position around current position for air vehicles
		if (_type isKindOf "Air") then { 
			[_point, 20] call fa_server_locationCheck; // towngenerator around spawn point, to limit collisions
			deleteVehicle _tmpobject;
			_tmpobject = _class createVehicleLocal _point;  
			_point = getPosATL _tmpobject;
		};
		// check altitude		
#ifdef VEH_MAINTENANCE_FIX_OUTOFMAP
		if (count _point >= 2) then {
			_point set [2, 0];
			_point = ATLtoASL _point;
			_found = (((_point select 2) < _maxAltitude) AND {((_point select 2) > _minAltitude)});
		};
#else
		_found = true;
#endif
		/*diag_log(format["fa_smartlocation: Looking for a safe place near original position... _action:%1 _type:%2 suitable:%3 distance:%4", 
			_action,
			_type,
			_found, 
			if (_found) then { [_oldpos, _point] call BIS_fnc_distance2D } else { "" } 
		]);*/
	}
	else {
		[_point, 20] call fa_server_locationCheck; // towngenerator around spawn point, to limit collisions
	};
	deleteVehicle _tmpobject;
	sleep 0.01; // wait object destroy. nearEntities may return false info if not done.
#ifndef VEH_MAINTENANCE_DONT_BE_SMART
	if (!_found) then { // we failed to find a suitable position around current one, so respawn vehicle
		_worldCenter = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "center");
		_worldRadius = getNumber(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "spawnRadius");
	
		// if vehicle is not described in configFile, then locations is empty.
		_locations =  nearestLocations [
			_worldCenter, 
			getArray(CONFIGBASE_VEHMAINTENANCE >> _type >> "localityTypes"),
			_worldRadius
			];
		_radius = getNumber(CONFIGBASE_VEHMAINTENANCE >> _type >> "localityRadius");
		_nearObjectTypes = getArray(CONFIGBASE_VEHMAINTENANCE >> _type >> "nearObjects");
//		diag_log(format["fa_smartlocation: Getting choice logic: Altitude min:%1 max:%2 _radius:%3 _types=%4 countlocations:%5", _minAltitude, _maxAltitude, _radius, _nearObjectTypes, (count _locations) ]);
		_pickedLocation = nil;
		_o = nil;
		_objects = nil;
		_counter = 0;
		_point = [];
		while ({count _locations > 0 AND !_found}) do {
			_pickedLocation = _locations call BIS_fnc_selectRandom;
			_locpos = position _pickedLocation;
			_locpos set [2,0];
			_locpos = ATLtoASL _locpos;
			// if location is in the sea, or on the ground and at the right altitude
			if ((_maxAltitude<0) OR {(((_locpos select 2) < _maxAltitude+0.05*_radius) AND {((_locpos select 2) > _minAltitude-0.05*_radius)})}) then {
				[_locpos, _radius] call fa_server_locationCheck;
				if (count _nearObjectTypes > 0 ) then { // spawn close to an object
					_objects = nearestObjects [_locpos, _nearObjectTypes, _radius]; 
					//diag_log(format["fa_smartlocation: In locality loop _loc:%1  near objects count:%2  ", _pickedLocation, count _objects ]);
					while ({count _objects > 0 AND !_found}) do {
						_counter=_counter+0.0001;
						_o = _objects call BIS_fnc_selectRandom;
						// move spot in front of object, according to object length (its Y axis) and vehicle width (its X axis)
						// vehicle should be located slightly in front object, twisted by a 90* angle
						_point = _o modelToWorld [0,-(_width+(((boundingBox _o) select 1) select 1))/2,0];
						_point set [2, 0];
						_dir = (getDir _o)+90;
						_found = [_class, _point, _minAltitude, _maxAltitude, _distance] call fa_smartlocation_commonTests;
						//if (_found) then { diag_log(format["fa_smartlocation %1 %3 +--> %2", __LINE__,  _point, _oldpos]); };
						_objects = _objects - [_o];
						_distance = _distance * 0.995;
					};
				}
				else { // spawn anywhere on the location
					for [{_y = _radius * _radius / 20000}, {(_y > 0 ) AND !_found}, {_y = _y - 1}] do {
						_counter=_counter+0.0001;
						_r = random(_radius*_radius)^0.5;
						_deg = random 360;
						_point = [(_locpos select 0) + sin(_deg) * _r, (_locpos select 1) + cos(_deg) * _r, 0];
						_dir = _deg;
						_found = [_class, _point, _minAltitude, _maxAltitude,_distance] call fa_smartlocation_commonTests;
						//if (_found) then { diag_log(format["fa_smartlocation %1 %3 +--> %2", __LINE__,  _point, _oldpos]); };
						_distance = _distance * 0.995;
					};
				};
			}; // was suitable altitude
			_counter = _counter + 1;
			_locations = _locations - [_pickedLocation];
		}; // while suitable location 
		diag_log(format["fa_smartlocation: %2   _veh:%1 _size:%6   _old:%8 |--> _point:%3    _pickedLocation:%4 _counter=%5  badly near:%7", 
			_type, 
			if (_found) then {"ok"} else {"** FAILED **"}, 
			_point, 
			if (!isNil "_pickedLocation") then {text(_pickedLocation)} else {""}, 
			_counter, (sizeOf _class), 
			if (count _point >0) then { (_point nearEntities [["Air", "LandVehicle", "Ship"],_distance])-[_tmpobject] } else { "" },
			_oldpos
		]); 
	};
#endif

	if (_found) then { [_dir, [_point select 0, _point select 1, 0]] } else { [] }
};


FNC_kindOf = {
    _inherit = inheritsFrom _this;
    _list = [configName _this];
    while { (configName _inherit) != "" } do {
        _list set[count _list,configName _inherit];
        _inherit = inheritsFrom( _inherit );
    };
    _list
};

