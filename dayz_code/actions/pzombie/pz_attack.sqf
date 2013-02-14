private ["_item","_ent","_cnt","_index","_wound","_damage","_rnd","_move"];
_item = _this select 3;
_ent = _item;

// remove menu
player removeAction s_player_pzombiesattack;
s_player_pzombiesattack = 1;

_rnd = round(random 9) + 1;
_move = "ZombieStandingAttack" + str(_rnd);
player playMoveNow _move;

sleep 1;

_isZombie = _ent isKindOf "zZombie_base";

// TODO add distance check and maybe los

if (_ent isKindOf "Animal" or _isZombie) then {
	_ent setDamage 1;
} else {

	// TODO TEST AND Improve
	_cnt = count (DAYZ_woundHit select 1);
	_index = floor (random _cnt);
	_index = (DAYZ_woundHit select 1) select _index;
	_wound = (DAYZ_woundHit select 0) select _index; 

	_damage = 0.1 + random (1.2);

	[_item, _wound, _damage, player,"zombie"] call fnc_usec_damageHandler;
};




[player,"hit",0,false] call dayz_zombieSpeak;
			

player switchmove "";

sleep 1;

s_player_pzombiesattack = -1;