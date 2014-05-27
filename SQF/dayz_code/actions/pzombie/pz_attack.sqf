private ["_ent","_rnd","_move","_isZombie"];

if (!isNull cursorTarget) then {

	_ent = cursorTarget;
	_rnd = (round(random 9)) + 1;
	_move = "ZombieStandingAttack" + str(_rnd);
	player playMoveNow _move;
	_isZombie = _ent isKindOf "zZombie_base";

	if(player distance _ent < 5) then {

		if (_ent isKindOf "Animal" || _isZombie) then {
			_ent setDamage 1;
		} else {
			/* PVS/PVC - Skaronator */
			PVDZE_send = [_ent,"PZ_BreakLegs",[_ent,player]];
			publicVariableServer "PVDZE_send";
		};

		[player,"hit",0,false] call dayz_zombieSpeak;

	};
	sleep 1;
	player switchmove "";
};