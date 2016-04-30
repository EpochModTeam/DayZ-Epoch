if (dayz_lastClothesChange + 5 > diag_tickTime) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_lastClothesChange = diag_tickTime;

if (_this in DZE_RestrictSkins) exitWith { format[localize "str_epoch_player_315",_this] call dayz_rollingMessages; };
if (DZE_ActionInProgress) exitWith {localize "str_epoch_player_83" call dayz_rollingMessages;};
DZE_ActionInProgress = true;
/*
_item call player_wearClothes;
Added Female skin changes - DayZ Epoch - vbawol
*/
private ["_item","_onLadder","_hasclothesitem","_config","_text","_isFemale","_myModel","_humanity","_isBandit","_isHero",
"_itemNew","_model","_skinToArray","_finalArray","_skinToModel"];

_item = _this;
call gear_ui_init;
r_action_count = 0; //reset for strange glitch
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages; DZE_ActionInProgress = false;};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {format[localize "str_player_31",_text,localize "str_player_31_wear"] call dayz_rollingMessages; DZE_ActionInProgress = false;};

if (vehicle player != player) exitWith {localize "str_player_fail_wear1" call dayz_rollingMessages; DZE_ActionInProgress = false;};
//if (!isNull (unitBackpack player)) exitWith {DZE_ActionInProgress = false; localize "STR_EPOCH_ACTIONS_9" call dayz_rollingMessages;};
if ("CSGAS" in (magazines player)) exitWith {DZE_ActionInProgress = false; localize "STR_EPOCH_ACTIONS_10" call dayz_rollingMessages;};

_myModel = (typeOf player);
_humanity = player getVariable ["humanity",0];
_isBandit = _humanity < -2000;
_isHero = _humanity > 5000;
_itemNew = "Skin_" + _myModel;

if ( (isClass(_config >> _itemNew)) ) then {
	if ( (isClass(_config >> _item)) ) then {
		// Current sex of player skin
		
		_currentSex = getText (configFile >> "CfgSurvival" >> "Skins" >> _itemNew >> "sex");
		// Sex of new skin
		_newSex = getText (configFile >> "CfgSurvival" >> "Skins" >> _item >> "sex");
		//diag_log ("Debug Clothes: sex In: " + str(_currentSex) + " Out: " + str(_newSex));

		if(_currentSex == _newSex) then {
			// Get model name from config
			_model = getText (configFile >> "CfgSurvival" >> "Skins" >> _item >> "playerModel");
			if (_model != _myModel) then {
				if(([player,_item] call BIS_fnc_invRemove) == 1) then {
					player addMagazine _itemNew;
					[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
				};
			};

		} else {
			localize "str_epoch_player_86" call dayz_rollingMessages;
		};
	};
};
DZE_ActionInProgress = false;
