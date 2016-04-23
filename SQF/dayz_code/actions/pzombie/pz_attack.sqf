player removeAction s_player_attack;
s_player_attack = 1;

private ["_ent","_rnd","_move"];

_ent = _this select 3;
_rnd = (round(random 9)) + 1;
_move = "ZombieStandingAttack" + str(_rnd);
player playMoveNow _move;

if (!isNull _ent && {player distance _ent < 5}) then {
	if (_ent isKindOf "Animal" || _ent isKindOf "zZombie_base") then {
		_ent setDamage 1;
	} else {
		/* PVS/PVC - Skaronator */
		PVDZ_send = [_ent,"Legs",[_ent,player]];
		publicVariableServer "PVDZ_send";
	};
	[player,"hit",0,false] call dayz_zombieSpeak;	
};

uiSleep 1;
player switchMove "";
s_player_attack = -1;