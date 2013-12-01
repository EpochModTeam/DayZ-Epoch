private ["_dir","_classname","_box","_location","_item","_config","_create_raw","_create","_qty","_type","_hasCrate","_hasTool"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_75") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_hasTool = 	"ItemCrowbar" in items player;
if(!_hasTool) exitWith { 
	cutText [(localize "str_epoch_player_76"), "PLAIN DOWN"];
	DZE_ActionInProgress = false;
};

_item =     _this;
_hasCrate = 	_item in magazines player;
if (!_hasCrate) exitWith {
	cutText [(localize "str_epoch_player_77"), "PLAIN DOWN"];
	DZE_ActionInProgress = false;
};

_config =   configFile >> "CfgMagazines" >> _item;
_create_raw =   getArray (_config >> "ItemActions" >> "CreateMags" >> "output");
_create = _create_raw select 0;
_qty = _create_raw select 1;
_type = _create_raw select 2;

_location = player modeltoworld [0,0.3,0];
if ((_location select 2) < 0) then {
	_location set [2,0];
};

//remove (partially) full crate
player removeMagazine _item;
_dir = getDir player;
_classname = "WeaponHolder";

//return empty crate to inventory
player addMagazine "bulk_empty";

[1,1] call dayz_HungerThirst;
// Change to optional wait to complete
player playActionNow "Medic";
sleep 6;
		
_box = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
_box setDir _dir;

// Fill box with Items from config.
if(_type == "magazine") then {
	_box addMagazineCargoGlobal [_create,_qty];
};
if(_type == "weapon") then {
	_box addWeaponCargoGlobal [_create,_qty];
};
if(_type == "backpack") then {
	_box addBackpackCargoGlobal  [_create,_qty];
};

player reveal _box;

player action ["Gear", _box];
		
cutText [(localize "str_epoch_player_78"), "PLAIN DOWN"];
	
DZE_ActionInProgress = false;
