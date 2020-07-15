/*
	DayZ Epoch Smoking Chimneys by JasonTM
	Description: This configurable function will scan for houses and industrial exhaust stacks near the player and create smoke effects at the chimney opening.
	parameters:
		1. Radius to search around the player for buildings. Default - 500 meters.
		2. Chance that a building will spawn a smoke particle source (0 - 1). Default - .3.
		3. Max number of houses to spawn a particle source around a player. Default - 30.
	Usage: [500, .3, 30] execVM "path/fn_chimney.sqf";
	
	Credit to Maddmatt for BIS_Effects_Burn
	Credit to Karel Moricky for fnc_houseEffects.sqf
*/

private ["_int","_relPos","_ps","_cl","_pos","_type","_li","_array","_params","_max","_chance","_radius","_count"];

_radius = _this select 0;
_chance = _this select 1;
_max = _this select 2;
_array = [];
_params = [];
_hasPS = false;
_count = 0;

while {1 == 1} do {
	if (_count < _max) then {
		{
			if !(_x getVariable ["chimneyCheck",false]) then {
				_type = typeOf _x;
				_hasPS = false;
				if (_type in ["Land_Ind_Stack_Big","Land_komin","Land_Ind_MalyKomin"]) then { // Industrial smoke stacks spawn heavier smoke effects and light sources.
					if (_type == "Land_Ind_Stack_Big") then {_params = [3,[-1.16309,3.48633,29.4432]];};
					if (_type == "Land_komin") then {_params = [3,[0.0849609,0.819702,14.1062]];};
					if (_type == "Land_Ind_MalyKomin") then {_params = [2,[0.685303,0.271484,19.4]];};
					_int = _params select 0;
					_relPos =_params select 1;
					_pos = _x modelToWorld _relPos;
					_ps = "#particlesource" createVehicleLocal _pos;
					_ps setPos _pos;
					_li = "#lightpoint" createVehicleLocal _pos;
					_li setLightBrightness (_int/30);
					_li setLightAmbient[0.8, 0.6, 0.2];
					_li setLightColor[1, 0.5, 0.4];
					_li lightAttachObject [_x, _relPos];
					_cl = 0.8/_int;
					_ps setDropInterval (0.01 + 0.02*_int);
					_ps setParticleRandom [0.7*_int, [1 - _int/10,1 - _int/10,1 - _int/10], [0.2*_int, 0.2*_int, 0.05*_int], 0, 0.3, [0.05, 0.05, 0.05, 0], 0, 0];
					_ps setDropInterval (0.01 + 0.02*_int);
					_ps setParticleParams 
					[["\Ca\Data\ParticleEffects\Universal\Universal", 16, 7, 48], 
					"","Billboard",1, 3*_int, 
					_relPos,[0, 0, 0.5*_int],
					0, 0.05, 0.04, 0.05, [0.5*_int, 3*_int],
					[[_cl, _cl, _cl, 0.2],[_cl, _cl, _cl, 1],[_cl, _cl, _cl, 1],
					[0.05+_cl, 0.05+_cl, 0.05+_cl, 0.9],[0.1+_cl, 0.1+_cl, 0.1+_cl, 0.6],[0.2+_cl, 0.2+_cl, 0.2+_cl, 0.3], [1,1,1, 0]], 
					[0.8,0.3,0.25], 1, 0, "", "", _x];
					_array = _array + [[_x,_ps,_li]];
					_count = _count + 1;
					_hasPS = true;
				} else {
					if (random 1 < _chance) then {
						for "_i" from 0 to 10 do {
							_relPos = _x selectionPosition format ["AIChimney_small_%1", _i];
							if (_relPos distance [0,0,0] > 0) exitWith { // Chimney found
								_pos = _x modelToWorld _relPos;
								_ps = "#particlesource" createVehicleLocal _pos;
								_ps setParticleRandom [1, [0, 0, 0], [0.1, 0.1, 0.1], 2, 0.2, [0.05, 0.05, 0.05, 0.05], 0, 0];
								_ps setParticleParams [["\Ca\Data\ParticleEffects\Universal\universal.p3d", 16, 8, 16],
								"", "Billboard", 1, (4 + random 4),
								[0,0,0], [0, 0, 0.5 + random 0.5],
								1, 1.275, 1, 0.066, [0.4, 1 + random 0.5, 2 + random 2],
								//[[0.4, 0.4, 0.4*1.2, 0.1 + random 0.1], [0.5, 0.5, 0.5*1.2, 0.05 + random 0.05], [0.7, 0.7, 0.7*1.2, 0]],
								[[0.4, 0.4, 0.4*1.2, 0.6], [0.5, 0.5, 0.5*1.2, 0.3], [0.7, 0.7, 0.7*1.2, 0]], // darker smoke
								[0], 1, 0, "", "", ""];
								_ps setDropInterval 0.3;
								_array = _array + [[_x,_ps]];
								_count = _count + 1;
								_hasPS = true;
							};
						};
					};
				};
				_x setVariable ["chimneyCheck",true]; // set variable on all buildings so they don't get checked continuously.
				if !(_hasPS) then {_array = _array + [[_x]];}; // place all buildings into the array for proximity checking.
			};
			if (_count == _max) exitWith {}; // Exit the loop when desired number of houses have active chimneys.
		} forEach ((getPos player) nearObjects ["House", _radius]);
	};
	
	uiSleep 30;
	//diag_log formatText ["[fn_chimney] count of active chimneys: %1",_count];
	//diag_log formatText ["[fn_chimney] array of buildings: %1",_array];
	{
		if ((player distance (getPos (_x select 0))) > (_radius + 300)) then { // Check to see if the player has moved far enough away from the building.
			(_x select 0) setVariable ["chimneyCheck", false]; // set variable to false so it can be checked again.
			if (count _x > 1) then {deleteVehicle (_x select 1); _count = _count - 1;}; // delete particle source if it exists.
			if (count _x > 2) then {deleteVehicle (_x select 2);}; // delete light source on stacks.
			_array = [_array,_forEachIndex] call fnc_deleteAt;
		};
	} forEach _array;
};
