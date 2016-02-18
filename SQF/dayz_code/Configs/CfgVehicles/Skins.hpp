
class Man;
class CAManBase: Man
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
	scope = 1;
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
		local = "_z = _this select 0; if (!isServer && {!isNull _z} && {!(side _z in [west,east,civilian])}) exitWith { PVDZ_sec_atp = ['wrong side', player]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };";
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

class SurvivorW2_DZ : Survivor_DZ {
	scope = 2;
	displayName = $STR_CHAR_1;
	model = "\dayz\characters\annie_original";
	identityTypes[] = {"Language_W_EN_EP1", "Woman"};
	languages[] = {"EN"};
	
	class TalkTopics {
		core = "Core_E";
		core_en = "Core_Full_E";
	};
	genericNames = "EnglishWomen";
	
	class SpeechVariants {
		class Default {
			speechSingular[] = {"veh_woman"};
			speechPlural[] = {"veh_women"};
		};
		
		class EN : Default {};
		
		class CZ {
			speechSingular[] = {"veh_woman_CZ"};
			speechPlural[] = {"veh_women_CZ"};
		};
		
		class CZ_Akuzativ {
			speechSingular[] = {"veh_woman_CZ4P"};
			speechPlural[] = {"veh_women_CZ4P"};
		};
		
		class RU {
			speechSingular[] = {"veh_woman_RU"};
			speechPlural[] = {"veh_women_RU"};
		};
	};
	TextPlural = "Women";
	TextSingular = "Woman";
	nameSound = "veh_woman";
	
	class HitDamage {
		class Group0 {
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\banz-hit-01", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-02", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-03", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-04", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-05", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-06", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-07", 0.177828, 1, 120}, 0.1}};
			damageSounds[] = {{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-01", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-02", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-03", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-04", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}};
		};
	};
	
	class SoundBreath {
		breath0[] = {{{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04", 0.125893, 1, 8}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04", 0.125893, 1, 15}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04", 0.1, 1, 20}, 0.25}}};
	};
	
	class SoundGear {
		primary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 15}}, {"sprint", {"", 0.00562341, 1, 20}}};
		secondary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 10}}, {"sprint", {"", 0.00562341, 1, 10}}};
	};
	
	class SoundEquipment {
		soldier[] = {{"walk", {"", 0.00177828, 1, 13}}, {"run", {"", 0.00316228, 1, 20}}, {"sprint", {"", 0.00398107, 1, 25}}};
		civilian[] = {{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08", 0.177828, 1, 8}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08", 0.1, 1, 15}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08", 0.0562341, 1, 20}}};
	};
	hiddenSelections[] = {};
};

class BanditW1_DZ : SurvivorW2_DZ {
	displayName = $STR_CHAR_2;
	model = "\dayz\characters\woman_bandit";
};

class Bandit1_DZ : Survivor_DZ { //GER_Soldier_EP1
	scope = 2;
	displayName = $STR_CHAR_2;
	model = "\ca\characters_E\GER\GER_rifleman";
	portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
	identityTypes[] = {"Language_DE_EP1","Head_DE","CDF_Glasses"};
	class Wounds
	{
		tex[] = {};
		mat[] = {};
	};
	hiddenSelections[] = {"Camo"};
};

class Rocket_DZ: Survivor_DZ { //BAF_Soldier_Officer_W
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
	scope = 2;
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
	scope = 2;
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

/*	
class RU_Soldier_SL;
class RusSoldierHeadset_DZ: RU_Soldier_SL {
	displayName = $STR_CHAR_1;
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
class RUS_Soldier3;
class RusSoldierWoodwarrior_DZ: RUS_Soldier3 {
	displayName = $STR_CHAR_1;
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
class RusCommander_DZ: RUS_Commander {
	displayName = $STR_CHAR_1;
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
class RU_Soldier_Light;
class RusSoldierLight_DZ: RU_Soldier_Light {
	displayName = $STR_CHAR_1;
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
class HalfGhillie_DZ: GUE_Soldier_Sniper {
	displayName = $STR_CHAR_1;
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
class Ins_Soldier_Sniper;
class RusSpecOps_DZ: Ins_Soldier_Sniper {
	displayName = $STR_CHAR_1;
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
class TK_Soldier_Officer_EP1;
class RusOfficer_DZ: TK_Soldier_Officer_EP1 {
	displayName = $STR_CHAR_1;
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
class Ins_Soldier_Medic;
class RusSoldierWinter_DZ: Ins_Soldier_Medic {
	displayName = $STR_CHAR_1;
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
class Ins_Bardak;
class RusSoldierCasual_DZ: Ins_Bardak {
	displayName = $STR_CHAR_1;
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
class Ins_Lopotev;
class JoggingSuit_DZ: Ins_Lopotev {
	displayName = $STR_CHAR_1;
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
class CivWorker_DZ: Assistant {
	displayName = $STR_CHAR_1;
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
//class Citizen1; (Not Needed)
class CivLeatherLeisure_DZ: Citizen1 {
	displayName = $STR_CHAR_1;
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
class Citizen4;
class CivLeatherLeisure2_DZ: Citizen4 {
	displayName = $STR_CHAR_1;
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
class RU_Doctor;
class CivDoctor_DZ: RU_Doctor {
	displayName = $STR_CHAR_1;
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
class Dr_Hladik_EP1;
class CivCasualDoctor_DZ: Dr_Hladik_EP1 {
	displayName = $STR_CHAR_1;
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
class CIV_EuroMan01_EP1;
class CivPress_DZ: CIV_EuroMan01_EP1 {
	displayName = $STR_CHAR_1;
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
class CIV_EuroMan02_EP1;
class CivCasualCheck_DZ: CIV_EuroMan02_EP1 {
	displayName = $STR_CHAR_1;
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
class Functionary1;
class CivSuit_DZ: Functionary1 {
	displayName = $STR_CHAR_1;
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
class CivPressLeather_DZ: Haris_Press_EP1 {
	displayName = $STR_CHAR_1;
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
class CivPilotSuit_DZ: Pilot_EP1 {
	displayName = $STR_CHAR_1;
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
class CivPoliceUniform_DZ: RU_Policeman {
	displayName = $STR_CHAR_1;
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
class CivPriest_DZ: Priest {
	displayName = $STR_CHAR_1;
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
class Profiteer2_EP1;
class CivLeisureBlue_DZ: Profiteer2_EP1 {
	displayName = $STR_CHAR_1;
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
class Profiteer1;
class CivLeisureGrey_DZ: Profiteer1 {
	displayName = $STR_CHAR_1;
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
class RU_Profiteer4;
class CivLeisureBrown_DZ: RU_Profiteer4 {
	displayName = $STR_CHAR_1;
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
class RU_Rocker1;
class CivRocker1_DZ: RU_Rocker1 {
	displayName = $STR_CHAR_1;
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
class RU_Rocker2;
class CivRocker2_DZ: RU_Rocker2 {
	displayName = $STR_CHAR_1;
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
class SchoolTeacher;
class CivTeacher_DZ: SchoolTeacher {
	displayName = $STR_CHAR_1;
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
class RU_Woodlander1;
class CivRusWoodland_DZ: RU_Woodlander1 {
	displayName = $STR_CHAR_1;
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
class Woodlander4;
class CivRusWoodland2_DZ: Woodlander4 {
	displayName = $STR_CHAR_1;
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
class RU_Worker4;
class CivCasualCheck2_DZ: RU_Worker4 {
	displayName = $STR_CHAR_1;
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
class TK_CIV_Worker02_EP1;
class CivWorkerOverall_DZ: TK_CIV_Worker02_EP1 {
	displayName = $STR_CHAR_1;
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
class RU_Worker2;
class CivLeisureVest_DZ: RU_Worker2 {
	displayName = $STR_CHAR_1;
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
class TK_CIV_Worker01_EP1;
class CivRedWorkerOverall_DZ: TK_CIV_Worker01_EP1 {
	displayName = $STR_CHAR_1;
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
class FR_Cooper;
class SoldierWoodwarriorCap_DZ: FR_Cooper {
	displayName = $STR_CHAR_1;
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
class FR_Corpsman;
class SoldierWoodwarrior_DZ: FR_Corpsman {
	displayName = $STR_CHAR_1;
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
class FR_GL;
class SoldierWoodwarriorHat_DZ: FR_GL {
	displayName = $STR_CHAR_1;
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
class WoodWarriorIndi_DZ: GUE_Commander {
	displayName = $STR_CHAR_1;
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
class UN_CDF_Soldier_Officer_EP1;
class UNOfficer_DZ: UN_CDF_Soldier_Officer_EP1 {
	displayName = $STR_CHAR_1;
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
class CamoFaceCover_DZ: GUE_Soldier_CO {
	displayName = $STR_CHAR_1;
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
class Soldier_Bodyguard_AA12_PMC;
class LeasureKevlar_DZ: Soldier_Bodyguard_AA12_PMC {
	displayName = $STR_CHAR_1;
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
*/	
