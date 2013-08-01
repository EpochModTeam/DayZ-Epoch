	class zZombie_new_Base : zZombie_Base {
		scope = public;
		glassesEnabled = 0;
		identityTypes[] = {"Zombie3"};
		class TalkTopics {};
		languages[] = {};
		//Armor * hitpointArmor = Total Armor
		armor = 10; 
		
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
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
				armor = 10;
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
	
	class z_newBase : zZombie_new_Base {
		zombieLoot = "civilian";
		model = "\ca\characters2\civil\Villager\Villager";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters2\Civil\Villager\Data\villager.RVmat", "ca\characters2\Civil\Villager\Data\villager_w1.RVmat", "ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
		};
	};
	class z_new_villager2 : z_newBase {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v2_co.paa"};
	};
	class z_new_villager3 : z_newBase {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v3_co.paa"};
	};
	class z_new_villager4 : z_newBase {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\villager\villager_v4_co.paa"};
	};
	
	class z_new_worker_base : zZombie_new_Base {
		zombieLoot = "civilian";
		model = "\Ca\characters_E\Overall\Overall";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat", "Ca\characters_E\Overall\Data\W1_Overall.rvmat", "Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
	};
	
	class z_new_worker2 : z_new_worker_base {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\overall_2_co.paa"};
	};
	class z_new_worker3 : z_new_worker_base {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\Overall_3_co.paa"};
	};
	class z_new_worker4 : z_new_worker_base {
		hiddenSelectionsTextures[] = {"z\addons\dayz_communityassets\zeds\overall\Overall_4_co.paa"};
	};
	/*
	class z_policeman;
	class z_new_policeman : z_policeman {
		hiddenSelectionsTextures[] = {"\z\addons\dayz_communityassets\zeds\villager\villager_co.paa"};
	};
	class z_new_policeman : z_policeman {
		hiddenSelectionsTextures[] = {"\z\addons\dayz_communityassets\zeds\policeman\policeman_co.paa"};
		
		class Eventhandlers {
			init = "(_this select 0) setObjectTexture [0, '\z\addons\dayz_communityassets\zeds\policeman\policeman_co.paa'];";
        };
	};
	*/