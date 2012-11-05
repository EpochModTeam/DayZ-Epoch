_dog = _this select 0;
_array = _this select 3;
_handle = _array select 0;
_watchDog = _array select 1;

_handle setFSMVariable ["_watchDog",_watchDog];

_actionWarn = _handle getFSMVariable "_actionWarn";
_actionDir = _handle getFSMVariable "_actionDir";
_dog removeAction _actionWarn;

if (_watchDog) then {
	_actionWarn = _dog addAction ["Quiet",_actionDir + "warn.sqf",[_handle,false], 2, false, true];
	_handle setFSMVariable ["_actionWarn",_actionWarn];
	_handle setFSMVariable ["_idleTime",5];
	while {_watchDog and alive _dog} do {
		_watchDog = _handle getFSMVariable "_watchDog";
		_senseSkill = _handle getFSMVariable "_senseSkill";
		if (_watchDog) then {
			_nearby = (getPosATL _dog) nearEntities ["CAManBase",_senseSkill];
			_nearby = _nearby - [player];
			if (count _nearby > 0) then {
				//_chance = (3 - (count _nearby));
				//hintSilent str(_chance);
				[_dog,"dog_growl",2,false] call dayz_zombieSpeak;
			} else {
				/*
				_nearby = (getPosATL _dog) nearEntities ["CAAnimalBase",_senseSkill];
				_nearby = _nearby - [_dog];
				[_dog,"dog_bark",1,false] call dayz_zombieSpeak;
				*/
			};
		};
		sleep 2;
	};
} else {
	_actionWarn = _dog addAction ["Alert",_actionDir + "warn.sqf",[_handle,true], 2, false, true];
	_handle setFSMVariable ["_actionWarn",_actionWarn];
	_handle setFSMVariable ["_idleTime",1];
};