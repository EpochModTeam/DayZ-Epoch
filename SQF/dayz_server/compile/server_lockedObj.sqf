/*
lock or unlock a object via Server w/o using setVariable on the obj
1: PVDZE_locked = [player,_obj,_combination];
*/
_player = _this select 0;
_obj = _this select 1;
_combi = _this select 2;
_owner = owner _player;

//_correctlyCombi = HIVECALL TO GET THE OBJECT COMBINATION;

if (_combi != _correctlyCombi) exitWith { //force exit script if code if wrong
	PVDZES_Combination = false;	//PVDZES >> S is to kick player they are manipulating it to other player, PVDZE is allow via BE Filter but PVDZES not
	_owner publicVariableClient "PVDZES_Combination";
};

PVDZES_Combination = true; //if code is correct send it to the client
_owner publicVariableClient "PVDZES_Combination";

/* Client Code Example 

PVDZE_locked = [player,_vault,_combination];
publicVariableServer = PVDZE_locked;

waitUntil{!isNil "PVDZES_Combination"}

if (PVDZES_Combination) then {
	Say Combination correct!, Unlock/Lock in Progress
}else{
	Say Combination incorrect!
};

*/

_objType = typeOf _obj;
_locked = false;
if (_objType in DZE_LockedStorage) then { _locked = true; };
_dir = direction _obj;
_pos = _obj getVariable["OEMPos",(getposATL _obj)];

if (_locked) then { //unlock
	_unlockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "unlockedClass");

/*	_weapons = HIVECALL TO GET THE INVENTORY
	_magazines = HIVECALL TO GET THE INVENTORY
	_backpacks = HIVECALL TO GET THE INVENTORY	*/

	_holder = createVehicle [_unlockedClass,_pos,[], 0, "CAN_COLLIDE"];
	if ((isNull _holder) or (isNil "_holder")) then {
		_holder = createVehicle [_unlockedClass,_pos,[], 0, "CAN_COLLIDE"];
	};
	// Remove locked vault
	deleteVehicle _obj;
	_holder setdir _dir;
	_holder setPosATL _pos;

//	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];

	if (count _weapons > 0) then {
		//Add weapons
		_objWpnTypes = 	_weapons select 0;
		_objWpnQty = 	_weapons select 1;
		_countr = 0;
		{
			_holder addweaponcargoGlobal [_x,(_objWpnQty select _countr)];
			_countr = _countr + 1;
		} forEach _objWpnTypes;
	};

	if (count _magazines > 0) then {
		//Add Magazines
		_objWpnTypes = _magazines select 0;
		_objWpnQty = _magazines select 1;
		_countr = 0;
		{
			_holder addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
			_countr = _countr + 1;
		} forEach _objWpnTypes;
	};

	if (count _backpacks > 0) then {
		//Add Backpacks
		_objWpnTypes = _backpacks select 0;
		_objWpnQty = _backpacks select 1;
		_countr = 0;
		{
			_holder addbackpackcargoGlobal [_x,(_objWpnQty select _countr)];
			_countr = _countr + 1;
		} forEach _objWpnTypes;
	};
} else { //lock
	_lockedClass = getText (configFile >> "CfgVehicles" >> _objType >> "lockedClass");

	//PVDZE_veh_Update = [_obj,"gear"];
	//publicVariableServer "PVDZE_veh_Update";
	[_obj,"gear"] spawn server_updateObject;

	//place vault
	_holder = createVehicle [_lockedClass,_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setPosATL _pos;
	
//	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];
	
	// remove vault
	deleteVehicle _obj;

};