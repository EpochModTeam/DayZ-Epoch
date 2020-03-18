/*-----------------------------------*/
// by strikerforce					//
/*--------------------------------*/

fnc_vectorActionCleanup = {
	private ["_s1","_s2","_staticRotate","_vector"];

	_s1 = _this select 0;
	_s2 = _this select 1;
	_staticRotate = ["STR_EPOCH_VECTORS_PITCH_FORWARD","STR_EPOCH_VECTORS_PITCH_BACK","STR_EPOCH_VECTORS_BANK_LEFT","STR_EPOCH_VECTORS_BANK_RIGHT","STR_EPOCH_VECTORS_RESET"];

	player removeAction s_player_toggleVector;
	s_player_toggleVector = -1;

	if (count s_player_toggleVectors != 0) then {
		{player removeAction _x;} count s_player_toggleVectors;
		s_player_toggleVectors = [];
		vectorActions = -1;
	};

	if (_s1 > 0) then {
		s_player_toggleVector = player addaction [format["<t color=""#ff8800"">" + localize "STR_EPOCH_ACTION_VECTORS" + " %1" +"</t>",vectorActionState],"\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,degreeActionState,1],7,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleVectors = [];
		{
			_vector = localize _x;
			vectorActions = player addaction [format["<t color=""#ffffff"">" + "    %1" +"</t>",_vector],"\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[_vector,degreeActionState,1],6,false,false];
			s_player_toggleVectors set [count s_player_toggleVectors,vectorActions];
		} count _staticRotate;
	};
};

fnc_degreeActionCleanup = {
	private ["_s1","_s2"];

	_s1 = _this select 0;
	_s2 = _this select 1;
	player removeAction s_player_toggleDegree;
	s_player_toggleDegree = -1;

	if (count s_player_toggleDegrees != 0) then {
		{player removeAction _x;} count s_player_toggleDegrees;
		s_player_toggleDegrees = [];
		degreeActions = -1;
	};

	if (_s1 > 0) then {
		s_player_toggleDegree = player addaction [format["<t color=""#ff8800"">" + localize "STR_EPOCH_VECTORS_DEGREES" + " %1" +"</t>",degreeActionState],"\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,degreeActionState,2],5,false,false];
	};
	if (_s2 > 0) then {
		s_player_toggleDegrees = [];
		{
			if (DZE_curDegree == _x) then {
				degreeActions = player addaction [format["<t color=""#ff0000"">" + "	" + localize "STR_EPOCH_ACTION_SNAP_SELECT" + " %1" +"</t>",_x],"\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,"SELECT",2,_x],4,false,false];
			} else {
				degreeActions = player addaction [format["<t color=""#ffffff"">" + "    " + localize "STR_EPOCH_ACTION_SNAP_SELECT" + " %1" +"</t>",_x],"\z\addons\dayz_code\compile\BuildVectors\build_vectors.sqf",[vectorActionState,"SELECT",2,_x],4,false,false];
			};

			s_player_toggleDegrees set [count s_player_toggleDegrees,degreeActions];
		} count DZE_vectorDegrees;
	};
};

fnc_SetPitchBankYaw = {
	private ["_sinaroundX","_cosaroundX","_dirY","_dirZ","_upY","_upZ","_sinaroundY","_cosaroundY","_dirX","_upX","_sinaroundZ","_cosaroundZ","_dirXTemp","_upXTemp","_object","_rotations","_aroundX","_aroundY","_aroundZ","_dir","_up"];

	_object = _this select 0;
	_rotations = _this select 1;
	_aroundX = _rotations select 0;
	_aroundY = _rotations select 1;
	_aroundZ = (360 - (_rotations select 2)) - 360;

	_dirX = 0;
	_dirY = 1;
	_dirZ = 0;
	_upX = 0;
	_upY = 0;
	_upZ = 1;

	if (_aroundX != 0) then {
		_sinaroundX = sin _aroundX;
		_cosaroundX = cos _aroundX;
		_dirY = _cosaroundX;
		_dirZ = _sinaroundX;
		_upY = -(_sinaroundX);
		_upZ = _cosaroundX;
	};

	if (_aroundY != 0) then {
		_sinaroundY = sin _aroundY;
		_cosaroundY = cos _aroundY;
		_dirX = _dirZ * _sinaroundY;
		_dirZ = _dirZ * _cosaroundY;
		_upX = _upZ * _sinaroundY;
		_upZ = _upZ * _cosaroundY;
	};

	if (_aroundZ != 0) then {
		_sinaroundZ = sin _aroundZ;
		_cosaroundZ = cos _aroundZ;
		_dirXTemp = _dirX;
		_dirX = (_dirXTemp * _cosaroundZ) - (_dirY * _sinaroundZ);
		_dirY = (_dirY * _cosaroundZ) + (_dirXTemp * _sinaroundZ);
		_upXTemp = _upX;
		_upX = (_upXTemp * _cosaroundZ) - (_upY * _sinaroundZ);
		_upY = (_upY * _cosaroundZ) + (_upXTemp * _sinaroundZ);
	};

	_dir = [_dirX, _dirY, _dirZ];
	_up = [_upX, _upY, _upZ];
	_object setVectorDirAndUp [_dir, _up];
};
