/*
[_obj] spawn player_unlockVault;
Lock Safe - DayZ Epoch - [VB]AWOL
*/
private ["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_holder","_weapons","_magazines","_backpacks","_alreadyPacking"];

if(TradeInprogress) exitWith { cutText ["Lock already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_obj = _this;

// Silently exit if object no longer exists
if(isNull _obj) exitWith { TradeInprogress = false; };

_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_lockvault;
s_player_lockvault = 1;

if((_ownerID != dayz_combination) and (_ownerID != dayz_playerUID)) exitWith {TradeInprogress = false; s_player_lockvault = -1; cutText ["You cannot lock this Safe, you do not know the combination", "PLAIN DOWN"]; };

_alreadyPacking = _obj getVariable["packing",0];

if (_alreadyPacking == 1) exitWith {TradeInprogress = false; s_player_lockvault = -1; cutText ["That Safe is already being locked." , "PLAIN DOWN"]};

_obj setVariable["packing",1];

_dir = direction _obj;
// _pos = getposATL _obj;
_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
[player,"tentpack",0,false] call dayz_zombieSpeak;
sleep 3;

if(!isNull _obj) then {

	// force vault save just before locking
	dayzUpdateVehicle = [_obj,"gear"];
	publicVariableServer "dayzUpdateVehicle";

	//place tent (local)
	_holder = createVehicle ["VaultStorageLocked",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setpos _pos;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_ownerID,true];
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

	s_player_lockvault = -1;
};
TradeInprogress = false;