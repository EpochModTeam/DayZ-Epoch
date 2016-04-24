/*
File: fn_Padlock.sqf
Author: Deadactionman
Artwork: Dead Meat
Date: 25/01/15 (uk)
Description:
	DayZ Padlock Functions
*/

padlockIDD = 76761;

padlockColourDay = [0.85,0.85,0.85,1];
padlockColourNight = [0.18,0.18,0.18,1];

padlock_open = {
	disableSerialization;
	_sunrise = call world_sunRise;
	_colour = padlockColourDay;
	if(daytime > _sunrise && daytime < (24 - _sunrise)) then {
		_colour = padlockColourDay;
	} else
	{
		_colour = padlockColourNight;
	};
	
	_path = "z\addons\dayz_code\gui\padlock\";
	_target = _this select 0;		// TARGET LOCKABLE OBJECT
	_newCode = _this select 1;		// TRUE/FALSE SETTING A NEW CODE?
	_digitArray = [];
	_codeHistory = count(_target getVariable["dayz_padlockHistory",[]]) == 4;
	
	if (!_newCode && _codeHistory) then {_digitArray = _target getVariable["dayz_padlockHistory",[]];};
	if (count _digitArray != 4) then {
		// NO OBJECT CODE SO GENERATE A RANDOM ONE
		_digitArray = [0,0,0,0];
		{
			_digitArray set[_forEachIndex,floor(random 10)];
		} forEach _digitArray;
	};
	createDialog "DAYZ_PADLOCK";
	waitUntil{!isNull (findDisplay padlockIDD)};
	
	ctrlEnable [1200,true];
	//ctrlSetText [1200, format["z\addons\dayz_code\gui\padlock\padlock_512X512.paa"]];	
	_control = ((findDisplay padlockIDD) displayCtrl 1200);
	_control ctrlSetTextColor _colour;
	
	uiNamespace setVariable ["dayz_padlockColour", _colour];	
	uiNamespace setVariable ["dayz_padlockCode", _digitArray];	
	uiNamespace setVariable ["dayz_padlockNewCode",_newCode];
	uiNamespace setVariable ["dayz_padlockTarget",_target];
	
	_null = [_digitArray] spawn padlock_digitSet;
};

padlock_click = {
	_digitArray = uiNamespace getVariable ["dayz_padlockCode", [0,0,0,0]];
	_buttonID = _this;
	_newDigit = 0;
	_inc = 0;
	_id = 0;
	switch (_buttonID) do {
		case "1L": {_inc = 1;_id = 0;};
		case "1R": {_inc = -1;_id = 0;};
		case "2L": {_inc = 1;_id = 1;};
		case "2R": {_inc = -1;_id = 1;};
		case "3L": {_inc = 1;_id = 2;};
		case "3R": {_inc = -1;_id = 2;};
		case "4L": {_inc = 1;_id = 3;};
		case "4R": {_inc = -1;_id = 3;};
	};
	_newDigit = (_digitArray select _id) + _inc;
	
	if (_newDigit < 0) then {
		_newDigit = 9;
	}; 
	if (_newDigit > 9) then {
		_newDigit = 0;
	};

	_digitArray set[_id,_newDigit];
	uiNamespace setVariable ["dayz_padlockCode", _digitArray];	
	_null = [_digitArray] spawn padlock_digitSet;
};

padlock_digitSet = {
	disableSerialization;
	_digitArray = _this select 0;
	_colour = uiNamespace getVariable ["dayz_padlockColour", padlockColourDay];
	{
		ctrlEnable [_x,true];
		ctrlSetText [_x, format["z\addons\dayz_code\gui\padlock\%1.paa", (_digitArray select _forEachIndex)]];
		_control = ((findDisplay padlockIDD) displayCtrl _x);
		_control ctrlSetTextColor _colour;
	} forEach [1201,1202,1203,1204];
	uiNamespace setVariable ["dayz_padlockCode", _digitArray];
};

padlock_hasp = {
	_digitArray = uiNamespace getVariable ["dayz_padlockCode", [0,0,0,0]];
	_newCode = uiNamespace getVariable ["dayz_padlockNewCode",false];
	_target = uiNamespace getVariable ["dayz_padlockTarget",player];
	
	if (_newCode) then {
		//[_unitSending,_object,_code]
		PVDZ_Server_processSetAccessCode = [player,_target,_digitArray];
		publicVariableServer "PVDZ_Server_processSetAccessCode";
	}
	else
	{
		//[_unitSending,_object,_code]
		PVDZ_Server_processCode = [player,_target,_digitArray];
		publicVariableServer "PVDZ_Server_processCode";
	};
	closeDialog(0);
	
};



