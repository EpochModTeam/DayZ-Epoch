/********************************************************************************************************************/
// Function file for [DayZ]
// Created by: [Horde]
//********************************************************************************************************************/

private ["_pge","_tally_idc_arr","_need_to_blank_idc_arr","_kills","_5","_4","_3","_2","_1","_b"];

if (isDedicated) exitWith {};

// _pge = _this select 0;

_kills = _this select 0;

_5 = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\5.paa'/>";
_4 = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\4.paa'/>";
_3 = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\3.paa'/>";
_2 = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\2.paa'/>";
_1 = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\1.paa'/>";
_b = "<img size = '4.8' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\0.paa'/>";

// array of IDC's for tallys

_tally_idc_arr = [1204,1205,1206,1207,1208,1209,1210,1211,1212,1213,1214,1215,1216,1217,1218,1219,1220,1221,1222,1223,1224,1225,1226,1227,1228,1229,1230,1231,1232,1233,1234,1235,1236,1237,1238];

// array of IDC's for journal pages

_need_to_blank_idc_arr = [1800,1801,1802,1803,1804,1805,1806,1807,1808,1809];

{
	((uiNamespace getVariable "horde_myDisplay") displayCtrl _x) ctrlSetStructuredText parseText format ["%1", _b];
} forEach _need_to_blank_idc_arr;

[_kills, _5, _4, _3, _2, _1, _b, _tally_idc_arr] call horde_epeen_fnc_fill_page;