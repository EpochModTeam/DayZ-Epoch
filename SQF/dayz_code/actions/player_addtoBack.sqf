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
		if (_item == "ItemHatchet") exitwith {player removeWeapon "ItemHatchet"; dayz_onBack = "MeleeHatchet";player setVariable ["dayz_onBack",dayz_onBack,true];};
		if (_item == "ItemCrowbar") exitwith {player removeWeapon "ItemCrowbar"; dayz_onBack = "MeleeCrowbar";player setVariable ["dayz_onBack",dayz_onBack,true];};
		if (_item == "ItemMachete") exitwith {player removeWeapon "ItemMachete"; dayz_onBack = "MeleeMachete";player setVariable ["dayz_onBack",dayz_onBack,true];};
		if (_item == "ItemFishingPole") exitwith {player removeWeapon "ItemFishingPole"; dayz_onBack = "MeleeFishingPole";player setVariable ["dayz_onBack",dayz_onBack,true];};
		if (_item == "ItemSledge") exitwith {player removeWeapon "ItemSledge"; dayz_onBack = "MeleeSledge";player setVariable ["dayz_onBack",dayz_onBack,true];};
	};
	disableSerialization;
	[[(findDisplay 106)],"onLBSelChanged"] spawn fn_handleGear; //update back
};
