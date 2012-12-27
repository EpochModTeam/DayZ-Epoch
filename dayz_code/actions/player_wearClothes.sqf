/*
_item spawn player_wearClothes;
TODO: female
*/
private["_item","_onLadder","_hasclothesitem","_config","_text","_isFemale","_myModel","_humanity","_isBandit","_isHero","_itemNew","_model"];
_item = _this;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {cutText [format[(localize "str_player_31"),_text,"wear"] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {cutText ["You may not change clothes while in a vehicle", "PLAIN DOWN"]};

_isFemale = ((typeOf player == "SurvivorW2_DZ")||(typeOf player == "BanditW1_DZ"));
if (_isFemale) exitWith {cutText ["Currently Female Characters cannot change to this skin. This will change in a future update.", "PLAIN DOWN"]};

private["_itemNew","_myModel","_humanity","_isBandit","_isHero"];
_myModel = (typeOf player);
_humanity = player getVariable ["humanity",0];
_isBandit = _humanity < -2000;
_isHero = _humanity > 5000;
_itemNew = "Skin_" + _myModel;

if ( !(isClass(_config >> _itemNew)) ) then {
	_itemNew = if (!_isFemale) then {"Skin_Survivor2_DZ"} else {"Skin_SurvivorW2_DZ"}; 
};

switch (_item) do {
	case "Skin_Sniper1_DZ": {
		_model = "Sniper1_DZ";
	};
	case "Skin_Camo1_DZ": {
		_model = "Camo1_DZ";
	};
	case "Skin_Rocket_DZ": {
		_model = "Rocket_DZ";
	};
	case "Skin_RU_Policeman_DZ": {
		_model = "RU_Policeman_DZ";
	};
	case "Skin_Pilot_EP1_DZ": {
		_model = "Pilot_EP1_DZ";
	};
	case "Skin_Haris_Press_EP1_DZ": {
		_model = "Haris_Press_EP1_DZ";
	};
	case "Skin_Ins_Soldier_GL_DZ": {
		_model = "Ins_Soldier_GL_DZ";
	};
	case "Skin_GUE_Commander_DZ": {
		_model = "GUE_Commander_DZ";
	};
	case "Skin_Functionary1_EP1_DZ": {
		_model = "Functionary1_EP1_DZ";
	};
	case "Skin_Priest_DZ": {
		_model = "Priest_DZ";
	};
	case "Skin_Rocker2_DZ": {
		_model = "Rocker2_DZ";
	};
	case "Skin_Soldier1_DZ": {
		_model = "Soldier1_DZ";
	};
	case "Skin_Survivor2_DZ": {
		_model = "Survivor2_DZ";
	};
	case "Skin_Bandit1_DZ": {
		_model = "Bandit1_DZ";
	};
	case "Skin_Survivor3_DZ": {
		_model = "Survivor3_DZ";
	};
};

if (_model != _myModel) then {
	player removeMagazine _item;
	player addMagazine _itemNew;
	[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
};