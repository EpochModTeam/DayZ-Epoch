#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

server_obj_pos = {
	local _object = _this select 0;
	local _objectID = _this select 1;
	local _class = _this select 2;

	local _position = getPosATL _object;
	//_worldspace = [round (direction _object),_position];
	local _worldspace = [getDir _object, _position] call AN_fnc_formatWorldspace; // Precise Base Building 1.0.5
	local _fuel = [0, fuel _object] select (_class isKindOf "AllVehicles");

	local _key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
	_key call server_hiveWrite;

	#ifdef OBJECT_DEBUG
		diag_log ("HIVE: WRITE: "+ str(_key));
	#endif
};

server_obj_inv = {
	local _object = _this select 0;
	local _objectID = _this select 1;
	local _objectUID = _this select 2;
	local _class = _this select 3;

	local _inventory = call {
		if (_class == "Plastic_Pole_EP1_DZ") exitwith {
			_object getVariable ["plotfriends", []] //We're replacing the inventory with UIDs for this item
		};
		if (DZE_doorManagement && {_class in DZE_DoorsLocked}) exitwith {
			_object getVariable ["doorfriends", []] //We're replacing the inventory with UIDs for this item
		};
		if (_class isKindOf "TrapItems") exitwith {
			[["armed",_object getVariable ["armed",false]]]
		};
		[getWeaponCargo _object, getMagazineCargo _object, getBackpackCargo _object]
	};

	local _previous = str(_object getVariable["lastInventory",[]]);
	if (str _inventory != _previous) then {
		local _key = "";
		_object setVariable ["lastInventory",_inventory];
		if (_objectID == "0") then {
			_key = format["CHILD:309:%1:",_objectUID] + str _inventory + ":";
		} else {
			_key = format["CHILD:303:%1:",_objectID] + str _inventory + ":";
		};

		if (Z_SingleCurrency && {(_class in DZE_MoneyStorageClasses) || {ZSC_VehicleMoneyStorage && (_object isKindOf "AllVehicles") && !(_object isKindOf "StaticWeapon")}}) then {
			local _coins = _object getVariable ["cashMoney", -1]; //set to invalid value if getVariable fails to prevent overwriting of coins in DB
			_key = _key + str _coins + ":";
		};

		#ifdef OBJECT_DEBUG
			diag_log ("HIVE: WRITE: "+ str(_key));
		#endif

		_key call server_hiveWrite;
	};
};

server_obj_dam = {
	//Allow dmg process

	local _object = _this select 0;
	local _objectID = _this select 1;
	local _objectUID = _this select 2;
	local _forced = _this select 3;
	local _totalDmg = _this select 4;

	local _recorddmg = false;
	local _hitpoints = _object call vehicle_getHitpoints;
	local _damage = damage _object;
	local _array = [];
	local _allFixed = true;
	local _lastUpdate = _object getVariable ["lastUpdate",diag_tickTime];

	{
		local _hit = [_object,_x] call object_getHit;
		if ((_hit select 0) > 0) then {

			_allFixed = false;
			_array set [count _array,[(_hit select 1),(_hit select 0)]];
			//diag_log format ["Section Part: %1, Dmg: %2",(_hit select 1),(_hit select 0)];
		} else {
			_array set [count _array,[(_hit select 1),0]];
		};
	} count _hitpoints;
	
	if (_allFixed && !_totalDmg && _forced) then {_object setDamage 0;};

	if (_forced) then {
		if (_object in needUpdate_objects) then {needUpdate_objects = needUpdate_objects - [_object];};
		_recorddmg = true;
	} else {
		//Prevent damage events for the first 10 seconds of the servers live.
		if (diag_ticktime - _lastUpdate > 10) then {
			if !(_object in needUpdate_objects) then {
				//diag_log format["DEBUG: Monitoring: %1",_object];
				needUpdate_objects set [count needUpdate_objects, _object];
				_recorddmg = true;
				_object setVariable ["lastUpdate",diag_ticktime];
			};
		};
	};

	if (_recorddmg) then {
		local _key = "";
		if (_objectID == "0") then {
			_key = format["CHILD:306:%1:",_objectUID] + str _array + ":" + str _damage + ":";
		} else {
			_key = format["CHILD:306:%1:",_objectID] + str _array + ":" + str _damage + ":";
		};
		#ifdef OBJECT_DEBUG
			diag_log ("HIVE: WRITE: "+ str(_key));
		#endif

		_key call server_hiveWrite;
	};
};

server_obj_killed = {
	local _object = _this select 0;
	local _objectID = _this select 1;
	local _objectUID = _this select 2;
	local _playerUID = _this select 3;
	local _clientKey = _this select 4;
	local _class = _this select 5;
	local _key = "";

	local _index = dayz_serverPUIDArray find _playerUID;

	local _exitReason = call {
		//Can't use owner because player may already be dead, can't use distance because player may be far from vehicle wreck
		if (_clientKey == dayz_serverKey) exitwith {""};
		if (_index < 0) exitwith {
			format["Server_UpdateObject error: PUID NOT FOUND ON SERVER. PV ARRAY: %1",_this]
		};
		if ((dayz_serverClientKeys select _index) select 1 != _clientKey) exitwith {
			format["Server_UpdateObject error: CLIENT AUTH KEY INCORRECT OR UNRECOGNIZED. PV ARRAY: %1",_this]
		};
		if (alive _object and {!(_class isKindOf "TentStorage_base" or _class isKindOf "IC_Tent")}) exitwith {
			format["Server_UpdateObject error: object kill request on living object. PV ARRAY: %1",_this]
		};
		"";
	};

	if (_exitReason != "") exitWith {diag_log _exitReason};
	_object setDamage 1;

	if (_objectID == "0") then {
		//Need to update hive to make a new call to allow UID to be updated for a killed event
		//_key = format["CHILD:306:%1:%2:%3:",_objectUID,[],1];
		_key = format["CHILD:310:%1:",_objectUID];
	} else {
		_key = format["CHILD:306:%1:%2:%3:",_objectID,[],1];
	};
	_key call server_hiveWrite;

	if (_playerUID == "SERVER") then {
		#ifdef OBJECT_DEBUG
			diag_log format["DELETE: Server requested destroy on object %1 ID:%2 UID:%3",_class,_objectID,_objectUID];
		#endif
	} else {
		diag_log format["DELETE: PUID(%1) requested destroy on object %2 ID:%3 UID:%4",_playerUID,_class,_objectID,_objectUID];
	};

	if (_class in DayZ_removableObjects || {_class in DZE_isRemovable}) then {[_objectID,_objectUID,_object] call server_deleteObjDirect;};
};
