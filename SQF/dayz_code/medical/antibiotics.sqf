private ["_hasMeds","_med"];
_med = "ItemAntibiotic";
_hasMeds = _med in magazines player;
if (_hasMeds) then {
	player removeMagazine _med;
};
//remove option
player removeAction s_player_antiobiotic;
s_player_antiobiotic = -1;

//remove infection
r_player_infected = false;
player setVariable["USEC_infected",false,true];