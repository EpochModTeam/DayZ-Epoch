/*
	DayZ Epoch Crafting 0.3
	Made for DayZ Epoch && Unleashed by [VB]AWOL please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
	Thanks to thevisad for help with the spawn call fixes.

USAGE EXAMPLE:
class ItemActions
{
	class Crafting
	{
		text = "Craft Tent";
		script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;"; // [Class of itemaction,CfgMagazines || CfgWeapons, item]
		neednearby[] = {"workshop","fire"};
		requiretools[] = {"ItemToolbox","ItemKnife"}; // (cfgweapons only)
		output[] = {{"ItemTent",1}}; // (CfgMagazines, qty)
		input[] = {{"ItemCanvas",2},{"ItemPole",2}}; // (CfgMagazines, qty)
		inputstrict = true; // (CfgMagazines input without inheritsFrom) Optional
		inputweapons[] = {"ItemToolbox"}; // consume toolbox (cfgweapons only)
		outputweapons[] = {"ItemToolbox"}; // return toolbox (cfgweapons only)
	};
};
*/
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_plasticWaterBottles","_boiledWaterBottles","_tradeComplete","_onLadder","_canDo","_selectedRecipeOutput","_boiled","_proceed","_itemIn","_countIn","_missing","_missingQty","_qty","_itemOut","_countOut","_finished","_removed","_tobe_removed_total","_textCreate","_textMissing","_selectedRecipeInput","_selectedRecipeInputStrict","_num_removed","_removed_total","_temp_removed_array","_abort","_waterLevel","_waterLevel_lowest","_reason","_isNear","_selectedRecipeTools","_distance","_crafting","_needNear","_item","_baseClass","_num_removed_weapons","_outputWeapons","_inputWeapons","_randomOutput","_craft_doLoop","_selectedWeapon","_selectedMag","_sfx","_configParent","_pPos","_text"];

// This is used to find correct recipe based what itemaction was click allows multiple recipes per item.
_crafting = _this select 0;
// This tells the script what type of item we are clicking on
_baseClass = _this select 1;
_item =  _this select 2;
_abort = false;
_distance = 3;
_reason = "";
_waterLevel = 0;
_outputWeapons = [];
_selectedRecipeOutput = [];
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_player_unconscious && {!r_drag_sqf} && {!_onLadder});
_boiled = false;
_boiledWaterBottles = ["ItemPlasticWaterBottleSafe","ItemWaterBottleSafe","ItemPlasticWaterBottleHerbal","ItemWaterBottleHerbal","ItemWaterbottle9ozBoiled","ItemWaterbottle8ozBoiled","ItemWaterbottle7ozBoiled","ItemWaterbottle6ozBoiled","ItemWaterbottle5ozBoiled","ItemWaterbottle4ozBoiled","ItemWaterbottle3ozBoiled","ItemWaterbottle2ozBoiled","ItemWaterbottle1ozBoiled","ItemWaterBottleBoiled","ItemPlasticWaterbottle9ozBoiled","ItemPlasticWaterbottle8ozBoiled","ItemPlasticWaterbottle7ozBoiled","ItemPlasticWaterbottle6ozBoiled","ItemPlasticWaterbottle5ozBoiled","ItemPlasticWaterbottle4ozBoiled","ItemPlasticWaterbottle3ozBoiled","ItemPlasticWaterbottle2ozBoiled","ItemPlasticWaterbottle1ozBoiled","ItemPlasticWaterBottleBoiled"];
_plasticWaterBottles = ["ItemPlasticWaterbottle","ItemPlasticWaterbottleInfected","ItemPlasticWaterbottleSafe","ItemPlasticWaterBottleHerbal","ItemPlasticWaterBottleBoiled","ItemPlasticWaterbottle1oz","ItemPlasticWaterbottle2oz","ItemPlasticWaterbottle3oz","ItemPlasticWaterbottle4oz","ItemPlasticWaterbottle5oz","ItemPlasticWaterbottle6oz","ItemPlasticWaterbottle7oz","ItemPlasticWaterbottle8oz","ItemPlasticWaterbottle9oz","ItemPlasticWaterbottle1ozBoiled","ItemPlasticWaterbottle2ozBoiled","ItemPlasticWaterbottle3ozBoiled","ItemPlasticWaterbottle4ozBoiled","ItemPlasticWaterbottle5ozBoiled","ItemPlasticWaterbottle6ozBoiled","ItemPlasticWaterbottle7ozBoiled","ItemPlasticWaterbottle8ozBoiled","ItemPlasticWaterbottle9ozBoiled"];

// Need Near Requirements
_needNear = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "neednearby");
if ("fire" in _needNear) then {
	_pPos = [player] call FNC_GetPos;
	_isNear = {inflamed _x} count (_pPos nearObjects _distance);
	if(_isNear == 0) then {
		_abort = true;
		_reason = localize "STR_EPOCH_FIRE";
	};
};
if ("workshop" in _needNear) then {
	_isNear = count (nearestObjects [player, DZE_Workshops, _distance]);
	if(_isNear == 0) then {
		_abort = true;
		_reason = localize "STR_EPOCH_WORKBENCH_NEARBY";
	};
};
if (_abort) exitWith {
	format[localize "str_epoch_player_149",_reason,_distance] call dayz_rollingMessages;
	dayz_actionInProgress = false;
};

if (_canDo) then {
	_selectedRecipeTools = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "requiretools");
	_selectedRecipeOutput = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "output");
	_selectedRecipeInput = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "input");
	_selectedRecipeInputStrict = ((isNumber (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "inputstrict")) && {getNumber (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "inputstrict") > 0});
	_outputWeapons = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "outputweapons");
	_inputWeapons = getArray (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "inputweapons");

	_sfx = getText(configFile >> _baseClass >> _item >> "sfx");
	if (_sfx == "") then {
		_sfx = "repair";
	};

	_randomOutput = 0;
	if (isNumber (configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "randomOutput")) then {
		_randomOutput = getNumber(configFile >> _baseClass >> _item >> "ItemActions" >> _crafting >> "randomOutput");
	};

	_craft_doLoop = true;
	_tradeComplete = 0;

	while {_craft_doLoop} do {
		_temp_removed_array = [];
		if ([_item,_selectedRecipeTools,"none"] call dze_requiredItemsCheck) then {			
			// Dry run to see if all parts are available.
			_proceed = true;
			if (count _selectedRecipeInput > 0) then {
				{
					_itemIn = _x select 0;
					_countIn = _x select 1;

					_qty = { (_x == _itemIn) || (!_selectedRecipeInputStrict && {configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn})} count magazines player;
					
					if (_qty < _countIn) exitWith {
						_missing = _itemIn;
						_missingQty = (_countIn - _qty);
						_proceed = false;
					};
				} count _selectedRecipeInput;
			};

			if (count _inputWeapons > 0 && {_proceed}) then {
				{
					_itemIn = _x;
					_countIn = 1;
					_qty = { (_x == _itemIn) || (!_selectedRecipeInputStrict && {configName(inheritsFrom(configFile >> "cfgWeapons" >> _x)) == _itemIn})} count weapons player;

					if (_qty < _countIn) exitWith {
						_missing = _itemIn;
						_missingQty = (_countIn - _qty);
						_proceed = false;
					};
				} count _inputWeapons;
			};

			// If all parts proceed
			if (_proceed) then {
				localize "str_epoch_player_62" call dayz_rollingMessages;

				[player,(getPosATL player),50,_sfx] spawn fnc_alertZombies;

				_finished = ["Medic",1] call fn_loopAction;

				if (_finished) then {
					_removed_total = 0; // count total of removed items
					_tobe_removed_total = 0; // count total of all to be removed items
					_waterLevel_lowest = 0; // find the lowest _waterLevel
					
					// Take items
					{
						_removed = 0;
						_itemIn = _x select 0;
						_countIn = _x select 1;
						//diag_log format["Recipe Finish: %1 %2", _itemIn,_countIn];
						_tobe_removed_total = _tobe_removed_total + _countIn;

						// Preselect the item
						{
							_configParent = configName(inheritsFrom(configFile >> "cfgMagazines" >> _x));
							if ((_x == _itemIn) || (!_selectedRecipeInputStrict && {_configParent == _itemIn})) then {
								// Get lowest waterlevel
								if ((_x == "ItemWaterbottle") || (_configParent == "ItemWaterbottle")) then {
									_waterLevel = getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz");
									if (_waterLevel_lowest == 0 || _waterLevel < _waterLevel_lowest) then {
										_waterLevel_lowest = _waterLevel;
									};
								};
							};
						} count (magazines player);

						{
							_configParent = configName(inheritsFrom(configFile >> "cfgMagazines" >> _x));
							if ((_removed < _countIn) && {(_x == _itemIn) || (!_selectedRecipeInputStrict && {_configParent == _itemIn})}) then {
								if (((_x != "ItemWaterbottle") && (_configParent != "ItemWaterbottle")) || {(_waterLevel_lowest == 0) || ((_waterLevel_lowest > 0) && {getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz") == _waterLevel_lowest})}) then {
									_num_removed = ([player,_x] call BIS_fnc_invRemove);
								} else {
									_num_removed = 0;
								};
								_removed = _removed + _num_removed;
								_removed_total = _removed_total + _num_removed;
								if (_num_removed >= 1) then {
									//diag_log format["debug remove: %1 of: %2", _configParent, _x];
									if ((_x == "ItemWaterbottle") || (_configParent == "ItemWaterbottle")) then {
										_waterLevel = floor((getNumber(configFile >> "CfgMagazines" >> _x >> "wateroz")) - 1);
										if (_x in _boiledWaterBottles) then {
											_boiled = true;
										};
									};
									_temp_removed_array set [count _temp_removed_array,_x];
								};
							};
						} count (magazines player);
					} foreach _selectedRecipeInput;

					//diag_log format["removed: %1 of: %2", _removed, _tobe_removed_total];

					// Only proceed if all parts were removed successfully
					if (_removed_total == _tobe_removed_total) then {
						_num_removed_weapons = 0;
						{
							_num_removed_weapons = _num_removed_weapons + ([player,_x] call BIS_fnc_invRemove);
						} count _inputWeapons;
						if (_num_removed_weapons == (count _inputWeapons)) then {
							if (_randomOutput == 1) then {
								if (!isNil "_outputWeapons" && {count _outputWeapons > 0}) then {
									_selectedWeapon = _outputWeapons call BIS_fnc_selectRandom;
									_outputWeapons = [_selectedWeapon];
								};
								if (!isNil "_selectedRecipeOutput" && {count _selectedRecipeOutput > 0}) then {
									_selectedMag = _selectedRecipeOutput call BIS_fnc_selectRandom;
									_selectedRecipeOutput = [_selectedMag];
								};
								// exit loop
								_craft_doLoop = false;
							};

							{
								if (_x in weapons player) then {
									_x call player_addDuplicateTool;
								} else {
									if (getNumber(configFile >> "CfgWeapons" >> _x >> "type") == 256) then {
										player addWeapon _x;
									} else {
										_x call player_addDuplicateTool;
									};
								};
							} count _outputWeapons;

							{
								_itemOut = _x select 0;
								_countOut = _x select 1;
								if (_itemOut == "ItemWaterbottleUnfilled") then {
									{
										if (_x in _plasticWaterBottles) then {
											_itemOut = "ItemPlasticWaterbottleUnfilled";
											if (_waterLevel > 0) then {
												if (_boiled) then {
													_itemOut = format["ItemPlasticWaterbottle%1ozBoiled",_waterLevel];
												} else {
													_itemOut = format["ItemPlasticWaterbottle%1oz",_waterLevel];
												};
											};
										} else {
											if (_waterLevel > 0) then {
												if (_boiled) then {
													_itemOut = format["ItemWaterbottle%1ozBoiled",_waterLevel];
												} else {
													_itemOut = format["ItemWaterbottle%1oz",_waterLevel];
												};
											};
										};
									} count _temp_removed_array;
								};

								// diag_log format["Checking for water level: %1", _waterLevel];
								for "_x" from 1 to _countOut do {
									player addMagazine _itemOut;
								};
								_textCreate = getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName");
								// Add crafted item
								format[localize "str_epoch_player_150",_textCreate,_countOut] call dayz_rollingMessages;
								// sleep here
								uiSleep 1;
							} foreach _selectedRecipeOutput;

							_tradeComplete = _tradeComplete + 1;
						};
					} else {
						// Refund parts since we failed
						{player addMagazine _x; } count _temp_removed_array;
						format[localize "STR_EPOCH_PLAYER_145",_removed_total,_tobe_removed_total] call dayz_rollingMessages;
					};
				} else {
					localize "str_epoch_player_64" call dayz_rollingMessages;
					_craft_doLoop = false;
				};
			} else {
				if (isClass (configFile >> "CfgMagazines" >> _missing)) then {
					_textMissing = getText(configFile >> "CfgMagazines" >> _missing >> "displayName");
				} else {
					if (isClass (configFile >> "CfgWeapons" >> _missing)) then {
						_textMissing = getText(configFile >> "CfgWeapons" >> _missing >> "displayName");
					} else {
						_textMissing = getText(configFile >> "CfgVehicles" >> _missing >> "displayName");
					};
				};
				format[localize "str_epoch_player_152",_missingQty, _textMissing,_tradeComplete] call dayz_rollingMessages;
				systemchat localize "STR_CRAFTING_NEEDED_ITEMS";

				if (count _selectedRecipeInput > 0) then {
					{
						_text = getText(configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
						systemchat format ["%2x %1",_text,(_x select 1)];
					} count _selectedRecipeInput;
				};
				if (count _inputWeapons > 0) then {
					{
						_text = getText(configFile >> "CfgWeapons" >> _x >> "displayName");
						systemchat format ["1x %1",_text];

					} count _inputWeapons;
				};
				_craft_doLoop = false;
			};
		} else {
			//Missing text shown in dze_requiredItemsCheck
			_craft_doLoop = false;
		};
	};
} else {
	localize "str_epoch_player_64" call dayz_rollingMessages;
};
dayz_actionInProgress = false;