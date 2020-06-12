/*
	Simple class system to use this script.
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage1";
	};	
*/
if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

private ["_cursorTarget","_item","_classname","_requiredTools","_requiredParts","_upgrade","_upgradeConfig",
"_upgradeDisplayname","_onLadder","_isWater","_upgradeParts","_startUpgrade","_missingPartsConfig","_textMissingParts","_dis",
"_sfx","_ownerID","_objectID","_objectUID","_dir","_weapons","_magazines","_backpacks","_object",
"_itemName","_vector","_playerNear","_finished"];

_cursorTarget = _this select 3;

_ownerID = _cursorTarget getVariable ["characterID","0"];
_objectID = _cursorTarget getVariable ["ObjectID","0"];
_objectUID = _cursorTarget getVariable ["ObjectUID","0"];

if (isNil "_cursorTarget" or {isNull _cursorTarget} or {_objectUID == "0" && (_objectID == "0")}) exitWith {
     localize "str_cursorTargetNotFound" call dayz_rollingMessages;
	 dayz_actionInProgress = false;
};

_item = typeOf _cursorTarget;

player removeAction s_player_upgradestorage;
s_player_upgradestorage = -1;

_classname = configFile >> "CfgVehicles" >> _item;
_requiredTools = getArray (_classname >> "Upgrade" >> "requiredTools");
_requiredParts = getArray (_classname >> "Upgrade" >> "requiredParts"); 
_upgrade = getText (_classname >> "Upgrade" >> "create");
_upgradeConfig = configFile >> "CfgVehicles" >> _upgrade;
_upgradeDisplayname = getText (_upgradeConfig >> "displayName");

_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = (surfaceIsWater (getPosATL player)) or dayz_isSwimming;
if (_isWater or _onLadder) exitWith {dayz_actionInProgress = false; localize "str_CannotUpgrade" call dayz_rollingMessages;};

_upgradeParts = [];
_startUpgrade = true;

_playerNear = {isPlayer _x} count (([_cursorTarget] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;
if (_playerNear) exitWith {dayz_actionInProgress = false; localize "str_pickup_limit_5" call dayz_rollingMessages;};

{
	if (!(_x in items player)) exitWith {
		_missingPartsConfig = configFile >> "CfgWeapons" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");

		format [localize "str_missing_to_do_this", _textMissingParts] call dayz_rollingMessages;

		_startUpgrade = false;
	};
} count _requiredTools;

{
	if (!(_x in magazines player)) exitWith {
		_missingPartsConfig = configFile >> "CfgMagazines" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");

		format [localize "str_missing_to_do_this", _textMissingParts] call dayz_rollingMessages;
		_startUpgrade = false;
	};
	if (_x in magazines player) then {_upgradeParts set [count _upgradeParts, _x];};
} count _requiredParts;

if ((_startUpgrade) && (isClass(_upgradeConfig))) then {
	_dis = 20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	["Working",0,[100,15,5,0]] call dayz_NutritionSystem;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	_finished = ["Medic",1] call fn_loopAction;
	if (!_finished || (isNull _cursorTarget) || ({!(_x in magazines player)} count _upgradeParts > 0)) exitWith {}; //Double check player did not drop required parts

	_dir = round getDir _cursorTarget;
	_vector = [vectorDir _cursorTarget,vectorUp _cursorTarget];

	_cursorTarget setDir 0;
	_pos = getPosATL _cursorTarget;

	if (abs(((_vector select 1) select 2) - 1) > 0.001) then { _pos set [2,0]; };

	_weapons = getWeaponCargo _cursorTarget;
	_magazines = getMagazineCargo _cursorTarget;
	_backpacks = getBackpackCargo _cursorTarget;

	PVDZ_obj_Destroy = [_objectID,_objectUID,player,_pos,dayz_authKey,false];
	publicVariableServer "PVDZ_obj_Destroy";
	deleteVehicle _cursorTarget;

	{
		player removeMagazine _x;
		_upgradeParts = _upgradeParts - [_x];
	} count _upgradeParts;

    _object = createVehicle [_upgrade, getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];

	_object setDir 0;
	_object setPosATL _pos;
	_object setVectorDirAndUp _vector;
	_object setVariable ["characterID",_ownerID];

	player reveal _object;

	[_weapons,_magazines,_backpacks,_object] call fn_addCargo;

	if (DZE_permanentPlot) then {
		_object setVariable ["ownerPUID",dayz_playerUID,true];
		PVDZ_obj_Publish = [dayz_characterID,_object,[_dir,_pos,dayz_playerUID],[_weapons,_magazines,_backpacks],player,dayz_authKey];
	} else {
		PVDZ_obj_Publish = [dayz_characterID,_object,[_dir,_pos],[_weapons,_magazines,_backpacks],player,dayz_authKey];
	};
	publicVariableServer "PVDZ_obj_Publish";
    //diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];

	localize "str_upgradeDone" call dayz_rollingMessages;
/*
} else {
	localize "str_upgradeNoOption" call dayz_rollingMessages;
*/
};

dayz_actionInProgress = false;
