if (dayz_lastClothesChange + 5 > diag_tickTime) exitWith {format [localize "str_player_clotheslimit",dayz_lastClothesChange + 5 - diag_tickTime] call dayz_rollingMessages;};
dayz_lastClothesChange = diag_tickTime;

if (_this in DZE_RestrictSkins) exitWith { format[localize "str_epoch_player_315",_this] call dayz_rollingMessages; };
if (dayz_actionInProgress) exitWith {localize "str_epoch_player_83" call dayz_rollingMessages;};
dayz_actionInProgress = true;
/*
_item call player_wearClothes;
Added Female skin changes - DayZ Epoch - vbawol
*/
private ["_item","_onLadder","_hasclothesitem","_config","_text","_isFemale","_myModel","_humanity","_isBandit","_isHero",
"_itemNew","_model","_skinToArray","_finalArray","_skinToModel"];

_item = _this;
call gear_ui_init;
dayz_actionInProgress = false; //reset for strange glitch
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages; dayz_actionInProgress = false;};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {format[localize "str_player_31",_text,localize "str_player_31_wear"] call dayz_rollingMessages; dayz_actionInProgress = false;};

if (vehicle player != player) exitWith {localize "str_player_fail_wear1" call dayz_rollingMessages; dayz_actionInProgress = false;};
//if (!isNull (unitBackpack player)) exitWith {dayz_actionInProgress = false; localize "STR_EPOCH_ACTIONS_9" call dayz_rollingMessages;};
if ("CSGAS" in (magazines player)) exitWith {dayz_actionInProgress = false; localize "STR_EPOCH_ACTIONS_10" call dayz_rollingMessages;};

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
					/*
					//play animation when changing clothes (Prevents out of breath resetting)
					player playActionNow "Medic";
						
					//wait animation end
					waitUntil {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 1};
					waitUntil {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "disableWeapons") == 0};
					*/
					player addMagazine _itemNew;
					[dayz_playerUID,dayz_characterID,_model] spawn player_humanityMorph;
				};
			};

		} else {
			localize "str_epoch_player_86" call dayz_rollingMessages;
		};
	};
};
dayz_actionInProgress = false;
