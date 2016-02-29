/*
	This script is not part of dayz permission must be given to use. r4z0r49@gmail.com or skype me R4Z0R49.
	
	Simple class system to use this script.
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage1";
	};
	
*/
private
[
	"_objclass",
	"_cursorTarget",
	"_item",
	"_classname",
	"_requiredTools",
	"_requiredParts",
	"_upgrade",
	"_upgradeConfig",
	"_upgradeDisplayname",
	"_onLadder",
	"_isWater",
	"_upgradeParts",
	"_startUpgrade",
	"_missingPartsConfig",
	"_textMissingParts",
	"_dis",
	"_sfx",
	"_ownerID",
	"_objectID",
	"_objectUID",
	"_alreadyupgrading",
	"_pos",
	"_dir",
	"_weapons",
	"_magazines",
	"_backpacks",
	"_object",
	"_objWpnTypes",
	"_objWpnQty",
	"_countr"
];

_cursorTarget = _this select 0;

if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["Land_Fire_DZ"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};
if (isNull _cursorTarget) exitWith {};

_item = typeof _cursorTarget;

//remove action menu
player removeAction s_player_upgradestroage;
s_player_upgradestroage = -1;

//Not needed
//_itemName = getText (configFile >> "CfgVehicles" >> _item >> "displayName");
////diag_log (str(_itemName));

//Get tools needed
_classname = configFile >> "CfgVehicles" >> _item;
_requiredTools = getArray (_classname >> "Upgrade" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Upgrade" >> "requiredParts"); 
//diag_log (str(_requiredParts));

//get item to create
_upgrade = getText (_classname >> "Upgrade" >> "create");
//diag_log (str(_upgrade));

//Display name of upgrade part
_upgradeConfig = configFile >> "CfgVehicles" >> _upgrade;

//diag_log (str(_upgradeConfig));
_upgradeDisplayname = getText (_upgradeConfig >> "displayName");

//diag_log (str(_upgradeDisplayname));
//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

_upgradeParts = [];
_startUpgrade = true;

if(_isWater or _onLadder) exitWith {
	//cutText [localize "str_CannotUpgrade", "PLAIN DOWN"];
	_msg = localize "str_CannotUpgrade";
	_msg call dayz_rollingMessages;
	//systemchat[localize "str_CannotUpgrade"];
};

// lets check player has requiredTools for upgrade
{
	if (!(_x IN items player)) exitWith {
		_missingPartsConfig = configFile >> "CfgVehicles" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");
		//systemChat format["Missing %1 to upgrade storage.", _textMissingParts];
		_msg = format [localize "Missing %1 to upgrade storage.", _textMissingParts];
		_msg call dayz_rollingMessages;
		_startUpgrade = false;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade
{
	if (!(_x IN magazines player)) exitWith {
		_missingPartsConfig = configFile >> "CfgMagazines" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");
		//systemChat format["Missing %1 to upgrade storage.", _textMissingParts];
		_msg = format [localize "Missing %1 to upgrade storage.", _textMissingParts];
		_msg call dayz_rollingMessages;
		_startUpgrade = false;
	};
	if (_x IN magazines player) then {
		_upgradeParts set [count _upgradeParts, _x];
	};
} count _requiredParts;


//Does object have a upgrade option.
if ((_startUpgrade) AND (isClass(_upgradeConfig))) then {
	//play animation
	player playActionNow "Medic";
	_dis = 20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[100,15,5,0]] call dayz_NutritionSystem;
	
	//get ownerID from old tent.
	_ownerID = _cursorTarget getVariable ["characterID","0"];
	_objectID = _cursorTarget getVariable ["ObjectID","0"];
	_objectUID = _cursorTarget getVariable ["ObjectUID","0"];

	//Upgrade
	_alreadyupgrading = _cursorTarget getVariable["alreadyupgrading",0];

	if (_alreadyupgrading == 1) exitWith {
		//cutText [localize "str_upgradeInProgress", "PLAIN DOWN"]
		_msg = localize "str_upgradeInProgress";
		_msg call dayz_rollingMessages;
	};
	
	_cursorTarget setVariable["alreadyupgrading",1];

	sleep 0.03;

	//Get location and direction of old item
	_dir = round getDir _cursorTarget;
	_vector = [vectorDir _cursorTarget,vectorUp _cursorTarget];
	
	//reset orientation before measuring position, otherwise the new object will be placed incorrectly. -foxy
	_cursorTarget setDir 0;
	_pos = getPosATL _cursorTarget;
	
	if (abs(((_vector select 1) select 2) - 1) > 0.001) then { _pos set [2,0]; };

	//get contents
	_magazines = getMagazineCargo _cursorTarget;
	
	//replay animation
	player playActionNow "Medic";
	
	deleteVehicle _cursorTarget;
	
	// remove parts from players inventory before creation of new tent.
	{
		player removeMagazine _x;
		_upgradeParts = _upgradeParts - [_x];
	} count _upgradeParts;
	
	//create new tent
    _object = createVehicle [_upgrade, getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
	
	//reseting orientation to make sure the object goes where it's supposed to -foxy
	_object setDir 0;
	_object setPosATL _pos;
	_object setVectorDirAndUp _vector;
	
	//set ownerID from old tent.
	_object setVariable ["characterID",_ownerID];
	
	//Make sure player knows about the new object
	player reveal _object;
	
	//Add contents back
	//Add Magazines
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_countr = 0;
	{
		_object addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;
	
	sleep 3;
	
	//Light fire 
	[_object,true] call dayz_inflame;
	_object spawn player_fireMonitor;
	
	//publish new tent
	//[[[],[]],[[],[]],[[],[]]]
	PVDZ_obj_Publish = [dayz_characterID,_object,[_dir, _pos],[[[],[]],_magazines,[[],[]]]];
	publicVariableServer "PVDZ_obj_Publish";
    diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];

	//cutText [localize "str_upgradeDone", "PLAIN DOWN"];
	_msg = localize "str_upgradeDone";
	_msg call dayz_rollingMessages;
/*
} else {
	cutText ["Object has no upgrade option.", "PLAIN DOWN"];
*/
};