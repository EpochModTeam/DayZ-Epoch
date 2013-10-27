/*
[_obj] spawn player_packVault;
*/
private ["_activatingPlayer","_obj","_ownerID","_objectID","_objectUID","_alreadyPacking","_location1","_location2","_dir","_pos","_bag","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_packedClass","_text","_playerNear"];

if(TradeInprogress) exitWith { cutText ["That is already being packed." , "PLAIN DOWN"]; };
TradeInprogress = true;

_activatingPlayer = player;

_obj = _this;

_packedClass = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "packedClass");
_text = 		getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "displayName");

// Silently exit if object no longer exists
if(isNull _obj or !(alive _obj)) exitWith { TradeInprogress = false; };

// Test cannot lock while another player is nearby
_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 12]) > 1;
if(_playerNear) exitWith { TradeInprogress = false; cutText ["Cannot pack while another player is nearby." , "PLAIN DOWN"];  };

_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];

player removeAction s_player_packvault;
s_player_packvault = 1;

if(_objectID == "0" && _objectUID == "0") exitWith {TradeInprogress = false; s_player_packvault = -1; cutText [format["%1 not setup yet.",_text], "PLAIN DOWN"];};

if((_ownerID != dayz_combination) and (_ownerID != dayz_playerUID)) exitWith { TradeInprogress = false; s_player_packvault = -1; cutText [format["You cannot pack this %1, you do not know the combination.",_text], "PLAIN DOWN"];};

_alreadyPacking = _obj getVariable["packing",0];

if (_alreadyPacking == 1) exitWith {TradeInprogress = false; s_player_packvault = -1; cutText [format["That %1 is already being packed.",_text] , "PLAIN DOWN"]};
_obj setVariable["packing",1];

cutText [format["Packing %1 move from this position to cancel within 5 seconds.",_text], "PLAIN DOWN"];
sleep 1; 
_location1 = getPosATL player;
sleep 5;
_location2 = getPosATL player;
	
if(_location1 distance _location2 > 0.1) exitWith {
	cutText [format["Packing %1 canceled.",_text] , "PLAIN DOWN"];
	_obj setVariable["packing",0];
};


_dir = direction _obj;
_pos = _obj getVariable["OEMPos",(getposATL _obj)];

if(!isNull _obj and alive _obj) then {

	player playActionNow "Medic";
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 3;

	_weapons = 		getWeaponCargo _obj;
	_magazines = 	getMagazineCargo _obj;
	_backpacks = 	getBackpackCargo _obj;
	
	// Remove from database
	PVDZE_obj_Delete = [_objectID,_objectUID,_activatingPlayer];
	publicVariableServer "PVDZE_obj_Delete";
	
	// Set down vault "take" item
	_bag = createVehicle [_packedClass,_pos,[], 0, "CAN_COLLIDE"];
	
	// Delete original
	deleteVehicle _obj;

	_bag setdir _dir;
	_bag setposATL _pos;
	player reveal _bag;

	// Empty weapon holder 
	_holder = _bag;
	
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
	
	cutText [format["Your %1 has been packed",_text], "PLAIN DOWN"];

	player action ["Gear", _holder];
};
s_player_packvault = -1;
TradeInprogress = false;