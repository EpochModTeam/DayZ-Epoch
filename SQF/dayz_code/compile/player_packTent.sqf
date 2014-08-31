/*
[_obj] spawn player_packTent;
*/
private ["_activatingPlayer","_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_object","_holder","_weapons","_magazines","_backpacks","_objWpnTypes","_objWpnQty","_countr","_alreadyPacking","_dis","_sfx","_classname","_location","_playerUID"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_13") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

player removeAction s_player_packtent;
s_player_packtent = 1;

_activatingPlayer = player;

_obj = _this;
_ownerID = _obj getVariable["ownerPUID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];

if (DZE_APlotforLife) then {
	_playerUID = [player] call FNC_GetPlayerUID;
}else{
	_playerUID = dayz_characterID;
};

[1,1] call dayz_HungerThirst;
player playActionNow "Medic";

if(_objectID == "0" && _objectUID == "0") exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; cutText [(localize "str_epoch_player_14"), "PLAIN DOWN"];};

if(_ownerID != _playerUID) exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; cutText [localize "str_fail_tent_pack", "PLAIN DOWN"];};

_alreadyPacking = _obj getVariable["packing",0];

if (_alreadyPacking == 1) exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; cutText [format[(localize "str_player_beingpacked")] , "PLAIN DOWN"]};

_obj setVariable["packing",1];

_dir = direction _obj;

_pos = _obj getVariable["OEMPos",(getposATL _obj)];
	
_dis=20;
_sfx = "tentpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
	
sleep 3;

_classname = 	getText (configFile >> "CfgVehicles" >> (typeOf _obj) >> "create");

if(!isNull _obj && alive _obj) then {

	_location = _pos;

	if (_location select 2 < 0) then {
		_location set [2,0];
	};

	//place tent (local)
	//_bag = createVehicle ["WeaponHolder_ItemTent",_pos,[], 0, "CAN_COLLIDE"];
	_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
	_object setdir _dir;
	_object setposATL _pos;
	player reveal _object;
	
	_holder = _object;
	
	_weapons = 		getWeaponCargo _obj;
	_magazines = 	getMagazineCargo _obj;
	_backpacks = 	getBackpackCargo _obj;

	deleteVehicle _obj;
	
	if (isServer) then {
		PVDZE_obj_Delete call server_deleteObj;
	} else {
		PVDZE_obj_Delete = [_objectID,_objectUID,_activatingPlayer];
		publicVariableServer "PVDZE_obj_Delete";
	};
	
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
	
	cutText [localize "str_success_tent_pack", "PLAIN DOWN"];

	player action ["Gear", _holder];
};

s_player_packtent = -1;
DZE_ActionInProgress = false;
