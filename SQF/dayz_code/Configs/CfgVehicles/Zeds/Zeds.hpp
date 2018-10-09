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
	agentTasks[] = {};
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
		local = "_z = _this select 0; if (!(_this select 1)) exitWith {}; if (isServer) exitWith { _z call sched_co_deleteVehicle; }; [_z,true] call zombie_initialize;";
		HandleDamage = "_this call local_zombieDamage;";
		Killed = "[_this,'zombieKills'] call local_eventKill;";
	};
	
	class UserActions
	{
		class Butcher
		{		
			displayName = $STR_EPOCH_ACTIONS_GUTZOM;
			displayNameDefault = $STR_EPOCH_ACTIONS_GUTZOM;
			priority = 0;
			radius = 3;
			position = "";
			showWindow = 1;
			onlyForPlayer = 1;
			shortcut = "";
			condition = "(['Butcher',this] call userActionConditions)";
			statement = "this spawn player_butcher;";
		};
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

class z_villagertest : z_villager1 {
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
	class Eventhandlers
	{
		local = "_z = _this select 0; if (!(_this select 1)) exitWith {}; if (isServer) exitWith { _z call sched_co_deleteVehicle; }; [_z,true] call zombie_initialize;";
		HandleDamage = "_this call local_zombieDamage;";
		Killed = "[_this,'zombieKills'] call local_eventKill;";
	};
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
	zombieLoot = ZombiePilot;
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
	zombieLoot = ZombieSuit;
	model = "\ca\characters2\civil\Functionary\Functionary";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat", "ca\characters2\civil\Functionary\data\W1_Functionary.rvmat", "ca\characters2\civil\Functionary\data\W2_Functionary.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
}; 
class z_suit2 : z_suit1 {
	zombieLoot = ZombieSuit;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
};
class z_worker1 : zZombie_Base { 
	displayName = $STR_ZNAME_WORKER;
	zombieLoot = ZombieWorker;
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
	zombieLoot = ZombieDoctor;
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
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_v3_co.paa"};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat", "ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat", "ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

// New 1.0.6.3 Zombies

class z_soldier_usmc_soldier : z_soldier {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\USMC\USMC_soldier_Light";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\usmc\marines\data\usmc_soldier.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_at.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_CO.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_DMR.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_med.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_mine.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_saw.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_scout.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_tl.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_Crew.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","ca\characters2\usmc\data\usmc_officer_body.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\USMC\data\us_Crew.rvmat","Ca\characters2\USMC\data\W1_us_crew.rvmat","Ca\characters2\USMC\data\W2_us_crew.rvmat"};
	};	
};

class z_soldier_usmc_soldier_heavy : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\USMC\USMC_soldier";
	
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
class z_soldier_usmc_mg : z_soldier_usmc_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\USMC\USMC_soldier_MG";
};

class z_soldier_usmc_pilot : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombiePilot;
	model = "\ca\characters2\USMC\USMC_soldier_Pilot";
	
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
class z_soldier_usmc_crew : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	model = "\ca\characters2\USMC\USMC_soldier_Crew";
};
class z_soldier_usmc_officer : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\USMC\USMC_Soldier_Officer";
};
class z_soldier_usmc_crewman_white : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	model = "\ca\characters2\USMC\LHD_CrewMan";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat","ca\characters2\USMC\data\us_crew.rvmat","ca\characters2\USMC\data\w1_us_crew.rvmat","ca\characters2\USMC\data\w2_us_crew.rvmat"};
	};	
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_white_co.paa","\ca\characters2\usmc\data\us_crew_helmet_white_co.paa"};
};
class z_soldier_usmc_crewman_blue : z_soldier_usmc_crewman_white {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_blue_co.paa","\ca\characters2\usmc\data\us_crew_helmet_blue_co.paa"};
};
class z_soldier_usmc_crewman_yellow : z_soldier_usmc_crewman_white {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_Yellow_co.paa","\ca\characters2\usmc\data\us_crew_helmet_Yellow_co.paa"};
};
class z_soldier_usmc_crewman_red : z_soldier_usmc_crewman_white {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_Red_co.paa","\ca\characters2\usmc\data\us_crew_helmet_Red_co.paa"};
};
class z_soldier_usmc_crewman_purple : z_soldier_usmc_crewman_white {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_Violet_co.paa","\ca\characters2\usmc\data\us_crew_helmet_Violet_co.paa"};
};
class z_soldier_usmc_crewman_green : z_soldier_usmc_crewman_white {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	hiddenSelectionsTextures[] = {"\ca\characters2\usmc\data\us_crew_Green_co.paa","\ca\characters2\usmc\data\us_crew_helmet_Green_co.paa"};
};
class z_soldier_usmc_ghillie : z_soldier_usmc_soldier {
	displayName = $STR_ZNAME_GHILLIE;
	zombieLoot = ZombieGhillie;
	model = "\ca\characters2\Ghillie_Overall";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\data\ghillie_overall1_co.paa"};
};
class z_soldier_fr_tl : z_soldier {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\USMC\FR_CO";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_Heavy_Body.RVmat","Ca\characters2\USMC\DATA\W1_FR_Heavy_body.rvmat","Ca\characters2\USMC\DATA\W2_FR_Heavy_body.rvmat","Ca\characters2\USMC\DATA\FR_Heavy_Gear.RVmat","Ca\characters2\USMC\DATA\W1_FR_Heavy_Gear.RVmat","Ca\characters2\USMC\DATA\W2_FR_Heavy_Gear.RVmat"};
	};	
}; 
class z_soldier_fr_commander : z_soldier_fr_tl {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\USMC\FR_CO2";
}; 
class z_soldier_fr_r : z_soldier_fr_tl {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\USMC\FR_Scout1";
}; 
class z_soldier_fr_marksman : z_soldier_fr_tl {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\USMC\FR_Marksman";
}; 
class z_soldier_fr_sapper : z_soldier_fr_tl {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\USMC\FR_Scout3";
}; 
class z_soldier_fr_ac : z_soldier_fr_tl {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\USMC\FR_Scout2";
}; 
class z_soldier_fr_assault : z_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\USMC\FR_DirAction2";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_DA2.rvmat","Ca\characters2\USMC\DATA\W1_FR_DA2.rvmat","Ca\characters2\USMC\DATA\W2_FR_DA2.rvmat"};
	};	
};

class z_soldier_cdf_officer : z_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\Blufor\Soldier_CO";
}; 

class z_soldier_cdf_commander : z_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\Blufor\CDF_Commander";
}; 
class z_soldier_cdf_pilot : z_soldier {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombiePilot;
	model = "\ca\characters2\Blufor\Soldier_Pilot";
	
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

class z_soldier_cdf_crew : z_soldier {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	model = "\ca\characters2\Blufor\Soldier_Crew";
}; 

class z_soldier_ru_soldier : z_soldier {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\Rus\Soldier_Light";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Rus\DATA\soldier_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\Commander.rvmat","ca\characters2\Rus\DATA\W1_Commander.rvmat","ca\characters2\Rus\DATA\W2_Commander.rvmat"};
	};	
}; 

class z_soldier_ru_soldier_heavy : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\Rus\Soldier";
	
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

class z_soldier_ru_officer : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\Rus\Soldier_CO";
};

class z_soldier_ru_ghillie : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_GHILLIE;
	zombieLoot = ZombieGhillie;
	model = "\ca\characters2\Ghillie_Overall";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\data\ghillie_overall2_co.paa"};
};

class z_soldier_ru_pilot : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombiePilot;
	model = "\ca\characters2\Rus\Soldier_Pilot";
	
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
class z_soldier_ru_crewman : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_CREWMAN;
	zombieLoot = ZombieCrewman;
	model = "\ca\characters2\Rus\Soldier_Crew";
};
class z_soldier_ru_specnaz : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\Rus\Specnaz_Back";
};
class z_soldier_ru_commander : z_soldier_ru_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\Rus\Specnaz_CO";
};

class z_soldier_ru_specialforces : z_soldier_ru_soldier_heavy {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters2\Rus\Vityaz_2";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\rus\data\soldier_vityaz_2_partizan_vest.rvmat","ca\characters2\rus\data\soldier_vityaz_2_partizan_vest_w1.rvmat","ca\characters2\rus\data\soldier_vityaz_2_partizan_vest_w2.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest_w1.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest_w2.rvmat"};
	};
};

class z_soldier_gue_soldier1 : z_soldier {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\IndepIns\Soldier";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\IndepIns\Data\soldier_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W2.RVmat","ca\characters2\civil\worker\data\worker.rvmat","ca\characters2\civil\worker\data\W1_worker.rvmat","ca\characters2\civil\worker\data\W2_worker.rvmat","ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat","ca\characters2\IndepIns\Data\prizrak.rvmat","ca\characters2\IndepIns\Data\W1_prizrak.rvmat","ca\characters2\IndepIns\Data\W2_prizrak.rvmat","ca\characters2\IndepIns\Data\soldier_back_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W2.RVmat","ca\characters2\Data\ghillie.rvmat","ca\characters2\Data\w1_ghillie.rvmat","ca\characters2\Data\w2_ghillie.rvmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W2.RVmat"};
	};	
};

class z_soldier_gue_soldier2 : z_soldier_gue_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\IndepIns\Soldier2";
};

class z_soldier_gue_soldier3 : z_soldier_gue_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\IndepIns\Soldier_MG.p3d";
};

class z_soldier_gue_soldier4 : z_soldier_gue_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\IndepIns\Soldier_COM.p3d";
};

class z_soldier_gue_commander : z_soldier_gue_soldier1 {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\IndepIns\Prizrak";
};

class z_soldier_gue_ghillie : z_soldier_gue_soldier1 {
	displayName = $STR_ZNAME_GHILLIE;
	zombieLoot = ZombieGhillie;
	model = "\ca\characters2\Ghillie_Top";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\Data\ghillie_top_co.paa"};
};

class z_soldier_ins_soldier1 : z_soldier {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters2\OpforIns\Ins_Soldier_1.p3d";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\OpforIns\data\lifcik_body_1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_2.RVmat","ca\characters2\OpforIns\data\smersh_body_2_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_2_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_G.RVmat","ca\characters2\OpforIns\data\smersh_body_G_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_G_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_COM.RVmat","ca\characters2\OpforIns\data\smersh_body_COM_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_COM_W2.RVmat","ca\characters2\OpforIns\data\lifcik_body_1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W2.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W2.RVmat","Ca\characters2\OpforIns\Data\commander.rvmat","Ca\characters2\OpforIns\Data\commander_w1.rvmat","Ca\characters2\OpforIns\Data\commander_w2.rvmat","ca\characters2\OpforIns\data\lifcik_body_Crew.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W2.RVmat"};
	};	
};

class z_soldier_ins_soldier2 : z_soldier_ins_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\OpforIns\Ins_Soldier_2.p3d";
};

class z_soldier_ins_soldier3 : z_soldier_ins_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\OpforIns\Ins_Soldier_G.p3d";
};

class z_soldier_ins_officer : z_soldier_ins_soldier1 {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\ca\characters2\OpforIns\Ins_Soldier_Com.p3d";
};

class z_soldier_ins_lopotev : z_soldier_ins_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\OpforIns\Ins_Lopotev";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat","ca\characters2\OpforIns\data\ins_lopotev.rvmat","ca\characters2\OpforIns\data\W1_ins_lopotev.RVmat","ca\characters2\OpforIns\data\W2_ins_lopotev.RVmat"};
	};	
};

class z_soldier_ins_bardak : z_soldier_ins_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\ca\characters2\OpforIns\Ins_Bardak.p3d";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat","ca\characters2\OpforIns\data\Ins_Bardak.rvmat","ca\characters2\OpforIns\data\W1_ins_bardak.rvmat","ca\characters2\OpforIns\data\W2_ins_bardak.rvmat"};
	};	
};

class z_citizen1 : zZombie_Base {
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\citizen\citizen";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\citizen_co.paa"};

	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\citizen\data\citizen.rvmat","ca\characters2\civil\citizen\data\W1_citizen.rvmat","ca\characters2\civil\citizen\data\W2_citizen.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class z_citizen2 : z_citizen1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\Citizen_v2_co.paa"};
};

class z_citizen3 : z_citizen1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\Citizen_v3_co.paa"};
};
class z_citizen4 : z_citizen1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\Citizen_v4_co.paa"};
};

class z_lumberjack1 : zZombie_Base {
	displayName = $STR_ZNAME_LUMERJACK;
	zombieLoot = ZombieLumberJack;
	model = "\ca\characters2\civil\Worker\Worker";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\worker_co.paa"};

	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\civil\worker\data\worker.rvmat","ca\characters2\civil\worker\data\W1_worker.rvmat","ca\characters2\civil\worker\data\W2_worker.rvmat"};
	};
};

class z_lumberjack2 : z_lumberjack1 {
	displayName = $STR_ZNAME_LUMERJACK;
	zombieLoot = ZombieLumberJack;	
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v2_CO.paa"};
};

class z_lumberjack3 : z_lumberjack1 {
	displayName = $STR_ZNAME_LUMERJACK;
	zombieLoot = ZombieLumberJack;	
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v3_CO.paa"};
};

class z_lumberjack4 : z_lumberjack1 {
	displayName = $STR_ZNAME_LUMERJACK;
	zombieLoot = ZombieLumberJack;	
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v4_CO.paa"};
};

class z_profiteer1 : zZombie_Base {
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\profiteer\profiteer";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\profiteer\data\profiteer_co.paa"};

	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\profiteer\data\profiteer.rvmat","ca\characters2\civil\profiteer\data\W1_profiteer.rvmat","ca\characters2\civil\profiteer\data\W2_profiteer.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class z_profiteer2 : z_profiteer1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\profiteer\data\profiteer_v2_co.paa"};
};

class z_profiteer3 : z_profiteer1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\profiteer\data\profiteer_v3_co.paa"};
};

class z_profiteer4 : z_profiteer1 {
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\profiteer\data\profiteer_v4_co.paa"};
};

class z_rocker1 : zZombie_Base {
	displayName = $STR_ZNAME_ROCKER;
	zombieLoot = ZombieRocker;
	model = "\ca\characters2\civil\Rocker\Rocker";
	hiddenSelections[] = {"Camo","CamoB"};
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_ca.paa"};

	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Rocker\data\Rocker.rvmat","ca\characters2\civil\Rocker\data\W1_Rocker.rvmat","ca\characters2\civil\Rocker\data\W2_Rocker.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class z_rocker2 : z_rocker1 {
	displayName = $STR_ZNAME_ROCKER;
	zombieLoot = ZombieRocker;
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v2_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_ca.paa"};
};

class z_rocker3 : z_rocker1 {
	displayName = $STR_ZNAME_ROCKER;
	zombieLoot = ZombieRocker;
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v3_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_v2_ca.paa"};
};

class z_rocker4 : z_rocker1 {
	displayName = $STR_ZNAME_ROCKER;
	zombieLoot = ZombieRocker;
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v4_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_v3_ca.paa"};
};

class z_hunter2 : z_hunter {
	displayName = $STR_ZNAME_HUNTER;
	zombieLoot = ZombieHunter;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_co.paa"};
};
class z_hunter3 : z_hunter {
	displayName = $STR_ZNAME_HUNTER;
	zombieLoot = ZombieHunter;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_v2_co.paa"};
};
class z_hunter4 : z_hunter {
	displayName = $STR_ZNAME_HUNTER;
	zombieLoot = ZombieHunter;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_v4_co.paa"};
};
class z_assistant : z_doctor { 
	displayName = $STR_ZNAME_ASSISTANT;
	zombieLoot = ZombieCivilian;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\doctor\data\doctor_3_co.paa"};
};

class z_pilot : zZombie_Base {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombieCivilian;
	model = "\ca\characters2\civil\Pilot\Pilot";

	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Civil\Pilot\Data\camelpilot.rvmat","ca\characters2\Civil\Pilot\Data\Pilot_W1.rvmat","ca\characters2\Civil\Pilot\Data\Pilot_W2.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};

class z_takistani1 : zZombie_Base {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil01\Tak_civil01";
	hiddenSelections[] = {"Camo"};

	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil01\Data\Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W1_Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W2_Tak_civil01.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"};
};

class z_takistani2 : z_takistani1 {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil02\Tak_civil02";

	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil02\Data\Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W1_Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W2_Tak_civil02.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_1_co.paa"};
};

class z_takistani3 : z_takistani1 {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil03\Tak_civil03";

	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil03\Data\Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W1_Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W2_Tak_civil03.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"};
};

class z_takistani4 : z_takistani1 {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil04\Tak_civil04";

	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil04\Data\Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W1_Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W2_Tak_civil04.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"};
};

class z_takistani5 : z_takistani1 {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil05\Tak_civil05";
		
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil05\Data\Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W1_Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W2_Tak_civil05.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_1_co.paa"};
};

class z_takistani6 : z_takistani1 {
	zombieLoot = ZombieCivilian;
	model = "\CA\characters_E\civil\Tak_civil06\Tak_civil06";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil06\Data\Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W1_Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W2_Tak_civil06.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"};
};

class z_soldier_tk_soldier1 : z_soldier {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\CA\characters_E\LOC\LOC_soldier01";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"};
}; 

class z_soldier_tk_soldier2 : z_soldier_tk_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\CA\characters_E\LOC\LOC_soldier04";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"};
}; 
class z_soldier_tk_soldier3 : z_soldier_tk_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\CA\characters_E\LOC\LOC_soldier02";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"};
};
class z_soldier_tk_soldier4 : z_soldier_tk_soldier1 {
	displayName = $STR_ZNAME_REBELS;
	zombieLoot = ZombieRebels;
	model = "\CA\characters_E\LOC\LOC_soldier05";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"};
};

class z_soldier_cz_soldier_heavy : z_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\CA\characters_E\ACR\acr_soldier";
	hiddenSelections[] = {"Camo"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {};
	};	
};  

class z_soldier_cz_officer : z_soldier {
	displayName = $STR_ZNAME_OFFICER;
	zombieLoot = ZombieOfficer;
	model = "\CA\characters_E\ACR\acr_soldier_nic";
	hiddenSelections[] = {"Camo"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {};
	};	
}; 

class z_soldier_cz_pilot : z_soldier {
	displayName = $STR_ZNAME_PILOT;
	zombieLoot = ZombiePilot;
	model = "\ca\characters_e\ACR\acr_pilot.p3d";
	hiddenSelections[] = {"Camo"};
	
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
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\us_pilot_body.rvmat","ca\characters\data\us_pilot_body_wound1.rvmat","ca\characters\data\us_pilot_body_wound2.rvmat","ca\characters\data\us_pilot_hhl.rvmat","ca\characters\data\us_pilot_hhl_wound1.rvmat","ca\characters\data\us_pilot_hhl_wound2.rvmat"};
	};
};

class z_soldier_cz_ghillie : z_soldier_cz_officer {
	displayName = $STR_ZNAME_GHILLIE;
	zombieLoot = ZombieGhillie;
	model = "\ca\characters_E\Ghillie\Ghillie_Overall";
	hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
};

class z_soldier_cz_spec : z_soldier_cz_officer {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\CA\characters_E\ACR\acr_soldier_spec1";
};

class z_soldier_un_soldier_heavy : z_soldier {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters_E\UN\UN_CDF_Soldier";
	
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

class z_soldier_ger_soldier : z_soldier {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters_E\GER\GER_rifleman";
	hiddenSelections[] = {"Camo"};
};

class z_soldier_ger_soldier_light : z_soldier_ger_soldier {
	displayName = $STR_ZNAME_SPECIALFORCES;
	zombieLoot = ZombieSpecialForces;
	model = "\ca\characters_E\GER\GER_rifleman_light";
};

class z_soldier_baf_w_soldier_heavy : z_soldier_pilot {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	
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
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_MTP_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
};

class z_soldier_baf_d_soldier_heavy : z_soldier_baf_w_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
};

class z_soldier_baf_w_soldier_w_heavy : z_soldier_baf_w_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIERHEAVY;
	zombieLoot = ZombieMilitary;
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class z_soldier_baf_w_soldier : z_soldier_baf_w_soldier_heavy {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	model = "\ca\characters_d_BAF\BAF_Soldier_light_BAF";
	
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
};

class z_soldier_baf_d_soldier : z_soldier_baf_w_soldier {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_DDPM_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
};

class z_soldier_baf_w_soldier_w : z_soldier_baf_w_soldier {
	displayName = $STR_ZNAME_SOLDIER;
	zombieLoot = ZombieMilitary;
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class z_soldier_pmc_soldier : z_soldier {
	displayName = $STR_ZNAME_BODYGUARD;
	zombieLoot = ZombieBodyguard;
	model = "\Ca\Characters_PMC\PMC_soldier\PMC_soldier.p3d";
	HiddenSelections[] = {"camo1","camo2","camo3"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\PMC_soldier\Data\acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_acr_equip.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer.rvmat","Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_Bauer_Gear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w1_HeadGear.rvmat","Ca\Characters_PMC\PMC_soldier\Data\w2_HeadGear.rvmat"};
	};
};

class z_soldier_pmc_engineer : z_soldier {
	displayName = $STR_ZNAME_BODYGUARD;
	zombieLoot = ZombieBodyguard;
	model = "\Ca\Characters_PMC\Frost\Frost.p3d";
	HiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\frost\data\frost_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
	};
};

class z_soldier_pmc_bodyguard : z_soldier {
	displayName = $STR_ZNAME_BODYGUARD;
	zombieLoot = ZombieBodyguard;
	model = "\Ca\Characters_PMC\Gracenko\Gracenko.p3d";
	HiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\gracenko\data\gracenko_co.paa"};
	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\Gracenko\Data\gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w1_gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w2_gracenko.rvmat"};
	};
};
