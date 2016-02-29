/********************************************************************************************************************/
// Function file for [DayZ]
// Created by: [Horde]
//********************************************************************************************************************/

private ["_hum","_humanity","_pl_pic","_humanity_readout","_top_joker","_bot_joker","_top_value","_bot_value","_top_suit","_bot_suit","_pl_name"];

//check humanity

_humanity = player getVariable["humanity", 0];

_hum = [_humanity] call horde_epeen_determine_humanity_fnc;

_pl_pic = _hum select 0;
_humanity_readout = _hum select 1;
_top_joker = _hum select 2;
_bot_joker = _hum select 3;
_top_value = _hum select 4;
_bot_value = _hum select 5;
_top_suit = _hum select 6;
_bot_suit = _hum select 7;
_pl_name = format ["<t size = '1.1' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>%1</t", name player];

ctrlShow [1906, false];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1801) ctrlSetStructuredText parseText format ["%1", _top_value];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1802) ctrlSetStructuredText parseText format ["%1", _bot_value];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1803) ctrlSetStructuredText parseText format ["%1", _top_suit];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1804) ctrlSetStructuredText parseText format ["%1", _bot_suit];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1805) ctrlSetStructuredText parseText format ["%1", _top_joker];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1806) ctrlSetStructuredText parseText format ["%1", _bot_joker];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1807) ctrlSetStructuredText parseText format ["%1", _pl_pic];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1808) ctrlSetStructuredText parseText format ["%1", _pl_name];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1809) ctrlSetStructuredText parseText format ["%1", _humanity_readout];
ctrlShow [1907, false];