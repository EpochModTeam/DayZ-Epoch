private ["_ys","_ms","_ds","_b","_2","_6","_7","_8","_9","_10","_str_left_text","_1","_3","_4","_5","_blood_in_pack","_blood_in_inv","_mag_arr","_backpack","_11","_mags_for_weap","_mssv_cnt","_weapon","_config"];

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

/*
if (player hasWeapon "ItemWatch") then
{
	if (dayz_Survived == Dayz_logonDate) then // only interested if the same - assume server will only run over one day before restart
	{
		switch (true) do
		{
			case (Dayz_logonTime > 20): {_2 = (localize "str_playerstats_journal_1_a")};
			case (Dayz_logonTime > 17): {_2 = (localize "str_playerstats_journal_1_b")};
			case (Dayz_logonTime > 12): {_2 = (localize "str_playerstats_journal_1_c")};
			default {_2 = (localize "str_playerstats_journal_1_d")};
		};
	} else
	{
		switch (true) do
		{
			case (Dayz_logonTime > 20): {_2 = (localize "str_playerstats_journal_1_e")};
			case (Dayz_logonTime > 17): {_2 = (localize "str_playerstats_journal_1_f")};
			case (Dayz_logonTime > 12): {_2 = (localize "str_playerstats_journal_1_g")};
			default {_2 = (localize "str_playerstats_journal_1_h")};
		};
	};
} else
{
	_2 = (localize "str_playerstats_journal_1_i");
};

_3 = Dayz_logonTown;

_4 = worldName;

_ys = str (date select 0);
_ms = "";
_ds = str (date select 2);

switch (true) do
{
	case (date select 1 == 1):{_ms = (localize "str_playerstats_journal_month_1")};
	case (date select 1 == 2):{_ms = (localize "str_playerstats_journal_month_2")};
	case (date select 1 == 3):{_ms = (localize "str_playerstats_journal_month_3")};
	case (date select 1 == 4):{_ms = (localize "str_playerstats_journal_month_4")};
	case (date select 1 == 5):{_ms = (localize "str_playerstats_journal_month_5")};
	case (date select 1 == 6):{_ms = (localize "str_playerstats_journal_month_6")};
	case (date select 1 == 7):{_ms = (localize "str_playerstats_journal_month_7")};
	case (date select 1 == 8):{_ms = (localize "str_playerstats_journal_month_8")};
	case (date select 1 == 9):{_ms = (localize "str_playerstats_journal_month_9")};
	case (date select 1 == 10):{_ms =(localize "str_playerstats_journal_month_10")};
	case (date select 1 == 11):{_ms =(localize "str_playerstats_journal_month_11")};
	case (date select 1 == 12):{_ms =(localize "str_playerstats_journal_month_12")};
};

_5 = format[localize "str_playerstats_journal_2_date", _ds, _ms, _ys];

// can't test dayz_Survived at home

switch (true) do
{
	case (dayz_Survived == 0): {_6 = (localize "str_playerstats_journal_2_info_1")};
	case (dayz_Survived == 1): {_6 = (localize "str_playerstats_journal_2_info_2")};
	case (dayz_Survived > 1): {_6 = format [localize "str_playerstats_journal_2_info_3", dayz_Survived]};
	default {};
};

switch (true) do
{
	case (!r_fracture_legs and !r_fracture_arms): {_7 = (localize "str_playerstats_journal_3_1")};
	case (r_fracture_legs and r_fracture_arms): {_7 = (localize "str_playerstats_journal_3_2")};
	case (r_fracture_legs): {_7 = (localize "str_playerstats_journal_3_3")};
	case (r_fracture_arms): {_7 = (localize "str_playerstats_journal_3_4")};
	default {};
};

switch (true) do
{
	case (r_player_infected):
	{
		if (!r_fracture_legs and !r_fracture_arms) then
		{
			_8 = (localize "str_playerstats_journal_4_1");
		} else
		{
			_8 = (localize "str_playerstats_journal_4_2");
		};
	};
	default {_8 = ""};
};

if (r_fracture_legs or r_fracture_arms) then
{
	switch (true) do
	{
		case (r_player_blood < 3000): {_9 = (localize "str_playerstats_journal_5_1")};
		case (r_player_blood < 6000): {_9 = (localize "str_playerstats_journal_5_2")};
		case (r_player_blood < 9000): {_9 = (localize "str_playerstats_journal_5_3")};
		case (r_player_blood < 11000): {_9 = (localize "str_playerstats_journal_5_4")};
		case (r_player_blood == 12000): {_9 = (localize "str_playerstats_journal_5_5")};
		default {_9 = "."};
	};
}else
{
	switch (true) do
	{
		case (r_player_blood < 3000): {_9 = (localize "str_playerstats_journal_5_6")};
		case (r_player_blood < 6000): {_9 = (localize "str_playerstats_journal_5_7")};
		case (r_player_blood < 9000): {_9 = (localize "str_playerstats_journal_5_8")};
		case (r_player_blood < 11000): {_9 = (localize "str_playerstats_journal_5_9")};
		case (r_player_blood == 12000):
		{
			if (r_player_infected) then
			{
				_9 = (localize "str_playerstats_journal_5_10");
			} else
			{
				_9 = (localize "str_playerstats_journal_5_11");
			};
		};
		default {_9 = "."};
	};
};

_blood_in_pack = false;
_backpack = unitBackpack player;

if (!isNull _backpack) then
{
	_mag_arr = getMagazineCargo _backpack;
	if ("ItemBloodbag" in (_mag_arr select 0)) then
	{
		_blood_in_pack = true;
	};
};
_blood_in_inv = false;

if ("ItemBloodbag" in (magazines player)) then
{
	_blood_in_inv = true;
};

_10 = "";

if (r_player_blood < 9000 and (_blood_in_inv or _blood_in_pack)) then
{
	if (_blood_in_inv) then
	{
		_10 = (localize "str_playerstats_journal_6_1");
	} else
	{
		_10 = (localize "str_playerstats_journal_6_2");
	};
};
if (r_player_blood < 9000 and ! _blood_in_inv and ! _blood_in_pack) then
{
	_10 = (localize "str_playerstats_journal_6_3");
};

_11 = "";

_weapon = currentWeapon player;
_config = configFile >> "CfgWeapons";

// possibly filter out torch and the dayz_throwweapon thingy too.  Need to get feedback..

if (_weapon != "" and _weapon != "Throw" and _weapon != "Put" and _weapon != "Flare") then
{
	switch (true) do
	{
		case (getText (_config >> _weapon >> "melee") == "true"): // used getText as config entry had "" marks around it.
		{
			_11 = format [localize "str_playerstats_journal_7_1", getText (_config >> _weapon >> "displayName")];
		};
        case (_weapon == "ItemFlashlight" or _weapon == "ItemFlashlightRed"):
		{
			if (sunOrMoon == 1) then
			{
				_11 = format [localize "str_playerstats_journal_7_2", getText (_config >> _weapon >> "displayName")];
			} else
			{
				_11 = format [localize "str_playerstats_journal_7_3", getText (_config >> _weapon >> "displayName")];
			};
		};
		case (_weapon == "Makarov"):
		{
			_11 = format [localize "str_playerstats_journal_7_4", getText (_config >> _weapon >> "displayName")];
		};
		default
		{
			_mags_for_weap = getArray (_config >> _weapon >> "magazines");

			_mssv_cnt = false;
			{
				if (_x in _mags_for_weap) then
				{
					_mssv_cnt = true;
				};
			} forEach (magazines player);

			if (_mssv_cnt) then
			{
				if (player ammo _weapon > 0) then
				{
					_11 = format [localize "str_playerstats_journal_7_5", getText (configFile >> "CfgWeapons" >> _weapon >> "displayName")];
				} else
				{
					_11 = format [localize "str_playerstats_journal_7_6", getText (configFile >> "CfgWeapons" >> _weapon >> "displayName")];
				};
			} else
			{
				_11 = format [localize "str_playerstats_journal_7_7", getText (_config >> _weapon >> "displayName")];
			};
		};
	};
} else
{
	_11 = (localize "str_playerstats_journal_7_8");
};

*/

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
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='left'>Health: 	 </t><t size='2' font='Zeppelin33' align='right' color='#FF0033'>%1</t><br/>
					<br/>
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
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>Survived: %8 Day(s)</t><br/>
					<br />
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>Survivors:%9</t><br/>
					<br/>
					<t size='2' font='Zeppelin33' color = '#000000' align='center'>FPS:%10, FPSMin:%11</t><br/>
					",
					(round(r_player_blood)),
					//(player getVariable['USEC_BloodQty', r_player_blood]),
					//(r_player_bloodpersec),
					//(r_player_foodstack),
					//(r_player_bloodregen),
					(round(dayz_hunger)),
					(round(dayz_thirst)),
					(_spawnselection),
					(round(dayz_temperatur)),
					(player getVariable['humanity', 0]),
					({alive _x} count entities "zZombie_Base"),
					(dayz_Survived),
					(_survivors),
					(round diag_fps),
					(round diag_fpsmin),
					(_moon),
					(_disabledTemperature)
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