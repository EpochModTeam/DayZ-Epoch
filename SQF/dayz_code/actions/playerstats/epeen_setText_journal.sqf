private ["_currentTime","_totalMins","_days","_hours","_mins","_ys","_ms","_ds","_b","_2","_6","_7","_8","_9","_10","_str_left_text","_1","_3","_4","_5","_blood_in_pack","_blood_in_inv","_mag_arr","_backpack","_11","_mags_for_weap","_mssv_cnt","_weapon","_config","_survivors","_moon","_spawnselection","_disabledTemperature"];
_survivors = playersNumber west;

_str_left_text = "
<t size = '1.4' font = 'Zeppelin33' color = '#000000' shadow = 'false' align = 'left'>
"+(localize "str_playerstats_journal_1")+"
<br />
<br />
"+(localize "str_playerstats_journal_2")+"
<br />
<br />
%7%8%9  %10
<br />
<br />
%11
</t>
";

_1 = name player;

dayz_currentGlobalZombies = count entities "zZombie_Base";

//Work out survival time
_currentTime = floor ((diag_tickTime - dayz_loginTime) / 60);
_totalMins = (player getVariable "SurvivalTime") + _currentTime;
_days = floor (_totalMins / 1440);
_totalMins = (_totalMins - (_days * 1440));
_hours = floor (_totalMins / 60);
_mins =  (_totalMins - (_hours * 60));
		
dayz_Survived = [_days,_hours,_mins,_totalMins];

_moon = if (dayz_ForcefullmoonNights) then { "Yes" } else { "No" };

_spawnselection = switch (dayz_spawnselection) do {
	case 1: { "Yes" };
	case 0: { "No" };
};

_disabledTemperature = switch (dayz_temperature_override) do {
	case true: { "Disabled" };
	case false: { "Enabled" };
};

	// left page
	((uiNamespace getVariable "horde_myDisplay") displayCtrl 1800) ctrlSetStructuredText parseText format ["
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>Survival Type: %14</t><br/>
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Health: 	 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%1</t><br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Hunger: 			 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%2%</t><br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Thirst: 		 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%3%</t><br/>
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Temp: 			 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%5/%13</t><br/>
					<br />
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Humanity: 		 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%6</t><br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Zombies: 		 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%7</t><br/>
					<br />
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>SpawnSelection: 	     </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%4</t><br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Full Moon: 	     </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%12</t><br/>
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>Survived: %8 Day(s), %15 Hour(s), %16 Minute(s)</t><br/>
					<br />
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>Survivors:%9</t><br/>
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>FPS:%10, FPSMin:%11</t><br/>
					",
					(round(r_player_blood)),
					(round(dayz_hunger)),
					(round(dayz_thirst)),
					(_spawnselection),
					(round(dayz_temperatur)),
					(round(player getVariable['humanity', 0])),
					(dayz_currentGlobalZombies),
					(dayz_Survived select 0),
					(_survivors),
					(round diag_fps),
					(round diag_fpsmin),
					(_moon),
					(_disabledTemperature),
					(dayz_presets),
					(dayz_Survived select 1),
					(dayz_Survived select 2)
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