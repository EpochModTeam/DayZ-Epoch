/*
	Function name: fnc_localizeMessage
	This function localizes and formats messages that are sent remotely to the client. Used in conjunction with fnc_remote_message.
	If a user wants a string to be localized then STR_CL_ should be placed in the string name in stringtable.xml. STR_CL_MYSERVERSIDESCRIPT_ACTION.
	The message can also be sent as an array or multi-dimensional array with arguments. Example: _message = ["STR_CL_Localized_String", param1, param2];
*/

_type = _this select 0;
_message = _this select 1;
if (typeName _message == "TEXT") exitWith {_message};
_multiArray = ["private","dynamic_text","ai_killfeed","hintWithImage","hintNoImage"]; // These messages can be multi-dimensional arrays

if (_type in _multiArray) then {
	{
		_index = _forEachIndex;
		if (typeName _x == "ARRAY") then {
			{
				if (typeName _x == "STRING") then {
					if (["STR_",_x] call fnc_inString) then {
						(_message select _index) set [_forEachIndex, localize _x];
					};
				};
			} forEach _x;
			_message set [_index, format _x];
		} else {
			if (["STR_",_x] call fnc_inString) then {
				_message set [_index, localize _x];
			};
		};
	} forEach _message;
} else {
	if (typeName _message == "ARRAY") then {
		if (["STR_",(_message select 0)] call fnc_inString) then {
			_message set [0, localize (_message select 0)];
		};
		_message = format _message;
	} else {
		if (["STR_",_message] call fnc_inString) then {
			_message = localize _message;
		};
	};
};
_message