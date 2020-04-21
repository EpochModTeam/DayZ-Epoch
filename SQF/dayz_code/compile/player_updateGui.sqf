private ["_combatVal","_ctrlCombatBorder","_ctrlCombat","_uiNumber","_bloodText","_blood","_bloodType","_rhFactor","_thirstLvl","_foodLvl","_tempImg","_tempText","_visual","_audible","_id","_rID","_color","_string","_humanity","_size","_friendlies","_rfriendlies","_rfriendlyTo","_distance","_targetControl","_flash","_foodVal","_thirstVal","_tempVal","_display","_ctrlBloodOuter","_ctrlFoodBorder","_ctrlThirstBorder","_ctrlTempBorder","_ctrlBlood","_ctrlBloodType","_ctrlBleed","_bloodVal","_ctrlFood","_ctrlThirst","_ctrlTemp","_ctrlEar","_ctrlEye","_ctrlFracture","_ctrlMuteBackground","_ctrlMuteIcon","_thirst","_food","_temp","_bloodLvl","_tempLvl","_bloodTestdone","_humanityTarget"];
disableSerialization;

_display = uiNamespace getVariable 'DAYZ_GUI_display';
if (isNil "_display") exitWith {}; // not ready

_flash = {
    if (ctrlShown _this) then {
        _this ctrlShow false;
    } else {
        _this ctrlShow true;
    };
};

_foodVal = 1 - (dayz_hunger / SleepFood);
_thirstVal = 1 - (dayz_thirst / SleepWater);
_tempVal = 1 - ((dayz_temperatur - dayz_temperaturmin)/(dayz_temperaturmax - dayz_temperaturmin));  // Normalise to [0,1]
_bloodVal = r_player_blood / r_player_bloodTotal;
_combatVal = if (player getVariable["combattimeout",0] >= diag_tickTime) then {0} else {1};

if (DZE_UI in [1,3,4]) then { // White borders
	_ctrlBloodOuter = _display displayCtrl 1200;
	_ctrlFoodBorder = _display displayCtrl 1201;
	_ctrlThirstBorder = _display displayCtrl 1202;
	_ctrlTempBorder = _display displayCtrl 1208;
	_ctrlBloodOuter ctrlSetTextColor [1,1,1,1];
	_ctrlFoodBorder ctrlSetTextColor [1,1,1,1];
	_ctrlThirstBorder ctrlSetTextColor [1,1,1,1];
	_ctrlTempBorder ctrlSetTextColor [1,1,1,1];
	if (DZE_UI in [3,4]) then {
		_ctrlCombatBorder = _display displayCtrl 1207;
		_ctrlCombatBorder ctrlSetTextColor [1,1,1,1];
	};
};

if (DZE_UI == 1) then { // Vanilla
	if (DZE_VanillaUICombatIcon) then {
		_ctrlCombatBorder = _display displayCtrl 1207;
		_ctrlCombat = _display displayCtrl 1307;
		_ctrlCombatBG = _display displayCtrl 1209;
		_ctrlCombatBorder ctrlSetTextColor [1,1,1,1];
		_ctrlCombat ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 1];
		_ctrlCombatBorder ctrlSetText ("\z\addons\dayz_code\gui\status\status_combat_border_new_CA.paa");
		_ctrlCombat ctrlSetText ("\z\addons\dayz_code\gui\status\status_combat_inside_new_ca.paa");
		_ctrlCombatBG ctrlSetText ("\z\addons\dayz_code\gui\status\status_bg.paa");
	};
} else {
	_ctrlCombat = _display displayCtrl 1307;
	_ctrlCombat ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 0.5];
};

if (DZE_UI in [1,3]) then {
	_ctrlEar = _display displayCtrl 1304;
	_ctrlEye = _display displayCtrl 1305;
} else {
	_ctrlEar = _display displayCtrl 1308;
	_ctrlEye = _display displayCtrl 1309;
};

_ctrlBlood = _display displayCtrl 1300;
_ctrlBleed = _display displayCtrl 1303;
_ctrlFood = _display displayCtrl 1301;
_ctrlThirst = _display displayCtrl 1302;
_ctrlTemp = _display displayCtrl 1306;
_ctrlFracture = _display displayCtrl 1203;
_ctrlMuteBackground = _display displayCtrl 1904;
_ctrlMuteIcon = _display displayCtrl 1204;

if (dayz_soundMuted) then {
	_ctrlMuteBackground ctrlShow true;
	_ctrlMuteIcon ctrlShow true;
} else {
	_ctrlMuteBackground ctrlShow false;
	_ctrlMuteIcon ctrlShow false;
};

//Food/Water/Blood
if (DZE_UI == 3) then { // Dark
	_ctrlBlood ctrlSetTextColor 	[(1 - _bloodVal),(1 - _bloodVal),(1 - _bloodVal), 0.5];
	_ctrlFood ctrlSetTextColor 		[ _foodVal,_foodVal,_foodVal, 0.5];
	_ctrlThirst ctrlSetTextColor 	[ _thirstVal, _thirstVal, _thirstVal, 0.5];
	_ctrlTemp ctrlSetTextColor 		[(1 - _tempVal),(1 - _tempVal), (1 - _tempVal), 0.5];
	_ctrlCombat ctrlSetTextColor	[ _combatVal, _combatVal, _combatVal, 0.5]; 
} else {
	_ctrlTemp ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_tempVal))), (Dayz_GUI_G * _tempVal), _tempVal, 1]; // Color ranges from iceblue (cold) to red (hot) // << Already Done :)
	_ctrlBlood ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_bloodVal))),(Dayz_GUI_G * _bloodVal),(Dayz_GUI_B * _bloodVal), 1];
	_ctrlFood ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_foodVal))),(Dayz_GUI_G * _foodVal),(Dayz_GUI_B * _foodVal), 1];
	_ctrlThirst ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_thirstVal))),(Dayz_GUI_G * _thirstVal),(Dayz_GUI_B * _thirstVal), 1];
};

_blood = "";
_thirst = "";
_food = "";
_temp = "";
_visualtext = "";
_audibletext = "";
_bloodLvl = 6 min (0 max (round((r_player_blood / 2) / 1000 + 0.49)));
_thirstLvl = round(_thirstVal / 0.25);
_foodLvl = round(_foodVal / 0.25);
_tempLvl = round(dayz_temperatur);

/* //Debugging Stuff would be usefull
diag_log format["DEBUG: bloodlvl: %1 r_player_blood: %2 bloodval: %3",_bloodLvl, r_player_blood, _bloodVal];
diag_log format["DEBUG: thirstlvl: %1 dayz_thirst: %2 thirstval: %3",_thirstLvl, dayz_thirst, _thirstVal];
diag_log format["DEBUG: foodlvl: %1 dayz_hunger: %2 foodval: %3",_foodLvl, dayz_hunger, _foodVal];
diag_log format["DEBUG: templvl: %1 dayz_temperatur: %2 tempval: %3",_tempLvl, dayz_temperatur, _tempVal];
*/

if (DZE_UI == 1) then { // Vanilla
	//  Blood Regen & BloodLoss:
	_uiNumber = call {
		if (r_player_bloodpersec <= -50) exitWith {-3};
		if ((r_player_bloodpersec <= -25) && {r_player_bloodpersec > -50}) exitWith {-2};
		if ((r_player_bloodpersec < 0) && {r_player_bloodpersec > -25}) exitWith {-1};
		if ((r_player_bloodpersec > 5) && {r_player_bloodpersec < 25}) exitWith {1};
		if ((r_player_bloodpersec >= 25) && {r_player_bloodpersec < 50}) exitWith {2};
		if (r_player_bloodpersec >= 50) exitWith {3};
		0;
	};

	_bloodText = "\z\addons\dayz_code\gui\status\status_blood_border";

	if (r_player_infected) then {
		_bloodText = call {
			if (_uiNumber < 0) exitWith {_bloodText + "_down" + str(-_uiNumber) + "_sick_ca.paa"};
			if (_uiNumber > 0) exitWith {_bloodText + "_up" + str(_uiNumber) + "_sick_ca.paa"};
			_bloodText + "_sick_ca.paa";
		};
	} else {
		_bloodText = call {
			if (_uiNumber < 0) exitWith {_bloodText + "_down" + str(-_uiNumber) + "_ca.paa"};
			if (_uiNumber > 0) exitWith {_bloodText + "_up" + str(_uiNumber) + "_ca.paa"};
			_bloodText + "_ca.paa";
		};
	};

	_ctrlBloodOuter ctrlSetText _bloodText;
	
	_tempText = "\z\addons\dayz_code\gui\status\status_temp_border";
	
	_tempText = call {
		if (r_player_temp_factor <= r_player_temp_min_factor) exitWith {_tempText + "_down3_ca.paa"};
		if ((r_player_temp_factor <= r_player_temp_min_factor*0.50) && {r_player_temp_factor > r_player_temp_min_factor}) exitWith {_tempText + "_down2_ca.paa"};
		if ((r_player_temp_factor < r_player_temp_min_factor*0.2) && {r_player_temp_factor > r_player_temp_min_factor*0.50}) exitWith {_tempText + "_down1_ca.paa"};
		if ((r_player_temp_factor > r_player_temp_max_factor*0.2) && {r_player_temp_factor < r_player_temp_max_factor*0.50}) exitWith {_tempText + "_up1_ca.paa"};
		if ((r_player_temp_factor >= r_player_temp_max_factor*0.50) && {r_player_temp_factor < r_player_temp_max_factor}) exitWith {_tempText + "_up2_ca.paa"};
		if (r_player_temp_factor >= r_player_temp_max_factor) exitWith {_tempText + "_up3_ca.paa"};
		"\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa";
	};

	_ctrlTempBorder ctrlSetText _tempText;
	
	_bloodTestdone = player getVariable ["blood_testdone", false];
	if (_bloodTestdone) then {
		_bloodType = player getVariable ["blood_type", "O"];
		_rhFactor = if (player getVariable ["rh_factor", false]) then { "pos" } else { "neg" };
		_ctrlBloodType = _display displayCtrl 1310;
		_ctrlBloodType ctrlSetText ("\z\addons\dayz_code\gui\status\status_blood_type_"+_bloodType+"_"+_rhFactor+"_ca.paa");
	};
};

_path = if (DZE_UI == 1) then {"\z\addons\dayz_code\gui\status\"} else {"\z\addons\dayz_code\gui\status_epoch\"};

if (_bloodLvl <= 0) then {
	_blood = _path + "status_blood_inside_1_ca.paa";
} else {
	_blood = _path + "status_blood_inside_" + str(_bloodLvl) + "_ca.paa";
};
_ctrlBlood ctrlSetText _blood;

if (_thirstLvl < 0) then { _thirstLvl = 0 };
_thirst = _path + "status_thirst_inside_" + str(_thirstLvl) + "_ca.paa";
_ctrlThirst ctrlSetText _thirst;

if (_foodLvl < 0) then { _foodLvl = 0 };
_food = _path + "status_food_inside_" + str(_foodLvl) + "_ca.paa";
_ctrlFood ctrlSetText _food;

_tempImg = call {
	if (_tempLvl >= 36) exitWith {4};
	if (_tempLvl > 33 && {_tempLvl < 36}) exitWith {3};
	if (_tempLvl >= 30 && {_tempLvl <= 33}) exitWith {2};
	if (_tempLvl > 28 && {_tempLvl < 30}) exitWith {1};
	0;
};
_temp = _path + "status_temp_" + str(_tempImg) + "_ca.paa";
_ctrlTemp ctrlSetText _temp;

if (DZE_UI in [1,3]) then {
	_visual = (dayz_disVisual / 185) min 1;
	if (_visual < 0.2) then {_visual = 0.2;};
	_ctrlEye  ctrlSetTextColor [1, 1, 1, _visual];

	_audible = (dayz_disAudial / 40) min 1;
	if (_audible < 0.2) then {_audible = 0.2;};
	_ctrlEar ctrlSetTextColor [1, 1, 1, _audible];
} else {
	_visual = (round((dayz_disVisual / 100) * 4)) min 5;
	if (_visual > 0) then {_visualtext = "\z\addons\dayz_code\gui\status_epoch\val_" + str(_visual) + "_ca.paa"};
	_ctrlEye ctrlSetText _visualtext;

	_audible = (round((dayz_disAudial / 50) * 4)) min 5;
	if (_audible > 0) then {_audibletext = "\z\addons\dayz_code\gui\status_epoch\val_" + str(_audible) + "_ca.paa"};
	_ctrlEar ctrlSetText _audibletext;
};

// Fracture/Broken Legs
if !(canStand player) then { //&& !(ctrlShown _ctrlFracture) makes icon flash non-stop until leg is fixed
    _ctrlFracture ctrlShow true;
} else {
    _ctrlFracture ctrlShow false;
};

//  Flashing
if ((DZE_UI == 1 && DZE_VanillaUICombatIcon) || {!(DZE_UI == 1)}) then {
	if (_combatVal == 0) then {
		_ctrlCombat call _flash;
	} else {
		if (!ctrlShown _ctrlCombat) then {
			_ctrlCombat ctrlShow true;
		};
	};
};

if (_bloodVal < 0.2) then {
    _ctrlBlood call _flash;
} else {
    if (!ctrlShown _ctrlBlood) then {
        _ctrlBlood ctrlShow true;
    };
};

if (_thirstVal < 0.2) then {
    _ctrlThirst call _flash;
} else {
    if (!ctrlShown _ctrlThirst) then {
        _ctrlThirst ctrlShow true;
    };
};

if (_foodVal < 0.2) then {
    _ctrlFood call _flash;
} else {
    if (!ctrlShown _ctrlFood) then {
        _ctrlFood ctrlShow true;
    };
};

if (_tempVal > 0.8) then {
    _ctrlTemp call _flash;
} else {
    if (!ctrlShown _ctrlTemp) then {
        _ctrlTemp ctrlShow true;
    };
};

if (r_player_injured) then {
    _ctrlBleed call _flash;
} else {
    _ctrlBleed ctrlShow false;
};

/*
Opt-in tag system with friend tagging
*/
_string = "";
_humanityTarget = cursorTarget;
if (!isNull _humanityTarget && {isPlayer _humanityTarget} && {alive _humanityTarget}) then {

	_distance = player distance _humanityTarget;

	if (_distance < DZE_HumanityTargetDistance) then {
		
		_size = (1-(floor(_distance/5)*0.1)) max 0.1;

		// Display name if player opt-in or if friend
		_friendlies = player getVariable ["friendlies", []];
		if (DZE_permanentPlot) then {
			_id = dayz_playerUID;
			_rID = getPlayerUID _humanityTarget;
		} else {
			_id = dayz_characterID;
			_rID = _humanityTarget getVariable ["CharacterID","0"];
		};
		_rfriendlies = _humanityTarget getVariable ["friendlies", []];
		_rfriendlyTo = _humanityTarget getVariable ["friendlyTo", []];

		if ((_rID in _friendlies) && {_id in _rfriendlies}) then {

			if !(_id in _rfriendlyTo) then {
				// diag_log format["IS FRIENDLY: %1", _player];
				_rfriendlyTo set [count _rfriendlyTo, _id];
				_humanityTarget setVariable ["friendlyTo", _rfriendlyTo, true];
			};
	
			// <br /><t %2 align='center' size='0.7'>Humanity: %3</t>

			_color = "color='#339933'";
			_string = format["<t %2 align='center' size='%3'>%1</t>",(name _humanityTarget),_color,_size];
		
		} else {

			// Humanity checks
			_humanity = _humanityTarget getVariable ["humanity",0];

			_color = "color='#ffffff'";
			if(_humanity < -5000) then {
				_color = "color='#ff0000'";
			} else {
				if(_humanity > 5000) then {
					_color = "color='#3333ff'";
				};
			};
			if((_humanityTarget getVariable ["DZE_display_name", false]) || (DZE_ForceNameTagsInTrader && isInTraderCity)) then {
				_string = format["<t %2 align='center' size='%3'>%1</t>",(name _humanityTarget),_color,_size];
			};
		};
	};
};

// update gui if changed
if (dayz_humanitytarget != _string) then {
	_targetControl = _display displayCtrl 1199;
	_targetControl ctrlSetStructuredText (parseText _string);
	dayz_humanitytarget = _string;
};
