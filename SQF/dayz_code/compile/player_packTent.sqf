/*
[_obj] call player_packTent;
*/
if (DZE_ActionInProgress) exitWith {cutText [localize "str_epoch_player_13","PLAIN DOWN"];};
DZE_ActionInProgress = true;

_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID = _obj getVariable["ObjectID","0"];
_objectUID = _obj getVariable["ObjectUID","0"];
_pickup = false;
_activatingPlayer = player;

_packobj = getText (configFile >> "CfgVehicles" >> typeOf _obj >> "pack");

player playActionNow "Medic";

player removeAction s_player_packtent;
s_player_packtent = -1;
player removeAction s_player_packtentinfected;
s_player_packtentinfected = -1;

if (_objectID == "0" && _objectUID == "0") exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; cutText [localize "str_epoch_player_14","PLAIN DOWN"];};

if (_ownerID != dayz_characterID) exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; cutText [localize "str_fail_tent_pack", "PLAIN DOWN"];};

_alreadyPacking = _obj getVariable["packing",0];

if (_alreadyPacking == 1) exitWith {DZE_ActionInProgress = false; s_player_packtent = -1; s_player_packtentinfected = -1; cutText [format[(localize "str_player_beingpacked")] , "PLAIN DOWN"]};

_campitems = ["IC_DomeTent","IC_Tent"];
if (_ownerID == dayz_characterID or (typeOf _obj in _campitems)) then { _pickup = true; };

if (_pickup) then {
	_obj setVariable["packing",1];

	_dir = direction _obj;
	_pos = getposATL _obj;

	_dis=20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	uiSleep 3;

	//place tent (local)
	_bag = createVehicle [_packobj,_pos,[], 0, "CAN_COLLIDE"];
	_bag setdir _dir;
	player reveal _bag;
	
	_holder = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"];

	_weapons = getWeaponCargo _obj;
	_magazines = getMagazineCargo _obj;
	_backpacks = getBackpackCargo _obj;

	//["PVDZ_obj_Delete",[_objectID,_objectUID]] call callRpcProcedure;
	_activatingPlayer = player;
	PVDZ_obj_Destroy = [_objectID,_objectUID, _activatingPlayer];
	publicVariableServer "PVDZ_obj_Destroy";
	
	if (isServer) then {
		PVDZ_obj_Destroy call server_deleteObj;
	};
	deleteVehicle _obj;

	//Add weapons
	_objWpnTypes = _weapons select 0;
	_objWpnQty = _weapons select 1;
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

	cutText [localize "str_success_tent_pack", "PLAIN DOWN"];
} else {
	cutText [localize "str_fail_tent_pack", "PLAIN DOWN"];
};
s_player_packtent = -1;
DZE_ActionInProgress = false;