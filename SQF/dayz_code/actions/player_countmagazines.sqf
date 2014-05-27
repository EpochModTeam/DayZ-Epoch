/*
count player magazines with ammo count
value = call player_countMagazines; //must be called from a spawned thread (|| use spawn)
return all player magazines with ammo count
Modified to save backpack magazine count by icomrade - Base for fix by Ziellos2k
*/
private ["_control","_item","_val","_max","_count","_magazineArray","_dialog"];
disableSerialization;

_magazineArray = [[],[]];
_dialog = ["0"] call gearDialog_create;
if ((isNull _dialog) || (isNil "_dialog")) exitWith {disableUserInput false; (findDisplay 106) closeDisplay 0; closeDialog 0; _magazineArray};

//Main inventory
for "_i" from 109 to 120 do {
	_control = _dialog displayCtrl _i;
	_item = gearSlotData _control;
	_val = gearSlotAmmoCount _control;
	_max = getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			(_magazineArray select 0) set [count (_magazineArray select 0),[_item,_val]];
		} else {
			(_magazineArray select 0) set [count (_magazineArray select 0),_item];
		};
	};
};

//Pistol/secondary ammo
for "_i" from 122 to 129 do {
	_control = _dialog displayCtrl _i;
	_item = gearSlotData _control;
	_val = gearSlotAmmoCount _control;
	_max = getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			(_magazineArray select 0) set [count (_magazineArray select 0),[_item,_val]];
		} else {
			(_magazineArray select 0) set [count (_magazineArray select 0),_item];
		};
	};
};

//backpack items
if ((typeOf (unitBackPack player)) != "") then {
	_count = getNumber (configFile >> "CfgVehicles" >> (typeOf (unitBackpack Player)) >> "transportMaxMagazines");
	ctrlActivate (_dialog displayCtrl 157);
	if (gear_done) then {
		waitUntil {ctrlShown (_dialog displayCtrl 159)};
		sleep 0.001;
	};

	for "_i" from 5000 to (5000 + _count) do {
		_control = _dialog displayCtrl _i;
		_item = gearSlotData _control;
		_val = gearSlotAmmoCount _control;
		_max = getNumber (configFile >> "CfgMagazines" >> _item >> "count");
		if (_item != "") then {
			if (_val != _max) then {
				(_magazineArray select 1) set [count (_magazineArray select 1),[_item,_val]];
			} else {
				(_magazineArray select 1) set [count (_magazineArray select 1),_item];
			};
		};
	};
};

(findDisplay 106) closeDisplay 0;
if (gear_done) then {sleep 0.001;};
_magazineArray
