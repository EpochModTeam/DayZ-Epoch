private ["_guaranteedLoot","_randomizedLoot","_spawnChance","_spawnMarker","_spawnRadius","_spawnFire","_fadeFire","_crashModel","_lootTable","_crashName","_spawnRoll","_position","_crash","_config","_hasAdjustment","_newHeight","_adjustedPos","_num","_itemTypes","_index","_weights","_cntWeights","_nearby","_itemType","_needsrelocated","_istoomany"];

_guaranteedLoot = 3;
_randomizedLoot = 4;
_spawnChance =  0.50;
_spawnMarker = 'center';
// _spawnRadius = 5000;
_spawnRadius = HeliCrashArea;
_spawnFire = true;
_fadeFire = false;

_spawnRoll = random 1;
if (_spawnRoll <= _spawnChance) then {

	_crashModel = ["UH60Wreck_DZ","UH1Wreck_DZ","UH60_NAVY_Wreck_DZ","UH60_ARMY_Wreck_DZ","UH60_NAVY_Wreck_burned_DZ","UH60_ARMY_Wreck_burned_DZ","Mass_grave_DZ"] call BIS_fnc_selectRandom;

	if(_crashModel == "Mass_grave_DZ") then {
		_lootTable = "MassGrave";
	} else {
		_lootTable = "HeliCrash";
	};

	_crashName	= getText (configFile >> "CfgVehicles" >> _crashModel >> "displayName");

	// Loop for a new location without any vehicles
	_needsrelocated = true;
	while {_needsrelocated} do {
		_position = [getMarkerPos _spawnMarker,0,_spawnRadius,10,0,2000,0] call BIS_fnc_findSafePos;
		_istoomany = _position nearObjects ["AllVehicles",10];
		if((count _istoomany) == 0) then { _needsrelocated = false; };
	};

	//diag_log(format["CRASHSPAWNER: Spawning '%1' with loot table '%2' NOW! (%3) at: %4", _crashName, _lootTable, time, str(_position)]);

	_crash = createVehicle [_crashModel,_position, [], 0, "CAN_COLLIDE"];
	// Randomize the direction the wreck is facing
	_crash setDir round(random 360);

	// Using "custom" wrecks (using the destruction model of a vehicle vs. a prepared wreck model) will result
	// in the model spawning halfway in the ground.  To combat this, an OPTIONAL configuration can be tied to
	// the CfgVehicles class you've created for the custom wreck to define how high above the ground it should
	// spawn.  This is optional.
	_config = configFile >> "CfgVehicles" >> _crashModel >> "heightAdjustment";
	_hasAdjustment =  isNumber(_config);
	_newHeight = 0;
	if (_hasAdjustment) then {
		_newHeight = getNumber(_config);
	};

	// Must setPos after a setDir otherwise the wreck won't level itself with the terrain
	_adjustedPos = [(_position select 0), (_position select 1), _newHeight];
	//diag_log(format["DIAG: Designated Position: %1", str(_adjustedPos)]);
	_crash setPos _adjustedPos;

	// I don't think this is needed (you can't get "in" a crash), but it was in the original DayZ Crash logic
	PVDZE_serverObjectMonitor set [count PVDZE_serverObjectMonitor,_crash];

	_crash setVariable ["ObjectID","1",true];

	// Disable simulation server side
	_crash enableSimulation false;

	_num = round(random _randomizedLoot) + _guaranteedLoot;

	if(_crashModel == "Mass_grave_DZ") then {
		_spawnFire = false;
		_num = _num * 2;
	};

	if (_spawnFire) then {
		//["PVDZE_obj_Fire",[_crash,2,time,false,_fadeFire]] call broadcastRpcCallAll;
		PVDZE_obj_Fire = [_crash,2,time,false,_fadeFire];
		publicVariable "PVDZE_obj_Fire";
		_crash setvariable ["fadeFire",_fadeFire,true];
	};

  	if (DZE_MissionLootTable) then {
		_itemTypes = [] + getArray (missionConfigFile >> "CfgBuildingLoot" >> _lootTable >> "lootType");
	} else {
		_itemTypes = [] + getArray (configFile >> "CfgBuildingLoot" >> _lootTable >> "lootType");
	};
	_CBLBase = dayz_CBLBase find (toLower(_lootTable));
	_weights = dayz_CBLChances select _CBLBase;
	_cntWeights = count _weights;

	for "_x" from 1 to _num do {
		//create loot
		_index1 = floor(random _cntWeights);
		_index2 = _weights select _index1;
		_itemType = _itemTypes select _index2;
		[_itemType select 0, _itemType select 1, _position, 5] call spawn_loot;
	};
	// ReammoBox is preferred parent class here, as WeaponHolder wouldn't match MedBox0 && other such items.
	_nearby = _position nearObjects ["ReammoBox", sizeOf(_crashModel)];
	{
		_x setVariable ["permaLoot",true];
	} count _nearBy;
};