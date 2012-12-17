private["_unit","_distance","_i","_listTalk","_zombie","_targets","_pos"];
//Alert Zed's to noise of shot
_unit = 	_this select 0;
_distance = _this select 1;
_doRun = 	_this select 2;
_pos = 		_this select 3;
_listTalk = _pos nearEntities ["zZombie_Base",_distance];

//hint str(_listTalk);

{
	_zombie = _x;
	if (_doRun) then {
		_targets = _zombie getVariable ["targets",[]];
		if (!(_unit in _targets)) then {
			_targets set [count _targets,_unit];
			_zombie setVariable ["targets",_targets,true];
		};
	} else {
		_zombie setVariable ["myDest",_pos,true];
	};
} forEach _listTalk;
_listTalk = _pos nearEntities [["DZ_Fin, DZ_Pastor"], _distance * 3];

{
	_dog = _x;
	//Ensure dog is tamed AND is not players own dog
	if (_doRun && (_dog getVariable ["characterID", 0]) != 0) then {
		_targets = _dog getVariable ["targets",[]];
		if (!(_unit in _targets)) then {
			_targets set [count _targets,_unit];
			_dog setVariable ["targets",_targets,true];
		};
	}
} forEach _listTalk;