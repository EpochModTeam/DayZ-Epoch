private ["_target","_ent","_rnd","_move","_isZombie"];
_target = _this select 3;
_ent = _target;

// remove menu
player removeAction s_player_pzombiesattack;
s_player_pzombiesattack = 1;

_rnd = (round(random 9)) + 1;
_move = "ZombieStandingAttack" + str(_rnd);
player playMoveNow _move;

_isZombie = _ent isKindOf "zZombie_base";

if(player distance _target < 5) then {

	if (_ent isKindOf "Animal" or _isZombie) then {
		_ent setDamage 1;
	} else {
		//["usecBreakLegs",[_target,player]] call broadcastRpcCallAll;
		usecBreakLegs = [_target,player];
		publicVariable "usecBreakLegs";
	};

	[player,"hit",0,false] call dayz_zombieSpeak;

};

sleep 1;

player switchmove "";

s_player_pzombiesattack = -1;