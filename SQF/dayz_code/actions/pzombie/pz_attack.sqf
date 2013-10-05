private ["_ent","_rnd","_move","_isZombie"];

if (!isNull cursorTarget) then {

	_ent = cursorTarget;
	_rnd = (round(random 9)) + 1;
	_move = "ZombieStandingAttack" + str(_rnd);
	player playMoveNow _move;
	_isZombie = _ent isKindOf "zZombie_base";

	if(player distance _ent < 5) then {

		if (_ent isKindOf "Animal" or _isZombie) then {
			_ent setDamage 1;
		} else {
			//["usecBreakLegs",[_target,player]] call broadcastRpcCallAll;
			usecBreakLegs = [_ent,player];
			publicVariable "usecBreakLegs";
		};

		[player,"hit",0,false] call dayz_zombieSpeak;

	};
	sleep 1;
	player switchmove "";
};