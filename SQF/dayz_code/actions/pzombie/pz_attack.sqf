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
			PVDZ_send = [_ent,"Legs",[_ent,player]];
			publicVariableServer "PVDZ_send";
		};

		[player,"hit",0,false] call dayz_zombieSpeak;

	};
	uiSleep 1;
	player switchmove "";
};