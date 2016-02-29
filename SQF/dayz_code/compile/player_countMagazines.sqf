/*
count player magazines with ammo count
value = call player_countMagazines;
return all player magazines with ammo count
*/
private ["_dialog","_created","_magazineArray"];
disableSerialization;
disableUserInput true;

_dialog = findDisplay 106;
_created = false;

if ( isNull _dialog ) then {
	//startLoadingScreen [""];
	createGearDialog [player, "RscDisplayGear"];
	_dialog = findDisplay 106;
	_created = true;
};

_magazineArray = [];

for "_i" from 109 to 120 do
{
	_control = _dialog displayCtrl _i;
	_item = gearSlotData _control;
	_val = gearSlotAmmoCount _control;
	_max = getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			_magazineArray set [count _magazineArray,[_item,_val]];
		} else {
			_magazineArray set [count _magazineArray,_item];
		};
	};
};

for "_i" from 122 to 129 do
{
	_control = _dialog displayCtrl _i;
	_item = gearSlotData _control;
	_val = gearSlotAmmoCount _control;
	_max = getNumber (configFile >> "CfgMagazines" >> _item >> "count");
	if (_item != "") then {
		if (_val != _max) then {
			_magazineArray set [count _magazineArray,[_item,_val]];
		} else {
			_magazineArray set [count _magazineArray,_item];
		};
	};
};

if ( _created ) then {
	closeDialog 0;
	//endLoadingScreen;
};

disableUserInput false;
_magazineArray