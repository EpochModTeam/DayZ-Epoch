/*
[_obj] spawn player_unlockVault;
*/
private ["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_allowunlock","_alreadyPacking","_item","_hasToolbox"];
_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_unlockvault;

_item = "ItemToolbox";
_hasToolbox = 	_item in items player;


_allowunlock = false;
if (_ownerID == dayz_playerUID) then {
	_allowunlock = true;
} else {
	
	// do random roll to try to unlock vault
	// start low to test figure out what works later
	if(_hasToolbox) then {
		if(floor (random 10000) == 1337) then {
			_allowunlock = true;
			
		};
		// Chance to break toolbox randomly
		if(floor (random 15) == 1) then {
			player removeWeapon _item;
			cutText ["Your toolbox is now broken, you will need to find another one.", "PLAIN DOWN"];
		};
	};
	
};

if(_allowunlock) then {
	_alreadyPacking = _obj getVariable["packing",0];

	if (_alreadyPacking == 1) exitWith {cutText ["That vault is already being unlocked." , "PLAIN DOWN"]};

	_obj setVariable["packing",1];

	_dir = direction _obj;
	// _pos = getposATL _obj;
	_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
	player playActionNow "Medic";
	sleep 1;
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 5;

	//place tent (local)
	_holder = createVehicle ["VaultStorage",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setpos _pos;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];

	_weapons = 		_obj getVariable["WeaponCargo",[]];
	_magazines = 	_obj getVariable["MagazineCargo",[]];
	_backpacks = 	_obj getVariable["BackpackCargo",[]];
	
	// Remove locked vault
	deleteVehicle _obj;

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
	
	cutText ["This vault has been unlocked", "PLAIN DOWN"];
} else {
	player playActionNow "Medic";
	sleep 3;
	[player,"repair",0,false] call dayz_zombieSpeak;
	null = [player,25,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	cutText ["Combination incorrect, vault is still locked.", "PLAIN DOWN"];
};

s_player_unlockvault = -1;