private ["_array","_combatVal","_ctrlCombatBorder","_ctrlCombat","_uiNumber","_bloodText","_blood","_bloodType","_rhFactor","_thirstLvl","_foodLvl","_tempImg","_tempText","_visual","_audible","_id","_rID","_color","_string","_humanity","_size","_friendlies","_rfriendlies","_rfriendlyTo","_distance","_targetControl","_flash","_foodVal","_thirstVal","_tempVal","_display","_ctrlBloodOuter","_ctrlFoodBorder","_ctrlThirstBorder","_ctrlTempBorder","_ctrlBlood","_ctrlBloodType","_ctrlBleed","_bloodVal","_ctrlFood","_ctrlThirst","_ctrlTemp","_ctrlEar","_ctrlEye","_ctrlFracture","_ctrlMuteBackground","_ctrlMuteIcon","_thirst","_food","_temp","_bloodLvl","_tempLvl","_bloodTestdone","_humanityTarget"];
disableSerialization;

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

if (uiNamespace getVariable ['DZ_displayUI', 0] == 1) exitWith {
    _array = [_foodVal,_thirstVal];
    _array
};

_display = uiNamespace getVariable 'DAYZ_GUI_display';
if (isNil "_display") exitWith { [_foodVal,_thirstVal] }; // not ready

_ctrlBloodOuter = _display displayCtrl 1200;
_ctrlFoodBorder = _display displayCtrl 1201;
_ctrlThirstBorder = _display displayCtrl 1202;
_ctrlTempBorder = _display displayCtrl 1208;
//Border white
_ctrlBloodOuter ctrlSetTextColor [1,1,1,1];
_ctrlFoodBorder ctrlSetTextColor [1,1,1,1];
_ctrlThirstBorder ctrlSetTextColor [1,1,1,1];
_ctrlTempBorder ctrlSetTextColor [1,1,1,1];

if (DZE_VanillaUICombatIcon) then {
	_combatVal = if (player getVariable["combattimeout",0] >= diag_tickTime) then {0} else {1};
	_ctrlCombatBorder = _display displayCtrl 1909;
	_ctrlCombat = _display displayCtrl 1308;
	_ctrlCombatBG = _display displayCtrl 1209;
	_ctrlCombatBorder ctrlSetTextColor [1,1,1,1];
	_ctrlCombat ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 1];
    _ctrlCombatBorder ctrlSetText ("\z\addons\dayz_code\gui\status\status_combat_border_new_CA.paa");
    _ctrlCombat ctrlSetText ("\z\addons\dayz_code\gui\status\status_combat_inside_new_ca.paa");
    _ctrlCombatBG ctrlSetText ("\z\addons\dayz_code\gui\status\status_bg.paa");
};
_ctrlBlood = _display displayCtrl 1300;
_ctrlBloodType = _display displayCtrl 1307;
_ctrlBleed = _display displayCtrl 1303;
_bloodVal = r_player_blood / r_player_bloodTotal;
_ctrlFood = _display displayCtrl 1301;
_ctrlThirst = _display displayCtrl 1302;
_ctrlTemp = _display displayCtrl 1306;
_ctrlEar = _display displayCtrl 1304;
_ctrlEye = _display displayCtrl 1305;
_ctrlFracture = _display displayCtrl 1203;
_ctrlMuteBackground = _display displayCtrl 1904;
_ctrlMuteIcon = _display displayCtrl 1204;

if (!dayz_soundMuted) then {
	_ctrlMuteBackground ctrlShow false;
	_ctrlMuteIcon ctrlShow false;
};

//Food/Water/Blood
/*
NEW SYSTEM SHOULD BE: (EXAMPLE)
if (_bloodVal > 0.5) then { GREEN TO YELLOW } else { YELLOW TO RED};
Same with Food and Thirst
*/
_ctrlTemp ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_tempVal))), (Dayz_GUI_G * _tempVal), _tempVal, 1]; // Color ranges from iceblue (cold) to red (hot) // << Already Done :)


// OLD SYSTEM
_ctrlBlood ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_bloodVal))),(Dayz_GUI_G * _bloodVal),(Dayz_GUI_B * _bloodVal), 1];
_ctrlFood ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_foodVal))),(Dayz_GUI_G * _foodVal),(Dayz_GUI_B * _foodVal), 1];
_ctrlThirst ctrlSetTextColor [(Dayz_GUI_R + (0.3 * (1-_thirstVal))),(Dayz_GUI_G * _thirstVal),(Dayz_GUI_B * _thirstVal), 1];


/* //Debugging Stuff would be usefull
diag_log format["DEBUG: bloodlvl: %1 r_player_blood: %2 bloodval: %3",_bloodLvl, r_player_blood, _bloodVal];
diag_log format["DEBUG: thirstlvl: %1 dayz_thirst: %2 thirstval: %3",_thirstLvl, dayz_thirst, _thirstVal];
diag_log format["DEBUG: foodlvl: %1 dayz_hunger: %2 foodval: %3",_foodLvl, dayz_hunger, _foodVal];
diag_log format["DEBUG: templvl: %1 dayz_temperatur: %2 tempval: %3",_tempLvl, dayz_temperatur, _tempVal];
*/

_blood = "";
_thirst = "";
_food = "";
_temp = "";
_tempImg = 0;
_bloodLvl = 6 min (0 max (round((r_player_blood / 2) / 1000 + 0.49)));
_thirstLvl = round(_thirstVal / 0.25);
_foodLvl = round(_foodVal / 0.25);
_tempLvl = round(dayz_temperatur);

//  Blood Regen & BloodLoss:
switch true do {
    case (r_player_bloodpersec <= -50): { _uiNumber = -3 };                                     // -3
    case ((r_player_bloodpersec <= -25) and (r_player_bloodpersec > -50)): { _uiNumber = -2 };  // -2
    case ((r_player_bloodpersec < 0) and (r_player_bloodpersec > -25)): { _uiNumber = -1 };     // -1
    case ((r_player_bloodpersec > 5) and (r_player_bloodpersec < 25)): { _uiNumber = 1 };       //  1
    case ((r_player_bloodpersec >= 25) and (r_player_bloodpersec < 50)): { _uiNumber = 2 };     //  2
    case (r_player_bloodpersec >= 50): { _uiNumber = 3 };                                       //  3
    default { _uiNumber = 0 };
};

_bloodText = "\z\addons\dayz_code\gui\status\status_blood_border";

if (r_player_infected) then {
    switch true do {
        case (_uiNumber < 0): { _bloodText = _bloodText + "_down" + str(-_uiNumber) + "_sick_ca.paa" };
        case (_uiNumber > 0): { _bloodText = _bloodText + "_up" + str(_uiNumber) + "_sick_ca.paa" };
        default { _bloodText = _bloodText + "_sick_ca.paa" };
    };
} else {
    //if (r_player_Sepsis select 0) then {
    //  _bloodText = "\z\addons\dayz_code\gui\status\status_blood_border_sick_ca.paa"
    //} else {
        switch true do {
            case (_uiNumber < 0): { _bloodText = _bloodText + "_down" + str(-_uiNumber) + "_ca.paa" };
            case (_uiNumber > 0): { _bloodText = _bloodText + "_up" + str(_uiNumber) + "_ca.paa" };
            default { _bloodText = _bloodText + "_ca.paa" };
        };
    //};
};

_ctrlBloodOuter ctrlSetText _bloodText;

if (_bloodLvl <= 0) then {
    _blood = "\z\addons\dayz_code\gui\status\status_blood_inside_1_ca.paa";
} else {
    _blood = "\z\addons\dayz_code\gui\status\status_blood_inside_" + str(_bloodLvl) + "_ca.paa";
};


_bloodTestdone = player getVariable ["blood_testdone", false];
if (_bloodTestdone) then {
    _bloodType = player getVariable ["blood_type", "O"];
    _rhFactor = if (player getVariable ["rh_factor", false]) then { "pos" } else { "neg" };
    _ctrlBloodType ctrlSetText ("\z\addons\dayz_code\gui\status\status_blood_type_"+_bloodType+"_"+_rhFactor+"_ca.paa");
};

if (_thirstLvl < 0) then { _thirstLvl = 0 };
_thirst = "\z\addons\dayz_code\gui\status\status_thirst_inside_" + str(_thirstLvl) + "_ca.paa";

if (_foodLvl < 0) then { _foodLvl = 0 };
_food = "\z\addons\dayz_code\gui\status\status_food_inside_" + str(_foodLvl) + "_ca.paa";

switch true do {
    case (_tempLvl >= 36): { _tempImg = 4 };
    case (_tempLvl > 33 and _tempLvl < 36): { _tempImg = 3 };
    case (_tempLvl >= 30 and _tempLvl <= 33): { _tempImg = 2 };
    case (_tempLvl > 28 and _tempLvl < 30): { _tempImg = 1 };
    default { _tempImg = 0 };
};
_temp = "\z\addons\dayz_code\gui\status\status_temp_" + str(_tempImg) + "_ca.paa";

_tempText = "\z\addons\dayz_code\gui\status\status_temp_border";
switch true do {
    case (r_player_temp_factor <= r_player_temp_min_factor): { _tempText = _tempText + "_down3_ca.paa" };                               
    case ((r_player_temp_factor <= r_player_temp_min_factor*0.50) and (r_player_temp_factor > r_player_temp_min_factor)): {  _tempText = _tempText + "_down2_ca.paa" }; 
    case ((r_player_temp_factor < r_player_temp_min_factor*0.2) and (r_player_temp_factor > r_player_temp_min_factor*0.50)): {  _tempText = _tempText + "_down1_ca.paa" };    
    case ((r_player_temp_factor > r_player_temp_max_factor*0.2) and (r_player_temp_factor < r_player_temp_max_factor*0.50)): {  _tempText = _tempText + "_up1_ca.paa" };      
    case ((r_player_temp_factor >= r_player_temp_max_factor*0.50) and (r_player_temp_factor < r_player_temp_max_factor)): {  _tempText = _tempText + "_up2_ca.paa" };     
    case (r_player_temp_factor >= r_player_temp_max_factor): {  _tempText = _tempText + "_up3_ca.paa" };
    default { _tempText = "\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa" };
};
_ctrlTempBorder ctrlSetText _tempText;

_ctrlBlood ctrlSetText _blood;
_ctrlThirst ctrlSetText _thirst;
_ctrlFood ctrlSetText _food;
_ctrlTemp ctrlSetText _temp;

// Visual:
_visual = (dayz_disVisual / 185) min 1;
if (_visual < 0.2) then {_visual = 0.2;};
_ctrlEye  ctrlSetTextColor [1, 1, 1, _visual];

// Audible
_audible = (dayz_disAudial / 40) min 1;
if (_audible < 0.2) then {_audible = 0.2;};
_ctrlEar ctrlSetTextColor [1, 1, 1, _audible];

// Fracture/Broken Legs
if !(canStand player) then { //&& !(ctrlShown _ctrlFracture) makes icon flash non-stop until leg is fixed
    _ctrlFracture ctrlShow true;
}
else {
    _ctrlFracture ctrlShow false;
};

//  Flashing
if (DZE_VanillaUICombatIcon) then {
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
}
else {
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

		if ((_rID in _friendlies) && (_id in _rfriendlies)) then {

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

_array = [_foodVal,_thirstVal];
_array
