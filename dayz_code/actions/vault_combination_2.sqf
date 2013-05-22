private ["_buy","_number"];

// start combination string build
dayz_combination = _this select 3;
_number = 0;

{player removeAction _x} forEach s_player_combi;s_player_combi = [];

for "_x" from 1 to 10 do {
	_buy = player addAction [str(_number), "\z\addons\dayz_code\actions\vault_combination_3.sqf",str(_number), 99, true, false, "",""];
	s_player_combi set [count s_player_combi,_buy];
	_number = _number + 1;
};


