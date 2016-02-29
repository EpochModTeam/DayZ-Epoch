private ["_create","_config","_create_magsize","_type","_name","_magCount","_slotstart","_slotend","_dialog","_qty_total_ammo","_control","_mag","_qtynew_create_mags_full","_qtynew_create_ammo_rest","_magFull","_magFullSingular","_magAmmunition"];

disableSerialization;
call gear_ui_init;
closeDialog 0;

if (r_action_count != 1) exitWith { cutText [localize "str_player_actionslimit", "PLAIN DOWN"]; };

_create = _this;

if (!(_create in magazines player)) exitWith {r_action_count = 0;};

_config = configFile >> "CfgMagazines" >> _create;

player playActionNow "PutDown";

_create_magsize = getNumber(configFile >> "CfgMagazines" >> _create >> "count");
_type = getNumber(configFile >> "CfgMagazines" >> _create >> "type");
_name = getText(configFile >> "CfgMagazines" >> _create >> "displayName");
_magCount = {_x == _create} count magazines player;

if (_magCount == 1) exitWith {
	cutText [format [localize "str_cannotCombine", _name], "PLAIN DOWN"];
	r_action_count = 0;
};

//primary/secondary mags?
_slotstart = 0;
_slotend = 0;
if ((_type == 256) or (_type == 256*2)) then {
	_slotstart = 109;
	_slotend = 120;
};
if (_type == 16) then {
	_slotstart = 122;
	_slotend = 129;
};

_dialog = findDisplay 106;

_qty_total_ammo = 0;
for "_i" from _slotstart to _slotend do {
	_control = _dialog displayCtrl _i;
	_mag = gearSlotData _control;
	if (_mag == _create) then {
		_qty_total_ammo = _qty_total_ammo + gearSlotAmmoCount _control;
	};
};

_qtynew_create_mags_full = 0;
_qtynew_create_ammo_rest = 0;
_qtynew_create_mags_full = floor(_qty_total_ammo/_create_magsize);
_qtynew_create_ammo_rest = _qty_total_ammo - (_qtynew_create_mags_full*_create_magsize);

player removeMagazines _create;
for "_i" from 1 to _qtynew_create_mags_full do {
	player addMagazine _create;
};
if (_qtynew_create_ammo_rest != 0) then {
	player addMagazine [_create,_qtynew_create_ammo_rest];
};
// Check if quiver
if(_create == "Quiver") then {
	_magFull = "quivers";
	_magFullSingular = "quiver";
	_magAmmunition = "arrows";
} else {
	_magFull = "magazines";
	_magFullSingular = "magazine";
	_magAmmunition = "bullets";
};

switch true do {
	case (_qtynew_create_ammo_rest == 0) : {
		cutText [format [localize "str_combineDoneFull",_magCount, _name, _qtynew_create_mags_full,_magFull], "PLAIN DOWN"];
		};
	case (_qtynew_create_mags_full == 0) : {
		cutText [format [localize "str_combineDonePartialOne",_magCount, _name, _qtynew_create_ammo_rest,_magAmmunition], "PLAIN DOWN"];
		};
	default {
		cutText [format [localize "str_combineDonePartial",_magCount, _name, _qtynew_create_mags_full, _qtynew_create_ammo_rest,_magAmmunition,_magFullSingular,_magFull], "PLAIN DOWN"];
	};
};

sleep 1;
r_action_count = 0;