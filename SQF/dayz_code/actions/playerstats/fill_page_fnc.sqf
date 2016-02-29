/********************************************************************************************************************/
// Function file for [DayZ]
// Created by: [Horde]
//********************************************************************************************************************/

private ["_count","_kills","_5","_4","_3","_2","_1","_b","_idc_arr","_extra_kills","_tally_kills","_full_box_count","_partial_box_tally","_add_kills"];

_kills = _this select 0;
_5 = _this select 1;
_4 = _this select 2;
_3 = _this select 3;
_2 = _this select 4;
_1 = _this select 5;
_b = _this select 6;
_idc_arr = _this select 7;

_extra_kills = 175 * (floor (_kills / 175));
_tally_kills = _kills - _extra_kills;
_full_box_count = floor (_tally_kills / 5);
_partial_box_tally = _tally_kills - (5 * (floor (_tally_kills / 5)));
_add_kills = "<t size = '3' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>+</t>
"  + format ["<t size = '3' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'center' underline = 'false'>%1", _extra_kills];

_count = 1;
{
	if (_count <= _full_box_count) then
	{
		((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _5];
	};
	if (_count == _full_box_count + 1) then
	{
		if (_partial_box_tally == 4) then
		{
			((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _4];
		};
		if (_partial_box_tally == 3) then
		{
			((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _3];
		};
		if (_partial_box_tally == 2) then
		{
			((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _2];
		};
		if (_partial_box_tally == 1) then
		{
			((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _1];
		};
	};
	if (_count > _full_box_count + 1) then
	{
		((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _b];
	};
	_count = _count + 1;
} forEach _idc_arr;
// additional kills
if (_extra_kills > 0) then
{
	((uiNamespace getVariable "horde_myDisplay") displayCtrl 1239) ctrlSetStructuredText parseText format ["<br />%1", _add_kills];
} else
{
	((uiNamespace getVariable "horde_myDisplay") displayCtrl 1239) ctrlSetStructuredText parseText format ["%1", _b];
};