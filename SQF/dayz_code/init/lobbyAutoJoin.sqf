/*
* Auto join script by icomrade for ArmA 2 DayZ Epoch
* Disable auto join in your mission's description.ext using defValueParam1 = 31;
* Must be executed from RscDisplayMultiplayerSetup onLoad
*/
private ["_timer","_dialog","_time","_OKButton","_infoText","_roleSelect","_timerStart","_paramDisplay","_paramCtrl","_valueText","_test","_paramButton"];
disableSerialization;

_dialog = ((_this select 0) select 0);
_OKButton = _dialog displayCtrl 1;
_OKButton ctrlEnable False;

waitUntil {ctrlShown (_dialog displayCtrl 109)};
disableUserInput True;

ctrlActivate (_dialog displayCtrl 128);
_paramDisplay = findDisplay 146;
_paramCtrl = _paramDisplay displayCtrl 102;
_valueText = _paramCtrl lbText 1;
(findDisplay 146) CloseDisplay 2;
_test = count (toArray _valueText);
disableUserInput false;
_OKButton ctrlEnable True;

_paramButton = _dialog displayCtrl 128;
_paramButton ctrlShow false;

if (_test > 3 || _test < 1) exitWith {};

_time = diag_tickTime;
_infoText = _dialog displayCtrl 300;
_roleSelect = _dialog displayCtrl 109;
_roleSelect ctrlEnable False;
_infoText ctrlShow true;
_timerStart = parseNumber _valueText;

while {(diag_tickTime - _time) <= _timerStart} do {
	_roleSelect ctrlEnable False;
	_timer = _timerStart - (diag_tickTime - _time);
	_infoText ctrlSetText format[localize "str_autojoin_warning", (round _timer)];
	_infoText ctrlSetBackgroundColor [0,0,0,0.5];
	_infoText ctrlSetTextColor [0.75,0.1,0.1,1];
	uiSleep 1;
};
_infoText ctrlShow false;
_infoText ctrlSetBackgroundColor [0,0,0,0];
_infoText ctrlSetTextColor [0,0,0,0];
ctrlActivate _OKButton;