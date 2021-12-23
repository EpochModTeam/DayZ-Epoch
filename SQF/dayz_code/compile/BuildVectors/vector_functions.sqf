///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Author:	strikerforce
//
//	Updated by Victor the Cleaner
//
///////////////////////////////////////////////////////////////////////////////////////////////////

fnc_vectorActionCleanup = {

	local _ORA = "<t color='#ff8800'>";	// orange
	local _WHT = "<t color='#ffffff'>";	// white
	local _TAB = "	";
	local _END = "</t>";
	local _VEC = localize "STR_EPOCH_ACTION_VECTORS";
	local _txt = "";

	local _s1 = _this select 0;
	local _s2 = _this select 1;

	local _staticRotate = ["STR_EPOCH_VECTORS_PITCH_FORWARD","STR_EPOCH_VECTORS_PITCH_BACK","STR_EPOCH_VECTORS_BANK_LEFT","STR_EPOCH_VECTORS_BANK_RIGHT","STR_EPOCH_VECTORS_RESET"];

	player removeAction s_player_toggleVector;
	s_player_toggleVector = -1;

	{player removeAction _x;} count s_player_toggleVectors;
	vectorActions = -1;

	if (_s1 > 0) then {
		_txt = format[_ORA + _VEC + " %1" + _END, vectorActionState];
		s_player_toggleVector = player addAction [_txt, "\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,degreeActionState,1],7,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleVectors = [];
		{
			local _vector = localize _x;

			_txt = format[_WHT + _TAB + "%1" + _END, _vector];
			vectorActions = player addAction [_txt, "\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[_vector,degreeActionState,1],6,false,false];

			s_player_toggleVectors set [count s_player_toggleVectors, vectorActions];
		} count _staticRotate;
	};
};

fnc_degreeActionCleanup = {

	local _ORA = "<t color='#ff8800'>";	// orange
	local _RED = "<t color='#ff0000'>";	// red
	local _WHT = "<t color='#ffffff'>";	// white
	local _GRN = "<t color='#20E020'>";	// green
	local _DEG = localize "STR_EPOCH_VECTORS_DEGREES";
	local _SEL = localize "STR_EPOCH_ACTION_SNAP_SELECT";
	local _TAB = "	";
	local _END = "</t>";
	local _txt = "";

	local _s1 = _this select 0;
	local _s2 = _this select 1;

	player removeAction s_player_toggleDegree;
	s_player_toggleDegree = -1;

	{player removeAction _x;} count s_player_toggleDegrees;
	degreeActions = -1;

	if (_s1 > 0) then {
		_txt = format[_ORA + _DEG + " %1" + _END, degreeActionState];
		s_player_toggleDegree = player addAction [_txt, "\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,degreeActionState,2],5,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleDegrees = [];
		{
			local _COL = _WHT;
			if (DZE_curDegree == _x) then {_COL = _RED;};

			_txt = format[_TAB + _COL + _SEL + " %1" + _END, _x];
			degreeActions = player addAction [_txt, "\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,"SELECT",2,_x],4,false,false];

			s_player_toggleDegrees set [count s_player_toggleDegrees, degreeActions];
		} count DZE_vectorDegrees;
	};
};

fnc_SetPitchBankYaw = {

	local _object	= _this select 0;
	local _rotations= _this select 1;

	local _aroundX	= _rotations select 0;
	local _aroundY	= _rotations select 1;
	local _aroundZ	= -(_rotations select 2);
	
	local _dirX	= 0;
	local _dirY	= 1;
	local _dirZ	= 0;
	local _upX	= 0;
	local _upY	= 0;
	local _upZ	= 1;

	if (_aroundX != 0) then {
		local _sinaroundX = sin _aroundX;
		local _cosaroundX = cos _aroundX;
		_dirY = _cosaroundX;
		_dirZ = _sinaroundX;
		_upY = -_sinaroundX;
		_upZ = _cosaroundX;
	};

	if (_aroundY != 0) then {
		local _sinaroundY = sin _aroundY;
		local _cosaroundY = cos _aroundY;
		_dirX = _dirZ * _sinaroundY;
		_dirZ = _dirZ * _cosaroundY;
		_upX = _upZ * _sinaroundY;
		_upZ = _upZ * _cosaroundY;
	};

	if (_aroundZ != 0) then {
		local _sinaroundZ = sin _aroundZ;
		local _cosaroundZ = cos _aroundZ;
		local _dirXTemp = _dirX;
		_dirX = (_dirXTemp * _cosaroundZ) - (_dirY * _sinaroundZ);
		_dirY = (_dirY * _cosaroundZ) + (_dirXTemp * _sinaroundZ);
		local _upXTemp = _upX;
		_upX = (_upXTemp * _cosaroundZ) - (_upY * _sinaroundZ);
		_upY = (_upY * _cosaroundZ) + (_upXTemp * _sinaroundZ);
	};

	local _dir = [_dirX, _dirY, _dirZ];
	local _up = [_upX, _upY, _upZ];
	_object setVectorDirAndUp [_dir, _up];
};
