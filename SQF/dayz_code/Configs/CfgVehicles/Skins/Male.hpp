
class Man; //includes animals and zombies
class CAManBase: Man //includes all skins except animals
{
	class TalkTopics;
	class HitPoints
	{
		class HitHead;
		class HitBody;
	};
};
class Civilian: CAManBase
{
	rarityUrban = -1;
	scope = private;
	faction = "CIV";
	genericNames = "CzechMen";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	armor = 2.5;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.6;
		};
		class HitBody: HitBody
		{
			armor = 0.8;
			passThrough = 1;
		};
	};
	displayName = "$STR_DN_CIVILIAN";
	accuracy = 2.0;
	camouflage = 2;
	minFireTime = 20;
	class TalkTopics: TalkTopics
	{
		core_cz = "Core_Full";
	};
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_civilian"};
			speechPlural[] = {"veh_civilians"};
		};
		class EN: Default{};
		class CZ
		{
			speechSingular[] = {"veh_civilian_CZ"};
			speechPlural[] = {"veh_civilians_CZ"};
		};
		class CZ_Akuzativ
		{
			speechSingular[] = {"veh_civilian_CZ4P"};
			speechPlural[] = {"veh_civilians_CZ4P"};
		};
		class RU
		{
			speechSingular[] = {"veh_civilian_RU"};
			speechPlural[] = {"veh_civilians_RU"};
		};
	};
	TextPlural = "$STR_DN_civilians";
	TextSingular = "$STR_DN_civilian";
	nameSound = "veh_civilian";
	languages[] = {"CZ"};
};

class Survivor_DZ : Civilian {
	scope = protected;
	side = TWest;
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = true;
	backpack = "";
	canCarryBackPack = 1;
	enableGPS = 1;
	
	class Eventhandlers
	{
		//local = "_z = _this select 0; if (!isServer && {!isNull _z} && {!(side _z in [west,east,civilian])}) exitWith { PVDZ_sec_atp = ['wrong side', player]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };";
	};
};

class Survivor1_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\dayz\objects\proxy_man";
};

class Survivor2_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\dayz\characters\man_survivor";
};

class Survivor3_DZ : Survivor2_DZ {
	model = "\dayz\characters\man_hero";
	HiddenSelections[] = {"camo1", "camo2", "camo3"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa", "ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa", "ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
};

//See DZE\Females.hpp for female characters

//Bandit1_DZ moved to DZE section below

class Rocket_DZ: Survivor_DZ { //BAF_Soldier_Officer_W
	scope = public;
	displayName = "Rocket";
	model = "\ca\characters_d_BAF\BAF_Soldier_Officer_BAF";
	portrait = "\ca\characters_d_baf\Data\portraits\baf_officer_CA";
  	identityTypes[] = {"Language_BAF","Head_BAF","BAF_Glasses"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.7;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class Soldier1_DZ: Survivor_DZ { //BAF_Soldier_W
	scope = public;
	displayName = "Soldier";
	model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
	portrait = "ca\characters_d_baf\Data\portraits\baf_soldier_CA";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.7;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class Sniper1_DZ: Survivor_DZ { //BAF_Soldier_SniperH_W
	scope = public;
	displayName = "Sniper";
	model = "\ca\characters_e\Ghillie\Ghillie_Overall";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	camouflage = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class Camo1_DZ: Survivor_DZ { //BAF_Soldier_L_W
	scope = public;
	displayName = $STR_CHAR_1;
	model = "\ca\characters_d_BAF\BAF_Soldier_light_BAF";
	portrait = "ca\characters_d_baf\Data\portraits\baf_soldier_CA";
	camouflage = 1.4;
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.7;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class INS_Lopotev;
class INS_Lopotev_DZ: INS_Lopotev {
		displayName = "Boss";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class RU_Soldier_Crew;
class RU_Soldier_Crew_DZ: RU_Soldier_Crew {
		displayName = "Crewman";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class TK_Commander_EP1;
class TK_Commander_EP1_DZ: TK_Commander_EP1 {
		displayName = "General";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class TK_Soldier_Sniper_EP1;
class TK_Soldier_Sniper_EP1_DZ: TK_Soldier_Sniper_EP1 {
		displayName = "Desert Sniper";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class TK_Special_Forces_MG_EP1;
class TK_Special_Forces_MG_EP1_DZ: TK_Special_Forces_MG_EP1 {
		displayName = "Smuggler";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};

// good
class INS_Soldier_AR;
class INS_Soldier_AR_DZ: INS_Soldier_AR {
		displayName = "Cooper";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
		faceType = "Man";
};
class INS_Soldier_CO;
class INS_Soldier_CO_DZ: INS_Soldier_CO {
		displayName = "Travis";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class INS_Bardak;
class INS_Bardak_DZ: INS_Bardak {
		displayName = "Paulo";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};
class INS_Worker2;
class INS_Worker2_DZ: INS_Worker2 {
		displayName = "Steve";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 1;
};

// bandits
class Soldier_Crew_PMC;
class Bandit1_DZ : Soldier_Crew_PMC { //Normal black PMC vest bandit
	displayName = $STR_CHAR_2;
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
class Bandit2_DZ: Soldier_Crew_PMC { //German bright color camo bandit
	scope = public;
	side = 1;
	displayName = $STR_CHAR_2;
	weapons[] = {"Throw","Put"};
	model = "\ca\characters_E\GER\GER_rifleman";
	portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
	magazines[] = {};
	backpack = "";
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\bandit_tex1_co.paa"};
	weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
	canHideBodies = 1;
};

// new bandits
class GUE_Soldier_MG;
class GUE_Soldier_MG_DZ: GUE_Soldier_MG {
	displayName = "Bandit Gunner";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GUE_Soldier_Sniper;
class GUE_Soldier_Sniper_DZ: GUE_Soldier_Sniper {
	displayName = "Bandit Sniper";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GUE_Soldier_Crew;
class GUE_Soldier_Crew_DZ: GUE_Soldier_Crew {
	displayName = "Bandit ";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GUE_Soldier_CO;
class GUE_Soldier_CO_DZ: GUE_Soldier_CO {
	displayName = "Bandit Gunner";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GUE_Soldier_2;
class GUE_Soldier_2_DZ: GUE_Soldier_2 {
	displayName = "Bandit Gunner";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class RU_Policeman;
class RU_Policeman_DZ: RU_Policeman {
	displayName = "Policeman";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Pilot_EP1;
class Pilot_EP1_DZ: Pilot_EP1 {
	displayName = "Pilot";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Haris_Press_EP1;
class Haris_Press_EP1_DZ: Haris_Press_EP1 {
	displayName = "Press";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Ins_Soldier_GL;
class Ins_Soldier_GL_DZ: Ins_Soldier_GL {
	displayName = "Terrorist";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GUE_Commander;
class GUE_Commander_DZ: GUE_Commander {
	displayName = "Rebel";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Functionary1_EP1;
class Functionary1_EP1_DZ: Functionary1_EP1 {
	displayName = "Business Suit";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Priest;
class Priest_DZ: Priest {
	displayName = "Priest";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Rocker1;
class Rocker1_DZ: Rocker1 {
	displayName = "Rocker (black)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Rocker2;
class Rocker2_DZ: Rocker2 {
	displayName = "Rocker (brown)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Rocker3;
class Rocker3_DZ: Rocker3 {
	displayName = "Rocker (blue)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Rocker4;
class Rocker4_DZ: Rocker4 {
	displayName = "Rocker (green)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};

class TK_INS_Warlord_EP1;
class TK_INS_Warlord_EP1_DZ: TK_INS_Warlord_EP1 {
	displayName = "Takistani Warlord";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
};

class TK_INS_Soldier_EP1;
class TK_INS_Soldier_EP1_DZ: TK_INS_Soldier_EP1 {
	displayName = "Takistani Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
};
	
class CZ_Special_Forces_GL_DES_EP1;
class CZ_Special_Forces_GL_DES_EP1_DZ: CZ_Special_Forces_GL_DES_EP1 {
	displayName = "Special Forces";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
};
	
class Drake_Light;
class Drake_Light_DZ: Drake_Light {
	displayName = "Desert Camo";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	faceType = "Man";
};
class Soldier_Bodyguard_AA12_PMC;
class Soldier_Bodyguard_AA12_PMC_DZ: Soldier_Bodyguard_AA12_PMC {
	displayName = "Bodyguard";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
};

class Soldier_Sniper_PMC_DZ: Soldier_Crew_PMC {
	displayName = "Marksman";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;

	model = "\dayz\characters\man_hero";
	HiddenSelections[] = {"camo1","camo2","camo3"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
	};
};
class Soldier_TL_PMC;
class Soldier_TL_PMC_DZ: Soldier_TL_PMC {
	displayName = "Team Leader";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
};
class FR_OHara;
class FR_OHara_DZ: FR_OHara {
	displayName = "Jungle Camo";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
	attendant = 0; 
	faceType = "Man";
};
class FR_Rodriguez;
class FR_Rodriguez_DZ: FR_Rodriguez {
	displayName = "Gunner Outfit";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
	faceType = "Man";
};
class CZ_Soldier_Sniper_EP1;
class CZ_Soldier_Sniper_EP1_DZ: CZ_Soldier_Sniper_EP1 {
	displayName = "Desert Ghillie";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Graves_Light;
class Graves_Light_DZ: Graves_Light {
	displayName = "Urban Camo";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
	faceType = "Man";
};
//new Epoch 1.06
class USMC_Soldier_Officer;
class USMC_Soldier_Officer_DZ: USMC_Soldier_Officer {
	displayName = "USMC Officer";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class USMC_Soldier_MG;
class USMC_Soldier_MG_DZ: USMC_Soldier_MG {
	displayName = "USMC Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class USMC_Soldier_Pilot;
class USMC_Soldier_Pilot_DZ: USMC_Soldier_Pilot {
	displayName = "USMC Pilot";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class FR_TL;
class FR_TL_DZ: FR_TL {
	displayName = "Camo Teamleader";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class FR_R;
class FR_R_DZ: FR_R {
	displayName = "Camo Recon";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class FR_Marksman;
class FR_Marksman_DZ: FR_Marksman {
	displayName = "Camo Marksman";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class FR_Assault_R;
class FR_Assault_R_DZ: FR_Assault_R {
	displayName = "Camo Assault";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class RU_Soldier;
class RU_Soldier_DZ: RU_Soldier {
	displayName = "RU Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class RU_Soldier_Officer;
class RU_Soldier_Officer_DZ: RU_Soldier_Officer {
	displayName = "RU Officer";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class RUS_Soldier1;
class RUS_Soldier1_DZ: RUS_Soldier1 {
	displayName = "RU Camo";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class RUS_Commander;
class RUS_Commander_DZ: RUS_Commander {
	displayName = "RU Commander";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class MVD_Soldier;
class MVD_Soldier_DZ: MVD_Soldier {
	displayName = "MVD Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Ins_Soldier_2;
class Ins_Soldier_2_DZ: Ins_Soldier_2 {
	displayName = "Terrorist Camo";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Ins_Commander;
class Ins_Commander_DZ: Ins_Commander {
	displayName = "Ins Commander";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Ins_Soldier_Crew;
class Ins_Soldier_Crew_DZ: Ins_Soldier_Crew {
	displayName = "Ins Crewman";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class CDF_Soldier;
class CDF_Soldier_DZ: CDF_Soldier {
	displayName = "CDF Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Doctor;
class Doctor_DZ: Doctor {
	displayName = "Doctor";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Assistant;
class Assistant_DZ: Assistant {
	displayName = "Assistant";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Worker1;
class Worker1_DZ: Worker1 {
	displayName = "Worker (1)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Worker3;
class Worker3_DZ: Worker3 {
	displayName = "Worker (3)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class Worker4;
class Worker4_DZ: Worker4 {
	displayName = "Worker (4)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_CIV_Takistani01_EP1;
class TK_CIV_Takistani01_EP1_DZ: TK_CIV_Takistani01_EP1 {
	displayName = "TK Citizen (1)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_CIV_Takistani03_EP1;
class TK_CIV_Takistani03_EP1_DZ: TK_CIV_Takistani03_EP1 {
	displayName = "TK Citizen (2)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_CIV_Takistani04_EP1;
class TK_CIV_Takistani04_EP1_DZ: TK_CIV_Takistani04_EP1 {
	displayName = "TK Citizen (3)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_CIV_Takistani06_EP1;
class TK_CIV_Takistani06_EP1_DZ: TK_CIV_Takistani06_EP1 {
	displayName = "TK Citizen (4)";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_INS_Soldier_AR_EP1;
class TK_INS_Soldier_AR_EP1_DZ: TK_INS_Soldier_AR_EP1 {
	displayName = "TK Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class TK_GUE_Soldier_EP1;
class TK_GUE_Soldier_EP1_DZ: TK_GUE_Soldier_EP1 {
	displayName = "TK GUE Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class CZ_Soldier_SL_DES_EP1;
class CZ_Soldier_SL_DES_EP1_DZ: CZ_Soldier_SL_DES_EP1 {
	displayName = "CZ Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class US_Soldier_EP1;
class US_Soldier_EP1_DZ: US_Soldier_EP1 {
	displayName = "US Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class UN_CDF_Soldier_Guard_EP1;
class UN_CDF_Soldier_Guard_EP1_DZ: UN_CDF_Soldier_Guard_EP1 {
	displayName = "UN Commander";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class UN_CDF_Soldier_EP1;
class UN_CDF_Soldier_EP1_DZ: UN_CDF_Soldier_EP1 {
	displayName = "UN Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class GER_Soldier_TL_EP1;
class GER_Soldier_TL_EP1_DZ: GER_Soldier_TL_EP1 {
	displayName = "GER Recon";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class BAF_Soldier_Officer_MTP;
class BAF_Soldier_Officer_MTP_DZ: BAF_Soldier_Officer_MTP {
	displayName = "BAF Officer";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class BAF_Soldier_N_MTP;
class BAF_Soldier_N_MTP_DZ: BAF_Soldier_N_MTP {
	displayName = "BAF Soldier";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
class FR_Sapper;
class FR_Sapper_DZ: FR_Sapper {
	displayName = "Camo Sapper";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	canCarryBackPack = 1;
};
