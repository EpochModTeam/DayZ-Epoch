private ["_item","_config","_onLadder","_hastoolweapon","_text"];

_item = _this;
_config = configFile >> "cfgWeapons" >> _item;
call gear_ui_init;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages;};

_hastoolweapon = _item in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon) exitWith {format[localize "str_player_30",_text] call dayz_rollingMessages;};
if (dayZ_OnBack != "") exitWith {closeDialog 0; format[localize "str_player_toback_fail",_text] call dayz_rollingMessages;};

call gear_ui_init;

if (_item in ["ItemHatchet","ItemCrowbar","ItemMachete","ItemFishingPole","ItemSledge"]) then {
	//free primary slot for new melee (remember item to add after)
	call {
		if (_item == "ItemHatchet") exitwith {player removeWeapon "ItemHatchet"; dayz_onBack = "MeleeHatchet";};
		if (_item == "ItemCrowbar") exitwith {player removeWeapon "ItemCrowbar"; dayz_onBack = "MeleeCrowbar";};
		if (_item == "ItemMachete") exitwith {player removeWeapon "ItemMachete"; dayz_onBack = "MeleeMachete";};
		if (_item == "ItemFishingPole") exitwith {player removeWeapon "ItemFishingPole"; dayz_onBack = "MeleeFishingPole";};
		if (_item == "ItemSledge") exitwith {player removeWeapon "ItemSledge"; dayz_onBack = "MeleeSledge";};
	};
	disableSerialization;
	[[(findDisplay 106)],"onLBSelChanged"] spawn fn_handleGear; //update back

};
