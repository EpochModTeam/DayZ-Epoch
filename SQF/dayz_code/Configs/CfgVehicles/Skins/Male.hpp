
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
	scope = 0;
	faction = "CIV";
	genericNames = "CzechMen";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	armor = 2.5;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.4;
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
	scope = 0;
	side = TWest;
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = false; //fn_selfaction handles hide bodie
	backpack = "";
	canCarryBackPack = 1;
	enableGPS = 1;
	attendant = 0;
	engineer = 0;
	canDeactivateMines = 0;
	sensitivity = 10;	
	sensitivityEar = 1;
	
	class Eventhandlers
	{
		//local = "_z = _this select 0; if (!isServer && {!isNull _z} && {!(side _z in [west,east,civilian])}) exitWith { PVDZ_sec_atp = ['wrong side', player]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };";
	};
};

class SoldierLight_Base_DZ : Survivor_DZ {
	camouflage = 1.0;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class SoldierHeavy_Base_DZ : Survivor_DZ {
	camouflage = 1.0;
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class Survivor1_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_CHAR_1;
	model = "\dayz\objects\proxy_man";
};

class Survivor2_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_CHAR_1;
	model = "\dayz\characters\man_survivor";
};

class Survivor3_DZ : Survivor2_DZ {
	model = "\dayz\characters\man_hero";
	HiddenSelections[] = {"camo1", "camo2", "camo3"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa", "ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa", "ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
};

//Bandit1_DZ moved to DZE section below

class Rocket_DZ: SoldierLight_Base_DZ { //BAF_Soldier_Officer_W
	scope = 2;
	displayName = "Rocket";
	model = "\ca\characters_d_BAF\BAF_Soldier_Officer_BAF";
	portrait = "\ca\characters_d_baf\Data\portraits\baf_officer_CA";
  	identityTypes[] = {"Language_BAF","Head_BAF","BAF_Glasses"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class Soldier1_DZ: SoldierHeavy_Base_DZ { //BAF_Soldier_W
	scope = 2;
	displayName = $STR_EPOCH_SKINS_SOLDIER;
	model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
	portrait = "ca\characters_d_baf\Data\portraits\baf_soldier_CA";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class Sniper1_DZ: Survivor_DZ { //BAF_Soldier_SniperH_W
	scope = 2;
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

class Camo1_DZ: SoldierLight_Base_DZ { //BAF_Soldier_L_W
	scope = 2;
	displayName = $STR_CHAR_1;
	model = "\ca\characters_d_BAF\BAF_Soldier_light_BAF";
	portrait = "ca\characters_d_baf\Data\portraits\baf_soldier_CA";
	camouflage = 1.4;
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

class INS_Lopotev_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_BOSS;
	model = "\ca\characters2\OpforIns\Ins_Lopotev";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat","ca\characters2\OpforIns\data\ins_lopotev.rvmat","ca\characters2\OpforIns\data\W1_ins_lopotev.RVmat","ca\characters2\OpforIns\data\W2_ins_lopotev.RVmat"};
	};	
};

class RU_Soldier_Crew_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_CREWMAN;
	model = "\ca\characters2\Rus\Soldier_Crew";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Rus\DATA\soldier_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\Commander.rvmat","ca\characters2\Rus\DATA\W1_Commander.rvmat","ca\characters2\Rus\DATA\W2_Commander.rvmat"};
	};	
};

class TK_Commander_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_GENERAL;
	model = "\CA\characters_E\TK\Tk_Commander";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_soldier_ca";
	hiddenSelections[] = {"Camo"};
};

class TK_Soldier_Sniper_EP1_DZ: Sniper1_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	model = "\ca\characters_E\Ghillie\Ghillie_Top";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\Ghillie_Top_desert_co.paa"};	
};

class TK_Special_Forces_MG_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_SMUGGLER;
	model = "\CA\characters_E\TK\Tk_StormTrooper";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_soldier_ca";
	hiddenSelections[] = {"Camo"};
};

class INS_Soldier_AR_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = "Cooper";
	model = "\ca\characters2\OpforIns\Ins_Soldier_1.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	hiddenSelections[] = {"medic"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\OpforIns\data\lifcik_body_1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_2.RVmat","ca\characters2\OpforIns\data\smersh_body_2_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_2_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_G.RVmat","ca\characters2\OpforIns\data\smersh_body_G_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_G_W2.RVmat","ca\characters2\OpforIns\data\smersh_body_COM.RVmat","ca\characters2\OpforIns\data\smersh_body_COM_W1.RVmat","ca\characters2\OpforIns\data\smersh_body_COM_W2.RVmat","ca\characters2\OpforIns\data\lifcik_body_1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_1_W2.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W2.RVmat","Ca\characters2\OpforIns\Data\commander.rvmat","Ca\characters2\OpforIns\Data\commander_w1.rvmat","Ca\characters2\OpforIns\Data\commander_w2.rvmat","ca\characters2\OpforIns\data\lifcik_body_Crew.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W1.RVmat","ca\characters2\OpforIns\data\lifcik_body_AT_W2.RVmat"};
	};	
};

class INS_Soldier_CO_DZ: INS_Soldier_AR_DZ {
	displayName = "Travis";
	model = "\ca\characters2\OpforIns\Ins_Soldier_Com.p3d";
};

class INS_Bardak_DZ: TK_Commander_EP1_DZ {
	displayName = "Paulo";
	model = "\ca\characters2\OpforIns\Ins_Bardak.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat","ca\characters2\OpforIns\data\Ins_Bardak.rvmat","ca\characters2\OpforIns\data\W1_ins_bardak.rvmat","ca\characters2\OpforIns\data\W2_ins_bardak.rvmat"};
	};	
};

class INS_Worker2_DZ: INS_Soldier_AR_DZ {
	displayName = "Steve";
	model = "\ca\characters2\civil\Worker\Worker";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v2_CO.paa"};
};

class Bandit1_DZ : SoldierLight_Base_DZ { //Normal black PMC vest bandit
	scope = 2;
	displayName = $STR_CHAR_2;
	model = "\dayz\characters\man_bandit";
	portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
	HiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\frost\data\frost_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Frost\Data\Frost_1_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_2_co.paa"",""\Ca\Characters_PMC\Frost\Data\Frost_3_co.paa""] select floor random 3];";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\Frost\Data\frost.rvmat","Ca\Characters_PMC\Frost\Data\w1_frost.rvmat","Ca\Characters_PMC\Frost\Data\w2_frost.rvmat"};
	};	
};

class Bandit2_DZ: Bandit1_DZ { //German bright color camo bandit
	scope = 2;
	displayName = $STR_CHAR_2;
	weapons[] = {"Throw","Put"};
	model = "\ca\characters_E\GER\GER_rifleman";
	portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\dayz\textures\clothes\bandit_tex1_co.paa"};
	class EventHandlers {};
};

class GUE_Soldier_MG_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_CHAR_2;
	model = "\ca\characters2\IndepIns\Soldier_MG.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\IndepIns\Data\soldier_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W2.RVmat","ca\characters2\civil\worker\data\worker.rvmat","ca\characters2\civil\worker\data\W1_worker.rvmat","ca\characters2\civil\worker\data\W2_worker.rvmat","ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat","ca\characters2\IndepIns\Data\prizrak.rvmat","ca\characters2\IndepIns\Data\W1_prizrak.rvmat","ca\characters2\IndepIns\Data\W2_prizrak.rvmat","ca\characters2\IndepIns\Data\soldier_back_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W2.RVmat","ca\characters2\Data\ghillie.rvmat","ca\characters2\Data\w1_ghillie.rvmat","ca\characters2\Data\w2_ghillie.rvmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W2.RVmat"};
	};
};

class GUE_Soldier_Sniper_DZ: Sniper1_DZ {
	displayName = "Bandit Sniper";
	model = "\ca\characters2\Ghillie_Top";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\IndepIns\Data\soldier_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier2_woodland_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_mg_flecktarn_W2.RVmat","ca\characters2\civil\worker\data\worker.rvmat","ca\characters2\civil\worker\data\W1_worker.rvmat","ca\characters2\civil\worker\data\W2_worker.rvmat","ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat","ca\characters2\IndepIns\Data\prizrak.rvmat","ca\characters2\IndepIns\Data\W1_prizrak.rvmat","ca\characters2\IndepIns\Data\W2_prizrak.rvmat","ca\characters2\IndepIns\Data\soldier_back_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_khaki_W2.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W1.RVmat","ca\characters2\IndepIns\Data\soldier_back_woodland_W2.RVmat","ca\characters2\Data\ghillie.rvmat","ca\characters2\Data\w1_ghillie.rvmat","ca\characters2\Data\w2_ghillie.rvmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_flecktarn_W2.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W1.RVmat","ca\characters2\IndepIns\Data\soldier_com_khaki_W2.RVmat"};
	};	
};

class GUE_Soldier_Crew_DZ: GUE_Soldier_MG_DZ {
	portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";
	model = "\ca\characters2\IndepIns\Soldier.p3d";
	faceType = "HeadMask1Black";
};

class GUE_Soldier_CO_DZ: GUE_Soldier_MG_DZ {
	model = "\ca\characters2\IndepIns\Soldier_COM.p3d";
};

class GUE_Soldier_2_DZ: GUE_Soldier_MG_DZ {
	model = "\ca\characters2\IndepIns\Soldier2.p3d";
};

class RU_Policeman_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_POLICE_OFFICER;
	model = "\ca\characters2\civil\Policeman\Policeman";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};

class RU_Policeman2_DZ: RU_Policeman_DZ {
	model = "kpfs_civ\guard";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class Wounds
	{
		tex[] = {};
		mat[] = {"kpfs_civ\data\guard.rvmat","kpfs_civ\data\guard_wound1.rvmat","kpfs_civ\data\guard_wound2.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};

class Pilot_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_PILOT;
	model = "\Ca\characters_E\Civil\Pilot\pilot";
};

class Haris_Press_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_JOURNALIST;
	model = "\ca\characters_E\Civil\Harris\Harris";
	hiddenSelections[] = {};
};

class Ins_Soldier_GL_DZ: INS_Soldier_AR_DZ {
	displayName = $STR_EPOCH_SKINS_TERRORIST;
	model = "\ca\characters2\OpforIns\Ins_Soldier_G.p3d";
	faceType = "HeadMask3Khaki";
};

class GUE_Commander_DZ: GUE_Soldier_MG_DZ {
	displayName = $STR_EPOCH_SKINS_REBEL;
	model = "\ca\characters2\IndepIns\Prizrak";
};

class Functionary1_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_BUSINESSMAN;
	model = "\Ca\characters_E\Civil\Functionary\Functionary";
};

class Priest_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_PRIEST;
	model = "\ca\characters2\civil\Priest\Priest";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class Rocker1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_Rocker;
	model = "\ca\characters2\civil\Rocker\Rocker";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\Rocker\data\Rocker.rvmat","ca\characters2\civil\Rocker\data\W1_Rocker.rvmat","ca\characters2\civil\Rocker\data\W2_Rocker.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
	hiddenSelections[] = {"Camo","CamoB"};
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_ca.paa"};
};

class Rocker2_DZ: Rocker1_DZ {
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v2_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_ca.paa"};
};

class Rocker3_DZ: Rocker1_DZ {
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v3_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_v2_ca.paa"};
};

class Rocker4_DZ: Rocker1_DZ {
	hiddenSelectionsTextures[] = {"\ca\characters2\Civil\Rocker\Data\rocker_v4_co.paa","\ca\characters2\Civil\Rocker\Data\rockerhair_v3_ca.paa"};
};

class TK_INS_Warlord_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_TAKISTANIWARLORD;
	model = "\CA\characters_E\LOC\LOC_soldier02";
	portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
	};
};

class TK_INS_Soldier_EP1_DZ: TK_INS_Warlord_EP1_DZ {
	displayName = $STR_EPOCH_SKINS_TAKISTANISOLDIER;
	model = "\CA\characters_E\LOC\LOC_soldier01";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
	};	
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_3_co.paa""] select floor random 3]";
	};
};
	
class CZ_Special_Forces_GL_DES_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_SPECIALFORCES;
	model = "\CA\characters_E\ACR\acr_soldier_spec1";
	portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {};
	};
	hiddenSelections[] = {"Camo"};
};
	
class Drake_Light_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_DESERTCAMO;
	model = "\ca\characters_E\US\US_machine_gunner_Light";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_E\US\data\tex1.rvmat","ca\characters_E\US\data\W1_tex1.rvmat","ca\characters_E\US\data\W2_tex1.rvmat","ca\characters_E\US\data\tex4.rvmat","ca\characters_E\US\data\W1_tex4.rvmat","ca\characters_E\US\data\W2_tex4.rvmat","ca\characters_e\US\data\us_pilot.rvmat","ca\characters_e\US\data\W1_us_pilot.rvmat","ca\characters_e\US\data\W2_us_pilot.rvmat"};
	};	
};

class Soldier_Bodyguard_AA12_PMC_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_BODYGUARD;
	model = "\Ca\Characters_PMC\Dixon\Dixon.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
	HiddenSelections[] = {"camo1","camo2","camo3"};
	HiddenSelectionsTextures[] = {"ca\characters_E\Civil\Harris\Data\european-man_01_co.paa","ca\characters_pmc\dixon\data\dix_co.paa","ca\characters_E\Delta\Data\DO_Equip_CO.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""ca\characters_pmc\dixon\data\european-man_02_co.paa"",""ca\characters_pmc\dixon\data\european-man_03_co.paa"",""ca\characters_pmc\dixon\data\european-man_04_co.paa"",""ca\characters_pmc\dixon\data\european-man_05_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""Ca\Characters_PMC\Dixon\Data\Dix_1_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_2_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_3_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa"",""Ca\Characters_PMC\Dixon\Data\Dix_4_CO.paa""] select floor random 5]";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\Dixon\Data\dix.rvmat","Ca\Characters_PMC\Dixon\Data\w1_dix.rvmat","Ca\Characters_PMC\Dixon\Data\w2_dix.rvmat","Ca\Characters_PMC\Dixon\Data\do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w1_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\w2_do_equip.rvmat","Ca\Characters_PMC\Dixon\Data\european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w1_european-man_01.rvmat","Ca\Characters_PMC\Dixon\Data\w2_european-man_01.rvmat"};
	};
};

class Soldier_Sniper_PMC_DZ: Soldier_Bodyguard_AA12_PMC_DZ {
	displayName = $STR_EPOCH_SKINS_MARKSMAN;
	model = "\dayz\characters\man_hero";
	HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
	};
};

class Soldier_TL_PMC_DZ: Soldier_Bodyguard_AA12_PMC_DZ {
	displayName = $STR_EPOCH_SKINS_TEAMLEADER;
	model = "\Ca\Characters_PMC\Gracenko\Gracenko.p3d";
	HiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"ca\characters_pmc\gracenko\data\gracenko_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\Gracenko\Data\Gracenko_1_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_2_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_3_co.paa"",""\Ca\Characters_PMC\Gracenko\Data\Gracenko_4_co.paa""] select floor random 4];";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\Characters_PMC\Gracenko\Data\gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w1_gracenko.rvmat","Ca\Characters_PMC\Gracenko\Data\w2_gracenko.rvmat"};
	};
};

class FR_OHara_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_JUNGLECAMO;
	model = "\ca\characters2\USMC\Ohara";
	portrait = "\Ca\characters\data\portraits\comBarHead_ohara_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\fr_corpsman_body.rvmat","Ca\characters2\USMC\DATA\W1_fr_corpsman_body.rvmat","Ca\characters2\USMC\DATA\W2_fr_corpsman_body.rvmat","Ca\characters2\USMC\DATA\fr_corpsman_gear.rvmat","Ca\characters2\USMC\DATA\W1_fr_corpsman_gear.rvmat","Ca\characters2\USMC\DATA\W2_fr_corpsman_gear.rvmat"};
	};	
};

class FR_Rodriguez_DZ: FR_OHara_DZ {
	displayName = $STR_EPOCH_SKINS_GUNNEROUTFIT;
	model = "\ca\characters2\USMC\Rodriguez";
	portrait = "\Ca\characters\data\portraits\comBarHead_rodriguez_ca";
};

class CZ_Soldier_Sniper_EP1_DZ: Sniper1_DZ {	
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	model = "\ca\characters_E\Ghillie\Ghillie_Overall";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};	
};

class Graves_Light_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_URBANCAMO;
	model = "\ca\characters_E\Delta\Delta2_Light.p3d";
	portrait = "\ca\characters_E\data\portraits\Graves_CA.paa";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};	
};

class USMC_Soldier_Officer_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_USMCOFFICER;
	model = "\ca\characters2\USMC\USMC_soldier_Officer";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\usmc\marines\data\usmc_soldier.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_at.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_CO.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_DMR.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_med.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_mine.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_saw.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_scout.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_soldier_tl.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\usmc\marines\data\usmc_Crew.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","ca\characters2\usmc\data\usmc_officer_body.rvmat","ca\characters2\data\USMC_soldier_W1.rvmat","ca\characters2\data\USMC_soldier_W2.rvmat","Ca\characters2\USMC\data\us_Crew.rvmat","Ca\characters2\USMC\data\W1_us_crew.rvmat","Ca\characters2\USMC\data\W2_us_crew.rvmat"};
	};
};

class USMC_Soldier_MG_DZ: USMC_Soldier_Officer_DZ {	
	displayName = $STR_EPOCH_SKINS_USMCSOLDIER;
	model = "\ca\characters2\USMC\usmc_soldier_MG";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class USMC_Soldier_Pilot_DZ: USMC_Soldier_MG_DZ {
	displayName = $STR_EPOCH_SKINS_USMCPILOT;
	model = "\ca\characters2\USMC\usmc_soldier_pilot";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\data\us_pilot_body.rvmat","ca\characters\data\us_pilot_body_wound1.rvmat","ca\characters\data\us_pilot_body_wound2.rvmat","ca\characters\data\us_pilot_hhl.rvmat","ca\characters\data\us_pilot_hhl_wound1.rvmat","ca\characters\data\us_pilot_hhl_wound2.rvmat"};
	};	
};

class FR_TL_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_CAMOTEAMLEADER;
	model = "\ca\characters2\USMC\FR_CO";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";	
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_CO_Body.RVmat","Ca\characters2\USMC\DATA\W1_FR_co_body.rvmat","Ca\characters2\USMC\DATA\W2_FR_co_body.rvmat","Ca\characters2\USMC\DATA\FR_CO_Gear.RVmat","Ca\characters2\USMC\DATA\W1_FR_CO_Gear.RVmat","Ca\characters2\USMC\DATA\W2_FR_CO_Gear.RVmat"};
	};
};

class FR_R_DZ: FR_TL_DZ {
	displayName = $STR_EPOCH_SKINS_CAMORECON;
	model = "\ca\characters2\USMC\FR_Scout1";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_Scout1_Body.RVmat","Ca\characters2\USMC\DATA\W1_FR_Scout1_body.rvmat","Ca\characters2\USMC\DATA\W2_FR_Scout1_body.rvmat","Ca\characters2\USMC\DATA\FR_Scout1_Gear.RVmat","Ca\characters2\USMC\DATA\W1_FR_Scout1_Gear.RVmat","Ca\characters2\USMC\DATA\W2_FR_Scout1_Gear.RVmat"};
	};	
};

class FR_Marksman_DZ: FR_TL_DZ {
	displayName = $STR_EPOCH_SKINS_CAMOMARKSMAN;
	model = "\ca\characters2\USMC\FR_Marksman";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_Marksman_Body.RVmat","Ca\characters2\USMC\DATA\W1_FR_Marksman_body.rvmat","Ca\characters2\USMC\DATA\W2_FR_Marksman_body.rvmat","Ca\characters2\USMC\DATA\FR_Marksman_Gear.RVmat","Ca\characters2\USMC\DATA\W1_FR_Marksman_Gear.RVmat","Ca\characters2\USMC\DATA\W2_FR_Marksman_Gear.RVmat"};
	};
};

class FR_Assault_R_DZ: FR_TL_DZ {
	displayName = $STR_EPOCH_SKINS_CAMOASSAULT;
	model = "\ca\characters2\USMC\FR_DirAction1";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_spec_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_DA1.rvmat","Ca\characters2\USMC\DATA\W1_FR_DA1.rvmat","Ca\characters2\USMC\DATA\W2_FR_DA1.rvmat"};
	};	
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class RU_Soldier_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_RUSOLDIER;
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_soldier_ca";
	model = "\ca\characters2\Rus\Soldier";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\Rus\DATA\soldier_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_co_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_mg_flora_vsr_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w1.RVmat","ca\characters2\Rus\DATA\soldier_at_flora_VSR_vest_w2.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_pilot_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w1.RVmat","ca\characters2\Rus\DATA\soldier_crew_flora_vsr_w2.RVmat","ca\characters2\Rus\DATA\Commander.rvmat","ca\characters2\Rus\DATA\W1_Commander.rvmat","ca\characters2\Rus\DATA\W2_Commander.rvmat"};
	};	
};


class RU_Soldier_Officer_DZ: RU_Soldier_DZ {
	displayName = $STR_EPOCH_SKINS_RUOFFICER;
	portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
	model = "\ca\characters2\Rus\Soldier_CO";	
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class RUS_Soldier1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_RUCAMO;
	model = "\ca\characters2\Rus\Specnaz_Back";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\rus\data\soldier_specnaz_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w1.rvmat","ca\characters2\rus\data\soldier_specnaz_back_partizan_w2.rvmat","ca\characters2\rus\data\soldier_speccom.RVmat","ca\characters2\rus\data\soldier_speccom_w1.RVmat","ca\characters2\rus\data\soldier_speccom_w2.RVmat"};
	};	
};

class RUS_Commander_DZ: RUS_Soldier1_DZ {
	displayName = $STR_EPOCH_SKINS_RUCOMMANDER;
	model = "\ca\characters2\Rus\Specnaz_CO";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
};

class MVD_Soldier_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_MVDSOLDIER;
	model = "\ca\characters2\Rus\Vityaz";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_mvd_ca";
	faceType = "HeadMask1Black";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\rus\data\soldier_vityaz_2_partizan_vest.rvmat","ca\characters2\rus\data\soldier_vityaz_2_partizan_vest_w1.rvmat","ca\characters2\rus\data\soldier_vityaz_2_partizan_vest_w2.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest_w1.rvmat","ca\characters2\rus\data\soldier_vityaz_partizan_vest_w2.rvmat"};
	};	
};

class Ins_Soldier_2_DZ: INS_Soldier_AR_DZ {	
	displayName = $STR_EPOCH_SKINS_TERRORISTCAMO;
	model = "\ca\characters2\OpforIns\Ins_Soldier_2.p3d";
	faceType = "HeadMask3Khaki";
};

class Ins_Commander_DZ: INS_Soldier_AR_DZ {
	displayName = $STR_EPOCH_SKINS_INSCOMMANDER;
	model = "\ca\characters2\OpforIns\Ins_Commander.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_ru_spec_com_ca";
};

class Ins_Soldier_Crew_DZ: INS_Soldier_AR_DZ {
	displayName = $STR_EPOCH_SKINS_INSCREWMAN;
	model = "\ca\characters2\OpforIns\Ins_Soldier_Crew.p3d";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";
};

class CDF_Soldier_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_CDFSOLDIER;
	portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
	model = "\ca\characters2\Blufor\Soldier";
};

class Doctor_DZ: Survivor_DZ {
	scope = 2;	
	displayName = $STR_EPOCH_SKINS_DOCTOR;
	model = "\ca\characters2\civil\Doctor\Doctor";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\doctor\data\doctor_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};	
};

class Assistant_DZ: Doctor_DZ {
	displayName = $STR_EPOCH_SKINS_ASSISTANT;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\doctor\data\doctor_3_co.paa"};
};

class SchoolTeacher_DZ: Doctor_DZ {
	displayName = $STR_EPOCH_SKINS_TEACHER;
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\doctor\data\doctor2_co.paa"};
};

class Gardener_DZ: Doctor_DZ {
	displayName = $STR_EPOCH_SKINS_GARDENER;
	hiddenSelectionsTextures[] = {"\kpfs_civ\data\dealer_beer_co.paa"};
};

class Worker1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_WORKER;
	model = "\ca\characters2\civil\Worker\Worker";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\worker_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\civil\worker\data\worker.rvmat","ca\characters2\civil\worker\data\W1_worker.rvmat","ca\characters2\civil\worker\data\W2_worker.rvmat"};
	};
};

class Worker3_DZ: Worker1_DZ {
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v3_CO.paa"};
};

class Worker4_DZ: Worker1_DZ {
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\worker\data\Worker_v4_CO.paa"};
};

class TK_CIV_Takistani01_EP1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_TKCITIZEN;
	hiddenSelections[] = {"Camo"};
	model = "\CA\characters_E\civil\Tak_civil01\Tak_civil01";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil01\Data\Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W1_Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W2_Tak_civil01.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_2_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_3_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_4_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_5_co.paa""] select floor random 5]";
	};	
};

class TK_CIV_Takistani03_EP1_DZ: TK_CIV_Takistani01_EP1_DZ {
	model = "\CA\characters_E\civil\Tak_civil03\Tak_civil03";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil03\Data\Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W1_Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W2_Tak_civil03.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_2_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_3_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_4_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_5_co.paa""] select floor random 5]";
	};
};

class TK_CIV_Takistani04_EP1_DZ: TK_CIV_Takistani01_EP1_DZ {
	model = "\CA\characters_E\civil\Tak_civil04\Tak_civil04";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil04\Data\Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W1_Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W2_Tak_civil04.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_2_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_3_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_4_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_5_co.paa""] select floor random 5]";
	};
};

class TK_CIV_Takistani06_EP1_DZ: TK_CIV_Takistani01_EP1_DZ {
	model = "\CA\characters_E\civil\Tak_civil06\Tak_civil06";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\civil\Tak_civil06\Data\Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W1_Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W2_Tak_civil06.rvmat"};
	};
	hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_2_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_3_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_4_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_5_co.paa""] select floor random 5]";
	};
};

class TK_INS_Soldier_AR_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_TKSOLDIER;
	model = "\CA\characters_E\LOC\LOC_soldier05";
	portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
	};
};

class TK_GUE_Soldier_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_TKGUESOLDIER;
	model = "\CA\characters_E\LOC\LOC_soldier01";
	portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";
	class Wounds
	{
		tex[] = {};
		mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"};
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
	};
};

class CZ_Soldier_SL_DES_EP1_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_CZSOLDIER;
	portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
	hiddenSelections[] = {"Camo"};
	model = "\CA\characters_E\ACR\acr_soldier";
};

class US_Soldier_EP1_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_USSOLDIER;
	model = "\ca\characters_e\US\US_rifleman";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_E\US\data\tex1.rvmat","ca\characters_E\US\data\W1_tex1.rvmat","ca\characters_E\US\data\W2_tex1.rvmat","ca\characters_E\US\data\tex4.rvmat","ca\characters_E\US\data\W1_tex4.rvmat","ca\characters_E\US\data\W2_tex4.rvmat","ca\characters_e\US\data\us_pilot.rvmat","ca\characters_e\US\data\W1_us_pilot.rvmat","ca\characters_e\US\data\W2_us_pilot.rvmat"};
	};	
};

class UN_CDF_Soldier_Guard_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_UNCOMMANDER;
	model = "\ca\characters_e\UN\UN_CDF_Officer";
	portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
};

class UN_CDF_Soldier_EP1_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_UNSOLDIER;
	model = "\ca\characters_E\UN\UN_CDF_Soldier";
};

class GER_Soldier_TL_EP1_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_GERRECON;
	model = "\ca\characters_E\GER\GER_rifleman_light";
	portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
	hiddenSelections[] = {"Camo"};
};

class BAF_Soldier_Officer_MTP_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_EPOCH_SKINS_BAFOFFICER;
	portrait = "\ca\characters_d_baf\Data\portraits\baf_officer_CA";
	model = "\ca\characters_d_BAF\BAF_Soldier_Officer_BAF";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters_d_baf\Data\armour.rvmat","ca\characters_d_baf\Data\W1_armour.rvmat","ca\characters_d_baf\Data\W2_armour.rvmat","ca\characters_d_baf\Data\camo.rvmat","ca\characters_d_baf\Data\W1_camo.rvmat","ca\characters_d_baf\Data\W2_camo.rvmat"};
	};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\ca\characters_d_baf\data\camo_MTP_co.paa","\ca\characters_d_baf\data\armour_co.paa","\ca\characters_d_baf\data\equip_d_co.paa"};
};

class BAF_Soldier_N_MTP_DZ: BAF_Soldier_Officer_MTP_DZ {
	displayName = $STR_EPOCH_SKINS_BAFSOLDIER;
	model = "\ca\characters_d_BAF\BAF_Soldier_1_BAF";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class FR_Sapper_DZ: FR_TL_DZ {
	displayName = $STR_EPOCH_SKINS_FRSAPPER;
	model = "\ca\characters2\USMC\FR_Scout3";
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\characters2\USMC\DATA\FR_Scout3_Body.RVmat","Ca\characters2\USMC\DATA\W1_FR_Scout3_body.rvmat","Ca\characters2\USMC\DATA\W2_FR_Scout3_body.rvmat","Ca\characters2\USMC\DATA\FR_Scout3_Gear.RVmat","Ca\characters2\USMC\DATA\W1_FR_Scout3_Gear.RVmat","Ca\characters2\USMC\DATA\W2_FR_Scout3_Gear.RVmat"};
	};	
};

class CamoWinter_DZ: Survivor_DZ {
    scope = 2;
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
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\nst\ns_dayz\characters\gw\data\ghillie_overall1w_co.paa"};
};

class Nac_Soldier_DZ: SoldierHeavy_Base_DZ {
	scope = 2;
    displayName = $STR_EPOCH_SKINS_NACSOLDIER;
    model = "\nst\ns_fraction\nac\nac_soldier_1";
};

class gsc_military_helmet_wdl_DZ : SoldierHeavy_Base_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_STALKER_WDL_MIL_MASK_NAME;
	model = "\gsc_stalker\gsc_military_helmet_wdl.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\military.rvmat", "gsc_stalker\military_wound1.rvmat", "gsc_stalker\military_wound2.rvmat"};
	};
};
class gsc_military_head_wdl_DZ : gsc_military_helmet_wdl_DZ {
	displayName = $STR_DZE_SKIN_STALKER_WDL_MIL_HEAD_NAME;
	model = "\gsc_stalker\gsc_military_head_wdl.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class gsc_military_helmet_grey_DZ : gsc_military_helmet_wdl_DZ {
	displayName = $STR_DZE_SKIN_STALKER_URB_MIL_MASK_NAME;
	model = "\gsc_stalker\gsc_military_helmet_grey.p3d";
};
class gsc_military_head_grey_DZ : gsc_military_helmet_wdl_DZ {
	displayName = $STR_DZE_SKIN_STALKER_URB_MIL_HEAD_NAME;
	model = "\gsc_stalker\gsc_military_head_grey.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
};

class gsc_scientist1_DZ : Survivor_DZ {
	scope = 2;	
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST1_MASK_NAME;
	model = "\gsc_stalker\gsc_eco_suit.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\scien.rvmat", "gsc_stalker\scien_wound1.rvmat", "gsc_stalker\scien_wound2.rvmat"};
	};
};

class gsc_scientist1_head_DZ : gsc_scientist1_DZ {
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST1_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_suit_head.p3d";
};

class gsc_scientist2_DZ : gsc_scientist1_DZ {
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST2_MASK_NAME;
	model = "\gsc_stalker\gsc_eco_suit2.p3d";
};

class gsc_scientist2_head_DZ : gsc_scientist1_DZ {
	displayName = $STR_DZE_SKIN_STALKER_SCIENTIST2_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_suit2_head.p3d";
};

class gsc_cloth_loner_head_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_STALKER_ROOKIE_NAME;
	model = "\gsc_stalker\gsc_cloth_loner_head.p3d";
};

class gsc_eco_stalker_mask_neutral_DZ : SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_STALKER_LONER_MASK_NAME;
	side = 1;
	model = "\gsc_stalker\gsc_eco_stalker_mask.p3d";
	class Wounds {
		tex[] = {};
		mat[] = {"gsc_stalker\stalker.rvmat", "gsc_stalker\stalker_wound1.rvmat", "gsc_stalker\stalker_wound2.rvmat"};
	};
};
class gsc_eco_stalker_head_neutral_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_LONER_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_head.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
};
class gsc_eco_stalker_mask_fred_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_FREEDOM_MASK_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_mask_fred.p3d";
};
class gsc_eco_stalker_head_fred_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_FREEDOM_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_head_fred.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
};
class gsc_eco_stalker_mask_duty_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_DUTY_MASK_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_mask_duty.p3d";
};
class gsc_eco_stalker_head_duty_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_DUTY_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_head_duty.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
};
class gsc_eco_stalker_mask_camo_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_MONOLITH_MASK_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_mask_camo.p3d";
};
class gsc_eco_stalker_head_camo_DZ : gsc_eco_stalker_mask_neutral_DZ {
	displayName = $STR_DZE_SKIN_STALKER_MONOLITH_HEAD_NAME;
	model = "\gsc_stalker\gsc_eco_stalker_head_camo1.p3d";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
};

class GhillieFull_Desert01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_DES_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert02_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert03_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert04_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert05_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert06_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert07_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Desert08_DZ: GhillieFull_Desert01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\desert\Skin_GhillieFull_Desert08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
//new snow ghillies
class GhillieFull_Snow01_DZ: Sniper1_DZ {
	displayName = $STR_DZE_SKIN_GHILLIE_SNOW_NAME;
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow01.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow02_DZ: GhillieFull_Snow01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow03_DZ: GhillieFull_Snow01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow04_DZ: GhillieFull_Snow01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\snow\Skin_GhillieFull_Snow04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Snow05_DZ: GhillieFull_Snow01_DZ {
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
class GhillieFull_Wood02_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood02.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood03_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood03.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood04_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood04.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood05_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood05.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood06_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood06.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood07_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood07.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood08_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood08.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood09_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood09.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood10_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood10.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood11_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood11.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood12_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood12.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood13_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood13.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood14_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood14.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood15_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood15.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};
class GhillieFull_Wood16_DZ: GhillieFull_Wood01_DZ {
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\ghillies\wood\Skin_GhillieFull_Wood16.paa","\ca\characters_W_baf\data\armour_dpm_co.paa","\ca\characters_W_baf\data\equip_dpm_co.paa"};
};

//KSK Mod Skins
class GER_Soldier_EP1_des_DZ: SoldierLight_Base_DZ {	
	scope = 2;	
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
class Apo_Rifleman_01_DZ: SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_ICE_APO_RIFLEMAN_NAME;
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
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.8;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};		
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

class SG_GRU_TL_DZ : SoldierLight_Base_DZ {
	scope = 2;
	displayName = $STR_DZE_SKIN_SG_GRU_DT_TL_NAME;
	model = "\SG_GRU\Soldier_Gorka_1.p3d";
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
class CZ_Soldier805_DES_ACR_DZ : SoldierHeavy_Base_DZ {
	scope = 2;	
	displayName = $STR_DZE_EQUIP_ACR_DES_SOLDIER_NAME;
	model = "\Ca\Characters_ACR\acr_dst_805";
	portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";	
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
	model = "\Ca\Characters_ACR\acr_wdl_officer";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
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
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};	
class CZ_Soldier_Spec2_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_SAPPER_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_spec2";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};	
class CZ_Soldier_Spec3_Wdl_ACR_DZ : CZ_Soldier805_DES_ACR_DZ {
	displayName = $STR_DZE_EQUIP_ACR_ASSAULT_NAME;
	model = "\Ca\Characters_ACR\acr_wdl_spec3";
	portrait = "\Ca\characters\data\portraits\comBarHead_fr_soldier_ca";
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
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
	class HitPoints: HitPoints
	{
		class HitHead: HitHead
		{
			armor = 0.5;
		};
		class HitBody: HitBody
		{
			armor = 1;
			passThrough = 0.8;
		};
	};	
};

class Firefighter1_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_FIREFIGHTER_NAME;
	model = "\kpfs_thw\characters\worker\thw_worker";
	hiddenSelections[] = {"camo01","hps","glasses"};
	hiddenSelectionsTextures[] = {"\kpfs_thw\characters\worker\thw_worker_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_thw\characters\worker\thw_worker.rvmat","kpfs_thw\characters\worker\thw_worker_wound1.rvmat","kpfs_thw\characters\worker\thw_worker_wound2.rvmat"};
	};
};
class Firefighter2_DZ : Firefighter1_DZ {
	hiddenSelections[] = {"camo01"};
	hiddenSelectionsTextures[] = {"\kpfs_thw\characters\worker\thw_worker_co.paa"};
};
class Firefighter3_DZ : Firefighter1_DZ {
	hiddenSelections[] = {"camo01","hps","glasses"};
	hiddenSelectionsTextures[] = {"\kpfs_thw\characters\press\thw_press_co.paa"};
};
class Firefighter4_DZ : Firefighter1_DZ {
	model = "kpfs_feuerwehr\firefighter";
	class Wounds
	{
		tex[] = {};
		mat[] = {"kpfs_feuerwehr\man\fw_man.rvmat","kpfs_feuerwehr\man\fw_man_wound1.rvmat","kpfs_feuerwehr\man\fw_man_wound2.rvmat"};
	};
	hiddenSelections[] = {"camo01","camo02"};
	hiddenSelectionsTextures[] = {"\kpfs_feuerwehr\man\fw_man_co.paa","\kpfs_feuerwehr\man\fw_helmet_tl_co.paa"};	
};
class Firefighter5_DZ : Firefighter4_DZ {
	model = "kpfs_feuerwehr\firefighter";
	hiddenSelectionsTextures[] = {"\kpfs_feuerwehr\man\fw_leader_co.paa","\kpfs_feuerwehr\man\fw_helmet_sl_co.paa"};
};
class Firefighter_Officer1_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_FIREFIGHTER_OFFICER_NAME;
	model = "\kpfs_thw\characters\officer\thw_officer";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_thw\characters\officer\thw_officer.rvmat","kpfs_thw\characters\officer\thw_officer_wound1.rvmat","kpfs_thw\characters\officer\thw_officer_wound2.rvmat"};
	};
};
class Firefighter_Officer2_DZ : Firefighter_Officer1_DZ {
	model = "kpfs_feuerwehr\fwofficer";
	class Wounds
	{
		tex[] = {};
		mat[] = {"kpfs_feuerwehr\officer\fw_officer.rvmat","kpfs_feuerwehr\officer\fw_officer_wound1.rvmat","kpfs_feuerwehr\officer\fw_officer_wound2.rvmat"};
	};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
};

class Postman1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_POSTMAN_NAME;
	model = "kpfs_civ\dbp_officer";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_civ\data\dbp_officer.rvmat","kpfs_civ\data\dbp_officer_wound1.rvmat","kpfs_civ\data\dbp_officer_wound2.rvmat"};
	};
};

class Postman2_DZ: Postman1_DZ {
	model = "kpfs_civ\dbp_officer_cap";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_civ\data\dbp72_officer.rvmat","kpfs_civ\data\dbp72_officer_wound1.rvmat","kpfs_civ\data\dbp72_officer_wound2.rvmat"};
	};
};

class Postman3_DZ: Postman1_DZ {
	model = "kpfs_civ\dpag_1_tshirt";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_civ\data\civil_tshirt_body.rvmat","kpfs_civ\data\civil_tshirt_body_wound1.rvmat","kpfs_civ\data\civil_tshirt_body_wound2.rvmat"};
	};
};

class Postman4_DZ: Postman1_DZ {
	model = "kpfs_civ\dp_officer";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","kpfs_civ\data\dp_officer.rvmat","kpfs_civ\data\dp_officer_wound1.rvmat","kpfs_civ\data\dp_officer_wound2.rvmat"};
	};
};

class Hunter_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_HUNTER_NAME;
	model = "kpfs_civ\hunter";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters2\IndepIns\Data\prizrak.rvmat","ca\characters2\IndepIns\Data\W1_prizrak.rvmat","ca\characters2\IndepIns\Data\W2_prizrak.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
	};
};

class Civilian1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_CHAR_1;
	hiddenSelections[] = {"Camo01","Camo02","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_dress_co.paa","sra_civilian\civilian\klouboucek_cepice1_co.paa"};
	
	model = "\sra_civilian\civil_1_tshirt";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","sra_civilian\data\civil_tshirt_body.rvmat","sra_civilian\data\civil_tshirt_body_wound1.rvmat","sra_civilian\data\civil_tshirt_body_wound2.rvmat","sra_civilian\civilian\civil_tshirt_shorts_body.rvmat","sra_civilian\civilian\civil_tshirt_shorts_body_wound1.rvmat","sra_civilian\civilian\civil_tshirt_shorts_body_wound2.rvmat","sra_civilian\civilian\civil_tshirt_kapsy_body.rvmat","sra_civilian\civilian\civil_tshirt_kapsy_body_wound1.rvmat","sra_civilian\civilian\civil_tshirt_kapsy_body_wound2.rvmat"};
	};
};
class Civilian2_DZ: Civilian1_DZ {
	hiddenSelections[] = {"Camo01","cap","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_dress_co.paa"};
	model = "\sra_civilian\civil_1_tshirt_shorts";
};
class Civilian3_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","cap","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_metlos_co.paa"};
};
class Civilian4_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","camo03","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_metlos_co.paa","sra_civilian\civilian\klouboucek_cepice2_co.paa"};
};
class Civilian5_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","camo03","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_mrbanana_co.paa","sra_civilian\civilian\klouboucek_cepice2_co.paa"};
};
class Civilian6_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","camo03","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_mrbanana_co.paa","sra_civilian\civilian\klouboucek_cepice1_co.paa"};
};
class Civilian7_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","camo02","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_cowboy_co.paa","sra_civilian\civilian\klouboucek_cepice2_co.paa"};
};
class Civilian8_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","camo02","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_cowboy_co.paa","sra_civilian\civilian\klouboucek_cepice2_co.paa"};
};
class Civilian9_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","camo03","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_nogova_co.paa","sra_civilian\civilian\klouboucek_cepice3_co.paa"};
};
class Civilian10_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","boonie","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_nogova_co.paa","sra_civilian\civilian\klouboucek_cepice3_co.paa"};
};
class Civilian11_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","boonie","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_pepe_co.paa"};
	model = "\sra_civilian\civil_2_tshirt";
};
class Civilian12_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","camo02","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_pepe_co.paa","sra_civilian\civilian\klouboucek_cepice3_co.paa"};
};
class Civilian13_DZ: Civilian1_DZ {
	hiddenSelections[] = {"camo01","camo02","boonie"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_star_co.paa","sra_civilian\civilian\klouboucek_cepice1_co.paa"};
	model = "\sra_civilian\civil_2_tshirt";
};
class Civilian14_DZ: Civilian2_DZ {
	hiddenSelections[] = {"camo01","camo03","cap"};
	hiddenSelectionsTextures[] = {"sra_civilian\civilian\civil_tshirt_01_star_co.paa","sra_civilian\civilian\klouboucek_cepice3_co.paa"};
};
class Prisoner1_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_PRISONER_NAME;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"sra_civilian\prisoner\vezen_labordress_torn1_co.paa"};
	
	model = "\sra_civilian\Civil_Undead_1";
	class Wounds
	{
		tex[] = {};
		mat[] = {"sra_civilian\prisoner\civil_vezen_hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","sra_civilian\data\civil_tshirt_body.rvmat","sra_civilian\data\civil_tshirt_body_wound1.rvmat","sra_civilian\data\civil_tshirt_body_wound2.rvmat"};
	};
};
class Prisoner2_DZ: Prisoner1_DZ {
	hiddenSelectionsTextures[] = {"sra_civilian\prisoner\vezen_stripdress_intact_co.paa"};
};
class Prisoner3_DZ: Prisoner1_DZ {
	hiddenSelectionsTextures[] = {"sra_civilian\prisoner\vezen_tshirtdress_torn_co.paa"};
};
class Reporter_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_REPORTER_NAME;
	model = "\sra_civilian\civil_pressmanik";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white_wounds2.rvmat","sra_civilian\pressmanik\pressmanik.rvmat","sra_civilian\pressmanik\pressmanik_wound1.rvmat","sra_civilian\pressmanik\pressmanik_wound2.rvmat"};
	};	
};

class MafiaBoss_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_MAFIABOSS_NAME;
	model = "\sra_civilian\civil_tvreport";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl_white.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_white_wounds2.rvmat","sra_civilian\tvreport\tvreport.rvmat","sra_civilian\tvreport\tvreport_wound1.rvmat","sra_civilian\tvreport\tvreport_wound2.rvmat"};
	};
};

class Dealer_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_DRUGDEALER_NAME;
	model = "\sra_civilian\arms_dealer";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","sra_civilian\dealer\suit_bodysnake.rvmat","sra_civilian\dealer\suit_bodysnake_wound1.rvmat","sra_civilian\dealer\suit_bodysnake_wound2.rvmat"};
	};
};

class BusinessMan_DZ: Survivor_DZ {
	scope = 2;
	displayName = $STR_DZE_EQUIP_BUSINESSMAN_NAME;
	model = "\sra_civilian\chancellor";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds2.rvmat","sra_civilian\chancellor\pobocnik.rvmat","sra_civilian\chancellor\pobocnik_wound1.rvmat","sra_civilian\chancellor\pobocnik_wound2.rvmat"};
	};
};

