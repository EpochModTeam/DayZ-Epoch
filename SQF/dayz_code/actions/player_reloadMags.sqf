private ["_item","_config","_consume","_create","_item_ammo","_consume_magsize","_create_magsize","_consume_type","_slotstart","_slotend","_dialog","_qty_total_ammo","_qty_consume_ammo","_qty_create_ammo","_qty_consume_mags","_qty_create_mags","_qty_free_slots","_control","_mag","_qtynew_create_ammo","_qtynew_consume_ammo","_qtynew_create_mags","_qtynew_consume_mags","_qtynew_consume_mags_full","_qtynew_create_mags_full","_qtynew_consume_ammo_rest","_qtynew_create_ammo_rest"];

disableSerialization;
call gear_ui_init;

//note - one slot ammo can be used!


_item =     _this;

_config =   configFile >> "CfgMagazines" >> _item;

_consume =  getArray (_config >> "ItemActions" >> "ReloadMag" >> "use") select 0;
_create =   getArray (_config >> "ItemActions" >> "ReloadMag" >> "output") select 0;

_item_ammo = gearSlotAmmoCount (uiNamespace getVariable 'uiControl');

//add check if weapon can use create (if not - show message)

player playActionNow "PutDown";

_consume_magsize =  getNumber(configFile >> "CfgMagazines" >> _consume >> "count");
_create_magsize =   getNumber(configFile >> "CfgMagazines" >> _create >> "count");

_consume_type = getNumber(configFile >> "CfgMagazines" >> _consume >> "type");

//primary/secondary mags?
_slotstart = 0;
_slotend = 0;
if (_consume_type == 256) then {
    _slotstart = 109;
    _slotend = 120;
}; 
if ( _consume_type == 16) then {    
    _slotstart = 122;
    _slotend = 129;
};

_dialog = findDisplay 106;

_qty_total_ammo = 0;
_qty_consume_ammo = 0;
_qty_create_ammo = 0;
_qty_consume_mags = 0;
_qty_create_mags = 0;
_qty_free_slots = 0;
for "_i" from _slotstart to _slotend do {
    _control =_dialog displayCtrl _i;
    _mag = gearSlotData _control;
    if (_mag == _consume) then {
        _qty_total_ammo = _qty_total_ammo + gearSlotAmmoCount _control;
        _qty_consume_ammo = _qty_consume_ammo + gearSlotAmmoCount _control;
        _qty_consume_mags = _qty_consume_mags+1;
    };
    if  (_mag == _create) then {
        _qty_total_ammo = _qty_total_ammo + gearSlotAmmoCount _control;
        _qty_create_ammo = _qty_create_ammo + gearSlotAmmoCount _control;
        _qty_create_mags = _qty_create_mags+1;
    };
    if (_mag == "") then {
        _qty_free_slots = _qty_free_slots + 1;
    };
};

_qtynew_create_ammo = 0;
_qtynew_consume_ammo = 0;
_qtynew_create_mags = 0;
_qtynew_consume_mags = 0;

_qtynew_consume_mags_full = 0;
_qtynew_create_mags_full = 0;
_qtynew_consume_ammo_rest = 0;
_qtynew_create_ammo_rest = 0;


if ( _consume_magsize > _create_magsize) then {
    _qtynew_create_ammo = _qty_create_ammo + _item_ammo;
    _qtynew_consume_ammo = _qty_consume_ammo - _item_ammo;
    _qtynew_create_mags = ceil(_qtynew_create_ammo/_create_magsize);
    _qtynew_consume_mags = ceil(_qtynew_consume_ammo/_consume_magsize);
} else {
    _qtynew_create_ammo = _qty_total_ammo;
    _qtynew_consume_ammo = 0;
};

if ((_qtynew_create_mags + _qtynew_consume_mags) > (_qty_create_mags + _qty_consume_mags + _qty_free_slots)) exitWith {
    cutText [localize "str_player_24", "PLAIN DOWN"];
};
_qtynew_consume_mags_full = floor(_qtynew_consume_ammo/_consume_magsize);
_qtynew_create_mags_full = floor(_qtynew_create_ammo/_create_magsize);
_qtynew_consume_ammo_rest = _qtynew_consume_ammo - (_qtynew_consume_mags_full*_consume_magsize);
_qtynew_create_ammo_rest = _qtynew_create_ammo - (_qtynew_create_mags_full*_create_magsize);


// abort if no complete mags or partial mag is less than 15% full
//if((_create_magsize*0.85)) exitWith {};


//remove all _consume and _create mags (we already have total ammo count) 
player removeMagazines _consume;
player removeMagazines _create; 

for "_i" from 1 to _qtynew_consume_mags_full do {
    player addMagazine _consume;
};
if (_qtynew_consume_ammo_rest != 0) then {
    player addMagazine [_consume,_qtynew_consume_ammo_rest];
};
for "_i" from 1 to _qtynew_create_mags_full do {
    player addMagazine _create;
};
if (_qtynew_create_ammo_rest != 0) then {
    player addMagazine [_create,_qtynew_create_ammo_rest];
};