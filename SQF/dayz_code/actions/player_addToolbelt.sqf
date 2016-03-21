private ["_item","_config","_onLadder","_hastoolweapon","_onBack","_text","_create","_config2","_melee2tb","_isOk"];
disableSerialization;
_item = _this;
_config = configFile >> "cfgWeapons" >> _item;
_onBack = dayz_onBack in MeleeWeapons;
if (DZE_ActionInProgress) exitWith {cutText [localize "str_epoch_player_39","PLAIN DOWN"];};
DZE_ActionInProgress = true;

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {DZE_ActionInProgress = false; cutText [localize "str_player_21", "PLAIN DOWN"]};

_hastoolweapon = _item in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon and !_onBack) exitWith {DZE_ActionInProgress = false; cutText [format [localize "str_player_30",_text] , "PLAIN DOWN"]};

call gear_ui_init;

//Add new item
_create = getArray (_config >> "ItemActions" >> "Toolbelt" >> "output") select 0;
_config2 = configFile >> "cfgWeapons" >> _create;

//removing current melee weapon if new melee selected
_melee2tb = "";
if ((_item in ["MeleeHatchet_DZE","MeleeCrowbar","MeleeMachete","MeleeFishingPole","MeleeSledge"]) || _item == DayZ_onBack) then {
	if (!carryClick) then {
		//free primary slot for new melee (remember item to add after)
		switch (primaryWeapon player) do {
			case "MeleeHatchet_DZE": { if (!("ItemHatchet_DZE" in weapons player)) then { player removeWeapon "MeleeHatchet_DZE"; _melee2tb = "ItemHatchet_DZE"; }; };
			case "MeleeCrowbar": { if (!("ItemCrowbar" in weapons player)) then { player removeWeapon "MeleeCrowbar"; _melee2tb = "ItemCrowbar"; }; };
			case "MeleeMachete": { if (!("ItemMachete" in weapons player)) then { player removeWeapon "MeleeMachete"; _melee2tb = "ItemMachete"; }; };
			case "MeleeFishingPole": {player removeWeapon "MeleeFishingPole"; _melee2tb = "ItemFishingPole";};
			case "MeleeSledge": {player removeWeapon "MeleeSledge"; _melee2tb = "ItemSledge";};
		};
	 } else {
		if (DayZ_onBack != "" || _item == DayZ_onBack) then {
			switch DayZ_onBack do {
				case "MeleeHatchet_DZE": { if (!("ItemHatchet_DZE" in weapons player)) then { dayz_onBack = ""; _melee2tb = "ItemHatchet_DZE"; }; };
				case "MeleeCrowbar": { if (!("ItemCrowbar" in weapons player)) then { dayz_onBack = ""; _melee2tb = "ItemCrowbar"; }; };
				case "MeleeMachete": { if (!("ItemMachete" in weapons player)) then { dayz_onBack = ""; _melee2tb = "ItemMachete"; }; };
				case "MeleeFishingPole": {dayz_onBack = ""; _melee2tb = "ItemFishingPole";};
				case "MeleeSledge": {dayz_onBack = ""; _melee2tb = "ItemSledge";};
			};
			carryClick = false;
			((findDisplay 106) displayCtrl 1209) ctrlSetText "";
		};
	};
};

//Remove melee magazines (BIS_fnc_invAdd fix) (add new melee ammo to array if needed)
{player removeMagazines _x} forEach ["Hatchet_Swing","Sledge_Swing","Crowbar_Swing","Machete_Swing","Fishing_Swing"];

_isOk = [player,_config2] call BIS_fnc_invAdd;
if (_isOk) then {
	player removeWeapon _item;
	//adding old melee converted to Item on place of removed _item
	if (_melee2tb != "") then {
		//we know there is place to add item but to prevent BE spam using _config2
		_config2 = _melee2tb;
		_isOk = [player,_config2] call BIS_fnc_invAdd;
		};
} else {
	closeDialog 0;
	cutText [localize "str_player_24", "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
