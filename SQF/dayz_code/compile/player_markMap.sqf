private ["_text","_textBox"];

disableSerialization;
_textBox = _this displayCtrl 101;
_text = ctrlText _textBox;

if (alive player) then {
	_text = if (_text == "") then {name player} else {format["%1: %2",name player,_text]};
	_textBox ctrlSetText _text;
};