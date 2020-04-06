private ["_item","_onLadder","_hasmeditem","_config","_text","_display"];

_item = _this;
call gear_ui_init;
closeDialog 0;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {localize "str_player_21" call dayz_rollingMessages;};

_hasmeditem = _item in magazines player;

_config = configFile >> "CfgMagazines" >> _item;
_text = getText (_config >> "displayName");

if (!_hasmeditem) exitWith {format[localize "str_player_31",_text,localize "str_player_31_use"] call dayz_rollingMessages;};

call {
	if (_item == "ItemBandage") exitWith {[0,0,0,[player,"ItemBandage"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";};
	if (_item == "ItemMorphine") exitWith {[0,0,0,[player,"ItemMorphine"]] execVM "\z\addons\dayz_code\medical\brokeBones.sqf";};
	if (_item == "ItemPainkiller") exitWith {[player,"ItemPainkiller"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller6") exitWith {[player,"ItemPainkiller6"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller5") exitWith {[player,"ItemPainkiller5"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller4") exitWith {[player,"ItemPainkiller4"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller3") exitWith {[player,"ItemPainkiller3"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller2") exitWith {[player,"ItemPainkiller2"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemPainkiller1") exitWith {[player,"ItemPainkiller1"] execVM "\z\addons\dayz_code\medical\painkiller.sqf";};
	if (_item == "ItemBloodbag") exitWith {[player,"ItemBloodbag"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "ItemAntibacterialWipe") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\wipes.sqf";};
	if (_item == "ItemHeatPack") exitWith {player removeMagazine "ItemHeatPack"; r_player_warming_heatpack = [true, diag_tickTime]; localize "str_player_27" call dayz_rollingMessages;};  //dayz_temperatur = (dayz_temperatur + 5) min dayz_temperaturmax;
	if (_item == "equip_woodensplint") exitWith {[0,0,0,[player,"equip_woodensplint"]] execVM "\z\addons\dayz_code\medical\brokeBones.sqf";};
	if (_item == "ItemSepsisBandage") exitWith {[0,0,0,[player,"ItemSepsisBandage"]] execVM "\z\addons\dayz_code\medical\bandage.sqf";};
	if (_item == "ItemAntibiotic") exitWith {[player,"ItemAntibiotic"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};	
	if (_item == "ItemAntibiotic1") exitWith {[player,"ItemAntibiotic1"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic2") exitWith {[player,"ItemAntibiotic2"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic3") exitWith {[player,"ItemAntibiotic3"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic3") exitWith {[player,"ItemAntibiotic3"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic4") exitWith {[player,"ItemAntibiotic4"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic5") exitWith {[player,"ItemAntibiotic5"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "ItemAntibiotic6") exitWith {[player,"ItemAntibiotic6"] execVM "\z\addons\dayz_code\medical\antibiotics.sqf";};
	if (_item == "wholeBloodBagANEG") exitWith {[player,"wholeBloodBagANEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagAPOS") exitWith {[player,"wholeBloodBagAPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagBNEG") exitWith {[player,"wholeBloodBagBNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagBPOS") exitWith {[player,"wholeBloodBagBPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagABNEG") exitWith {[player,"wholeBloodBagABNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagABNEG") exitWith {[player,"wholeBloodBagABNEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagABPOS") exitWith {[player,"wholeBloodBagABPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagONEG") exitWith {[player,"wholeBloodBagONEG"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "wholeBloodBagOPOS") exitWith {[player,"wholeBloodBagOPOS"] execVM "\z\addons\dayz_code\medical\selfbloodbag.sqf";};
	if (_item == "bloodTester") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\blood_test.sqf";};
	if (_item == "transfusionKit") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\fillBloodBag.sqf";};
	if (_item == "emptyBloodBag") exitWith {[0,0,0,[player]] execVM "\z\addons\dayz_code\medical\fillBloodBag.sqf";};
};

if (vehicle player != player) then {
	_display = findDisplay 106;
	_display closeDisplay 0;
};
