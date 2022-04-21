/*
	This function simulates turning "ItemAPSI_DZE" on and off to protect against EVR storms.
	Players need to have post-processing effects enabled in order to see the film grain effects.
*/

// Create the particle effect
if (isNil "DZE_APSI_SFX") then {
	DZE_APSI_SFX = ppEffectCreate ["filmGrain", 2001];
	DZE_APSI_SFX ppEffectAdjust [0.15, 1, 1, 0.1, 1, false];
	DZE_APSI_SFX ppEffectCommit 0;
};

closeDialog 0;

if (player getVariable["APSIState",false]) then {
	player setVariable["APSIState",false];
	playSound "ns_apsi_off";
	DZE_APSI_SFX ppEffectEnable false;
	cutRsc ["RscAPSI_Off","PLAIN"];
} else {
	player setVariable["APSIState",true];
	playSound "ns_apsi_on";
	DZE_APSI_SFX ppEffectEnable true;
	cutRsc ["RscAPSI_On","PLAIN"];
	
	// monitor the player's inventory and turn the effect off if the APSI is removed.
	[] spawn {
		while {true} do {
			uiSleep 1;
			if !(player getVariable["APSIState",false]) exitWith {
				//diag_log "Player has turned the APSI off";
			};
			if !(player hasWeapon "ItemAPSI_DZE") exitWith {
				DZE_APSI_SFX ppEffectEnable false;
				playSound "ns_apsi_off";
				player setVariable["APSIState",false];
				//diag_log "Player has removed the APSI from inventory";
			};
		};
	};
};

