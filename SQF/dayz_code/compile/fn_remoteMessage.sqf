/*
	Function name: fnc_remoteMessage
	This function accepts messages sent with PublicVariable "RemoteMessage" and displays them on the screen.
	It sends the messages to fnc_localizeMessage for localizing and formatting.
*/

private "_vars";

_type = _this select 0;
_message = _this select 1;
if (count _this > 2) then {
	_vars = _this select 2;
};

// Checks for localized strings and formats messages that contain parameters
_message = [_type,_message] call fnc_localizeMessage;

if (_type == "radio") exitWith {
	if (player hasWeapon "ItemRadio") then {
		if (player getVariable["radiostate",true]) then {
			systemChat ("[RADIO] " + _message);
			playSound "Radio_Message_Sound";
		};
	};
};

if (_type == "IWAC") exitWith {
	if (player hasWeapon "ItemRadio") then {
		if (player getVariable["radiostate",true]) then {
			_message call dayz_rollingMessages;
			playSound "IWAC_Message_Sound";
		};
	};
};

if (_type == "private") exitWith {if(getPlayerUID player == (_message select 0)) then {systemChat (_message select 1);};};
if (_type == "systemChat") exitWith {systemChat _message;};
if (_type == "titleCut") exitWith {titleCut [_message,"PLAIN DOWN",3];};
if (_type == "titleText") exitWith {titleText [_message, "PLAIN DOWN"]; titleFadeOut 10;};
if (_type == "rollingMessages") exitWith {_message call dayz_rollingMessages;};
if (_type == "dynamic_text") exitWith {
	[
		format["<t size='%3' color='%4' align='center'>%1</t><br /><t size='%5' color='%6' align='center'>%2</t>",_message select 0,_message select 1,_vars select 0,_vars select 1,_vars select 2,_vars select 3],
		(_vars select 4), // X coordinate
		(_vars select 5), // Y coordinate
		(_vars select 6), // Message duration
		(_vars select 7) // fade in
	] spawn BIS_fnc_dynamicText;
};
if (_type == "hintWithImage") exitWith {hint parseText format["<t align='center' color='%4' shadow='2' size='%5'>%1</t><br/><img size='%6' align='Center' image='%3'/><br/><t align='center' color='%#ffffff'>%2</t>",
	_message select 0, // Title
	_message select 1, // Announcement
	_vars select 0, // Image
	_vars select 1, // Title Color
	_vars select 2, // Title Size
	_vars select 3 // Image Size
];};
if (_type == "hintNoImage") exitWith {hint parseText format["<t align='center' color='%3' shadow='2' size='%4'>%1</t><br/><t align='center' color='%#ffffff'>%2</t>",
	_message select 0, // Title
	_message select 1, // Announcement
	_vars select 0, // Title Color
	_vars select 1 // Title Size
];};
if (_type == "ai_killfeed") exitWith {
	if (isNil "RM_rscLayer") then {RM_rscLayer = 750};
	[
		format["<t size='%5' color='%4' align='left'>%1</t><t size='%5' color='%6' align='left'>%2</t><br /><t size='%5' color='%6' align='left'>%3</t>",_message select 0,_message select 1,_message select 2,_vars select 0,_vars select 1,_vars select 2],
		(_vars select 3), // X coordinate
		(_vars select 4), // Y coordinate
		(_vars select 5), // Message duration
		(_vars select 6), // fade in
		-1,
		RM_rscLayer
	] spawn BIS_fnc_dynamicText;
	RM_rscLayer = RM_rscLayer + 1;
	if (RM_rscLayer == 788) then {RM_rscLayer = nil;};
};
