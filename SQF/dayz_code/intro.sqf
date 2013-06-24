playmusic "dayz_track_intro_1";

sleep 4;

titleText [(localize "STR_INTRO_1"), "plain"];sleep 5;titleFadeOut 1;

sleep 4;

titleText [(localize "STR_INTRO_2"), "plain"];sleep 5;titleFadeOut 1;

sleep 4.5;

1 cutRsc["TitleScreen", "BLACK"];
sleep 10;
1 cutRsc["TitleScreen", "BLACK IN", 3];

sleep 5;

titleText [(localize "STR_INTRO_3"), "plain"];sleep 8;titleFadeOut 2;sleep 4;

titleText [(localize "STR_INTRO_4"), "plain"];sleep 8;titleFadeOut 2;sleep 3;

titleText [(localize "STR_INTRO_5"), "plain"];sleep 5;titleFadeOut 2;sleep 3;

titleText [(localize "STR_INTRO_6"), "plain"];sleep 5;titleFadeOut 2;sleep 3;

titleText [(localize "STR_INTRO_7"), "plain"];sleep 8;titleFadeOut 2;sleep 3;

titleText [(localize "STR_INTRO_8"), "plain"];sleep 3;titleFadeOut 2;sleep 3;

titleText [(localize "STR_INTRO_9"), "plain"];sleep 3;titleFadeOut 2;sleep 3.5;

titleText [(localize "STR_INTRO_10"), "plain"];sleep 5;titleFadeOut 2;sleep 4;

disableSerialization;
DayZ_Montage = createDialog "DayZMontage";
_display = (findDisplay 50666);
for "_i" from 1001 to 1013 do {
	_control = (_display displayCtrl _i);
	_control ctrlSetTextColor [0, 0, 0, 0];
};
_id = [] spawn {
	_credits = [
		["","",5],
		[(localize "STR_INTRO_11"),"DEAN HALL",7],
		[(localize "STR_INTRO_12"),"DR RICHARD HALL",7],
		[(localize "STR_INTRO_13"),"TRENT BLAKE",7],
		[(localize "STR_INTRO_14"), "CHAD GRIFFITHS",7],
		[(localize "STR_INTRO_15"),"DAN OBERBAUER",7],
		[(localize "STR_INTRO_16"),"STEPAN KMENT",7],
		["Website","",5],
		["","JOEL CHENG",5],
		["","JANNIK BALKAU",7],
		["","CHRIS CUNNINGHAM",7],
		["","Testers",5],
		["","SAM MAUNDER",5],
		["","MATT LIGHTFOOT",5],
		["","PATRICK ADAMS",7],
		["Special Thanks","",5],
		["","NORRIN",5],
		["","JAYNUS",5]
		//Additional 3D Art: Steven Bell
	];
	{
		_first = [_x select 0,_x select 1] spawn BIS_fnc_infoText;
		sleep (_x select 2);
	} forEach _credits;
};
for "_i" from 1001 to 1013 do {
	_id = [_display,_i] spawn {
		private["_control","_display","_i","_v","_x"];
		disableSerialization;
		_display = _this select 0;
		_i = _this select 1;
		_pos = [0,0,0,0];

		_control = (_display displayCtrl _i);
		
		//Move it
		_id = [_control,_i] spawn {
			private["_control","_display","_i","_v","_x","_w","_h","_y","_val","_pos"];
			disableSerialization;
			_dir = [
				[-0.5,0],
				[0.5,0],
				[-0.5,0],
				[0.5,0],
				[-0.5,0],
				[-0.3,0],
				[0.5,0],
				[0,0],
				[0.5,0],
				[-0.5,0],
				[0,0],
				[0,0],
				[-0.5,0]
			];
			_control = (_this select 0);
			_pos = ctrlPosition _control;
			_val = _dir select -(1001 - (_this select 1));
			_x = (_pos select 0) + (SafeZoneX * (_val select 0));
			_y = (_pos select 1) + (SafeZoneY * (_val select 1));
			_w = (_pos select 2);// - (SafeZoneX * 0.1);
			_h = (_pos select 3);// - (SafeZoneY * 0.1);
			_control ctrlSetPosition [_x,_y,_w,_h];
			_control ctrlCommit 18;
		};
		
		//Fade it in
		for "_x" from 1 to 100 do {
			_v = _x / 100;
			_control ctrlSetTextColor [_v, _v, _v, _v];
			sleep 0.002;
		};
		sleep 8;
		//Fade it out
		for "_x" from 1 to 100 do {
			_v = (100 -_x) / 100;
			_control ctrlSetTextColor [_v, _v, _v, _v];
			sleep 0.004;
		};
	};
	sleep 8;
};

sleep 5;
closeDialog 0;

sleep 5;