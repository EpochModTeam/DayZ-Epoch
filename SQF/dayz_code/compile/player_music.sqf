private ["_sound","_num","_length","_pause"];
while {!r_player_dead} do {
	_num = floor(random 36);
	_sound = "z_suspense_" + str(_num);
	_length = getNumber(configFile >> "cfgMusic" >> _sound >> "Duration");
	_pause = ((random 5) + 2) + _length;
	if (!r_player_unconscious && !r_pitchWhine) then {
		playMusic _sound;
	};
	sleep _pause;
};