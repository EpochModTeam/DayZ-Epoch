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
	private ["_i", "_record", "_output", "_record_stxt", "_name", "_image", "_h", "_m", "_format"];
	_quotes = [
		"Death is God's way of telling you not to be such a wise guy.",
		"What happens if you get scared half to death, twice?",
		"Don't upset me.. I'm running out of places to hide the bodies.",
		"Don't run, you'll just die tired.",
		"Give me immortality or give me death.",
		"I can't live with death; he's always leaving the toilet seat up.",
		"Why won't you die?!?!",
		"Guns don't kill people; death kills people. It's a proven medical fact."
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
		
		_record_stxt = format["%1<t size='1' align='left'>Died at %2:%3</t><br /><br />", _record_stxt, (_h call _format), (_m call _format)];
		
		if ((_record select 1) != 'unknown') then {
			_record_stxt = format["%1<t size='1' align='left'>Was killed by %2</t><br /><br />", _record_stxt, (_record select 1)];
		};
		
		if ((_record select 2) != 'unknown') then {
			_name = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "displayName");
			_image = getText(configFile >> "cfgWeapons" >> (_record select 2) >> "picture");
			_record_stxt = format["%1<t size='1' align='left'>With a %2<br /><img size='3' image='%3' /></t><br /><br />", _record_stxt, _name, _image];
		};
		
		if (format["%1", (_record select 3)] != 'unknown') then {
			_record_stxt = format["%1<t size='1' align='left'>At a distance of %2m</t><br /><br />", _record_stxt, (_record select 3)];
		};
		_record_stxt = format["%1<t font='Bitstream'>%2</t>", _record_stxt, (_quotes call BIS_fnc_selectRandom)];
		call compile format["epoch_death_board_record_%1 = ""%2"";" ,_i , _record_stxt];
	};
	if (!isNil "_record_stxt") then {
		_output ctrlSetStructuredText (parseText _record_stxt);
	};
};