/*
    Simple class system to use this script.
    class Upgrade {
        requiredTools[] = {"ItemToolbox"};
        requiredParts[] = {"equip_crate","PartWoodPile"};
        create = "TentStorage1";
    };
*/

private ["_nearByChoppers","_cursorTarget","_type","_class","_requiredTools","_requiredParts","_upgradeType","_producedParts","_randomCreate",
	"_upgradeClass","_onLadder","_isWater","_ok","_missing","_upgradeParts","_dis","_characterID","_objectID","_objectUID",
	"_ownerArray","_ownerPasscode","_dir","_vector","_object","_puid","_clanArray","_wh","_variables"];

_cursorTarget = _this;
// ArmaA2 bug workaround: sometimes the object is null
if ((isNil "_cursorTarget") or {(isNull _cursorTarget)}) then {
    _cursorTarget = nearestObjects [ player modelToWorld [0,1.5,0] , ["DZ_buildables","BuiltItems"], 1.5];
    _cursorTarget = if (count _cursorTarget == 0) then { objNull } else { _cursorTarget select 0 };
};
if (isNull _cursorTarget) exitWith {};

_nearByChoppers = _cursorTarget nearObjects ["Helicopter", 10];
if (count _nearByChoppers > 1) exitwith { localize "str_upgradevehctooClose" call dayz_rollingMessages; };

_type = typeof _cursorTarget;
_class = configFile >> "CfgVehicles" >> _type;
_requiredTools = getArray (_class >> "Upgrade" >> "requiredTools");
_requiredParts = getArray (_class >> "Upgrade" >> "requiredParts");
_upgradeType = getText (_class >> "Upgrade" >> "create");
_producedParts = getArray (_class >> "Upgrade" >> "produce");

//Allow random choice of items if specified.
if (isArray(configFile >> "CfgVehicles" >> _type >> "Upgrade" >> "randomcreate")) then { 
    _randomCreate = getArray (_class >> "Upgrade" >> "randomcreate");
    _upgradeType = _randomCreate call BIS_fnc_selectRandom;
};

_upgradeClass = configFile >> "CfgVehicles" >> _upgradeType;
if (!isClass _upgradeClass) exitWith { localize "str_upgradeNoOption" call dayz_rollingMessages; };

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = (surfaceIsWater (getPosATL player)) or dayz_isSwimming;
if(_isWater or _onLadder) exitWith { localize "str_water_ladder_cant_do" call dayz_rollingMessages; };

// lets check player has requiredTools for upgrade
_ok = true;
_missing = "";
{
    if (!(_x IN items player)) exitWith {
        //systemchat("Missing tools for upgrade." +str());
        _missing = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
        _ok = false;
    };
} count _requiredTools;
if (!_ok) exitWith { format [localize "str_upgradeMissingTool", _missing] call dayz_rollingMessages; };

// lets check player has requiredParts for upgrade
_ok = true;
_upgradeParts = [];
{
    if (!(_x IN magazines player)) exitWith {
        _missing = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
        _ok = false;
    };
    if (_x IN magazines player) then {
        _upgradeParts set [count _upgradeParts, _x];
        player removeMagazine _x;
    };
} count _requiredParts;
if (!_ok) exitWith {
    { player addMagazine _x; } foreach _upgradeParts;
	format [localize "str_upgradeMissingPart", _missing] call dayz_rollingMessages;
};
    
//Upgrade Started
if ((player getVariable["alreadyBuilding",0]) == 1) exitWith {
    {  player addMagazine _x; } foreach _upgradeParts;
    localize "str_upgradeInProgress" call dayz_rollingMessages;
};
player setVariable["alreadyBuilding",1];

//play animation
player playActionNow "Medic";
_dis=20;
[player,"tentpack",0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

// Added Nutrition-Factor for work
["Working",0,[100,15,5,0]] call dayz_NutritionSystem;

//wait animation end
waitUntil {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 1};
waitUntil {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 0};
    
//get data from old building.
_characterID = _cursorTarget getVariable ["characterID","0"];
_objectID = _cursorTarget getVariable ["ObjectID","0"];
_objectUID = _cursorTarget getVariable ["ObjectUID","0"];
//Person who owns the fence can be disa,abled by this person.
_ownerArray = _cursorTarget getVariable ["ownerArray",[]];
//Get passcode of fence.
_ownerPasscode = _cursorTarget getVariable ["padlockCombination",[]];
_dir = round getDir _cursorTarget;
_vector = [vectorDir _cursorTarget,vectorUp _cursorTarget];
_pos = getposATL _cursorTarget;
//diag_log [ "dir/angle/pos", _dir, _vector, _pos];
if (abs(((_vector select 1) select 2) - 1) > 0.001) then { _pos set [2,0]; };
//diag_log [ "dir/angle/pos - reset elevation if angle is straight", _dir, _vector, _pos];

_object = createVehicle [_upgradeType, getMarkerpos "respawn_west", [], 0, "CAN_COLLIDE"];
//if (_object isKindOf "DZ_buildables") then { _object allowDamage false; };
_object setVectorDirAndUp _vector;
_object setPosATL _pos;
_puid = getPlayerUID player;

/*
if (!(_puid in _clanArray)) then {
    _clanArray set [ count _clanArray, _puid ];
};
*/

_object setVariable ["ownerArray",_ownerArray,true];
_object setVariable ["padlockCombination",_ownerPasscode,true];
_object setVariable ["characterID",_characterID,true];

//remove old object
deleteVehicle _cursorTarget;
PVDZ_obj_Destroy = [_objectID,_objectUID,player];
publicVariableServer "PVDZ_obj_Destroy";

// create a weaponholder with dismissed parts
_wh = "WeaponHolder" createVehicle (getPosATL player);
{
    if (isClass (configFile >> "CfgMagazines" >> _x))
    then { _wh addMagazineCargoGlobal [_x, 1]; }
    else { _wh addWeaponCargoGlobal [_x, 1]; };
} forEach _producedParts;

//publish new object
_variables = [["ownerArray", _ownerArray],["padlockCombination", _ownerPasscode]];
PVDZ_obj_Publish = [dayz_characterID,_object,[_dir, _pos],_variables];
publicVariableServer "PVDZ_obj_Publish";
diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];
/*
//Send maintenance info
PVDZ_veh_Save = [_object,"maintenance"];
publicVariableServer "PVDZ_veh_Save";
if (isServer) then {
    PVDZ_veh_Save call server_updateObject;
};*/

//Make sure player knows about the new object
player reveal _object;

//Make sure  its unlocked 
player setVariable["alreadyBuilding",0];
localize "str_upgradeDone" call dayz_rollingMessages;