class Citizen1;
class zZombie_Base : Citizen1 {
	scope = public;
	glassesEnabled = 0;
	vehicleClass = "Zombie";
	displayName = "Zombie";
	fsmDanger = "";
	fsmFormation = "";
	zombieLoot = "civilian";
	moves = "CfgMovesZombie";
	isMan = false;
	weapons[] = {};
	magazines[] = {};
	sensitivity = 4;	// sensor sensitivity
	sensitivityEar = 2;
	faceType = "ZFaces";
	identityTypes[] = {"zombie1", "zombie2"};
	class TalkTopics {};
	languages[] = {};
		
	class Eventhandlers {
		init = "_this call zombie_initialize;";
		local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
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

class z_policeman: zZombie_Base
{
	model = "\ca\characters2\civil\Policeman\Policeman";
	zombieLoot = "policeman";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};
class z_suit1: zZombie_Base
{
	model = "\ca\characters2\civil\Functionary\Functionary";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	zombieLoot = "office";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class z_suit2: z_suit1
{
	zombieLoot = "office2";
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
};

class z_doctor: zZombie_Base
{
	model = "\ca\characters2\civil\Doctor\Doctor";
	zombieLoot = "medical";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class z_teacher: z_doctor
{
	zombieLoot = "civilian";
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
};
class z_hunter: zZombie_Base
{
	model = "\ca\characters2\civil\Woodlander\Woodlander";
	zombieLoot = "hunter";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\woodlander\data\woodlander_v3_co.paa"}; 
		
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};


class z_priest: zZombie_Base
{
	model = "\ca\characters2\civil\Priest\Priest";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};
class z_soldier: zZombie_Base
{
	displayName = "Zombie Soldier";
	model = "\ca\characters2\Blufor\Soldier_Light";
	zombieLoot = "military";
	class HitPoints: HitPoints
	{
		class HitHead
		{
			armor = 0.3;
			material = -1;
			name = "head_hit";
			passThrough = 1;
		};
		class HitBody
		{
			armor = 2.4;
			material = -1;
			name = "body";
			passThrough = 1;
		};
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = 1;
		};
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = 1;
		};
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat","ca\characters2\Blufor\data\Soldier_W1.RVmat","ca\characters2\Blufor\data\Soldier_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_W1.RVmat","ca\characters2\Blufor\data\Soldier_Light_W2.RVmat","ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL.RVmat","ca\characters2\Blufor\data\Soldier_GL_W1.RVmat","ca\characters2\Blufor\data\Soldier_GL_W2.RVmat","ca\characters2\Blufor\data\Soldier_NCO.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat","ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat","ca\characters2\Blufor\data\Soldier_MG.RVmat","ca\characters2\Blufor\data\Soldier_MG_W1.RVmat","ca\characters2\Blufor\data\Soldier_MG_W2.RVmat","ca\characters2\Blufor\data\Soldier_AT.RVmat","ca\characters2\Blufor\data\Soldier_AT_W1.RVmat","ca\characters2\Blufor\data\Soldier_AT_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO.RVmat","ca\characters2\Blufor\data\Soldier_CO_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_W2.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat","ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
	};
};
class z_soldier_pilot: z_soldier
{
	displayName = "Zombie Soldier (Pilot)";
	model = "\ca\characters_d_BAF\BAF_Pilot_BAF";
	zombieLoot = "militarypilot";
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
	class HitPoints: HitPoints
	{
		class HitHead
		{
			armor = 2;
			material = -1;
			name = "head_hit";
			passThrough = 1;
		};
		class HitBody
		{
			armor = 3;
			material = -1;
			name = "body";
			passThrough = 1;
		};
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = 1;
		};
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = 1;
		};
	};
};
class z_soldier_heavy: z_soldier
{
	displayName = "Zombie Soldier (Heavy)";
	model = "\ca\characters2\Blufor\Soldier";
	class HitPoints: HitPoints
	{
		class HitHead
		{
			armor = 1;
			material = -1;
			name = "head_hit";
			passThrough = 1;
		};
		class HitBody
		{
			armor = 2.4;
			material = -1;
			name = "body";
			passThrough = 1;
		};
		class HitHands
		{
			armor = 1;
			material = -1;
			name = "hands";
			passThrough = 1;
		};
		class HitLegs
		{
			armor = 1;
			material = -1;
			name = "legs";
			passThrough = 1;
		};
	};
};
