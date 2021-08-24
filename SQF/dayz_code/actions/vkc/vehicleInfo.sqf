private ["_backPackCount","_backPackCount_raw","_backPackSlots","_formattedText","_gearCount","_magazineCount","_magazineCount_raw","_magazineSlots","_name","_picture","_price","_text","_typeOf","_weaponSlots","_weaponsCount","_weaponsCount_raw"];

_gearCount = {
	private ["_counter"];
	_counter = 0;
	{_counter = _counter + _x;} count _this;
	_counter
};

if (vkc_action == "claim") then {
	ctrlShow[4850,true];
	_text = localize "STR_CL_VKC_CLAIM";
	_price = vkc_claimPrice;
} else {
	ctrlShow[4851,true];
	_text = localize "STR_CL_VKC_CHANGE";
	_price = vkc_changePrice;
};

_typeOf = typeOf vkc_cursorTarget;
_weaponsCount_raw = getWeaponCargo vkc_cursorTarget;
_magazineCount_raw = getMagazineCargo vkc_cursorTarget;
_backPackCount_raw = getBackpackCargo vkc_cursorTarget;

_weaponSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportMaxWeapons");
_magazineSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportMaxMagazines");
_backPackSlots = getNumber(configFile >> "CfgVehicles" >> _typeOf >> "transportmaxbackpacks");
_name = getText(configFile >> "CfgVehicles" >> _typeOf >> "displayName");
_picture = getText(configFile >> 'CfgVehicles' >> _typeOf >> 'picture');

_weaponsCount = (_weaponsCount_raw select 1) call _gearCount;
_magazineCount = (_magazineCount_raw select 1) call _gearCount;
_backPackCount = (_backPackCount_raw select 1) call _gearCount;

if (!isNil "sk_dualCurrency") then {if (z_singleCurrency) then {_price = _price * 10};};

_price = if (z_singleCurrency) then {
	format ["%1 %2",[_price] call BIS_fnc_numberText,currencyName]
} else {
	[_price,true] call z_calcCurrency
};
_formattedText = format [
	"<img image='%1' size='3' align='center'/><br />" +
	"<t color='#33BFFF' size='0.7'>%2: </t><t color='#ffffff' size='0.7'>%3</t><br />" +
	"<t color='#33BFFF' size='0.7'>%4: </t><t color='#ffffff' size='0.7'>%5</t><br />" +
	"<t color='#33BFFF' size='0.7'>%6: </t><t color='#ffffff' size='0.7'><img image='%7'/> %13/%10 <img image='%8'/> %14/%11 <img image='%9'/> %15/%12</t><br />" +
	"<t color='#33BFFF' size='0.7'>Price to %16: </t><t color='#ffffff' size='0.7'>%17</t><br />",
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
	_backPackCount,
	toLower (_text),
	_price
];

((findDisplay 4800) displayCtrl 4803) ctrlSetStructuredText parseText _formattedText;
ctrlShow [4803,true];
