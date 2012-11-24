/*
[_obj] spawn player_unlockVault;
*/
private["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_bag","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr"];
_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_unlockvault;
s_player_unlockvault = -1;

if(_ownerID == dayz_characterID) then {
	_alreadyPacking = _obj getVariable["packing",0];

	if (_alreadyPacking == 1) exitWith {cutText ["That vault is already being unlocked." , "PLAIN DOWN"]};

	_obj setVariable["packing",1];

	_dir = direction _obj;
	_pos = getposATL _obj;
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 3;

	//place tent (local)
	_holder = createVehicle ["VaultStorage",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];

	_weapons = 		getWeaponCargo _obj;
	_magazines = 	getMagazineCargo _obj;
	_backpacks = 	getBackpackCargo _obj;
	
	// dayzDeleteObj = [_objectID,_objectUID];
	// publicVariableServer "dayzDeleteObj";
	// if (isServer) then {
	//	dayzDeleteObj call local_deleteObj;
	// };
	
	deleteVehicle _obj;
	
	//Add weapons
	_objWpnTypes = 	_weapons select 0;
	_objWpnQty = 	_weapons select 1;
	_countr = 0;
	{
		_holder addweaponcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} forEach _objWpnTypes;
	
	//Add Magazines
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_countr = 0;
	{
		_holder addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} forEach _objWpnTypes;

	//Add Backpacks
	_objWpnTypes = _backpacks select 0;
	_objWpnQty = _backpacks select 1;
	_countr = 0;
	{
		_holder addbackpackcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} forEach _objWpnTypes;
	
	cutText ["Your vault has been unlocked", "PLAIN DOWN"];
} else {
	cutText ["You cannot unlock this vault, it is not yours", "PLAIN DOWN"];
};