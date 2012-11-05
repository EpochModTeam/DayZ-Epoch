private["_display","_ctrlBlood","_bloodVal","_ctrlFood","_ctrlThirst","_foodVal","_ctrlTemp","_tempVal","_array"];
disableSerialization;

_foodVal = 		1 - (dayz_hunger / SleepFood);
_thirstVal = 	1 - (dayz_thirst / SleepWater);
_tempVal 	= 	(dayz_temperatur / dayz_temperaturnormal);	//TeeChange
_combatVal =	1 - dayz_combat; // May change later to be a range of red/green to loosely indicate 'time left in combat'

if (uiNamespace getVariable ['DZ_displayUI', 0] == 1) exitWith {
	_array = [_foodVal,_thirstVal];
	_array
};

_display = uiNamespace getVariable 'DAYZ_GUI_display';

_ctrlBlood = 	_display displayCtrl 1300;
_ctrlBleed = 	_display displayCtrl 1303;
_bloodVal =		r_player_blood / r_player_bloodTotal;
_ctrlFood = 	_display displayCtrl 1301;
_ctrlThirst = 	_display displayCtrl 1302;
_ctrlTemp 	= 	_display displayCtrl 1306;					//TeeChange
_ctrlEar = 		_display displayCtrl 1304;
_ctrlEye = 		_display displayCtrl 1305;
_ctrlHumanity = _display displayCtrl 1207;
_ctrlCombat = _display displayCtrl 1307;
_ctrlFracture = 	_display displayCtrl 1203;

//Food/Water/Blood
_ctrlBlood ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_bloodVal))),(Dayz_GUI_G * _bloodVal),(Dayz_GUI_B * _bloodVal), 0.5];
_ctrlFood ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * (1-_foodVal))),(Dayz_GUI_G * _foodVal),(Dayz_GUI_B * _foodVal), 0.5];
_ctrlThirst ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_thirstVal))),(Dayz_GUI_G * _thirstVal),(Dayz_GUI_B * _thirstVal), 0.5];
_ctrlTemp ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * _tempVal)),(Dayz_GUI_G * _tempVal),(Dayz_GUI_B + (0.25 * (1/_tempVal))), 0.5];	//TeeChange Coulor should change into red if value is higher as normale temp and into blue if coulor is lower as normal temp
_ctrlCombat ctrlSetTextColor		[(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 0.5];

/*
_humanity = player getVariable["humanity",0];
_guiHumanity = 0;
if(_humanity != dayz_lastHumanity) then {
	if (_humanity > 0) then {
		_humanity = _humanity min 5000;
		_guiHumanity = (round((_humanity / 5000) * 5) + 5);
	} else {
		_humanity = _humanity max -20000;
		_guiHumanity = 5 - (round(-(_humanity / 20000) * 4));
	};
	dayz_lastHumanity = _humanity;
	dayz_guiHumanity = _guiHumanity;
	_humanityText = "\z\addons\dayz_code\gui\humanity_" + str(_guiHumanity) + "_ca.paa";
	_ctrlHumanity ctrlSetText _humanityText;
};
*/

_visualtext = "";
_visual = round((dayz_disVisual / 100) * 4) min 5;
if (_visual > 0) then {_visualtext = "\z\addons\dayz_code\gui\val_" + str(_visual) + "_ca.paa"};

_audibletext = "";
_audible = round((dayz_disAudial / 50) * 4) min 5;
if (_audible > 0) then {_audibletext = "\z\addons\dayz_code\gui\val_" + str(_audible) + "_ca.paa"};

_ctrlEye ctrlSetText _visualtext;
_ctrlEar ctrlSetText _audibletext;

if (_combatVal == 0) then {
	_ctrlCombat call player_guiControlFlash;
};

if (_bloodVal < 0.2) then {
	_ctrlBlood call player_guiControlFlash;
};

if (_thirstVal < 0.2) then {
	_ctrlThirst call player_guiControlFlash;
};

if (_foodVal < 0.2) then {
	_ctrlFood call player_guiControlFlash;
};

if (_tempVal < 0.833) then {	//TeeChange
	_ctrlTemp call player_guiControlFlash;
};

if (r_player_injured) then {
	_ctrlBleed call player_guiControlFlash;
};

if (!canStand player) then {
	if (!(ctrlShown _ctrlFracture)) then {
		r_fracture_legs = true;
		_ctrlFracture ctrlShow true;
	};
};

_array = [_foodVal,_thirstVal];
_array