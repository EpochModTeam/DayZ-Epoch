/*	
	* EVR Storms Client Side Script for DayZ Epoch 1.0.7+ by JasonTM
	* Original Blowout Module for Nightstalkers: Shadow of Namalsk by Sumrak
	* sumrak<at>nightstalkers.cz
	* Players must have post processing effects enabled in video options in order to experience the visual effects in this script.
*/

fnc_evr = {
	local _hasAPSI = (player hasWeapon "ItemAPSI_DZE" && {player getVariable ["APSIState", false]});

	call {
		if (_this == "Stage1") exitWith {
			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
			
			uiSleep 4;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
			uiSleep 4;
			playSound "ns_misc4";
		};
			
		if (_this == "Stage2") exitWith {
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				uiSleep 0.2;
				playSound "ns_evrDetect";
				uiSleep 0.2;
				cutRsc ["RscAPSI","PLAIN"];
			} else {
				uiSleep 0.4;
			};
			
			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;

			uiSleep 10;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
		};

		if (_this == "Stage3") exitWith {
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				uiSleep 0.2;
				playSound "ns_evrDetect";
				uiSleep 0.2;
				cutRsc ["RscAPSI_Detected","PLAIN"];
			} else {
				uiSleep 0.4;
			};
			
			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;

			uiSleep 10;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
		};
			
		if (_this == "Stage4") exitWith {
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				uiSleep 0.2;
				playSound "ns_evrDetect";
				uiSleep 0.2;
				//cutRsc ["RscAPSI_Protected","PLAIN"];
			} else {
				uiSleep 0.4;
			};
			
			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;

			uiSleep 7;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
		};
			
		if (_this == "Stage5") exitWith {
			DZE_EVRStormRunning = true;
			[player,false] call fnc_setCombat;
			
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				uiSleep 0.2;
				playSound "ns_evrDetect";
				uiSleep 0.2;
				cutRsc ["RscAPSI_Protected","PLAIN"];
			} else {
				uiSleep 0.4;
			};

			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;

			uiSleep 5;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
		};
			
		if (_this == "Stage6") exitWith {		
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				uiSleep 0.2;
				playSound "ns_evrDetect";
				uiSleep 0.2;
			} else {
				uiSleep 0.4;
			};

			playSound "ns_misc4";
			playSound "ns_drone2";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;

			uiSleep 3;

			playSound "ns_drone1";
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.2;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.1;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.25;
			"chromAberration" ppEffectEnable false;
		};

		if (_this == "Stage7") exitWith {			
			if (_hasAPSI) then {
				playSound "ns_evrDetect";
				cutRsc ["RscAPSI_Start","PLAIN"];
			};

			playSound "ns_evrBegin";
			"dynamicBlur" ppEffectAdjust [8];
			"dynamicBlur" ppEffectEnable true;
			"dynamicBlur" ppEffectCommit 0;
			"dynamicBlur" ppEffectAdjust [0.1];
			"dynamicBlur" ppEffectCommit 0.75;
			"chromAberration" ppEffectAdjust [0.25,0,true];
			"chromAberration" ppEffectEnable true;
			"chromAberration" ppEffectCommit 0.5;
			uiSleep 0.5;
			"chromAberration" ppEffectAdjust [-0.15,0,true];
			"chromAberration" ppEffectCommit 0.35;
			uiSleep 0.5;
			"chromAberration" ppEffectAdjust [-0.05,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 0.20;
			"chromAberration" ppEffectAdjust [0,0,true];
			"chromAberration" ppEffectCommit 0.20;
			uiSleep 1;
			"chromAberration" ppEffectEnable false;
			"dynamicBlur" ppEffectAdjust [3];
			"dynamicBlur" ppEffectCommit 2.75;
			/*
			local _effect = ppEffectCreate ["colorCorrections", 1555];
			_effect ppEffectEnable true;
			_effect ppEffectAdjust [1.0, 1.0, -0.1, [1.0, 0.2, 0.2, 0.0], [1.0, 0.4, 0.0, 0.1],[1.0,0.3,0.3, 0.5]];
			_effect ppEffectCommit 2;
			*/
			
			uiSleep 5;

			// Define arrays of sound effects
			local _hit = ["ns_evrHit1","ns_evrHit2","ns_evrHit3"];
			local _wave = ["ns_evrWave1","ns_evrWave2","ns_evrWave3"];
			#define FLASH if (DZE_EVRWhiteFlash) then {titleText["","WHITE OUT",1]; titleText["","WHITE IN",1]; uiSleep 0.25;};
			
			FLASH
			playSound (_hit select (round (random 2)));
			"dynamicBlur" ppEffectAdjust [3];
			"dynamicBlur" ppEffectCommit 5;
			uiSleep 1;

			FLASH
			playSound (_hit select (round (random 2)));
			"dynamicBlur" ppEffectAdjust [2.4];
			"dynamicBlur" ppEffectCommit 6;
			uiSleep 4;
			
			local _effect = ppEffectCreate ["colorCorrections", 1555];
			_effect ppEffectEnable true;
			_effect ppEffectAdjust [1.0, 1.0, -0.1, [1.0, 0.2, 0.2, 0.0], [1.0, 0.4, 0.0, 0.1],[1.0,0.3,0.3, 0.5]];
			_effect ppEffectCommit 2;
			
			playSound (_wave select (round (random 2)));
			uiSleep 0.3;

			FLASH
			playSound (_hit select (round (random 2)));
			uiSleep 1;

			playSound (_wave select (round (random 2)));
			uiSleep 2;

			FLASH
			playSound (_hit select (round (random 2)));
			uiSleep 1;

			FLASH
			playSound (_wave select (round (random 2)));

			if (!_hasAPSI) then {
				playSound "ns_evrPsy"; // This is the voices sound file
			};
			
			uiSleep 4;
			FLASH
			playSound (_wave select (round (random 2)));

			_effect ppEffectAdjust [1.0, 1.0, -0.1, [1.0, 0.1, 0.1, 0.0], [1.0, 0.1, 0.0, 0.1],[1.0,0.1,0.0, 0.5]];
			_effect ppEffectCommit 6;
			uiSleep 1;

			playSound (_hit select (round (random 2)));
			uiSleep 3;

			FLASH
			playSound (_wave select (round (random 2)));

			_effect ppEffectAdjust [1.0, 1.0, -0.1, [0.0, 0.0, 0.0, 0.0], [0.0, 0.0, 0.0, 5.0],[0.4,0.0,0.0, 0.7]];
			_effect ppEffectCommit 1;
			
			_hasAPSI = (player hasWeapon "ItemAPSI_DZE" && {player getVariable ["APSIState", false]}); // A player can enable the APSI last minute, so we check just before the knockout.
			
			// Using this technique from fn_unconscious
			disableUserInput true; disableUserInput true;
			disableUserInput false; disableUserInput false;
			disableUserInput true; disableUserInput true;
			
			local _vehicle = vehicle player;
			
			if (player == _vehicle) then {
				if (_hasAPSI || {DZE_EVRProtectInside && dayz_inside}) then {
					player switchMove "";
					[objNull, player, rswitchMove, ""] call RE;
				} else {
					player switchMove "AcinPercMrunSnonWnonDf_agony"; // knockout animation
					[objNull, player, rSwitchMove, "AcinPercMrunSnonWnonDf_agony"] call RE;
				};
			} else {
				if (DZE_EVRHandleVehicles && {isEngineOn _vehicle && ((speed _vehicle) > 10)}) then {
					local _fuel = fuel _vehicle;
					_vehicle setFuel 0;
					player action ["engineOff",_vehicle];
					_vehicle setFuel _fuel;
				} else {
					if (!_hasAPSI && {!DZE_EVRProtectInside || (DZE_EVRProtectInside && !dayz_inside)}) then {
						player action ["eject",_vehicle];
						[] spawn {
							uiSleep 3;
							player switchMove "AcinPercMrunSnonWnonDf_agony"; // knockout animation
							[objNull, player, rSwitchMove, "AcinPercMrunSnonWnonDf_agony"] call RE;
						};
					};					
				};
			};

			uiSleep 0.1;
			playSound "ns_evrFullWave";
			uiSleep 0.1;
			titleText["","BLACK OUT",1];

			if (!_hasAPSI && {!DZE_EVRProtectInside || (DZE_EVRProtectInside && !dayz_inside)}) then {
				r_player_inpain = true;
				player setVariable["USEC_inPain",true,true];
				local _blood = r_player_blood - ((DZE_EVRBloodLoss select 0) max random(DZE_EVRBloodLoss select 1)); // Player is not inside a building so reduce blood.
				r_player_blood = [_blood,1000] select (_blood < 1000); // Player will have at least 1000 blood.
			};

			uiSleep 1;
			4 fadeSound 0;
			uiSleep 10;
			
			if (dayz_soundMuted) then {
				6 fadeSound 0.25;
			} else {
				6 fadeSound 1;
			};
			titleText["","BLACK IN",10];
			ppEffectDestroy _effect;

			if (DZE_EVRDamageItemsChance > 0) then {
				local _items = [];
				{
					local _tool = _x select 0;
					if (player hasWeapon _tool) then {
						if (random 1 <= DZE_EVRDamageItemsChance) then {
							player removeWeapon _tool;
							(_x select 1) call player_addDuplicateTool;
							_items set [count _items, (getText(configFile >> "CfgWeapons" >> _tool >> "displayName"))];
						};
					};
				} count DZE_EVRDamageItems;

				if (count _items > 0) then {
					format[localize "STR_EVR_DAMAGED_ITEMS",_items] call dayz_rollingMessages;
				};
			};

			"dynamicBlur" ppEffectAdjust [0];
			"dynamicBlur" ppEffectCommit 16;

			if (!_hasAPSI) then {
				if (player == vehicle player && {!DZE_EVRProtectInside || (DZE_EVRProtectInside && !dayz_inside)}) then {
					uiSleep 10; // 10 second knockout.
					[nil, player, rSWITCHMOVE, "AmovPpneMstpSnonWnonDnon_healed"] call RE;
					player SWITCHMOVE "AmovPpneMstpSnonWnonDnon_healed";
					PVDZ_plr_SwitchMove = [player,"AmovPpneMstpSnonWnonDnon_healed"];
					publicVariableServer "PVDZ_plr_SwitchMove"; //Needed to execute switchMove on server machine. rSwitchMove only executes on other clients
					player playMoveNow "AmovPpneMstpSnonWnonDnon_healed";
					
					if ({getNumber (configFile >> "CfgWeapons" >> _x >> "type") in [1,2]} count (weapons player) > 0) then {
						//Prevent firing while weapon is still shown on back or holstered. AmovPpneMstpSnonWnonDnon_healed has disableWeapons=0 in config (should be 1)
						waitUntil {uiSleep 1; !(animationState player in ["ainjppnemstpsnonwnondnon_rolltofront","amovppnemstpsnonwnondnon_healed","amovppnemstpsnonwnondnon"])};
					};
				};
			} else {
				cutRsc ["RscAPSI_End","PLAIN"];
			};
			
			// Using this technique from fn_unconscious
			disableUserInput false; disableUserInput false;
			disableUserInput true; disableUserInput true;
			disableUserInput false; disableUserInput false;
			DZE_EVRStormRunning = false;
			player setVariable["startcombattimer", 0];
		};
	};
};
"PVDZE_EVR" addPublicVariableEventHandler {(_this select 1) spawn fnc_evr;};