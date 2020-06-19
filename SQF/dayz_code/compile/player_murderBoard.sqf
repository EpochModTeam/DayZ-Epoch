// murder message boards by maca134
/*
_death_record = [
	0_victimName,
	1_killerName,
	2_weapon,
	3_distance,
	4ServerCurrentTime
];
*/
EpochDeathBoardDialogList = 21000;
EpochDeathBoardDialogSText = 21001;
EpochDeathBoardDeaths = [];

EpochDeathBoardLoad = {
	createdialog "EpochDeathBoardDialog";
	/*PVDZE_plr_DeathBResult = [
		["maca134","Bob","AK_107_Kobra",100,[8,30]],
		["Fred","Jonny","FN_FAL",42,[8,32]],
		["maca134","Bob","M9SD",100,[5,30]],
		["Fred","Jonny","BAF_AS50_scoped",42,[8,34]]
	];*/
	{
		lbAdd [EpochDeathBoardDialogList, (_x select 0)];
	} forEach PVDZE_plr_DeathBResult;
};


EpochDeathBoardClick = {
	disableSerialization;
	private ["_i", "_record", "_output", "_record_stxt", "_name", "_image", "_h", "_m", "_format","_quotes","_boardRecord_Var"];
	_quotes = [
		"STR_DEATHBOARD_MESSAGE_1",
		"STR_DEATHBOARD_MESSAGE_2",
		"STR_DEATHBOARD_MESSAGE_3",
		"STR_DEATHBOARD_MESSAGE_4",
		"STR_DEATHBOARD_MESSAGE_5",
		"STR_DEATHBOARD_MESSAGE_6",
		"STR_DEATHBOARD_MESSAGE_7",
		"STR_DEATHBOARD_MESSAGE_8"
	];
	_i = _this select 0;
	if (_i < 0) exitWith {};
	_output = _this select 1;
	_record = PVDZE_plr_DeathBResult select _i;
	_boardRecord_Var = compile format["epoch_death_board_record_%1;",_i];
	if (!isNil {call _boardRecord_Var}) then {
		_record_stxt = call _boardRecord_Var;
	};
	if(isNil "_record_stxt") then {
		_record_stxt = format["<t size='1.6' align='left'>%1</t><br /><br />", (_record select 0)];

		_format = {
			private ["_codeCount", "_str"];
			_str = format["%1", _this];
			_codeCount = (count (toArray _str));
			if (_codeCount == 1) then {
				_str = format["0%1", _str];
			};
			_str;
		};
		_h = ((_record select 4) select 0)+timezoneswitch;
		_m = (_record select 4) select 1;

		_record_stxt = format["%1<t size='1' align='left'>%4 %2:%3</t><br /><br />", _record_stxt, (_h call _format), (_m call _format),localize "STR_DEATHBOARD_KILLED_AT"];

		if ((_record select 1) != 'unknown') then {
			_record_stxt = format["%1<t size='1' align='left'>%3 %2</t><br /><br />", _record_stxt, (_record select 1),localize "STR_DEATHBOARD_KILLED_BY"];
		};

		if ((_record select 2) != 'unknown') then {
			_name = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "displayName");
			_image = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "picture");
			_record_stxt = format["%1<t size='1' align='left'>%4 %2<br /><img size='3' image='%3' /></t><br /><br />", _record_stxt, _name, _image,localize "STR_DEATHBOARD_KILLED_WITH"];
		};

		if (format["%1", (_record select 3)] != 'unknown') then {
			_record_stxt = format["%1<t size='1' align='left'>%3 %2m</t><br /><br />", _record_stxt, (_record select 3),localize "STR_DEATHBOARD_DISTANCE_OF"];
		};
		_record_stxt = format["%1<t font='Bitstream'>%2</t>", _record_stxt,localize (_quotes call BIS_fnc_selectRandom)];
		call compile format["epoch_death_board_record_%1 = ""%2"";" ,_i , _record_stxt];
	};
	if (!isNil "_record_stxt") then {
		_output ctrlSetStructuredText (parseText _record_stxt);
	};
};
