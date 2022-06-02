if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

disableSerialization;
call gear_ui_init;
closeDialog 0;

local _create = _this;

if !(_create in magazines player) exitWith {dayz_actionInProgress = false;};

//player playActionNow "PutDown";

local _config	= configFile >> "CfgMagazines" >> _create;
local _magSize	= getNumber(_config >> "count");
local _type	= getNumber(_config >> "type");
local _name	= getText(_config >> "displayName");
local _magCount	= {_x == _create} count magazines player;

if (_magCount == 1) exitWith {
	[format [localize "str_cannotCombine", _name], 1] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

//primary/secondary mags
local _slotStart	= 0;
local _slotEnd		= 0;

call {
	if ((_type == 256) || {_type == 512}) exitWith {
		_slotStart	= 109;
		_slotEnd	= 120;
	};
	if (_type == 16) exitWith {
		_slotStart	= 122;
		_slotEnd	= 129;
	};
};

local _dialog		= findDisplay 106;
local _qty_total_ammo	= 0;

for "_i" from _slotStart to _slotEnd do {
	local _control = _dialog displayCtrl _i;
	local _mag = gearSlotData _control;

	if (_mag == _create) then {
		_qty_total_ammo = _qty_total_ammo + gearSlotAmmoCount _control;
	};
};

local _qtynew_create_mags_full	= floor (_qty_total_ammo / _magSize);
local _qtynew_create_ammo_rest	= _qty_total_ammo - (_qtynew_create_mags_full * _magSize);

player removeMagazines _create;

for "_i" from 1 to _qtynew_create_mags_full do {
	player addMagazine _create;
};
if (_qtynew_create_ammo_rest != 0) then {
	player addMagazine [_create, _qtynew_create_ammo_rest];
};

local _magFull		= localize "str_combineMagazines";
local _magFullSingular	= localize "str_combineMagazine";
local _magAmmunition	= localize "str_combineBullets";

// Check if quiver
if (_create == "Quiver") then {
	_magFull		= localize "str_combineQuivers";
	_magFullSingular	= localize "str_combineQuiver";
	_magAmmunition		= localize "str_combineArrows";
};

call {
	if (_qtynew_create_ammo_rest == 0) exitWith {
		format[localize "str_combineDoneFull", _magCount, _name, _qtynew_create_mags_full, _magFull] call dayz_rollingMessages;
	};
	if (_qtynew_create_mags_full == 0) exitWith {
		[format[localize "str_combineDonePartialOne", _magCount, _name, _qtynew_create_ammo_rest, _magAmmunition], 1] call dayz_rollingMessages;
	};
	[format[localize "str_combineDonePartial", _magCount, _name, _qtynew_create_mags_full, _qtynew_create_ammo_rest, _magAmmunition, _magFullSingular, _magFull], 1] call dayz_rollingMessages;
};

reload player;
uiSleep 1;
dayz_actionInProgress = false;
