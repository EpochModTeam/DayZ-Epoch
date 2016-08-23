

private ["_flash","_display","_ctrlBlood","_ctrlBleed","_bloodVal","_humanityName","_ctrlFood","_ctrlThirst","_thirstVal","_foodVal","_ctrlTemp","_tempVal","_combatVal","_array","_ctrlEar","_ctrlEye","_ctrlCombat","_ctrlFracture","_visualText","_visual","_audibleText","_audible","_blood","_thirstLvl","_foodLvl","_tempImg","_thirst","_food","_temp","_bloodLvl","_tempLvl","_color","_string","_humanity","_size","_friendlies","_id","_rID","_rfriendlies","_rfriendlyTo","_distance","_targetControl"];

_flash = {
    if (ctrlShown _this) then {
        _this ctrlShow false;
    } else {
        _this ctrlShow true;
    };
};

disableSerialization;

_foodVal = 		1 - (dayz_hunger / SleepFood);
_thirstVal = 	1 - (dayz_thirst / SleepWater);
_tempVal 	= 	1 - ((dayz_temperatur - dayz_temperaturmin)/(dayz_temperaturmax - dayz_temperaturmin));	// Normalise to [0,1]
_combatVal = if (player getVariable["combattimeout",0] >= diag_tickTime) then {0} else {1};

if (uiNamespace getVariable ["DZ_displayUI", 0] == 1) exitWith {
	_array = [_foodVal,_thirstVal];
	_array
};

_display = uiNamespace getVariable 'DAYZ_GUI_display';
if (isNil "_display") exitWith { [_foodVal,_thirstVal] }; // not ready

_ctrlBlood = 	_display displayCtrl 1300;
_ctrlBleed = 	_display displayCtrl 1303;
_bloodVal =		r_player_blood / r_player_bloodTotal;
_ctrlFood = 	_display displayCtrl 1301;
_ctrlThirst = 	_display displayCtrl 1302;
_ctrlTemp 	= 	_display displayCtrl 1306;					//TeeChange
_ctrlEar = 		_display displayCtrl 1308;
_ctrlEye = 		_display displayCtrl 1309;
//_ctrlHumanity = _display displayCtrl 1207;
_ctrlCombat = _display displayCtrl 1307;
_ctrlFracture = 	_display displayCtrl 1203;
_ctrlMuteBackground = _display displayCtrl 1904;
_ctrlMuteIcon = _display displayCtrl 1204;

if (!dayz_soundMuted) then {
	_ctrlMuteBackground ctrlShow false;
	_ctrlMuteIcon ctrlShow false;
};

//Food/Water/Blood
_ctrlBlood ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_bloodVal))),(Dayz_GUI_G * _bloodVal),(Dayz_GUI_B * _bloodVal), 0.5];
_ctrlFood ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * (1-_foodVal))),(Dayz_GUI_G * _foodVal),(Dayz_GUI_B * _foodVal), 0.5];
_ctrlThirst ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_thirstVal))),(Dayz_GUI_G * _thirstVal),(Dayz_GUI_B * _thirstVal), 0.5];
_ctrlTemp ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * (1-_tempVal))), (Dayz_GUI_G * _tempVal), _tempVal, 0.5];	// Color ranges from iceblue (cold) to red (hot)
_ctrlCombat ctrlSetTextColor		[(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 0.5];

/*
	Blood: round((r_player_blood / 2) / 1000) = _bloodLvl (6 = full, 1 = empty)
	Thirst: round(_thirstVal / 0.25) = _thirstLvl (4 = full, 0 = empty)
	Hunger: round(_foodVal / 0.25) = _foodLvl (4 = full, 0 = empty)
	Temp: round(dayz_temperatur) = tempLvl (>= 36 = full <= 28 = empty)
*/

_blood = "";
_thirst = "";
_food = "";
_temp = "";
_tempImg = 0;
_bloodLvl = round((r_player_blood / 2) / 1000);
_thirstLvl = round(_thirstVal / 0.25);
_foodLvl = round(_foodVal / 0.25);
_tempLvl = round(dayz_temperatur);

/*
diag_log format["DEBUG: bloodlvl: %1 r_player_blood: %2 bloodval: %3",_bloodLvl, r_player_blood, _bloodVal];
diag_log format["DEBUG: thirstlvl: %1 dayz_thirst: %2 thirstval: %3",_thirstLvl, dayz_thirst, _thirstVal];
diag_log format["DEBUG: foodlvl: %1 dayz_hunger: %2 foodval: %3",_foodLvl, dayz_hunger, _foodVal];
diag_log format["DEBUG: templvl: %1 dayz_temperatur: %2 tempval: %3",_tempLvl, dayz_temperatur, _tempVal];
*/

if (_bloodLvl <= 0) then { 
	_blood = "\z\addons\dayz_code\gui\status_epoch\status_blood_inside_1_ca.paa";
} else {
	_blood = "\z\addons\dayz_code\gui\status_epoch\status_blood_inside_" + str(_bloodLvl) + "_ca.paa";
};

if (_thirstLvl < 0) then { _thirstLvl = 0 };
_thirst = "\z\addons\dayz_code\gui\status_epoch\status_thirst_inside_" + str(_thirstLvl) + "_ca.paa";

if (_foodLvl < 0) then { _foodLvl = 0 };
_food = "\z\addons\dayz_code\gui\status_epoch\status_food_inside_" + str(_foodLvl) + "_ca.paa";

switch true do {
    case (_tempLvl >= 36): { _tempImg = 4 };
    case (_tempLvl > 33 and _tempLvl < 36): { _tempImg = 3 };
    case (_tempLvl >= 30 and _tempLvl <= 33): { _tempImg = 2 };
    case (_tempLvl > 28 and _tempLvl < 30): { _tempImg = 1 };
    default { _tempImg = 0 };
};

_temp = "\z\addons\dayz_code\gui\status_epoch\status_temp_" + str(_tempImg) + "_ca.paa";

_ctrlBlood ctrlSetText _blood;
_ctrlThirst ctrlSetText _thirst;
_ctrlFood ctrlSetText _food;
_ctrlTemp ctrlSetText _temp;

// Visual:
_visualtext = "";
_visual = (round((dayz_disVisual / 100) * 4)) min 5;
if (_visual > 0) then {_visualtext = "\z\addons\dayz_code\gui\status\val_" + str(_visual) + "_ca.paa"};
_ctrlEye ctrlSetText _visualtext;

// Audible
_audibletext = "";
_audible = (round((dayz_disAudial / 50) * 4)) min 5;
if (_audible > 0) then {_audibletext = "\z\addons\dayz_code\gui\status\val_" + str(_audible) + "_ca.paa"};
_ctrlEar ctrlSetText _audibletext;

// Fracture/Broken Legs
if !(canStand player) then { //&& !(ctrlShown _ctrlFracture) makes icon flash non-stop until leg is fixed
	_ctrlFracture ctrlShow true;
}
else {
    _ctrlFracture ctrlShow false;
};

//  Flashing
if (_combatVal == 0) then {
	_ctrlCombat call _flash;
} else {
	if (!ctrlShown _ctrlCombat) then {
		_ctrlCombat ctrlShow true;
	};
};

if (_bloodVal < 0.4) then {
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

if (_tempVal > 0.8) then {	//TeeChange
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
