/*
[_obj] spawn player_unlockVault;
*/
private["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_bag","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr"];

if(TradeInprogress) exitWith { cutText ["Lock already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_obj = _this;
_ownerID = _obj getVariable["playerUID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_lockvault;
s_player_lockvault = -1;

if(_ownerID == dayz_playerUID) then {
	_alreadyPacking = _obj getVariable["packing",0];

	if (_alreadyPacking == 1) exitWith {cutText ["That Safe is already being locked." , "PLAIN DOWN"]};

	_obj setVariable["packing",1];

	_dir = direction _obj;
	// _pos = getposATL _obj;
	_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 3;

	//place tent (local)
	_holder = createVehicle ["VaultStorageLocked",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setpos _pos;
	player reveal _holder;
	
	_holder setVariable["playerUID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];

	_weapons = 		getWeaponCargo _obj;
	_magazines = 	getMagazineCargo _obj;
	_backpacks = 	getBackpackCargo _obj;
	
	// remove vault
	deleteVehicle _obj;

	// Fill variables with loot
	if (count _weapons > 0) then {
		_holder setVariable ["WeaponCargo", _weapons, true];
	};
	if (count _magazines > 0) then {
		_holder setVariable ["MagazineCargo", _magazines, true];
	};
	if (count _backpacks > 0) then {
		_holder setVariable ["BackpackCargo", _backpacks, true];
	};
	
	cutText ["Your Safe has been locked", "PLAIN DOWN"];
} else {
	cutText ["You cannot lock this Safe, it is not yours", "PLAIN DOWN"];
};
TradeInprogress = false;
