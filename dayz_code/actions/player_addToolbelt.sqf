private["_item","_config","_onLadder","_create","_isOk","_config2","_consume"];
_item = 	_this;
_config =	configFile >> "cfgWeapons" >> _item;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hastoolweapon = _this in weapons player;
_text = getText (_config >> "displayName");
if (!_hastoolweapon) exitWith {cutText [format[(localize "str_player_30"),_text] , "PLAIN DOWN"]};

call gear_ui_init;

//Add new item
_create = 	getArray (_config >> "ItemActions" >> "Toolbelt" >> "output") select 0;
_config2 = 	configFile >> "cfgWeapons" >> _create;

//Remove magazines if needed
if (_item in ["MeleeHatchet","MeleeCrowbar"]) then {
	_magType = 	([] + getArray (configFile >> "cfgWeapons" >> _item >> "magazines")) select 0;
	_meleeNum = ({_x == _magType} count magazines player);
	for "_i" from 1 to _meleeNum do {
		player removeMagazine _magType;
	};
};

_isOk = [player,_config2] call BIS_fnc_invAdd;
if (_isOk) then {
	//Remove item
	player removeWeapon _item;
	
	//Add magazines if needed
	if (_create in ["MeleeHatchet","MeleeCrowbar"]) then {
		if (_create == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		} else {
			player addMagazine 'hatchet_swing';
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
	if (_item in ["MeleeHatchet","MeleeCrowbar"]) then {
		if (_item == "MeleeCrowbar") then {
			player addMagazine 'crowbar_swing';
		} else {
			player addMagazine 'hatchet_swing';
		};
	};	
};
