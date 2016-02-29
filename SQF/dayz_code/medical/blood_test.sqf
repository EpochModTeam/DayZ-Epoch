/* ********************************************************
Used to check and display blood type + Rh
By icomrade for DayZ Mod
********************************************************* */
private ["_unit","_abc","_opened","_water_displayed","_A_Watered","_B_Watered","_allDisplayed","_water_closed","_D_Watered","_control_Watered","_needleOpened","_needleRed","_needleRest","_antiABlooded","_allClicked","_antiBBlooded","_antiDBlooded","_control_displayed","_antiA_displayed","_antiB_displayed","_antiD_displayed","_results_shown","_isDone","_watered","_watered_complete","_isClose","_unit","_hasTester","_dialog","_display","_resultsCard_hidden","_antiA","_AntiB","_AntiD","_Control","_waterBottle","_needle","_name","_resultsCard_front","_antiAUntested","_antiBUntested","_antiDUntested","_controlUntested","_waterBottleImage","_waterBottleClickedImage","_needleClosedImage","_needleOpenImage","_watered_image","_needleRedImage","_bloodTypeCard","_bloodTypeCardHidden","_controlImage","_RBWhole1","_RBWhole2","_RBWhole3","_RBWhole4","_RBWhole5","_Aglut1","_Aglut2","_Aglut3","_Aglut4","_Aglut5","_wholeArray","_aglutArray","_rnd1","_rnd2","_rnd3","_type","_rh"];
disableSerialization;

//remove option
call fnc_usec_medic_removeActions;
r_action = false;

_unit = (_this select 3) select 0;
if (dialog) then {
	_abc = findDisplay 106;
	_abc closeDisplay 0;
};

_hasTester = "bloodTester" in magazines player;
_antiA_displayed = false;
_antiB_displayed = false;
_antiD_displayed = false;
_control_displayed = false;
_water_displayed = false;
_opened = false;
_isDone = false;
_A_Watered = false;
_B_Watered = false;
_D_Watered = false;
_control_Watered = false;
_results_shown = false;
_needleOpened = false;
_needleRed = false;
_antiABlooded = false;
_antiBBlooded = false;
_antiDBlooded = false;
_needleRest = false;
_allClicked = 0;
if (!_hasTester) exitWith {};

_dialog = createDialog "bloodTest";

sleep 0.02;

_display = uiNamespace getVariable 'DayZ_Blood_Test';
_resultsCard_hidden = _display displayCtrl 1288;
_antiA = _display displayCtrl 1293;
_AntiB = _display displayCtrl 1294;
_AntiD = _display displayCtrl 1295;
_Control = _display displayCtrl 1296;
_waterBottle = _display displayCtrl 1297;
_needle = _display displayCtrl 1298;
_name = _display displayCtrl 1289;
_resultsCard_front = _display displayCtrl 1299;
_resultsCard_front ctrlShow false;
_antiAUntested = "\z\addons\dayz_code\gui\blood\bloodtest_t_antiA.paa";
_antiBUntested = "\z\addons\dayz_code\gui\blood\bloodtest_t_antiB.paa";
_antiDUntested = "\z\addons\dayz_code\gui\blood\bloodtest_t_antiD.paa";
_controlUntested = "\z\addons\dayz_code\gui\blood\bloodtest_t_control.paa";
_waterBottleImage ="\z\addons\dayz_code\gui\blood\bloodtest_button_water.paa";
_waterBottleClickedImage = "\z\addons\dayz_code\gui\blood\bloodtest_button_water_enabled.paa";
_needleClosedImage = "\z\addons\dayz_code\gui\blood\bloodtest_button_drawblood_closed.paa";
_needleOpenImage = "\z\addons\dayz_code\gui\blood\bloodtest_button_drawblood_open.paa";
_watered_image = "\z\addons\dayz_code\gui\blood\bloodtest_waterdrop.paa";
_needleRedImage = "\z\addons\dayz_code\gui\blood\bloodtest_button_drawblood_enabled.paa";
_bloodTypeCard = "\z\addons\dayz_code\gui\blood\bloodtest_results.paa";
_bloodTypeCardHidden = "\z\addons\dayz_code\gui\blood\bloodtest_button_results.paa";
_controlImage = "\z\addons\dayz_code\gui\blood\bloodtest_blood_waiting.paa";
_RBWhole1 = "\z\addons\dayz_code\gui\blood\bloodtest_blood1.paa";
_RBWhole2 = "\z\addons\dayz_code\gui\blood\bloodtest_blood2.paa";
_RBWhole3 = "\z\addons\dayz_code\gui\blood\bloodtest_blood3.paa";
_RBWhole4 = "\z\addons\dayz_code\gui\blood\bloodtest_blood4.paa";
_RBWhole5 = "\z\addons\dayz_code\gui\blood\bloodtest_blood5.paa";
_Aglut1 = "\z\addons\dayz_code\gui\blood\bloodtest_blood_true1.paa";
_Aglut2 = "\z\addons\dayz_code\gui\blood\bloodtest_blood_true2.paa";
_Aglut3 = "\z\addons\dayz_code\gui\blood\bloodtest_blood_true3.paa";
_Aglut4 = "\z\addons\dayz_code\gui\blood\bloodtest_blood_true4.paa";
_Aglut5 = "\z\addons\dayz_code\gui\blood\bloodtest_blood_true5.paa";
_wholeArray = [_RBWhole1,_RBWhole2,_RBWhole3,_RBWhole4,_RBWhole5];
_aglutArray = [_Aglut1,_Aglut2,_Aglut3, _Aglut4,_Aglut5];
_allDisplayed = false;
_water_closed = false;

r_interrupt = false;
r_doLoop = true;
r_A_watered = false;
r_B_watered = false;
r_D_watered = false;
r_control_watered = false;
r_canClick_resultsCard = false;
r_resultsCard_Clicked = false;
r_water_clicked = false;
r_needleclicked = 0;
r_control_done = false;
r_antiA_done = false;
r_antiB_done = false;
r_antiD_done = false;
_watered_complete = 0;
_rnd1 = round(random 4);
_rnd2 = floor(random 4);
_rnd3 = ceil(random 4);

_type = _unit getVariable ["blood_type", false];
_rh = _unit getVariable ["rh_factor", false];

while {!_isDone and r_doLoop} do {
_watered = r_A_watered or r_B_watered or r_D_watered or r_control_watered;

	//display untested images
	if (!_opened) then {
		if (alive _unit) then {
			_name ctrlSetText (name _unit);
		};
		_antiA ctrlSetText _antiAUntested;
		_antiB ctrlSetText _antiBUntested;
		_antiD ctrlSetText _antiDUntested;
		_Control ctrlSetText _controlUntested;
		_waterBottle ctrlSetText _waterBottleImage;
		_needle ctrlSetText _needleClosedImage;
		_resultsCard_hidden ctrlSetText _bloodTypeCardHidden;
		_opened = true;
	};

	//display clicked water bottle image
	if (r_water_clicked and !_water_displayed) then {
		_waterBottle ctrlSetText _waterBottleClickedImage;
		_water_displayed = true;
		player removeMagazine "bloodTester";
	};

	//display water marks
	if (r_water_clicked and _watered and (_watered_complete <= 4)) then {
		if (r_A_watered and !_A_Watered) then {
			_antiA ctrlSetText _watered_image;
			_A_Watered = true;
			_watered_complete = _watered_complete + 1;
		};
		if (r_B_watered and !_B_Watered) then {
			_antiB ctrlSetText _watered_image;
			_B_Watered = true;
			_watered_complete = _watered_complete + 1;
		};
		if (r_D_watered and !_D_Watered) then {
			_antiD ctrlSetText _watered_image;
			_D_Watered = true;
			_watered_complete = _watered_complete + 1;
		};
		if (r_control_watered and !_control_Watered) then {
			_Control ctrlSetText _watered_image;
			_control_Watered = true;
			_watered_complete = _watered_complete + 1;
		};
	};

	//open needle
	if ((r_needleclicked == 1) and !_needleOpened) then {
		_needle ctrlSetText _needleOpenImage;
		_needleOpened = true;
	};


	//close water
	if ((_watered_complete >= 4) and !_water_closed) then {
		_water_closed = true;
		_waterBottle ctrlSetText _waterBottleImage;
	};
	//needle clicked
	if ((r_needleclicked >= 2) and !_needleRed and _needleOpened and (_watered_complete >= 4) and !r_needleReset) then {
		_needle ctrlSetText _needleRedImage;
		_needleRed = true;
	};

	//reset needle
	if (_needleRed and r_needleReset) then {
		_needle ctrlSetText _needleOpenImage;
		_needleRed = false;
	};

	//fill with blood
		if (r_antiA_done and !_antiABlooded and _needleRed) then {
			r_needleReset = true;
			_antiA ctrlSetText _controlImage;
			_antiABlooded = true;
			_allClicked = _allClicked + 1;
		};
		if (r_antiB_done and !_antiBBlooded and _needleRed) then {
			r_needleReset = true;
			_antiB ctrlSetText _controlImage;
			_antiBBlooded = true;
			_allClicked = _allClicked + 1;
		};
		if (r_antiD_done and !_antiDBlooded and _needleRed) then {
			r_needleReset = true;
			_antiD ctrlSetText _controlImage;
			_antiDBlooded = true;
			_allClicked = _allClicked + 1;
		};
		if (r_control_done and !_control_displayed and _needleRed) then {
			r_needleReset = true;
			_Control ctrlSetText _controlImage;
			_control_displayed = true;
			_allClicked = _allClicked + 1;
		};

		_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));
		if (r_interrupt or !_isClose) then {
			r_doLoop = false;
		};
	//The magic happens
if (_allClicked == 4) then {
	switch (_type) do {
		case "A" : {
		if (!_allDisplayed) then {
			sleep 2;
			if (r_antiA_done and !_antiA_displayed) then {
				_antiA ctrlSetText (_aglutArray select _rnd1);
				_antiA_displayed = true;
			};
			if (r_antiB_done and !_antiB_displayed) then {
				_AntiB ctrlSetText (_wholeArray select _rnd2);
				_antiB_displayed = true;
			};
			if (r_antiD_done and !_antiD_displayed) then {
				if (_rh) then {
					_AntiD ctrlSetText (_aglutArray select _rnd3);
				} else {
					_AntiD ctrlSetText (_wholeArray select _rnd3);
				};
				_antiD_displayed = true;
			};
			_allDisplayed = true;
		};
		};
		case "B" : {
		if (!_allDisplayed) then {
			sleep 2;
			if (r_antiA_done and !_antiA_displayed) then {
				_antiA ctrlSetText (_wholeArray select _rnd1);
				_antiA_displayed = true;
			};
			if (r_antiB_done and !_antiB_displayed) then {
				_AntiB ctrlSetText (_aglutArray select _rnd2);
				_antiB_displayed = true;
			};
			if (r_antiD_done and !_antiD_displayed) then {
				if (_rh) then {
					_AntiD ctrlSetText (_aglutArray select _rnd3);
				} else {
					_AntiD ctrlSetText (_wholeArray select _rnd3);
				};
				_antiD_displayed = true;
			};
			_allDisplayed = true;
		};
		};
		case "AB" : {
		if (!_allDisplayed) then {
			sleep 2;
			if (r_antiA_done and !_antiA_displayed) then {
				_antiA ctrlSetText (_aglutArray select _rnd1);
				_antiA_displayed = true;
			};
			if (r_antiB_done and !_antiB_displayed) then {
				_AntiB ctrlSetText (_aglutArray select _rnd2);
				_antiB_displayed = true;
			};
			if (r_antiD_done and !_antiD_displayed) then {
				if (_rh) then {
					_AntiD ctrlSetText (_aglutArray select _rnd3);
				} else {
					_AntiD ctrlSetText (_wholeArray select _rnd3);
				};
				_antiD_displayed = true;
			};
			_allDisplayed = true;
		};
		};
		case "O" : {
		if (!_allDisplayed) then {
			sleep 2;
			if (r_antiA_done and !_antiA_displayed) then {
				_antiA ctrlSetText (_wholeArray select _rnd1);
				_antiA_displayed = true;
			};
			if (r_antiB_done and !_antiB_displayed) then {
				_AntiB ctrlSetText (_wholeArray select _rnd2);
				_antiB_displayed = true;
			};
			if (r_antiD_done and !_antiD_displayed) then {
				if (_rh) then {
					_AntiD ctrlSetText (_aglutArray select _rnd3);
				} else {
					_AntiD ctrlSetText (_wholeArray select _rnd3);
				};
				_antiD_displayed = true;
			};
			_allDisplayed = true;
		};
		};
	};

	r_canClick_resultsCard = true;
	if (r_resultsCard_Clicked and _antiD_displayed and _antiB_displayed and _antiA_displayed and _control_displayed and !_results_shown) then {
		_resultsCard_hidden ctrlShow false;
		_resultsCard_front ctrlShow true;
		_resultsCard_front ctrlSetText _bloodTypeCard;
		_results_shown = true;
	};
};
	if (_antiD_displayed and _antiB_displayed and _antiA_displayed and _control_displayed and _results_shown) then {
		r_doLoop = false;
		_isDone = true;
		[] spawn {
			sleep 7;
			player setVariable["blood_testDone",true,true];
			player setVariable["medForceUpdate",true];
		};
	};
	sleep 0.01;
};