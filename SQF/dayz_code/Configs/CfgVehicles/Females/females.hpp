// female changes
class Soldier_Bodyguard_M4_PMC;
class SurvivorW2_DZ: Soldier_Bodyguard_M4_PMC
{
	displayName = "$STR_CHAR_1";
	side = 1;
	weapons[] = {"Throw","Put"};
	model = "\dayz\characters\annie_original";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	identityTypes[] = {"Language_W_EN_EP1","Woman"};
	languages[] = {"EN"};
	class TalkTopics
	{
		core = "Core_E";
		core_en = "Core_Full_E";
	};
	genericNames = "EnglishWomen";
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_woman"};
			speechPlural[] = {"veh_women"};
		};
		class EN: Default{};
		class CZ
		{
			speechSingular[] = {"veh_woman_CZ"};
			speechPlural[] = {"veh_women_CZ"};
		};
		class CZ_Akuzativ
		{
			speechSingular[] = {"veh_woman_CZ4P"};
			speechPlural[] = {"veh_women_CZ4P"};
		};
		class RU
		{
			speechSingular[] = {"veh_woman_RU"};
			speechPlural[] = {"veh_women_RU"};
		};
	};
	TextPlural = "Women";
	TextSingular = "Woman";
	nameSound = "veh_woman";
	class HitDamage
	{
		class Group0
		{
			hitSounds[] = {
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-01",0.177828,1,120 },0.2 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-02",0.177828,1,120 },0.2 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-03",0.177828,1,120 },0.2 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-04",0.177828,1,120 },0.1 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-05",0.177828,1,120 },0.1 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-06",0.177828,1,120 },0.1 },
				{ 
					{ "ca\sounds\Characters\Noises\Damage\banz-hit-07",0.177828,1,120 },0.1 }};
			damageSounds[] = {
				{ "body",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-01",0.0562341,1,120,0.25,5,6,10 } },
				{ "body",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-02",0.0562341,1,120,0.25,5,7.5,10 } },
				{ "body",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-03",0.0562341,1,120,0.25,5,6,10 } },
				{ "body",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-04",0.0562341,1,120,0.25,5,7.5,10 } },
				{ "hands",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm",0.0562341,1,120,0.5,0,2.5,5 } },
				{ "hands",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm",0.0562341,1,120,0.5,0,2.5,5 } },
				{ "legs",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg",0.0562341,1,120,0.5,0,1,2 } },
				{ "legs",
					{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg",0.0562341,1,120,0.5,0,1,2 } }};
		};
	};
	class SoundBreath
	{
		breath0[] = {
			{ 
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01",0.0562341,1,8 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02",0.0562341,1,8 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03",0.0562341,1,8 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04",0.125893,1,8 },0.25 } },
			{ 
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01",0.0562341,1,15 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02",0.0562341,1,15 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03",0.0562341,1,15 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04",0.125893,1,15 },0.25 } },
			{ 
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01",0.1,1,20 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02",0.1,1,20 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03",0.1,1,20 },0.25 },
				{ 
					{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04",0.1,1,20 },0.25 } }};
	};
	class SoundGear
	{
		primary[] = {
			{ "walk",
				{ "",0.00177828,1,10 } },
			{ "run",
				{ "",0.00316228,1,15 } },
			{ "sprint",
				{ "",0.00562341,1,20 } }};
		secondary[] = {
			{ "walk",
				{ "",0.00177828,1,10 } },
			{ "run",
				{ "",0.00316228,1,10 } },
			{ "sprint",
				{ "",0.00562341,1,10 } }};
	};
	class SoundEquipment
	{
		soldier[] = {
			{ "walk",
				{ "",0.00177828,1,13 } },
			{ "run",
				{ "",0.00316228,1,20 } },
			{ "sprint",
				{ "",0.00398107,1,25 } }};
		civilian[] = {
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07",0.177828,1,8 } },
			{ "walk",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08",0.177828,1,8 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07",0.1,1,15 } },
			{ "run",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08",0.1,1,15 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07",0.0562341,1,20 } },
			{ "sprint",
				{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08",0.0562341,1,20 } }};
	};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
};
class BanditW1_DZ: SurvivorW2_DZ
{
	side = 1;
	model = "\dayz\characters\woman_bandit";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
};
/*
class FemaleSoldier1_DZ: SurvivorW2_DZ
{
	side = 1;
	model = "\z\addons\dayz_epoch\models\female_soldier";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\female_soldier_body.paa"};
};
*/
class BanditW2_DZ: BanditW1_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
};
class SurvivorW3_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
};
class SurvivorWpink_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\GirlyGirl.paa"};
};
/*
class SurvivorWsequisha_DZ: SurvivorW2_DZ
{
	model = "\z\addons\dayz_epoch\skins\sequisha\sequisha.p3d";
	//hiddenSelections[] = {"Camo"};
	//hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\sequisha_co.paa"};
};
class SurvivorWsequishaD_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\sequishaD_co.paa"};
};
*/
class SurvivorWcombat_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\CombatGirl.paa"};
};
class SurvivorWdesert_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\DesertGirl.paa"};
};
class SurvivorWurban_DZ: SurvivorW2_DZ
{
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\UrbanGirl.paa"};
};