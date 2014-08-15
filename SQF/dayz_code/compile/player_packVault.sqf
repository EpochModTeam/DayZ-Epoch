/*
[_obj] spawn player_packVault;
*/
private ["_activatingPlayer","_obj","_ownerID","_objectID","_objectUID","_alreadyPacking","_location1","_location2","_dir","_pos","_bag","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_packedClass","_text","_playerNear","_playerUID","_combination"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_15") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_activatingPlayer = player;

_obj = _this;

_packedClass = getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "packedClass");
_text = 		getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "displayName");


// Silently exit if object no longer exists
if(isNull _obj || !(alive _obj)) exitWith { DZE_ActionInProgress = false; };

_playerNear = _obj call dze_isnearest_player;

if(_playerNear) exitWith { DZE_ActionInProgress = false; cutText [(localize "str_epoch_player_16") , "PLAIN DOWN"];  };

_combination = _obj getVariable["characterID","0"];
_ownerID = _obj getVariable["ownerPUID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];

if (DZE_APlotforLife) then {
	_playerUID = [player] call FNC_GetPlayerUID;
}else{
	_PlayerUID = dayz_characterID;
};

player removeAction s_player_packvault;
s_player_packvault = 1;

if(_objectID == "0" && _objectUID == "0") exitWith {DZE_ActionInProgress = false; s_player_packvault = -1; cutText [format[(localize "str_epoch_player_118"),_text], "PLAIN DOWN"];};

if((_combination != dayz_combination) && (_ownerID != _playerUID)) exitWith { DZE_ActionInProgress = false; s_player_packvault = -1; cutText [format[(localize "str_epoch_player_119"),_text], "PLAIN DOWN"];};

_alreadyPacking = _obj getVariable["packing",0];

if (_alreadyPacking == 1) exitWith {DZE_ActionInProgress = false; s_player_packvault = -1; cutText [format[(localize "str_epoch_player_120"),_text] , "PLAIN DOWN"]};
_obj setVariable["packing",1];

cutText [format[(localize "str_epoch_player_121"),_text], "PLAIN DOWN"];
sleep 1; 
_location1 = getPosATL player;
sleep 5;
_location2 = getPosATL player;
	
if(_location1 distance _location2 > 0.1) exitWith {
	cutText [format[(localize "str_epoch_player_122"),_text] , "PLAIN DOWN"];
	_obj setVariable["packing",0];
	s_player_packvault = -1;
	DZE_ActionInProgress = false;
};

_dir = direction _obj;
_pos = _obj getVariable["OEMPos",(getposATL _obj)];

if(!isNull _obj && alive _obj) then {

	[1,1] call dayz_HungerThirst;
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
	
	// add seed item
	_itemOut = getText(configFile >> "CfgVehicles" >> _packedClass >> "seedItem");
	_countOut = 1;
	_holder addMagazineCargoGlobal[_itemOut, _countOut];
	
	//Add weapons
	_objWpnTypes = 	_weapons select 0;
	_objWpnQty = 	_weapons select 1;
	_countr = 0;
	{
		_holder addweaponcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;
	
	//Add Magazines
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_countr = 0;
	{
		_holder addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	//Add Backpacks
	_objWpnTypes = _backpacks select 0;
	_objWpnQty = _backpacks select 1;
	_countr = 0;
	{
		_holder addbackpackcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;
	
	cutText [format[(localize "str_epoch_player_123"),_text], "PLAIN DOWN"];

	player action ["Gear", _holder];
};
s_player_packvault = -1;
DZE_ActionInProgress = false;
