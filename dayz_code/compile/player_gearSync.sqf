private ["_objects"];
_objects = nearestObjects [getPosATL player, ["Car", "Helicopter", "Motorcycle", "Ship", "TentStorage"], 10];
{
	dayzUpdateVehicle = [_x,"all"];
	publicVariable "dayzUpdateVehicle";
} foreach _objects;

private ["_backpackWpnQtys","_backpackWpnTypes","_backpackWpn","_backpackMag","_countr"];
dayz_myBackpack = unitBackpack player;
_backpackWpn = getWeaponCargo unitBackpack player;
_backpackMag = getMagazineCargo unitBackpack player;

clearWeaponCargoGlobal unitBackpack player;
clearMagazineCargoGlobal unitBackpack player;

//Fill backpack contents
//Weapons
_backpackWpnTypes = [];
_backpackWpnQtys = [];
if (count _backpackWpn > 0) then {
	_backpackWpnTypes = _backpackWpn select 0;
	_backpackWpnQtys = 	_backpackWpn select 1;
};
_countr = 0;
{
	dayz_myBackpack addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
	_countr = _countr + 1;
} forEach _backpackWpnTypes;
//magazines
_backpackmagTypes = [];
_backpackmagQtys = [];
if (count _backpackmag > 0) then {
	_backpackmagTypes = _backpackMag select 0;
	_backpackmagQtys = 	_backpackMag select 1;
};
_countr = 0;
{
	dayz_myBackpack addmagazineCargoGlobal [_x,(_backpackmagQtys select _countr)];
	_countr = _countr + 1;
} forEach _backpackmagTypes;

private["_dialog","_magazineArray","_control","_item","_val","_max"];
diag_log ("REQUESTING GEAR SYNC");
disableSerialization;
//if (!dayzGearSave) exitWith {};

diag_log ("CONDUCTING GEAR SYNC");
_dialog = 			_this select 0;
_magazineArray = 	[];

//Primary Mags
for "_i" from 109 to 120 do 
{
	_control = 	_dialog displayCtrl _i;
	_item = 	gearSlotData _control;
	_val =		gearSlotAmmoCount _control;
	_max = 		getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			_magazineArray set [count _magazineArray,[_item,_val]];
		} else {
			_magazineArray set [count _magazineArray,_item];
		};
	};
};

//Secondary Mags
for "_i" from 122 to 129 do 
{
	_control = 	_dialog displayCtrl _i;
	_item = 	gearSlotData _control;
	_val =		gearSlotAmmoCount _control;
	_max = 		getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			_magazineArray set [count _magazineArray,[_item,_val]];
		} else {
			_magazineArray set [count _magazineArray,_item];
		};
	};
};
dayz_unsaved = true;
dayz_Magazines = _magazineArray;	
