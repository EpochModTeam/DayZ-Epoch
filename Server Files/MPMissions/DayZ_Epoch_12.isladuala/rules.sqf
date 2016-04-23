private ["_messages","_timeout"];

if (isServer) exitWith {};
waitUntil {uiSleep 1; !isNil ("Dayz_loginCompleted")};

_messages = [
	["DayZ Epoch", "Welcome "+(name player)],
	["World", worldName],
	["Teamspeak", "some TS info"],
	["Website/Forums", "some website info"],
	["Server Rules", "Duping, glitching or using any<br />exploit will result in a<br />permanent ban."],
	["Server Rules", "No talking in side."],
	["Server Rules", "Hackers will be banned permanently<br />Respect others"],
	["News", "Some random new info!<br />Random news<br />"]
];
 
_timeout = 5;
{
	private ["_title","_content","_titleText"];
	uiSleep 2;
	_title = _x select 0;
	_content = _x select 1;
	_titleText = format[("<t font='TahomaB' size='0.40' color='#a81e13' align='right' shadow='1' shadowColor='#000000'>%1</t><br /><t shadow='1'shadowColor='#000000' font='TahomaB' size='0.60' color='#FFFFFF' align='right'>%2</t>"), _title, _content];
	[
		_titleText,
		[safezoneX + safezoneW - 0.8,0.50],     //DEFAULT: 0.5,0.35
		[safezoneY + safezoneH - 0.8,0.7],      //DEFAULT: 0.8,0.7
		_timeout,
		0.5
	] spawn BIS_fnc_dynamicText;
	uiSleep (_timeout * 1.1);
} forEach _messages;