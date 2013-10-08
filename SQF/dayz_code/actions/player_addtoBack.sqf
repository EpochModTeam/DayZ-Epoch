private ["_item","_config","_onLadder","_hastoolweapon","_text"];

_item = _this;
_config = configFile >> "cfgWeapons" >> _item;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hastoolweapon = _item in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon) exitWith {cutText [format[localize "str_player_30",_text] , "PLAIN DOWN"]};
if (dayZ_OnBack != "") exitWith {cutText [format["Cannot add %1 to back.",_text] , "PLAIN DOWN"]};

call gear_ui_init;

if (_item in ["ItemHatchet_DZE","ItemCrowbar","ItemMachete","ItemFishingPole","ItemSledge"]) then {
	//free primary slot for new melee (remember item to add after)
	switch (_item) do {
		case "ItemHatchet_DZE": {player removeWeapon "ItemHatchet_DZE"; dayz_onBack = "MeleeHatchet";};
		case "ItemCrowbar": {player removeWeapon "ItemCrowbar"; dayz_onBack = "MeleeCrowbar";};
		case "ItemMachete": {player removeWeapon "ItemMachete"; dayz_onBack = "MeleeMachete";};
		case "ItemFishingPole": {player removeWeapon "ItemFishingPole"; dayz_onBack = "MeleeFishingPole";};
		case "ItemSledge": {player removeWeapon "ItemSledge"; dayz_onBack = "MeleeSledge";};
	};
	disableSerialization;
	[[(findDisplay 106)],"onLBSelChanged"] execVM "\z\addons\dayz_code\system\handleGear.sqf"; //update back

};