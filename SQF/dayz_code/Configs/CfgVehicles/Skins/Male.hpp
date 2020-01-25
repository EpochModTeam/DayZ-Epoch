
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
	displayName = $STR_EPOCH_SKINS_SOLDIER;
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
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
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
		displayName = $STR_EPOCH_SKINS_BOSS;
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
		displayName = $STR_EPOCH_SKINS_CREWMAN;
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
		displayName = $STR_EPOCH_SKINS_GENERAL;
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
		displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
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
		displayName = $STR_EPOCH_SKINS_SMUGGLER;
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
	displayName = $STR_CHAR_2;
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
	displayName = $STR_CHAR_2;
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
	displayName = $STR_CHAR_2;
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
	displayName = $STR_CHAR_2;
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
	displayName = $STR_EPOCH_SKINS_POLICE_OFFICER;
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
	displayName = $STR_EPOCH_SKINS_PILOT;
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
	displayName = $STR_EPOCH_SKINS_JOURNALIST;
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
	displayName = $STR_EPOCH_SKINS_TERRORIST;
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
	displayName = $STR_EPOCH_SKINS_REBEL;
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
	displayName = $STR_EPOCH_SKINS_BUSINESSMAN;
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
	displayName = $STR_EPOCH_SKINS_PRIEST;
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
	displayName = $STR_EPOCH_SKINS_Rocker;
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
	displayName = $STR_EPOCH_SKINS_Rocker;
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
	displayName = $STR_EPOCH_SKINS_Rocker;
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
	displayName = $STR_EPOCH_SKINS_Rocker;
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
	displayName = $STR_EPOCH_SKINS_TAKISTANIWARLORD;
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
	displayName = $STR_EPOCH_SKINS_TAKISTANISOLDIER;
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
	displayName = $STR_EPOCH_SKINS_SPECIALFORCES;
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
	displayName = $STR_EPOCH_SKINS_DESERTCAMO;
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
	displayName = $STR_EPOCH_SKINS_BODYGUARD;
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
	displayName = $STR_EPOCH_SKINS_MARKSMAN;
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
	displayName = $STR_EPOCH_SKINS_TEAMLEADER;
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
	displayName = $STR_EPOCH_SKINS_JUNGLECAMO;
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
	displayName = $STR_EPOCH_SKINS_GUNNEROUTFIT;
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
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
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
	displayName = $STR_EPOCH_SKINS_URBANCAMO;
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
	displayName = $STR_EPOCH_SKINS_USMCOFFICER;
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
	displayName = $STR_EPOCH_SKINS_USMCSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_USMCPILOT;
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
	displayName = $STR_EPOCH_SKINS_CAMOTEAMLEADER;
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
	displayName = $STR_EPOCH_SKINS_CAMORECON;
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
	displayName = $STR_EPOCH_SKINS_CAMOMARKSMAN;
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
	displayName = $STR_EPOCH_SKINS_CAMOASSAULT;
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
	displayName = $STR_EPOCH_SKINS_RUSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_RUOFFICER;
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
	displayName = $STR_EPOCH_SKINS_RUCAMO;
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
	displayName = $STR_EPOCH_SKINS_RUCOMMANDER;
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
	displayName = $STR_EPOCH_SKINS_MVDSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_TERRORISTCAMO;
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
	displayName = $STR_EPOCH_SKINS_INSCOMMANDER;
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
	displayName = $STR_EPOCH_SKINS_INSCREWMAN;
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
	displayName = $STR_EPOCH_SKINS_CDFSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_DOCTOR;
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
	displayName = $STR_EPOCH_SKINS_ASSISTANT;
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
	displayName = $STR_EPOCH_SKINS_WORKER;
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
	displayName = $STR_EPOCH_SKINS_WORKER;
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
	displayName = $STR_EPOCH_SKINS_WORKER;
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
	displayName = $STR_EPOCH_SKINS_TKCITIZEN;
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
	displayName = $STR_EPOCH_SKINS_TKCITIZEN;
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
	displayName = $STR_EPOCH_SKINS_TKCITIZEN;
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
	displayName = $STR_EPOCH_SKINS_TKCITIZEN;
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
	displayName = $STR_EPOCH_SKINS_TKSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_TKGUESOLDIER;
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
	displayName = $STR_EPOCH_SKINS_CZSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_USSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_UNCOMMANDER;
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
	displayName = $STR_EPOCH_SKINS_UNSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_GERRECON;
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
	displayName = $STR_EPOCH_SKINS_BAFOFFICER;
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
	displayName = $STR_EPOCH_SKINS_BAFSOLDIER;
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
	displayName = $STR_EPOCH_SKINS_FRSAPPER;
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

class CamoWinter_DZ: Survivor_DZ {
    side = 1;
    scope = public;
    displayName = $STR_EPOCH_SKINS_THERMOSUITMAN;
    model = "\nst\ns_dayz\characters\cw\camowinter_dzn.p3d";
	faceType = "HeadMask1Black";
    camouflage = 1.4;
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\rus\data\soldier_specnaz_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_speccom.RVmat","ca\characters2\rus\data\soldier_speccom_w1.RVmat","ca\characters2\rus\data\soldier_speccom_w2.RVmat"};
	};	
};

class CamoWinterW_DZ: CamoWinter_DZ {
	model = "\nst\ns_dayz\characters\cw\camowinterw_dzn.p3d";
};

class Sniper1W_DZ: Sniper1_DZ {
	side = 1;
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\nst\ns_dayz\characters\gw\data\ghillie_overall1w_co.paa"};
};

class Nac_Soldier_DZ: Survivor_DZ {
	scope = public;
    side = 1;
    displayName = $STR_EPOCH_SKINS_NACSOLDIER;
    model = "\nst\ns_fraction\nac\nac_soldier_1";
};

class gsc_military_helmet_wdl_DZ : Survivor_DZ {
	scope = public;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_STALKER_WDL_MIL_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_military_helmet_wdl.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class gsc_military_head_wdl_DZ : Survivor_DZ {
	scope = public;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_STALKER_WDL_MIL_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_military_head_wdl.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class gsc_military_helmet_grey_DZ : Survivor_DZ {
	scope = public;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_STALKER_URB_MIL_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_military_helmet_grey.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class gsc_military_head_grey_DZ : Survivor_DZ {
	scope = public;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_STALKER_URB_MIL_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_military_head_grey.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class gsc_scientist1_DZ : Survivor_DZ {
	scope = public;	
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST1_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_suit.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};
class gsc_scientist1_head_DZ : Survivor_DZ {
	scope = public;	
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST1_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_suit_head.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};
class gsc_scientist2_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST2_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_suit2.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};
class gsc_scientist2_head_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST2_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_suit2_head.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};
class gsc_cloth_loner_head_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_ROOKIE_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_cloth_loner_head.p3d";
};
class gsc_eco_stalker_mask_neutral_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_LONER_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_mask.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_head_neutral_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_LONER_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_head.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_mask_fred_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_FREEDOM_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_mask_fred.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_head_fred_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_FREEDOM_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_head_fred.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_mask_duty_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_DUTY_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_mask_duty.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_head_duty_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_DUTY_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_head_duty.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_mask_camo_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_MONOLITH_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_mask_camo.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_head_camo_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_STALKER_MONOLITH_HEAD_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_head_camo1.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};

class GhillieFull_Desert01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert02_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert03_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert04_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert05_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert06_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert07_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert08_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
//new snow ghillies
class GhillieFull_Snow01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow02_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow03_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow04_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow05_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
//new urban ghillies
class GhillieFull_Urban01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_URB_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\urban\Skin_GhillieFull_Urban01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
//new wood ghillies
class GhillieFull_Wood01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood02_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood03_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood04_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood05_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood06_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood07_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood08_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood09_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood09.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood10_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood10.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood11_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood11.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood12_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood12.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood13_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood13.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood14_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood14.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood15_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood15.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood16_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood16.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
//KSK Mod Skins
class GER_Soldier_EP1_des_DZ: Survivor_DZ {
	scope = public;
	side = 1;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_KSK_DES_RIFLEMAN_NAME;
	model = "\ksk_mod\GER_rifleman_des.p3d";
};
class GER_Soldier_TL_EP1_des_DZ: GER_Soldier_EP1_des_DZ {
	displayName = $STR_DZE_SKIN_KSK_DES_TL_NAME;
	model = "\ksk_mod\GER_rifleman_light_des.p3d";
};
class GER_Soldier_EP1_wdl_DZ: GER_Soldier_EP1_des_DZ {
	displayName = $STR_DZE_SKIN_KSK_WDL_RIFLEMAN_NAME;
	model = "\ksk_mod\GER_rifleman_wdl.p3d";
};
class GER_Soldier_TL_EP1_wdl_DZ: GER_Soldier_EP1_des_DZ {
	displayName = $STR_DZE_SKIN_KSK_WDL_TL_NAME;
	model = "\ksk_mod\GER_rifleman_light_wdl.p3d";
};
//Ice Apo Mod Skins
class Apo_Rifleman_01_DZ: Survivor_DZ {
	scope = public;
	camouflage = 0.8;	
	displayName = $STR_DZE_SKIN_ICE_APO_RIFLEMAN_NAME;
	side = 1;
	model = "\ice_apo_resistance\soldier_hood_medium_beard.p3d";
	picture = "\Ca\characters\data\Ico\i_null_CA.paa";
	icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
	class Wounds {
		tex[] = {};
		mat[] = {"ice_apo_resistance\data\us_soldier_sabot_body.rvmat", "ice_apo_resistance\data\us_soldier_sabot_body_wound1.rvmat", "ice_apo_resistance\data\us_soldier_sabot_body_wound2.rvmat", "ice_apo_resistance\data\civil_tshirt_body.rvmat", "ice_apo_resistance\data\civil_tshirt_body_wound1.rvmat", "ice_apo_resistance\data\civil_tshirt_body_wound2.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_white.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds2.rvmat"};
	};
};
class Apo_Rifleman_02_DZ : Apo_Rifleman_01_DZ {
	model = "\ice_apo_resistance\soldier_helmet_medium.p3d";
};	
class Apo_Rifleman_03_DZ : Apo_Rifleman_01_DZ {
	model = "\ice_apo_resistance\soldier_helmet_officer.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"ice_apo_resistance\data\armysf_tl.rvmat", "ice_apo_resistance\data\armysf_tl_wound1.rvmat", "ice_apo_resistance\data\armysf_tl_wound2.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_white.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds2.rvmat"};
	};
};	
class Apo_Rifleman_04_DZ : Apo_Rifleman_01_DZ {
	model = "\ice_apo_resistance\soldier_hat_medium_clean.p3d";
};	
class Apo_Rifleman_05_DZ : Apo_Rifleman_01_DZ {
	model = "\ice_apo_resistance\soldier_mask_medium.p3d";
};	
class Apo_Rifleman_06_DZ : Apo_Rifleman_01_DZ {
	model = "\ice_apo_resistance\soldier_tank_light_clean.p3d";
};

class SG_GRU_TL_DZ : Survivor_DZ {
	scope = public;
	displayName = $STR_DZE_SKIN_SG_GRU_DT_TL_NAME;
	camouflage = 0.8;
	model = "\SG_GRU\Soldier_Gorka_1.p3d";
	picture = "\Ca\characters\data\Ico\i_null_CA.paa";
	icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";

	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\indepins\data\soldier_flecktarn.rvmat", "sg_gru\data\wounds\gorka_body_w1.rvmat", "sg_gru\data\wounds\gorka_body_w2.rvmat", "ca\characters2\rus\data\soldier_specnaz_partizan.rvmat", "sg_gru\data\wounds\gorka_legs_w1.rvmat", "sg_gru\data\wounds\gorka_legs_w2.rvmat"};
	};
};
class SG_GRU_Scout_DZ : SG_GRU_TL_DZ {
	displayName = $STR_DZE_SKIN_SG_GRU_DT_SCOUT_NAME;
	model = "\SG_GRU\Soldier_Gorka_2.p3d";
};
class SG_GRU_Sniper_DZ : SG_GRU_TL_DZ {
	displayName = $STR_DZE_SKIN_SG_GRU_DT_SNIPER_NAME;
	model = "\SG_GRU\Soldier_Sniper.p3d";
};
class SG_GRU_Spotter_DZ : SG_GRU_TL_DZ {
	displayName = $STR_DZE_SKIN_SG_GRU_DT_SPOTTER_NAME;
	model = "\SG_GRU\Soldier_Spotter.p3d";
};
class SG_GRU_TL_W_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_GorkaW_1.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_FLT_TL_NAME;
};
class SG_GRU_Scout_W_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_GorkaW_2.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_FLT_SCOUT_NAME;
};
class SG_GRU_Assaultman_W_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_gorkaW_3.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_FLT_RIFLEMAN_NAME;
};
class SG_GRU_Medic_W_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_gorkaW_5.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_FLT_MEDIC_NAME;
};
class SG_GRU_TL_D_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_GorkaD_1.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_WDL_TL_NAME;
};
class SG_GRU_Scout_D_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_GorkaD_2.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_WDL_SCOUT_NAME;
};
class SG_GRU_Marksman_D_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_gorkaD_4.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_WDL_MARKSMAN_NAME;
};
class SG_GRU_Operator_D_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_gorkaD_6.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_WDL_OPERATOR_NAME;
};
class SG_GRU_MG_D_DZ : SG_GRU_TL_DZ {
	model = "\SG_GRU\Soldier_gorkaD_7.p3d";
	displayName = $STR_DZE_SKIN_SG_GRU_WDL_MGSOLDIER_NAME;
};
class CZ_Soldier805_DES_ACR_DZ : Survivor_DZ {
	scope = public;	
	displayName = $STR_DZE_EQUIP_ACR_DES_SOLDIER_NAME;
	model = "\Ca\Characters_ACR\acr_dst_805";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
	picture = "\Ca\characters\data\Ico\i_null_CA";
	icon = "\Ca\characters2\data\icon\i_soldier_CA";	
	camouflage = 1;
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
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_ACR\Data\acr_dst_805.rvmat","Ca\Characters_ACR\Data\acr_dst_805_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_805_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_805g.rvmat","Ca\Characters_ACR\Data\acr_dst_805g_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_805g_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_crew.rvmat","Ca\Characters_ACR\Data\acr_dst_crew_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_crew_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_leader.rvmat","Ca\Characters_ACR\Data\acr_dst_leader_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_leader_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_medic.rvmat","Ca\Characters_ACR\Data\acr_dst_medic_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_medic_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_mg.rvmat","Ca\Characters_ACR\Data\acr_dst_mg_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_mg_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_officer.rvmat","Ca\Characters_ACR\Data\acr_dst_officer_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_officer_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec1_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec2_d2.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3_d1.rvmat","Ca\Characters_ACR\Data\acr_dst_spec3_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_805.rvmat","Ca\Characters_ACR\Data\acr_wld_805_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_805_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_805g.rvmat","Ca\Characters_ACR\Data\acr_wld_805g_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_805g_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_crew.rvmat","Ca\Characters_ACR\Data\acr_wld_crew_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_crew_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_leader.rvmat","Ca\Characters_ACR\Data\acr_wld_leader_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_leader_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_medic.rvmat","Ca\Characters_ACR\Data\acr_wld_medic_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_medic_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_mg.rvmat","Ca\Characters_ACR\Data\acr_wld_mg_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_mg_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_officer.rvmat","Ca\Characters_ACR\Data\acr_wld_officer_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_officer_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_rec1_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_soldier_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec1_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec2_d2.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3_d1.rvmat","Ca\Characters_ACR\Data\acr_wld_spec3_d2.rvmat","Ca\Characters_ACR\Data\acr_light.rvmat","Ca\Characters_ACR\Data\acr_light_d1.rvmat","Ca\Characters_ACR\Data\acr_light_d2.rvmat","Ca\Characters_ACR\Data\acr_pilot.rvmat","Ca\Characters_ACR\Data\acr_pilot_d1.rvmat","Ca\Characters_ACR\Data\acr_pilot_d2.rvmat","Ca\Characters_ACR\Data\acr_soldier.rvmat","Ca\Characters_ACR\Data\acr_soldier_d1.rvmat","Ca\Characters_ACR\Data\acr_soldier_d2.rvmat","Ca\Characters_ACR\Data\acr_soldier_2.rvmat","Ca\Characters_ACR\Data\acr_soldier_2_d1.rvmat","Ca\Characters_ACR\Data\acr_soldier_2_d2.rvmat"};
	};
	class HitDamage
	{
		class Group0
		{
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\zozo-hit-01",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-02",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-03",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-04",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-05",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-06",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-07",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-08",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-09",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\zozo-hit-10",0.17782794,1,120},0.1}};
			damageSounds[] = {{"body",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.25,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.25,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.25,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,0.25,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.3,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.3,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.4,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.5,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,0.5,20,40,60}}};
		};
		class Group1
		{
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\george-hit-01",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\george-hit-02",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\george-hit-03",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\george-hit-04",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\george-hit-05",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\george-hit-06",0.17782794,1,120},0.1}};
			damageSounds[] = {{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g2-01",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g2-02",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.125,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\george-damage-g2-07",0.056234132,1,120,0.125,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.34,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.33,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.33,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.34,20,40,60}}};
		};
		class Group2
		{
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\jennik-hit-01",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\jennik-hit-02",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\jennik-hit-03",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\jennik-hit-04",0.17782794,1,120},0.2},{{"ca\sounds\Characters\Noises\Damage\jennik-hit-05",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\jennik-hit-06",0.17782794,1,120},0.1}};
			damageSounds[] = {{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.165,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.165,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.165,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-05",0.056234132,1,120,0.165,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.165,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.175,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.34,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.5,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.5,20,40,60}}};
		};
		class Group3
		{
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\vasa-hit-01",0.17782794,1,120},0.15},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-02",0.17782794,1,120},0.15},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-03",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-04",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-05",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-06",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-07",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-08",0.17782794,1,120},0.1},{{"ca\sounds\Characters\Noises\Damage\vasa-hit-09",0.17782794,1,120},0.1}};
			damageSounds[] = {{"body",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.2,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.2,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.2,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.2,20,40,60}},{"body",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-05",0.07079458,1,120,0.2,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.33,20,40,60}},{"hands",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.34,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.5,20,40,60}},{"legs",{"ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.5,20,40,60}}};
		};
	};	
};

class CZ_Soldier_805_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_WDL_SOLDIER_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_805";
};
class CZ_Soldier_Crew_Dst_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_CREW_NAME;
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_crew_ca";
	model = "\Ca\Characters_ACR\acr_dst_crew";
};
class CZ_Soldier_Officer_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_OFFICER_NAME;
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
	picture = "\Ca\characters\data\Ico\i_off_CA";
	icon = "\Ca\characters2\data\icon\i_officer_CA";
	model = "\Ca\Characters_ACR\acr_wdl_officer";
};
class CZ_Soldier_Recon_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_SPFORCE_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_rec1";
	portrait = "\Ca\characters_E\data\portraits\delta_soldier_CA";
};	
class CZ_Soldier_Spec1_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_RECON_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_spec1";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
};	
class CZ_Soldier_Spec2_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_SAPPER_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_spec2";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
};	
class CZ_Soldier_Spec3_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_ASSAULT_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_spec3";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
	icon = "\Ca\characters2\data\icon\i_machinegunner_CA";
};
class CZ_Soldier_Spec_Demo_Dst_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_HEAVYSOLDIER_NAME;
	model = "\Ca\Characters_ACR\acr_dst_spec3";
};
class CZ_Soldier_Sniper_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_WDL_NAME;
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	model = "\Ca\Characters_ACR\Ghillie_Overall";
	camouflage = 0.5;	
};
class CZ_Soldier_Light_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_LIGHT_SOLDIER_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_light";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca";
};
	