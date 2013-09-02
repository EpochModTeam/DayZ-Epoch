/*
_item spawn player_wearClothes;
Added Female skin changes - DayZ Epoch - vbawol
*/
private ["_item","_onLadder","_hasclothesitem","_config","_text","_myModel","_itemNew","_currentSex","_newSex","_model"];

if(TradeInprogress) exitWith { cutText ["\n\nChanging clothes already in progress." , "PLAIN DOWN"] };
TradeInprogress = true;

_item = _this;
call gear_ui_init;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {TradeInprogress = false; cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasclothesitem = _this in magazines player;
_config = configFile >> "CfgMagazines";
_text = getText (_config >> _item >> "displayName");

if (!_hasclothesitem) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_31"),_text,"wear"] , "PLAIN DOWN"]};

if (vehicle player != player) exitWith {TradeInprogress = false; cutText ["\n\nYou may not change clothes while in a vehicle", "PLAIN DOWN"]};

_myModel = (typeOf player);
_itemNew = "Skin_" + _myModel;

//diag_log ("Debug Clothes: model In: " + str(_itemNew) + " Out: " + str(_item));

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
			cutText ["\n\nYou cannot wear a skin of the opposite sex.", "PLAIN DOWN"];
		};
	};
};
TradeInprogress = false;