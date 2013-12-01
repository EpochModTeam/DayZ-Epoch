// init_related_scripts.sqf ArmA2 revive
// � AUGUST 2010 - norrin 

// Functions

// Added pvEH - scripts modified to remove the need for sending long strings via setVehicleInit to reduce network traffic and JIP load - 04072010

// INCLUDE REQUIRED GAME CODES
#include "\ca\editor\Data\Scripts\dikCodes.h"

//Settings

private ["_id","_rnd","_lowBlood"];
usec_bandage_recovery = 5;		//time to recover after bandaging

//"colorCorrections" ppEffectEnable true;
//"dynamicBlur" ppEffectEnable true;

//[man2] call fnc_usec_damageHandle;
//[player] call fnc_usec_damageHandle;

//random morphine chance
//Epi pen not working chance
//Water Unconscious handling
//	localize "CLIENT: Medical System Initiated";

while {true} do {
	//hintSilent format["Injured: %1\nUnconscious: %2 (%7)\nBlood: %5\nPain: %6\nMust Evac: %8\nHandler: %3\nAction: %4\nLeg Damage: %9\nArm Damage: %10\nInfected: %11",r_player_injured,r_player_unconscious,r_player_handler,r_action,r_player_blood,r_player_inpain,r_player_timeout,r_player_dead, player getVariable ["hit_legs",0], player getVariable ["hit_arms",0],r_player_infected];
	
	if (r_player_blood <= 0) then {
		[player,900] call fnc_usec_damageUnconscious;
		_id = [dayz_sourceBleeding,"bled"] spawn player_death;
	};
	
	if ((r_player_blood <= 3000) and !r_player_unconscious) then {
		_rnd = random 100;
		if (_rnd > 99) then {
			[player,((random 0.1) + 0.2)] call fnc_usec_damageUnconscious;
		};
	};
	
	//Handle Unconscious player
	if ((r_player_unconscious) and (!r_player_handler1)) then {
		//localize "CLIENT: Start Unconscious Function";
		[] spawn fnc_usec_unconscious;
	};
	
	//Handle player bleeding
	if ((r_player_injured) and (!r_player_handler)) then {
		r_player_handler = true;
		sleep 1;
		//localize "CLIENT: Start Player Bleeding";
		[] spawn fnc_usec_playerBleed;	//publicizes the blood value at regular intervals
		[] spawn fnc_med_publicBlood;
	};
	
	//Handle player infection
	if ((r_player_infected) and (!r_player_handler)) then {
		r_player_handler = true;
		sleep 1;
		[] spawn fnc_med_publicBlood;
	};

	//Add player actions
	[] call fnc_usec_damageActions;
	[] call fnc_usec_selfActions;
	
	//Low Blood Effects
	if (!r_player_unconscious) then {
		if (((r_player_blood/r_player_bloodTotal) < 0.35)) then {
			r_player_lowblood = true;
			playSound "heartbeat_1";
			addCamShake [2, 0.5, 25];
			if (r_player_lowblood) then {
				0 fadeSound ((r_player_blood/r_player_bloodTotal) + 0.5);
				"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [4]; "dynamicBlur" ppEffectCommit 0.2;
			};
			sleep 0.5;
			if (r_player_lowblood) then {
				"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 0.5;
			};
			sleep 0.5;
			_lowBlood =	player getVariable ["USEC_lowBlood", false];
			if ((r_player_blood < r_player_bloodTotal) and !_lowBlood) then {
				player setVariable["USEC_lowBlood",true,true];
			};
		};
	};
	sleep 1;
};
endLoadingScreen;