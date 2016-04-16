/*
[_obj] call player_packTent;
*/
if (DZE_ActionInProgress) exitWith {localize "str_player_beingpacked" call dayz_rollingMessages;};
DZE_ActionInProgress = true;
_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID = _obj getVariable["ObjectID","0"];
_objectUID = _obj getVariable["ObjectUID","0"];
_pickup = false;
_packobj = getText (configFile >> "CfgVehicles" >> typeOf _obj >> "pack");
_activatingPlayer = player;

player playActionNow "Medic";
player removeAction s_player_packtent;
s_player_packtent = -1;
player removeAction s_player_packtentinfected;
s_player_packtentinfected = -1;

_campItems = ["IC_DomeTent","IC_Tent"];
if (_ownerID == dayz_characterID or (typeOf _obj in _campItems)) then { _pickup = true; };

if (_pickup) then {
	_alreadyPacking = _obj getVariable["packing",0];
	if (_alreadyPacking == 1) exitWith {localize "str_player_beingpacked" call dayz_rollingMessages; DZE_ActionInProgress = false;};

	_obj setVariable["packing",1];
	_dir = direction _obj;
	_pos = getPosATL _obj;

	[player,"tentpack",0,false,20] call dayz_zombieSpeak;
	[player,20,true,getPosATL player] call player_alertZombies;
	uiSleep 3;

	//place tent (local)
	_bag = createVehicle [_packobj, _pos, [], 0, "CAN_COLLIDE"];
	_bag setDir _dir;
	player reveal _bag;
	
	_holder = createVehicle ["WeaponHolder", _pos, [], 0, "CAN_COLLIDE"];

	_weapons = getWeaponCargo _obj;
	_magazines = getMagazineCargo _obj;
	_backpacks = getBackpackCargo _obj;

	PVDZ_obj_Destroy = [_objectID,_objectUID,_activatingPlayer];
	publicVariableServer "PVDZ_obj_Destroy";
	
	if (isServer) then {PVDZ_obj_Destroy call server_deleteObj;};
	deleteVehicle _obj;

	//Add weapons
	_objWpnTypes = _weapons select 0;
	_objWpnQty = _weapons select 1;
	_countr = 0;
	{
		_holder addWeaponCargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	//Add Magazines
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_countr = 0;
	{
		_holder addMagazineCargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	//Add Backpacks
	_objWpnTypes = _backpacks select 0;
	_objWpnQty = _backpacks select 1;
	_countr = 0;
	{
		_holder addBackpackCargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	localize "str_success_tent_pack" call dayz_rollingMessages;
} else {
	localize "str_fail_tent_pack" call dayz_rollingMessages;
};
DZE_ActionInProgress = false;