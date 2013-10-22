private ["_unit","_id"];
_unit = _this select 0;
_id = _unit addeventhandler ["HandleDamage",{_this call local_zombieDamage}];
_id = _unit addeventhandler ["Killed",{[_this,"zombieKills"] call local_eventKill}];
