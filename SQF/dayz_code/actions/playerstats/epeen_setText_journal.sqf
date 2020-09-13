private ["_currentTime","_totalMins","_days","_hours","_mins","_base","_plots","_currency","_pve","_b","_survived"];

_currentTime = floor ((diag_tickTime - dayz_loginTime) / 60);
_totalMins = (player getVariable "SurvivalTime") + _currentTime;
_days = floor (_totalMins / 1440);
_totalMins = (_totalMins - (_days * 1440));
_hours = floor (_totalMins / 60);
_mins =  (_totalMins - (_hours * 60));
dayz_Survived = [_days,_hours,_mins,_totalMins];
_survived = format["%1 %2, %3 %4, %5 %6",(dayz_Survived select 0),localize "STR_EPOCH_JOURNAL_DAYS",(dayz_Survived select 1),localize "STR_EPOCH_JOURNAL_HOURS",(dayz_Survived select 2),localize "STR_EPOCH_JOURNAL_MINUTES"];
_base = ["STR_EP1_dogfighters_params09","STR_EP1_dogfighters_params08"] select (DZE_GodModeBase);
_plots = [localize "str_ep1_mpt_param1_5",DZE_limitPlots] select (DZE_limitPlots > 0);
_currency = [localize "STR_EPOCH_GOLD",CurrencyName] select (Z_SingleCurrency);
_pve = ["str_temp_param_disabled","str_temp_param_enabled"] select (DZE_PVE_Mode);

// left page
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1800) ctrlSetStructuredText parseText format ["
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%1: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%2</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%3: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%4</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%5: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%6</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%7: </t><t size='1.2' font='Zeppelin33' align='right' color='#FF0033'>%8</t><br/>
	<br />
	<t size='1.5' font='Zeppelin33' color = '#000000' align='left'>%9</t><br/>
	<br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%10: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%11</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%12: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%13</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%14: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%15</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%16: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%17</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%18: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%19</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%20 %21: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%22</t><br/>
	<t size='1.3' font='Zeppelin33' color = '#000000' align='left'>%23 %24: </t><t size='1.3' font='Zeppelin33' align='right' color='#FF0033'>%25</t><br/>
	",
	localize "STR_EPOCH_JOURNAL_Name", // 1
	(name player), // 2
	localize "STR_EPOCH_JOURNAL_HEALTH", // 3
	(round(r_player_blood)), // 4
	localize "str_actions_stats_hm", // 5
	(round(player getVariable['humanity', 0])), // 6
	localize "STR_EPOCH_JOURNAL_SURVIVED", // 7
	_survived, // 8
	localize "STR_EPOCH_JOURNAL_SERVER_SETTINGS", // 9
	localize "STR_EPOCH_JOURNAL_BASE", // 10
	localize _base, // 11
	localize "STR_EPOCH_JOURNAL_PLOT", // 12
	_plots, // 13
	localize "STR_EPOCH_JOURNAL_BUILDINGLIMIT", // 14
	DZE_BuildingLimit, // 15
	localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY", // 16
	_currency, // 17
	localize "STR_EPOCH_JOURNAL_PVE", // 18
	localize _pve, // 19
	localize "str_actions_stats_hm", // 20
	localize "str_playerstats_hero", // 21
	DZE_Hero, // 22
	localize "str_actions_stats_hm", // 23
	localize "str_playerstats_bandit", // 24
	DZE_Bandit // 25
];

// right page - blank until humanity is checked

_b = "<img size = '5' image = '\z\addons\dayz_communityassets\pictures\playerstats\tally\0.paa'/>";

((uiNamespace getVariable "horde_myDisplay") displayCtrl 1801) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1802) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1803) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1804) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1805) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1806) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1807) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1808) ctrlSetStructuredText parseText format ["%1", _b];
((uiNamespace getVariable "horde_myDisplay") displayCtrl 1809) ctrlSetStructuredText parseText format ["%1", _b];
