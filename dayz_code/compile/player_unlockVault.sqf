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
s_player_unlockvault = 1;

UnlockInprogress = true;

_item = "ItemToolbox";
_hasToolbox = 	_item in items player;


_allowunlock = false;
if (_ownerID == dayz_playerUID) then {
	_allowunlock = true;
} else {
	
	// do random roll to try to unlock vault
	// start low to test figure out what works later
	if(_hasToolbox) then {
		
		// days alive modifier
		_maxRoll = 10000 - (dayz_skilllevel * 250);

		// math check
		// 0 days x 250 = 0
		// 1 days x 250 = 250  (10000 - 250) = 9750 
		// 4 days x 250 = 1000 (10000 - 1000) = 9000
		// 10 days x 250 = 2500 (10000 - 2500) = 7500
		// 20 days x 250 = 5000 (10000 - 5000) = 5000
		// 30 days x 250 = 7500 (10000 - 7500) = 2500
		// 36 days x 250 = 9000 (10000 - 9000) = 1000
		// 40 days x 250 = 10000 (10000 - 10000) = 0

		if(_maxRoll > 10000) then {
			_maxRoll = 10000;
		};

		if(_maxRoll < 1000) then {
			_maxRoll = 1000;
		};

		if(floor (random _maxRoll) == 137) then {
			_allowunlock = true;
		};

		// lower chance to break tools based on skill = days alive
		_toolboxRoll = dayz_skilllevel * 10;

		// Chance to break toolbox randomly
		if(floor (random _toolboxRoll) == 1) then {
			player removeWeapon _item;
			titleText ["Your toolbox is now broken, you will need to find another one.", "PLAIN"];
		};
	} else {
		if (!_hasToolbox) exitWith {cutText ["Cannot crack vault, you do not have a Tool Box." , "PLAIN"]};
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
	
	cutText ["Vault has been unlocked.", "PLAIN DOWN"];
} else {
	player playActionNow "Medic";
	sleep 3;
	[player,"repair",0,false] call dayz_zombieSpeak;
	null = [player,25,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	cutText ["Combination incorrect, vault is still locked.", "PLAIN DOWN"];
};

s_player_unlockvault = -1;
UnlockInprogress = false;
