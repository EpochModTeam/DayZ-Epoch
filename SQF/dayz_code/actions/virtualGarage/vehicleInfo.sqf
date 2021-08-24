// Developed by [GZA] David for German Zombie Apocalypse Servers (https://zombieapo.eu/)
// Rewritten by salival (https://github.com/oiad)

private ["_backPackCount","_backPackSlots","_cargoAmount","_control","_counter","_DateStored","_formattedText","_index","_inventory","_localVehicle","_magazineCount","_magazineSlots","_name","_picture","_price","_typeOf","_vehicle","_weaponSlots","_weaponsCount","_MaintainDays","_DateMaintained"];

disableSerialization;

_control = (_this select 0) select 0;
_index = (_this select 0) select 1;
_localVehicle = typeName (vg_vehicleList select _index) == "OBJECT";
_DateMaintained = "";
_MaintainDays = -1;
_gearCount = {
	private ["_counter"];
	_counter = 0;
	{_counter = _counter + _x;} count _this;
	_counter;
};

if (_localVehicle) then {
	_vehicle = vg_vehicleList select _index;
	_typeOf = typeOf _vehicle;
	_weaponsCount = ((getWeaponCargo _vehicle) select 1) call _gearCount;
	_magazineCount = ((getMagazineCargo _vehicle) select 1) call _gearCount;
	_backPackCount = ((getBackpackCargo _vehicle) select 1) call _gearCount;
	ctrlShow[2852,false]; // getVehicle
	ctrlShow[2850,true]; // storeVehicle
	ctrlShow[2851,true]; // storeVehicleWithGear
} else {
	_vehicle = (vg_vehicleList select _index) select 1;
	_inventory = (vg_vehicleList select _index) select 2;
	_DateStored = (vg_vehicleList select _index) select 4;
	_DateMaintained = (vg_vehicleList select _index) select 5;
	_MaintainDays = (vg_vehicleList select _index) select 6;
	_typeOf = _vehicle;
	_weaponsCount = _inventory select 0;
	_magazineCount = _inventory select 1;
	_backPackCount = _inventory select 2;

	ctrlShow[2852,true]; // getVehicle
	ctrlShow[2850,false]; // storeVehicle
	ctrlShow[2851,false]; // storeVehicleWithGear
};

_weaponSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportMaxWeapons");
_magazineSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportMaxMagazines");
_backPackSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportmaxbackpacks");
_name = getText(configFile >> "CfgVehicles" >> _typeOf >> "displayName");
_picture = getText (configFile >> 'CfgVehicles' >> _typeOf >> 'picture');

_cargoAmount = (_weaponsCount + _magazineCount + _backPackCount);

if (_localVehicle) then {
	{
		if (_typeOf isKindOf (_x select 0)) exitWith {_price = _x select 1;};
	} forEach vg_price;
	if (_cargoAmount > 0) then {
		_price = _price + (_cargoAmount * vg_pricePer);
		ctrlShow[2850,false];
	} else {
		ctrlShow[2851,false];
	};
	_price = if (_price == 0) then {localize "strwffree"} else {
		if (!isNil "sk_dualCurrency") then {_price = if (z_singleCurrency) then {_price * 10} else {_price};};
		if (z_singleCurrency) then {
			format ["%1 %2",[_price] call BIS_fnc_numberText,currencyName]
		} else {
			[_price,true] call z_calcCurrency
		};
	};
};

_formattedText = format [
	"<img image='%1' size='3' align='center'/><br />" +
	"<t color='#33BFFF' size='0.7'>%2: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
	"<t color='#33BFFF' size='0.7'>%4: </t><t color='#ffffff' size='0.7'>%5</t><br />" +
	"<t color='#33BFFF' size='0.7'>%6: </t><t color='#ffffff' size='0.7'><img image='%7'/> %13/%10 <img image='%8'/> %14/%11 <img image='%9'/> %15/%12</t><br />",
	_picture,
	localize "STR_EPOCH_NAME",
	_name,
	localize "STR_EPOCH_CLASS",
	_typeOf,
	localize "STR_EPOCH_CARGO_SPACE",
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_weapons_white.paa",
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_items_white.paa",
	"\z\addons\dayz_code\gui\gear\gear_ui_slots_backPacks_white.paa",
	_weaponSlots,
	_magazineSlots,
	_backPackSlots,
	_weaponsCount,
	_magazineCount,
	_backPackCount
];

if (_localVehicle) then {_formattedText = _formattedText + format ["<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />",localize "STR_CL_VG_PRICE",_price];};
if (!_localVehicle) then {
	if (_DateStored != "old") then {
		_formattedText = _formattedText + format ["<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />",localize "STR_CL_VG_STOREDATE",_DateStored];
		if (_MaintainDays >= 0) then {
				_formattedText = _formattedText + format ["<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br /><t color='#33BFFF' size='0.7'>%3: </t><t color='#ffffff' size='0.7'>%4</t><br />",localize "STR_CL_VG_MAINTAINDATE",_DateMaintained,localize "STR_CL_VG_MAINTAININTERVAL",_MaintainDays];
		};
	} else {
		_formattedText = _formattedText + format ["<t color='#33BFFF' size='0.7'>%1: </t><t color='#ffffff' size='0.7'>%2</t><br />",localize "STR_CL_VG_STOREDATE",localize "STR_CL_VG_STOREDATE_INVALID"];
	};
};

((findDisplay 2800) displayCtrl 2803) ctrlSetStructuredText parseText _formattedText;

ctrlShow [2803,true];
ctrlShow [2830,true];
