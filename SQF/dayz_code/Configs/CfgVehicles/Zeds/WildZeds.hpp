
class WildZombie_Base : Zed_Base {
	scope = public;
	glassesEnabled = 0;
	vehicleClass = "Zombie";
	displayName = $STR_ZNAME_INFECTED;
	fsmDanger = "";
	fsmFormation = "";
	zombieLoot = "civilian";
	moves = "CfgMovesZombie";
	isMan = false;
	weapons[] = {};
	magazines[] = {};
	sensitivity = 1;	// sensor sensitivity
	sensitivityEar = 1;
	identityTypes[] = {"zombie1", "zombie2"};
	class TalkTopics {};
	languages[] = {};
	armor = 1;
	damageScale = 250;
	sepsisChance = 18;
	BleedChance = 10;
	forcedSpeed = 6;

	class Eventhandlers {
		init = "_this call zombie_initialize;";
		local = "_z = _this select 0;" \n
			    "if ((!isServer and !isNull _z) and {(side _z != civilian)}) exitWith { " \n
			    "PVDZ_sec_atp = [ 'wrong side', player ]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };" \n
				"if (!(_this select 1)) exitWith {};" \n
			    "if (isServer) exitWith { _z call sched_co_deleteVehicle; };" \n
			    "[(position _z), _z, true] execFSM '\z\AddOns\dayz_code\system\zombie_wildagent.fsm';";
		//if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_wildagent.fsm'};";
	};
	
	class HitPoints {
		class HitHead {
			armor = 0.3;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead {
			armor = 2;
			name = "body";
			memoryPoint = "aimPoint";
		};
		
		class HitSpine : HitHead {
			armor = 2;
			name = "Spine2";
			memoryPoint = "aimPoint";
		};
		
		class HitHands : HitHead {
			armor = 0.5;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLArm : HitHands {
			name = "LeftArm";
			memoryPoint = "lelbow";
		};
		
		class HitRArm : HitHands {
			name = "RightArm";
			memoryPoint = "relbow";
		};
		
		class HitLForeArm : HitHands {
			name = "LeftForeArm";
			memoryPoint = "lwrist";
		};
		
		class HitRForeArm : HitHands {
			name = "RightForeArm";
			memoryPoint = "rwrist";
		};
		
		class HitLHand : HitHands {
			name = "LeftHand";
			memoryPoint = "LeftHandMiddle1";
		};
		
		class HitRHand : HitHands {
			name = "RightHand";
			memoryPoint = "RightHandMiddle1";
		};
		
		class HitLegs : HitHands {
			name = "legs";
			memoryPoint = "pelvis";
		};
		
		class HitLLeg : HitHands {
			name = "LeftLeg";
			memoryPoint = "lknee";
		};
		
		class HitLLegUp : HitHands {
			name = "LeftUpLeg";
			memoryPoint = "lfemur";
		};
		
		class HitRLeg : HitHands {
			name = "RightLeg";
			memoryPoint = "rknee";
		};
		
		class HitRLegUp : HitHands {
			name = "RightUpLeg";
			memoryPoint = "rfemur";
		};
	};
};

class Wild_Civ_newBase : WildZombie_Base {
	zombieLoot = "civilian";
	model = "\Ca\characters_E\Overall\Overall";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
		
	class Wounds {
		tex[] = {};
		mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat", "Ca\characters_E\Overall\Data\W1_Overall.rvmat", "Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
	};
};