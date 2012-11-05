private["_item","_isFemale","_itemNew","_item","_onLadder"];
_item = _this;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasclothesitem) exitWith {cutText [format[(localize "str_player_31"),_text,"wear"] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not change clothes while in a vehicle", "PLAIN DOWN"]};

_isFemale = ((typeOf player == "SurvivorW2_DZ")||(typeOf player == "BanditW1_DZ"));
if (_isFemale) then {
	if (_item != "Skin_Survivor2_DZ") exitWith {cutText ["Currently Female Characters cannot change to this skin. This will change in a future update.", "PLAIN DOWN"]};
};

_myModel = (typeOf player);
_itemNew = "Skin_Survivor2_DZ";

player removeMagazine _item;
_humanity = player getVariable ["humanity",0];

switch (_item) do {
	case "Skin_Sniper1_DZ": {
		_itemNew = "Skin_" + _myModel;
		[dayz_playerUID,dayz_characterID,"Sniper1_DZ"] spawn player_humanityMorph;
	};
	case "Skin_Camo1_DZ": {
		_itemNew = "Skin_" + _myModel;
		[dayz_playerUID,dayz_characterID,"Camo1_DZ"] spawn player_humanityMorph;
	};
	case "Skin_Rocket_DZ": {
		_itemNew = "Skin_" + _myModel;
		[dayz_playerUID,dayz_characterID,"Rocket_DZ"] spawn player_humanityMorph;
	};
	case "Skin_Survivor2_DZ": {
		_model = "Survivor2_DZ";
		if (_isFemale) then {
			_model = "SurvivorW2_DZ";
		};
		if (_humanity < -2000) then {
			_model = "Bandit1_DZ";
			if (_isFemale) then {
				_model = "BanditW1_DZ";
			};
		};
		if (_humanity > 5000) then {
			_model = "Survivor3_DZ";
			if (_isFemale) then {
				_model = "SurvivorW2_DZ";
		};
		};
		if (_model != _myModel) then {
		[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
	};
	};
	case "Skin_Soldier1_DZ": {
		_itemNew = "Skin_" + _myModel;
		[dayz_playerUID,dayz_characterID,"Soldier1_DZ"] spawn player_humanityMorph;
	};
};

_config = 		configFile >> "CfgMagazines" >> _itemNew;
_isClass = 		isClass (_config);

if (_isClass) then {
	player addMagazine _itemNew;
};
player setVariable ["humanity",_humanity,true];