////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dayz_weapons : config.bin{
class CfgPatches
{
	class dayz_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons","dayz_equip"};
	};
};
class ItemActions
{
	class Use
	{
		text = "";
		script = "";
		use[] = {};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureSwing = " ";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureSwing[] = {"GestureSwing","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	class States
	{
		class GestureSwing: Default
		{
			file = "\dayz_weapons\anim\melee_hatchet_swing.rtm";
			looped = 0;
			speed = 1.282051;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
		};
	};
	class BlendAnims
	{
		handsWeapon[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1};
	};
};
class Mode_SemiAuto
{
	multiplier = 1;
	burst = 1;
	dispersion = 0.0002;
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundEnd[] = {};
	soundLoop[] = {};
	soundContinuous = 0;
	soundBurst = 1;
	reloadTime = 0.1;
	ffCount = 1;
	ffMagnitude = 0.5;
	ffFrequency = 11;
	flash = "gunfire";
	flashSize = 0.1;
	recoil = "Empty";
	recoilProne = "Empty";
	autoFire = 0;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 500;
	useAction = 0;
	useActionTitle = "";
	showToPlayer = 1;
	minRange = 30;
	minRangeProbab = 0.25;
	midRange = 300;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
	displayName = "Semi";
};
class DZ_SingleMelee: Mode_SemiAuto
{
	multiplier = 1;
	burst = 5;
	displayName = "Hack";
	dispersion = 0.2;
	sound[] = {"",0,1};
	soundContinuous = 1;
	reloadTime = 1;
	magazineReloadTime = 1;
	ffCount = 1;
	optics = "false";
	recoil = "empty";
	autoFire = "true";
	aiRateOfFire = 0.7;
	aiRateOfFireDistance = 2.2;
	useAction = "false";
	useActionTitle = "";
	recoilProne = "empty";
	showToPlayer = "true";
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 0.3;
	midRangeProbab = 0.8;
	maxRange = 3;
	maxRangeProbab = 0;
	soundBurst = 1;
};
class CfgRecoils
{
	DZ_Swing[] = {0,0.06,-0.1,0,0.1,-0.12,0.1,0,0};
	DZ_Stab[] = {0.02,-0.5,0.2,0.05,-0.5,0.3,0.04,0,-0.1,0.5,0,0};
};
class cfgWeapons
{
	class Rifle;
	class MeleeWeapon: Rifle
	{
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = 1;
		modelOptics = "-";
		modes[] = {"Single"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"",1};
		class Single: DZ_SingleMelee
		{
			multiplier = 1;
			burst = 1;
			displayName = "Hack";
			dispersion = 0.2;
			optics = 1;
			recoil = "DZ_Swing";
			autoFire = 1;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 2.2;
			useAction = 0;
			useActionTitle = "";
			recoilProne = "DZ_Swing";
			swing0[] = {"dayz_weapons\sounds\swing_0",1.77828,1,30};
			swing1[] = {"dayz_weapons\sounds\swing_1",1.77828,1,30};
			soundBegin[] = {"swing0",0.5,"swing1",0.5};
			drySound[] = {"",1};
			reloadTime = 0;
			reloadMagazineSound[] = {"",1};
			showToPlayer = 1;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 0.3;
			midRangeProbab = 0.8;
			maxRange = 3;
			maxRangeProbab = 0;
		};
		cursor = "Vehicle_Grenade_W";
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
	};
	class MeleeHatchet: MeleeWeapon
	{
		scope = 2;
		model = "\dayz_weapons\models\Hatchet_weaponized";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName = "$STR_EQUIP_NAME_41";
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_CHOPWOOD";
				script = "spawn player_chopWood;";
			};
			class Toolbelt
			{
				text = "Add to Toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeHatchet"};
				output[] = {"ItemHatchet"};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EQUIP_DESC_41";
		};
		descriptionShort = "$STR_EQUIP_DESC_41";
	};
	class Winchester1866: Rifle
	{
		scope = 2;
		model = "\dayz_weapons\models\Winchester1866";
		picture = "\dayz_weapons\textures\equip_winchester1866_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"15Rnd_W1866_Slug","15Rnd_W1866_Pellet"};
		optics = 1;
		modelOptics = "-";
		displayname = "$STR_WPN_NAME_1";
		modes[] = {"Single"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		selectionFireAnim = "zasleh";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 1;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			begin1[] = {"dayz_weapons\sounds\shotgun_0",1.77828,1,1000};
			begin2[] = {"dayz_weapons\sounds\shotgun_1",1.77828,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_9outof10";
			recoilProne = "recoil_single_primary_prone_8outof10";
		};
		class Library
		{
			libTextDesc = "$STR_WPN_DESC_1";
		};
		descriptionShort = "$STR_WPN_DESC_1";
	};
	class MR43: Winchester1866
	{
		model = "\dayz_weapons\models\mr43";
		picture = "\dayz_weapons\textures\equip_mr43_CA.paa";
		displayname = "$STR_WPN_NAME_5";
		descriptionShort = "$STR_WPN_DESC_5";
		magazines[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 2;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			DB_shotgun_1[] = {"dayz_weapons\sounds\DB_shotgun_1",1.77828,1,1000};
			soundBegin[] = {"DB_shotgun_1",1};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_9outof10";
			recoilProne = "recoil_single_primary_prone_8outof10";
		};
	};
	class Remington870: Winchester1866
	{
		model = "\dayz_weapons\models\Remington870";
		picture = "\dayz_weapons\textures\equip_remington870_CA.paa";
		displayname = "$STR_WPN_NAME_2";
		descriptionShort = "$STR_WPN_DESC_2";
		magazines[] = {"8Rnd_B_Beneli_74Slug","8Rnd_B_Beneli_Pellets"};
	};
	class Remington870_lamp: Remington870
	{
		model = "\dayz_weapons\models\Remington870_lamp";
		displayname = "$STR_WPN_NAME_3";
		descriptionShort = "$STR_WPN_DESC_3";
		magazines[] = {"8Rnd_B_Beneli_74Slug","8Rnd_B_Beneli_Pellets"};
		class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
	};
	class GrenadeLauncher;
	class Flare: GrenadeLauncher
	{
		scope = 2;
		autoAimEnabled = 0;
		cursor = "Vehicle_Grenade_W";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		value = 0;
		type = 0;
		displayName = "$STR_MAG_ACTION2_4";
		canDrop = 0;
		muzzles[] = {"RoadFlareMuzzle","ChemLightMuzzle","MolotovCocktailMuzzle"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "Air_Dot";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
			sound[] = {"",0.000316228,1};
			reloadSound[] = {"",0.000316228,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 0;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 30;
			minRangeProbab = 0.5;
			midRange = 45;
			midRangeProbab = 0.2;
			maxRange = 60;
			maxRangeProbab = 0.03;
		};
		class RoadFlareMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MAG_ACTION_4";
			magazines[] = {"HandRoadFlare"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
			begin1[] = {"dayz_weapons\sounds\roadflare_start",1.77828,1,1000};
			soundBegin[] = {"begin1",1};
		};
		class ChemLightMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MAG_ACTION_5";
			magazines[] = {"HandChemGreen","HandChemRed","HandChemBlue"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};
		class MolotovCocktailMuzzle: ThrowMuzzle
		{
			displayName = "Throw";
			magazines[] = {"TrashJackDaniels","ItemSodaEmpty","TrashTinCan"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};
	};
	class Crossbow: Winchester1866
	{
		scope = 2;
		value = 1;
		model = "\dayz_weapons\models\testgun";
		optics = 1;
		dexterity = 1.64;
		displayName = "$STR_WPN_NAME_4";
		picture = "\dayz_weapons\textures\equip_crossbow_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.000316228,1,10};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
		class Library
		{
			libTextDesc = "$STR_WPN_DESC_4";
		};
		descriptionShort = "$STR_WPN_DESC_4";
		class Single: Mode_SemiAuto
		{
			dispersion = 0.001;
			soundContinuous = 0;
			reloadTime = 3.0;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			begin1[] = {"dayz_weapons\sounds\crossbow_fire_0",0.177828,1,15};
			begin2[] = {"dayz_weapons\sounds\crossbow_fire_1",0.177828,1,15};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};
		magazines[] = {"BoltSteel", "BoltSteel4pack"};
		bullet1[] = {"dayz_weapons\sounds\crossbow_bolt",0.177828,1,15};
		soundBullet[] = {"bullet1",1};
	};
	class M249;
	class M249_DZ: M249
	{
		type = "1";
	};
	class M240;
	class M240_DZ: M240
	{
		type = "1";
	};
	class Mk_48;
	class Mk_48_DZ: Mk_48
	{
		type = "1";
	};
	class M107;
	class M107_DZ: M107
	{
		type = "1";
	};
	class m107_TWS_EP1;
	class m107_TWS_EP1_DZ: m107_TWS_EP1
	{
		type = "1";
	};
	class Pecheneg;
	class Pecheneg_DZ: Pecheneg
	{
		type = "1";
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class Hatchet_Swing: CA_Magazine
	{
		scope = 2;
		type = 0;
		autoReload = 0;
		flash = "";
		flashSize = 0;
		initSpeed = 100;
		maxLeadSpeed = 20;
		dexterity = 20;
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		displayName = "Hatchet";
		displayNameMagazine = "Hatchet";
		shortNameMagazine = "Hatchet";
		optics = 0;
		distanceZoomMin = 0;
		distanceZoomMax = 0;
		count = 100000;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		drySound[] = {"",0,1};
		reloadMagazineSound[] = {"",0,1};
		modes[] = {"Single"};
		ammo = "Hatchet_Swing_Ammo";
	};
	class crowbar_swing: Hatchet_Swing
	{
		displayName = "Crowbar";
		displayNameMagazine = "Crowbar";
		shortNameMagazine = "Crowbar";
		ammo = "Crowbar_Swing_Ammo";
	};
	class 15Rnd_W1866_Slug: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_2";
		ammo = "B_1866_Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		count = 15;
		initSpeed = 396;
		descriptionShort = "$STR_MAG_DESC_2";
		displayNameShort = "Slug";
	};
	class 15Rnd_W1866_Pellet: 15Rnd_W1866_Slug{};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd. Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		ammo = "B_12Gauge_74Slug";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 <br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4 x 2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_74Slug"};
				output[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug"};
			};
		};
	};
	class 8Rnd_B_Beneli_Pellets: CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd. Pellets";
		model = "\dayz_weapons\models\8shells_pellets.p3d";
		picture = "\dayz_weapons\textures\equip_pellets_ca.paa";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 Pellets<br/>Used in: M1014";
		displayNameShort = "Pellets";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4x2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_Pellets"};
				output[] = {"2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets"};
			};
		};
	};
	class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
	{
		displayName = "2Rnd. Slug";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug"};
				output[] = {"8Rnd_B_Beneli_74Slug"};
			};
		};
	};
	class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
	{
		displayName = "2Rnd. Pellets";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets"};
				output[] = {"8Rnd_B_Beneli_Pellets"};
			};
		};
	};
	class HandGrenade;
	class TrashJackDaniels: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_34";
		model = "\dayz_equip\models\bottle_jd.p3d";
		picture = "\dayz_equip\textures\equip_bottle_jd_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_34";
		ammo = "JackDaniels";
	};
	class TrashTinCan: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_33";
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_33";
		ammo = "TinCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemTinBar",1}};
				input[] = {{"TrashTinCan",6}};
			};
		};
	};
	class ItemSodaEmpty: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_35";
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_35";
		ammo = "SodaCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemAluminumBar",1}};
				input[] = {{"ItemSodaEmpty",6}};
			};
		};
	};
	class HandRoadFlare: HandGrenade
	{
		displayName = "$STR_MAG_NAME_4";
		picture = "\dayz_weapons\textures\equip_roadflare_ca.paa";
		model = "\dayz_weapons\models\roadflare";
		ammo = "RoadFlare";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_4";
	};
	class ChemLightMag: HandGrenade
	{
		count = 5;
	};
	class HandChemBlue: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_7";
		picture = "\dayz_weapons\textures\equip_chem_blue_ca.paa";
		model = "\dayz_weapons\models\chem_gear_blue";
		ammo = "ChemBlue";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class HandChemGreen: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_5";
		picture = "\dayz_weapons\textures\equip_chem_green_ca.paa";
		model = "\dayz_weapons\models\chem_gear_green";
		ammo = "ChemGreen";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class HandChemRed: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_6";
		picture = "\dayz_weapons\textures\equip_chem_red_ca.paa";
		model = "\dayz_weapons\models\chem_gear_red";
		ammo = "ChemRed";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class BoltSteel: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_3";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 1;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 4 pack";
				script = "spawn player_reloadMag;";
				use[] = {"BoltSteel","BoltSteel","BoltSteel","BoltSteel"};
				output[] = {"BoltSteel4pack"};
			};
		};
	};
	class BoltSteel4pack: CA_Magazine
	{
		scope = 2;
		displayName = "Steel Bolt 4 Pack";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 4;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
	};
};
class CfgCloudlets
{
	class Default;
	class FlareSmoke: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\Ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0.6,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.2,0.8,2.6};
		sizeCoef = 1;
		color[] = {
			{ 0.6,0.6,0.6,0 },
			{ 0.7,0.7,0.7,0.2 },
			{ 0.8,0.8,0.8,0.1 },
			{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1.5,0.5};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		position[] = {0,0,0};
		positionVar[] = {0.1,0.2,0.1};
		MoveVelocityVar[] = {0.05,0.5,0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0.1};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class FlareSparks: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.5;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.7,0};
		sizeCoef = 1;
		color[] = {
			{ 1,1,1,0 },
			{ 1,1,1,-1 },
			{ 1,1,1,-1 },
			{ 1,1,1,-1 },
			{ 1,1,1,-1 },
			{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {0,0,0};
		positionVar[] = {0.05,0.2,0.05};
		moveVelocityVar[] = {0.08,0.9,0.08};
		rotationVelocityVar = 0;
		sizeVar = 0.06;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BottleGlassShards: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {
			{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BottleGlassShards2: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {
			{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0.4,0};
		positionVar[] = {0.04,0.04,0.04};
		moveVelocityVar[] = {0.2,3,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;
	};
	class BottleGlassDust: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.7;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 2;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.05,0.15};
		sizeCoef = 1;
		color[] = {
			{ 0.5,0.5,0.5,0.1 },
			{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0.4,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class FlareSparks
{
	class FlareSmoke
	{
		simulation = "particles";
		type = "FlareSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class FlareSparks
	{
		simulation = "particles";
		type = "FlareSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class GlassSmash
{
	class BottleGlassShards
	{
		simulation = "particles";
		type = "BottleGlassShards";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BottleGlassShards2
	{
		simulation = "particles";
		type = "BottleGlassShards2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BottleGlassDust
	{
		simulation = "particles";
		type = "BottleGlassDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class cfgAmmo
{
	class GrenadeHand;
	class ThrownObjects: GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		cost = 1;
		whistleDist = 0;
		fuseDistance = 0;
		initTime = 0;
		explosive = 1;
	};
	class Default;
	class Melee: Default
	{
		indirectHit = 0;
		indirectHitRange = 0;
		minRange = 1.1;
		minRangeProbab = 0.8;
		midRange = 1.2;
		midRangeProbab = 0.8;
		maxRange = 4;
		maxRangeProbab = 0;
		explosive = "true";
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0.1;
		audibleFire = 1;
		visibleFireTime = 0;
		maxControlRange = 1;
		soundDefault1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.316228,1,60};
		soundDefault2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.316228,1,60};
		soundDefault3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.316228,1,60};
		soundDefault4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.316228,1,60};
		soundDefault5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.316228,1,60};
		soundDefault6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.316228,1,60};
		soundDefault7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.316228,1,60};
		soundDefault8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.316228,1,60};
		soundGroundSoft1[] = {"ca\sounds\weapons\hits\hit_earth_01",0.0562341,1,60};
		soundGroundSoft2[] = {"ca\sounds\weapons\hits\hit_earth_02",0.0562341,1,60};
		soundGroundSoft3[] = {"ca\sounds\weapons\hits\hit_earth_03",0.0562341,1,60};
		soundGroundSoft4[] = {"ca\sounds\weapons\hits\hit_earth_04",0.0562341,1,60};
		soundGroundSoft5[] = {"ca\sounds\weapons\hits\rico_hit_earth_01",0.0562341,1,60};
		soundGroundSoft6[] = {"ca\sounds\weapons\hits\rico_hit_earth_02",0.0562341,1,60};
		soundGroundSoft7[] = {"ca\sounds\weapons\hits\rico_hit_earth_03",0.0562341,1,60};
		soundGroundSoft8[] = {"ca\sounds\weapons\hits\rico_hit_earth_04",0.0562341,1,60};
		soundGroundHard1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.125893,1,80};
		soundGroundHard2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.125893,1,80};
		soundGroundHard3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.125893,1,80};
		soundGroundHard4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.125893,1,80};
		soundGroundHard5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.125893,1,80};
		soundGroundHard6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.125893,1,80};
		soundGroundHard7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.125893,1,80};
		soundGroundHard8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.125893,1,80};
		soundMetal1[] = {"ca\sounds\weapons\hits\hit_metalplate_01",0.316228,1,90};
		soundMetal2[] = {"ca\sounds\weapons\hits\hit_metalplate_02",0.316228,1,90};
		soundMetal3[] = {"ca\sounds\weapons\hits\hit_metalplate_03",0.316228,1,90};
		soundMetal4[] = {"ca\sounds\weapons\hits\hit_metalplate_04",0.316228,1,90};
		soundMetal5[] = {"ca\sounds\weapons\hits\hit_metalplate_05",0.316228,1,90};
		soundMetal6[] = {"ca\sounds\weapons\hits\hit_metalplate_06",0.316228,1,90};
		soundMetal7[] = {"ca\sounds\weapons\hits\hit_metalplate_07",0.316228,1,90};
		soundMetal8[] = {"ca\sounds\weapons\hits\hit_metalplate_08",0.316228,1,90};
		soundMetal9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01",0.316228,1,90};
		soundMetal10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02",0.316228,1,90};
		soundMetal11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03",0.316228,1,90};
		soundMetal12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04",0.316228,1,90};
		soundGlass1[] = {"ca\sounds\weapons\hits\hit_glass_01",0.177828,1,50};
		soundGlass2[] = {"ca\sounds\weapons\hits\hit_glass_02",0.177828,1,50};
		soundGlass3[] = {"ca\sounds\weapons\hits\hit_glass_03",0.177828,1,50};
		soundGlass4[] = {"ca\sounds\weapons\hits\hit_glass_04",0.177828,1,50};
		soundGlass5[] = {"ca\sounds\weapons\hits\hit_glass_05",0.177828,1,50};
		soundGlass6[] = {"ca\sounds\weapons\hits\hit_glass_06",0.177828,1,50};
		soundGlass7[] = {"ca\sounds\weapons\hits\hit_glass_07",0.177828,1,50};
		soundGlass8[] = {"ca\sounds\weapons\hits\hit_glass_08",0.177828,1,50};
		soundGlass9[] = {"ca\sounds\weapons\hits\hit_glass_09",0.177828,1,50};
		soundGlass10[] = {"ca\sounds\weapons\hits\hit_glass_10",0.177828,1,50};
		soundIron1[] = {"ca\sounds\weapons\hits\hit_iron_01",0.316228,1,90};
		soundIron2[] = {"ca\sounds\weapons\hits\hit_iron_02",0.316228,1,90};
		soundIron3[] = {"ca\sounds\weapons\hits\hit_iron_03",0.316228,1,90};
		soundIron4[] = {"ca\sounds\weapons\hits\hit_iron_04",0.316228,1,90};
		soundIron5[] = {"ca\sounds\weapons\hits\hit_iron_05",0.316228,1,90};
		soundIron6[] = {"ca\sounds\weapons\hits\hit_iron_06",0.316228,1,90};
		soundIron7[] = {"ca\sounds\weapons\hits\hit_iron_07",0.316228,1,90};
		soundIron8[] = {"ca\sounds\weapons\hits\hit_iron_08",0.316228,1,90};
		soundIron9[] = {"ca\sounds\weapons\hits\rico_hit_iron_01",0.316228,1,90};
		soundIron10[] = {"ca\sounds\weapons\hits\rico_hit_iron_02",0.316228,1,90};
		soundIron11[] = {"ca\sounds\weapons\hits\rico_hit_iron_03",0.316228,1,90};
		soundIron12[] = {"ca\sounds\weapons\hits\rico_hit_iron_04",0.316228,1,90};
		soundGlassArmored1[] = {"ca\sounds\weapons\hits\hit_glass_armored_01",0.177828,1,60};
		soundGlassArmored2[] = {"ca\sounds\weapons\hits\hit_glass_armored_02",0.177828,1,60};
		soundGlassArmored3[] = {"ca\sounds\weapons\hits\hit_glass_armored_03",0.177828,1,60};
		soundGlassArmored4[] = {"ca\sounds\weapons\hits\hit_glass_armored_04",0.177828,1,60};
		soundGlassArmored5[] = {"ca\sounds\weapons\hits\hit_glass_armored_05",0.177828,1,60};
		soundGlassArmored6[] = {"ca\sounds\weapons\hits\hit_glass_armored_06",0.177828,1,60};
		soundGlassArmored7[] = {"ca\sounds\weapons\hits\hit_glass_armored_07",0.177828,1,60};
		soundGlassArmored8[] = {"ca\sounds\weapons\hits\hit_glass_armored_08",0.177828,1,60};
		soundVehiclePlate1[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_01",0.562341,1,90};
		soundVehiclePlate2[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_02",0.562341,1,90};
		soundVehiclePlate3[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_03",0.562341,1,90};
		soundVehiclePlate4[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_04",0.562341,1,90};
		soundVehiclePlate5[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_05",0.562341,1,90};
		soundVehiclePlate6[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_06",0.562341,1,90};
		soundVehiclePlate7[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_07",0.562341,1,90};
		soundVehiclePlate8[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_08",0.562341,1,90};
		soundVehiclePlate9[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_01",0.562341,1,90};
		soundVehiclePlate10[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_02",0.562341,1,90};
		soundVehiclePlate11[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_03",0.562341,1,90};
		soundVehiclePlate12[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_04",0.562341,1,90};
		soundWood1[] = {"ca\sounds\weapons\hits\hit_wood_01",0.316228,1,60};
		soundWood2[] = {"ca\sounds\weapons\hits\hit_wood_02",0.316228,1,60};
		soundWood3[] = {"ca\sounds\weapons\hits\hit_wood_03",0.316228,1,60};
		soundWood4[] = {"ca\sounds\weapons\hits\hit_wood_04",0.316228,1,60};
		soundWood5[] = {"ca\sounds\weapons\hits\hit_wood_05",0.316228,1,60};
		soundWood6[] = {"ca\sounds\weapons\hits\hit_wood_06",0.316228,1,60};
		soundWood7[] = {"ca\sounds\weapons\hits\hit_wood_07",0.316228,1,60};
		soundWood8[] = {"ca\sounds\weapons\hits\hit_wood_08",0.316228,1,60};
		soundWood9[] = {"ca\sounds\weapons\hits\rico_hit_wood_01",0.316228,1,60};
		soundWood10[] = {"ca\sounds\weapons\hits\rico_hit_wood_02",0.316228,1,60};
		soundWood11[] = {"ca\sounds\weapons\hits\rico_hit_wood_03",0.316228,1,60};
		soundWood12[] = {"ca\sounds\weapons\hits\rico_hit_wood_04",0.316228,1,60};
		soundHitBody1[] = {"ca\sounds\weapons\hits\hit_body_01",0.0177828,1,50};
		soundHitBody2[] = {"ca\sounds\weapons\hits\hit_body_02",0.0177828,1,50};
		soundHitBody3[] = {"ca\sounds\weapons\hits\hit_body_03",0.0177828,1,50};
		soundHitBody4[] = {"ca\sounds\weapons\hits\hit_body_04",0.0177828,1,50};
		soundHitBody5[] = {"ca\sounds\weapons\hits\hit_body_05",0.0177828,1,50};
		soundHitBody6[] = {"ca\sounds\weapons\hits\hit_body_06",0.0177828,1,50};
		soundHitBody7[] = {"ca\sounds\weapons\hits\hit_body_07",0.0177828,1,50};
		soundHitBody8[] = {"ca\sounds\weapons\hits\hit_body_08",0.0177828,1,50};
		soundHitBody9[] = {"ca\sounds\weapons\hits\hit_body_09",0.0177828,1,50};
		soundHitBody10[] = {"ca\sounds\weapons\hits\hit_body_10",0.0177828,1,50};
		soundHitBody11[] = {"ca\sounds\weapons\hits\hit_body_11",0.0177828,1,50};
		soundHitBody12[] = {"ca\sounds\weapons\hits\hit_body_12",0.0177828,1,50};
		soundHitBody13[] = {"ca\sounds\weapons\hits\hit_body_13",0.0177828,1,50};
		soundMetalPlate1[] = {"ca\sounds\weapons\hits\hit_metalplate_01",0.562341,1,90};
		soundMetalPlate2[] = {"ca\sounds\weapons\hits\hit_metalplate_02",0.562341,1,90};
		soundMetalPlate3[] = {"ca\sounds\weapons\hits\hit_metalplate_03",0.562341,1,90};
		soundMetalPlate4[] = {"ca\sounds\weapons\hits\hit_metalplate_04",0.562341,1,90};
		soundMetalPlate5[] = {"ca\sounds\weapons\hits\hit_metalplate_05",0.562341,1,90};
		soundMetalPlate6[] = {"ca\sounds\weapons\hits\hit_metalplate_06",0.562341,1,90};
		soundMetalPlate7[] = {"ca\sounds\weapons\hits\hit_metalplate_07",0.562341,1,90};
		soundMetalPlate8[] = {"ca\sounds\weapons\hits\hit_metalplate_08",0.562341,1,90};
		soundMetalPlate9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01",0.562341,1,90};
		soundMetalPlate10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02",0.562341,1,90};
		soundMetalPlate11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03",0.562341,1,90};
		soundMetalPlate12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04",0.562341,1,90};
		soundHitBuilding1[] = {"ca\sounds\weapons\hits\hit_wall_01",0.251189,1,60};
		soundHitBuilding2[] = {"ca\sounds\weapons\hits\hit_wall_02",0.251189,1,60};
		soundHitBuilding3[] = {"ca\sounds\weapons\hits\hit_wall_03",0.251189,1,60};
		soundHitBuilding4[] = {"ca\sounds\weapons\hits\hit_wall_04",0.251189,1,60};
		soundHitBuilding5[] = {"ca\sounds\weapons\hits\hit_wall_05",0.251189,1,60};
		soundHitBuilding6[] = {"ca\sounds\weapons\hits\rico_hit_wall_01",0.251189,1,60};
		soundHitBuilding7[] = {"ca\sounds\weapons\hits\rico_hit_wall_02",0.251189,1,60};
		soundHitBuilding8[] = {"ca\sounds\weapons\hits\rico_hit_wall_03",0.251189,1,60};
		soundHitBuilding9[] = {"ca\sounds\weapons\hits\rico_hit_wall_04",0.251189,1,60};
		soundHitBuilding10[] = {"ca\sounds\weapons\hits\rico_hit_wall_05",0.251189,1,60};
		soundHitFoliage1[] = {"ca\sounds\weapons\hits\hit_grass_01",0.177828,1,50};
		soundHitFoliage2[] = {"ca\sounds\weapons\hits\hit_grass_02",0.177828,1,50};
		soundHitFoliage3[] = {"ca\sounds\weapons\hits\hit_grass_03",0.177828,1,50};
		soundHitFoliage4[] = {"ca\sounds\weapons\hits\hit_grass_04",0.177828,1,50};
		soundPlastic1[] = {"ca\sounds\weapons\hits\hit_Rubber_01",0.177828,1,50};
		soundPlastic2[] = {"ca\sounds\weapons\hits\hit_Rubber_02",0.177828,1,50};
		soundConcrete1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.177828,1,70};
		soundConcrete2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.177828,1,70};
		soundConcrete3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.177828,1,70};
		soundConcrete4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.177828,1,70};
		soundConcrete5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.177828,1,70};
		soundConcrete6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.177828,1,70};
		soundConcrete7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.177828,1,70};
		soundConcrete8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.177828,1,70};
		soundRubber1[] = {"ca\sounds\weapons\hits\hit_Rubber_01",0.316228,1,50};
		soundRubber2[] = {"ca\sounds\weapons\hits\hit_Rubber_02",0.316228,1,50};
		soundRubber3[] = {"ca\sounds\weapons\hits\hit_Rubber_03",0.316228,1,50};
		soundRubber4[] = {"ca\sounds\weapons\hits\hit_Rubber_04",0.316228,1,50};
		soundRubber5[] = {"ca\sounds\weapons\hits\hit_Rubber_05",0.316228,1,50};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.077,"soundHitBody2",0.077,"soundHitBody3",0.077,"soundHitBody4",0.077,"soundHitBody5",0.077,"soundHitBody6",0.077,"soundHitBody7",0.077,"soundHitBody8",0.077,"soundHitBody9",0.077,"soundHitBody10",0.077,"soundHitBody11",0.077,"soundHitBody12",0.077,"soundHitBody13",0.077};
		hitArmor[] = {"soundVehiclePlate1",0.1,"soundVehiclePlate2",0.1,"soundVehiclePlate3",0.05,"soundVehiclePlate4",0.05,"soundVehiclePlate5",0.1,"soundVehiclePlate6",0.05,"soundVehiclePlate7",0.1,"soundVehiclePlate8",0.1,"soundVehiclePlate9",0.05,"soundVehiclePlate10",0.1,"soundVehiclePlate11",0.1,"soundVehiclePlate12",0.1};
		hitIron[] = {"soundIron1",0.1,"soundIron2",0.1,"soundIron3",0.1,"soundIron4",0.1,"soundIron5",0.1,"soundIron6",0.1,"soundIron7",0.05,"soundIron8",0.05,"soundIron9",0.1,"soundIron10",0.1,"soundIron11",0.05,"soundIron12",0.05};
		hitBuilding[] = {"soundHitBuilding1",0.1,"soundHitBuilding2",0.1,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1,"soundHitBuilding9",0.1,"soundHitBuilding10",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.25,"soundHitFoliage2",0.25,"soundHitFoliage3",0.25,"soundHitFoliage4",0.25};
		hitWood[] = {"soundWood1",0.1,"soundWood2",0.1,"soundWood3",0.1,"soundWood4",0.05,"soundWood5",0.05,"soundWood6",0.1,"soundWood7",0.1,"soundWood8",0.1,"soundWood9",0.1,"soundWood10",0.1,"soundWood11",0.05,"soundWood12",0.05};
		hitGlass[] = {"soundGlass1",0.1,"soundGlass2",0.1,"soundGlass3",0.1,"soundGlass4",0.1,"soundGlass5",0.1,"soundGlass6",0.1,"soundGlass7",0.1,"soundGlass8",0.1,"soundGlass9",0.1,"soundGlass10",0.1};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.2,"soundConcrete2",0.2,"soundConcrete3",0.2,"soundConcrete4",0.05,"soundConcrete5",0.05,"soundConcrete6",0.1,"soundConcrete7",0.1,"soundConcrete8",0.1};
		hitRubber[] = {"soundRubber1",0.2,"soundRubber2",0.2,"soundRubber3",0.2,"soundRubber4",0.2,"soundRubber5",0.2};
		hitPlastic[] = {"soundPlastic1",0.5,"soundPlastic2",0.5};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.05,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.05,"soundMetal8",0.1,"soundMetal9",0.05,"soundMetal10",0.05,"soundMetal11",0.1,"soundMetal12",0.1};
		hitMetalplate[] = {"soundMetalPlate1",0.1,"soundMetalPlate2",0.1,"soundMetalPlate3",0.1,"soundMetalPlate4",0.05,"soundMetalPlate5",0.05,"soundMetalPlate6",0.05,"soundMetalPlate7",0.1,"soundMetalPlate8",0.1,"soundMetalPlate9",0.1,"soundMetalPlate10",0.1,"soundMetalPlate11",0.1,"soundMetalPlate12",0.05};
		cost = 0.01;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		typicalSpeed = 50;
		deflecting = 0;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\ca\Weapons\shell";
		caliber = 0.22;
	};
	class Hatchet_Swing_Ammo: Melee
	{
		hit = 9;
		simulation = "shotBullet";
	};
	class Crowbar_Swing_Ammo: Melee
	{
		hit = 5;
		simulation = "shotBullet";
	};
	class SodaCan: ThrownObjects
	{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_0",0.5,1,40};
	};
	class TinCan: ThrownObjects
	{
		model = "\dayz_equip\models\trash_tincan.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_1",0.5,1,30};
	};
	class JackDaniels: ThrownObjects
	{
		model = "\dayz_equip\models\bottle_jd.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "GlassSmash";
		soundHit[] = {"dayz_weapons\sounds\bottle_break_0",0.5,1,60};
	};
	class LitObject: GrenadeHand
	{
		displayName = "$STR_MAG_ACTION_4";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		fuseDistance = 0;
		initTime = 0;
	};
	class RoadFlare: LitObject
	{
		displayName = "$STR_MAG_ACTION_4";
		model = "\dayz_weapons\models\flare_red";
		simulation = "shotSmoke";
		simulationStep = 1;
		soundFly[] = {"dayz_weapons\sounds\roadflare",0.316228,1,60};
		cost = 100;
		explosive = 0;
		deflecting = 60;
		explosionTime = 0;
		timeToLive = 300;
		soundHit[] = {"",0,1};
		whistleDist = 0;
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "FlareSparks";
	};
	class ChemLight: LitObject
	{
		displayName = "$STR_MAG_ACTION_5";
		simulation = "shotShell";
		simulationStep = 5;
		soundFly[] = {"",0,0};
		cost = 100;
		deflecting = 0;
		soundHit[] = {"",0,1};
		whistleDist = 0;
		smokeColor[] = {0,0,0,0};
		effectsSmoke = "";
		explosionTime = 3600;
		timeToLive = 3600;
	};
	class ChemGreen: ChemLight
	{
		model = "\dayz_weapons\models\chem_green";
		lightColor[] = {0,0.5,0};
	};
	class ChemRed: ChemLight
	{
		model = "\dayz_weapons\models\chem_red";
		lightColor[] = {0.5,0,0};
	};
	class ChemBlue: ChemLight
	{
		model = "\dayz_weapons\models\chem_blue";
		lightColor[] = {0,0,0.5};
	};
	class BulletBase;
	class Bolt: BulletBase
	{
		model = "\dayz_weapons\models\bolt";
		soundFly[] = {"",1,1};
		hit = 6;
		cartridge = "";
		cost = 5;
		typicalSpeed = 100;
		airFriction = -0.002751;
		caliber = 0.33;
		visibleFire = 1;
		audibleFire = 1;
	};
	class BoltSteel: Bolt
	{
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class B_1866_Slug: BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 200;
		visibleFire = 25;
		audibleFire = 25;
		airFriction = -0.005;
		caliber = 0.5;
	};
};
class CfgVehicles
{
	class WeaponHolderBase;
	class BoltSteelF: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_3";
		model = "\dayz_weapons\models\bolt";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','BoltSteel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class Soldier_Crew_PMC;
	class Soldier_Bodyguard_M4_PMC;
	class Survivor1_DZ: Soldier_Crew_PMC
	{
		displayName = "$STR_CHAR_1";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\objects\proxy_man";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Survivor2_DZ: Soldier_Crew_PMC
	{
		displayName = "$STR_CHAR_1";
		side = 1;
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		model = "\dayz\characters\man_survivor";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Survivor3_DZ: Survivor2_DZ
	{
		model = "\dayz\characters\man_hero";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
		class EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
		};
	};
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
	class SurvivorWsequisha_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\sequisha_co.paa"};
	};
	class SurvivorWsequishaD_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\sequishaD_co.paa"};
	};
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
		hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\textures\UrbanGirl.paa"};
	};
	class Citizen1;
	class PZombie_VB: Citizen1
	{
		side = 1;
		glassesEnabled = 0;
		moves = "CfgMovesPlayerZombie";
		gestures = "CfgGesturesMale";

		weapons[] = {};
		weaponSlots = "";
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};

		faceType = "ZFaces";
		identityTypes[] = {"Zombie1","Zombie2"};
		extCameraPosition[] = {0,1.5,-9};
		
		canHideBodies = 0;
	};
	class pz_policeman: PZombie_VB
	{
		model = "\ca\characters2\civil\Policeman\Policeman";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
		};
	};
	class pz_suit1: PZombie_VB
	{
		model = "\ca\characters2\civil\Functionary\Functionary";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_suit2: pz_suit1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
	};
	class pz_worker1: PZombie_VB
	{
		model = "\Ca\characters_E\Overall\Overall";
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat","Ca\characters_E\Overall\Data\W1_Overall.rvmat","Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
	};
	class pz_worker2: pz_worker1
	{
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
	};
	class pz_worker3: pz_worker1
	{
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_2_co.paa"};
	};

	class pz_doctor: PZombie_VB
	{
		model = "\ca\characters2\civil\Doctor\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_teacher: pz_doctor
	{
		hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
	};
	class pz_hunter: PZombie_VB
	{
		model = "\ca\characters2\civil\Woodlander\Woodlander";
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_villager1: PZombie_VB
	{
		model = "\ca\characters2\civil\Villager\Villager";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
		};
	};
	class pz_villager2: pz_villager1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v2_co.paa"};
	};
	class pz_villager3: pz_villager1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
	};
	class pz_priest: PZombie_VB
	{
		model = "\ca\characters2\civil\Priest\Priest";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	
};

class CfgFaces
{
	
	class ZFaces
	{	
		class Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat"; 
            head = "defaultHead"; 
		};
		class Zombie1 : Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
		};
		class Zombie2 : Default
		{
			name = "PZombie 2";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie2"};
			disabled = 0;
		};
	};
};

class CfgVoice
{
	class NoVoice
	{
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"",""};
		identityTypes[] = {"Default","Zombie1","Zombie2"};
	};
};
class CfgIdentities
{
	class PZombie1
	{
		name = "PZombie";
		face = "PZombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class PZombie2
	{
		name = "PZombie";
		face = "PZombie2";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};
//};
