class CfgVehicles {
	class AllVehicles;
	class Air : AllVehicles 
	{
	class NewTurret;
	class ViewPilot;
	class AnimationSources;
	};
	class Helicopter : Air 
	{
		class HitPoints; 
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
            };
        };
	};
	class Animal;
	class Pastor;
	class Fin;
	class DZAnimal: Animal
	{
		scope = 0;
		side = 1;
		accuracy = 0.25;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		triggerAnim = "";
		picture = "";
		icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
		mapSize = 10;
		weaponSlots = 0;
		fsmFormation = "";
		fsmDanger = "";
		agentTasks[] = {};
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		woman = 0;
		faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		extCameraPosition[] = {0,0.5,-2.5};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar {};
		class VariablesString {};
	};
	class DZ_Pastor : Pastor {
		scope = 2;
		model = "\ca\animals2\Dogs\Pastor\Pastor";
		displayName = "Alsatian";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
	};
	
	class DZ_Fin : Fin {
		scope = 2;
		model = "\ca\animals2\Dogs\Fin\Fin";
		displayName = "Fin";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
		fsmDanger = "";
		fsmFormation = "";
	};

	class Soldier_Crew_PMC;
	class Bandit1_DZ : Soldier_Crew_PMC {
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\characters\man_bandit";
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};

	class BAF_Soldier_Officer_W;
	class Rocket_DZ: BAF_Soldier_Officer_W {
		displayName = "Rocket";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_W;
	class Soldier1_DZ: BAF_Soldier_W {
		displayName = "Soldier";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_SniperH_W;
	class Sniper1_DZ: BAF_Soldier_SniperH_W {
		displayName = "Sniper";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_L_W;
	class Camo1_DZ: BAF_Soldier_L_W {
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};	
	class Bag_Base_EP1;
	class DZ_Patrol_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Patrol Pack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 8;
	};
	class DZ_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Assault Pack (ACU)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
		transportMaxWeapons = 2;
		transportMaxMagazines = 12;
	};
	class DZ_CivilBackpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Czech Backpack";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
		transportMaxWeapons = 3;
		transportMaxMagazines = 16;
	};
	class DZ_ALICE_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "ALICE Pack";
		picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
		transportMaxWeapons = 4;
		transportMaxMagazines = 20;
	};
	class DZ_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Backpack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
		transportMaxWeapons = 6;
		transportMaxMagazines = 24;
	};
	class UH1H_base;
	class UH1H_DZ: UH1H_base
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
	};

	class Mi17_base : Helicopter 
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -80;
				maxElev = 25;
				initElev = -80;
				minTurn = 30;
				maxTurn = 150;
				initTurn = 90;
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class Turrets: Turrets {};
			};
			class BackTurret : MainTurret
			{
				minElev = -80;
				maxElev = 25;
				initElev = -80;
				minTurn = -185;
				maxTurn = -45;
				initTurn = -155;
				class Turrets: Turrets {};
			};
		};
	};
	class Mi17_DZ: Mi17_base	
	{
		displayName = "Mi17_DZ";
		scope = 2;
		side = 2;
		crew = "";
		maxSpeed = 180;	// max speed on level road, km/h
		typicalCargo[] = {};
		hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
		class Turrets : Turrets {
			class FrontTurret : MainTurret {
				weapons[] = {PKT_2};
				magazines[] = {"100Rnd_762x54_PK"};
			};
			class BackTurret : BackTurret {
				weapons[] = {PKT_2};
				magazines[] = {"100Rnd_762x54_PK"};
			};
		};
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = PKT;
			};
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = PKT;
			};
			class Revolving {
				source = "revolving";
				weapon = PKT;
			};
			class ReloadAnim_2 {
				source = "reload";
				weapon = PKT_2;
			};
			class ReloadMagazine_2 {
				source = "reloadmagazine";
				weapon = PKT_2;
			};
			class Revolving_2 {
				source = "revolving";
				weapon = PKT_2;
			};
		};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
	};
	//An2_TK_EP1
	class An2_Base_EP1;
	class AN2_DZ: An2_Base_EP1
	{
		displayName = "AN2_DZ";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
	};
	//AH6X_EP1
	class AH6X_EP1
	{ 
		scope = 0;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;	
	};
	class AH6X_DZ: AH6X_EP1
	{
		displayName = "AH6X_DZ";
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[] = {};
		magazines[] = {};
		gunnerHasFlares = false;
		commanderCanSee = 2+16+32;
		gunnerCanSee = 2+16+32;
		driverCanSee = 2+16+32;
	};
	class House {
		class DestructionEffects;
	};
	class UH1Wreck_DZ: House
	{
		model = "\ca\air2\UH1Y\UH1Y_Crashed.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed UH-1Y";
		vehicleClass = "Wrecks";
	};

	class Strategic;
	class NonStrategic;

	class Land_A_FuelStation_Feed: Strategic
	{
		model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
		transportFuel = 0; //50000;
		nameSound = "fuelstation";
	};

	class Land_Ind_FuelStation_Feed_Ep1: Strategic
	{
		model = "\ca\structures_pmc\ind\fuelstation\fuelstation_feed_pmc";
		transportFuel = 0;
		nameSound = "fuelstation";
	};
	

	// Lingor hangars
	//class land_ibr_hangar: land_ibr_hangar
	//{
	//	scope = 2;
	//	transportFuel = 0;
	//	transportRepair = 0;
	//};

};	