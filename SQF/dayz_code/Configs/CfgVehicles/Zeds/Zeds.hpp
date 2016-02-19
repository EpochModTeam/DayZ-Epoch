class Citizen;
class Citizen1: Citizen {
	class SpeechVariants {
		class Default {
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		class EN: Default {
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		class CZ {
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		class CZ_Akuzativ {
			speechplural[] = {""};
			speechsingular[] = {""};
		};
		class RU {
			speechplural[] = {""};
			speechsingular[] = {""};
		};
	};
};	
class Zed_Base : Citizen1 {
	scope = public;
	class HitDamage {};
	armor = 3; 
};
class zZombie_Base : Zed_Base {
	scope = public;
	glassesEnabled = 0;
	vehicleClass = "Zombie";
	displayName = $STR_ZNAME_INFECTED;
	fsmDanger = "";
	fsmFormation = "";
	zombieLoot = ZombieCivilian;
	moves = "CfgMovesZombie";
	isMan = false;
	weapons[] = {};
	magazines[] = {};
	sensitivity = 2;	// sensor sensitivity
	sensitivityEar = 2;
	identityTypes[] = {"zombie1", "zombie2"};
	class TalkTopics {};
	languages[] = {};
	damageScale = 350;
	sepsisChance = 18;
	BleedChance  = 15;
	forcedSpeed = 6;
	
	class Eventhandlers
	{
		init = "_this call zombie_initialize;";
		local = "_z = _this select 0; if ((!isServer and !isNull _z) and {(side _z != civilian)}) exitWith { PVDZ_sec_atp = [ 'wrong side', player ]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; }; if (!(_this select 1)) exitWith {}; if (isServer) exitWith { _z call sched_co_deleteVehicle; }; [(position _z), _z, true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm';";
	};
	
	class HitPoints {
		class HitHead {
			armor = 0.1;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead {
			armor = 2.4;
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

class z_villager1 : zZombie_Base {
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\Villager\Villager";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters2\Civil\Villager\Data\villager.RVmat", "ca\characters2\Civil\Villager\Data\villager_w1.RVmat", "ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
	};
};

class z_villager2 : z_villager1 {
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v2_co.paa"};
};

class z_villager3 : z_villager1 {
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
};

class z_priest : zZombie_Base {
	displayName = $STR_ZNAME_PRIEST;
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\Priest\Priest";
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\priest\data\priest.rvmat", "ca\characters2\civil\priest\data\W1_priest.rvmat", "ca\characters2\civil\priest\data\W2_priest.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class z_soldier : zZombie_Base {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\Blufor\Soldier_Light";
	
	class HitPoints : HitPoints {
		class HitHead {
			armor = 0.6;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody {
			armor = 5;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands {
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs {
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat", "ca\characters2\Blufor\data\Soldier_W1.RVmat", "ca\characters2\Blufor\data\Soldier_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W2.RVmat", "ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W2.RVmat", "ca\characters2\Blufor\data\Soldier_NCO.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_MG.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W1.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W2.RVmat", "ca\characters2\Blufor\data\Soldier_AT.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W1.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
	};
};

class z_soldier_pilot : z_soldier {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters_d_BAF\BAF_Pilot_BAF";
	hiddenSelections[] = {"Camo", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa", "\ca\characters_W_baf\data\armour_dpm_co.paa", "\ca\characters_W_baf\data\equip_dpm_co.paa"};
	
	class HitPoints : HitPoints {
		class HitHead {
			armor = 2;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody {
			armor = 3;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands {
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs {
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
};

class z_soldier_heavy : z_soldier {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\Blufor\Soldier";
	
	class HitPoints : HitPoints {
		class HitHead {
			armor = 1;
			material = -1;
			name = "head_hit";
			passThrough = true;
		};
		
		class HitBody {
			armor = 10;
			material = -1;
			name = "body";
			passThrough = true;
		};
		
		class HitHands {
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLegs {
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = true;
		};
	};
};

class z_policeman : zZombie_Base {
	displayName = $STR_ZNAME_POLICEMAN;
	zombieLoot = ZombiePolice;
	
	model = "ca\characters2\civil\policeman\policeman.p3d";
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat", "ca\characters2\civil\policeman\data\w1_policeman.rvmat", "ca\characters2\civil\policeman\data\w2_policeman.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};
class z_suit1 : zZombie_Base {
	displayName = $STR_ZNAME_SUIT;
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\Functionary\Functionary";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat", "ca\characters2\civil\Functionary\data\W1_Functionary.rvmat", "ca\characters2\civil\Functionary\data\W2_Functionary.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
}; 
class z_suit2 : z_suit1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
};
class z_worker1 : zZombie_Base { 
	displayName = $STR_ZNAME_WORKER;
	zombieLoot = ZombieCivilian;
	model = "\Ca\characters_E\Overall\Overall";
	hiddenSelections[] = {"Camo"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat", "Ca\characters_E\Overall\Data\W1_Overall.rvmat", "Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
}; 
class z_worker2 : z_worker1 {
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
};

class z_worker3 : z_worker1 {
	hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_2_co.paa"};
};
class z_doctor : zZombie_Base { 
	displayName = $STR_ZNAME_DOCTOR;
	model = "\ca\characters2\civil\Doctor\Doctor";
	zombieLoot = MedicalHigh;
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat", "ca\characters2\civil\doctor\data\W1_doctor.rvmat", "ca\characters2\civil\doctor\data\W2_doctor.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
}; 
class z_teacher : z_doctor { 
	displayName = $STR_ZNAME_TEACHER;
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
}; 
class z_hunter : zZombie_Base { 
	displayName = $STR_ZNAME_HUNTER;
	zombieLoot = ZombieHunter;
	model = "\ca\characters2\civil\Woodlander\Woodlander";
	hiddenSelections[] = {"Camo"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat", "ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat", "ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
}; 