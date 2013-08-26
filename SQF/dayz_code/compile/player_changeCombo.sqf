/*
	Change UI image 
		Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_result","_control","_directon","_name","_PubVar","_display"];

_control = _this select 0;
_directon = _this select 1;
_name = _this select 2;

_pubVar = 0;

switch (_name) do {
						
	case "top": {
		_pubVar = DZE_topCombo;
	};
	case "mid": {
		_pubVar = DZE_midCombo;
	};
	case "bot": {
		_pubVar = DZE_botCombo;
	};
};

if (_directon == 1) then {

	if(_PubVar == 9) then {
		_result = 0;
	} else {
		_result = _pubVar + 1;
	};
	
} else {

	if(_PubVar == 0) then {
		_result = 9;
	} else {
		_result = _pubVar - 1;
	};

};

_display = findDisplay 41144;
_control = _display displayCtrl _control;
_control ctrlSetText format["\z\addons\dayz_epoch\ui\%1_%2.paa",_name,_result];

[player,"combo_tick",0,false] call dayz_zombieSpeak;

switch (_name) do {
						
	case "top": {
		DZE_topCombo = _result;
	};
	case "mid": {
		DZE_midCombo = _result;
	};
	case "bot": {
		DZE_botCombo = _result;
	};
};

DZE_Lock_Door = format["%1%2%3",DZE_topCombo,DZE_midCombo,DZE_botCombo];