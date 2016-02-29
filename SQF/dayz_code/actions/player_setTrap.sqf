private["_item","_config","_onLadder","_classname","_text","_consume","_hastrapitem","_location","_object"];

_item = _this;
_config = configFile >> "CfgWeapons" >> _item;

if (r_action_count != 1) exitWith { cutText [localize "str_player_actionslimit", "PLAIN DOWN"]; };

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith { r_action_count = 0; cutText [localize "str_player_21", "PLAIN DOWN"]};

call gear_ui_init;

_classname = getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
_consume = ([] + getArray (_config >> "magazines")) select 0;

_hastrapitem = _item in magazines player;

if (!_hastrapitem) exitWith { r_action_count = 0; cutText [format [localize "str_player_31",_text,localize "str_player_31_place"] , "PLAIN DOWN"]};

player removeMagazine _item;
_location = getPosATL player;

player playActionNow "PutDown";
sleep 1;

_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
_object setDir (getDir player);

_object setVariable ["armed", false, true];

PVDZ_obj_Publish = [dayz_characterID,_object,[getDir _object, getPosATL _object],[["armed", _object getVariable "armed"]]];
publicVariableServer "PVDZ_obj_Publish";
diag_log [diag_ticktime, __FILE__, "New Networked object, request to save to hive. PVDZ_obj_Publish:", PVDZ_obj_Publish];

player reveal _object;

r_action_count = 0;
cutText [format [localize "str_build_01",_text], "PLAIN DOWN"];