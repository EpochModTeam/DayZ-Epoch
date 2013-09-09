private ["_item","_config","_onLadder","_create","_isOk","_config2","_magType","_meleeNum","_muzzles","_wtype","_type","_hastoolweapon","_text"];

if(TradeInprogress) exitWith { cutText ["Add to toolbelt already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {TradeInprogress = false; cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hastoolweapon = _this in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_30"),_text] , "PLAIN DOWN"]};

call gear_ui_init;

//Add new item
_create = 	getArray (_config >> "ItemActions" >> "Toolbelt" >> "output") select 0;
_config2 = 	configFile >> "cfgWeapons" >> _create;

//Remove magazines if needed
if (_item in ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeFishingPole","MeleeSledge"]) then {
	_magType = 	([] + getArray (configFile >> "cfgWeapons" >> _item >> "magazines")) select 0;
	_meleeNum = ({_x == _magType} count magazines player);
	for "_i" from 1 to _meleeNum do {
		player removeMagazine _magType;
	};
};

if (_item in ["ItemHatchet","ItemCrowbar","ItemMachete","ItemFishingPole","ItemSledge"]) then {
	switch (primaryWeapon player) do
	{
		case "MeleeHatchet": { "MeleeHatchet" call player_addToolbelt };
		case "MeleeCrowbar": { "MeleeCrowbar" call player_addToolbelt };
		case "MeleeMachete": { "MeleeMachete" call player_addToolbelt };
		case "MeleeFishingPole": { "MeleeFishingPole" call player_addToolbelt };
		case "MeleeSledge": { "MeleeSledge" call player_addToolbelt };
	};
};

_isOk = [player,_config2] call BIS_fnc_invAdd;

if (_isOk) then {
	//Remove item
	player removeWeapon _item;
	
	//Add magazines if needed
	if (_create in ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeFishingPole","MeleeSledge"]) then {
		if (_create == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		};
		if (_create == "MeleeSledge") then {
			player addMagazine 'sledge_swing';
		};
		if (_create == "MeleeHatchet") then {
			player addMagazine 'hatchet_swing';
		};
		if (_create == "MeleeMachete") then {
				player addMagazine 'Machete_swing';
		};
		if (_create == "MeleeFishingPole") then {
				player addMagazine 'Fishing_Swing';
		};
		if (_type == "cfgWeapons") then {
			_muzzles = getArray(configFile >> "cfgWeapons" >> _create >> "muzzles");
			_wtype = ((weapons player) select 0);
			if (count _muzzles > 1) then {
				player selectWeapon (_muzzles select 0);
			} else {
				player selectWeapon _wtype;
			};
		};
	};		
} else {
	cutText [localize "STR_DAYZ_CODE_2", "PLAIN DOWN"];
	
	//Add magazines back
	if (_item in ["MeleeHatchet","MeleeCrowbar","MeleeMachete","MeleeFishingPole","MeleeSledge"]) then {
		if (_item == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		};
		if (_item == "MeleeSledge") then {
			player addMagazine 'sledge_swing';
		};
		if (_item == "MeleeHatchet") then {
			player addMagazine 'hatchet_swing';
		};
		if (_item == "MeleeMachete") then {
			player addMagazine 'Machete_swing';
		};
		if (_item == "MeleeFishingPole") then {
			player addMagazine 'Fishing_Swing';
		};
	};	
};
TradeInprogress = false;
