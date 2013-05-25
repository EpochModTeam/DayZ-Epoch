////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dayz_equip : config.bin{
class CfgPatches
{
	class dayz_equip
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class Survival
	{
		displayName = "Survival";
	};
};
class RscStandardDisplay
{
	access = 0;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
};
class RscObject
{
	access = 0;
	type = 80;
	scale = 1;
	direction[] = {0,0,1};
	up[] = {0,1,0};
};
class RscPicture
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscButton
{
	access = 0;
	text = "";
	colorText[] = {0.543,0.5742,0.4102,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\mouse2",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0.09,1};
	soundClick[] = {"\ca\ui\data\sound\mouse3",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\mouse1",0.09,1};
	type = 1;
	style = "0x02 + 0x100";
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class RscButtonPhone: RscButton
{
	colorText[] = {0.543,0.5742,0.4102,0};
	colorDisabled[] = {0.4,0.4,0.4,0};
	colorBackground[] = {1,0.537,0,0};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,0};
	colorBackgroundActive[] = {1,0.537,0,0};
	colorFocused[] = {1,0.537,0,0};
	colorShadow[] = {0.023529,0,0.0313725,0};
	colorBorder[] = {0.023529,0,0.0313725,0};
	soundEnter[] = {"",0.09,1};
	soundPush[] = {"",0.09,1};
	soundClick[] = {"",0.07,1};
	soundEscape[] = {"",0.09,1};
};
class RscPhonePicture: RscStandardDisplay
{
	class controlsBackground
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "mphone_CA.paa";
			x = 0.2;
			y = 0.09;
			w = 0.6;
			h = 0.8;
		};
	};
	class controls
	{
		class RscButton_1600: RscButtonPhone
		{
			idc = 1600;
			text = "send";
			x = 0.402736;
			y = 0.597677;
			w = 0.0620061;
			h = 0.0620061;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav",0.09,1};
		};
		class RscButton_1601: RscButtonPhone
		{
			idc = 1601;
			text = "end";
			x = 0.528875;
			y = 0.597677;
			w = 0.0620061;
			h = 0.0620061;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav",0.09,1};
		};
		class RscButton_1602: RscButtonPhone
		{
			idc = 1602;
			text = "1";
			x = 0.399696;
			y = 0.669873;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav",0.09,1};
		};
		class RscButton_1603: RscButtonPhone
		{
			idc = 1603;
			text = "2";
			x = 0.472644;
			y = 0.671996;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_2.wav",0.09,1};
		};
		class RscButton_1604: RscButtonPhone
		{
			idc = 1604;
			text = "3";
			x = 0.539514;
			y = 0.671996;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_3.wav",0.09,1};
		};
		class RscButton_1605: RscButtonPhone
		{
			idc = 1605;
			text = "4";
			x = 0.404255;
			y = 0.714465;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_4.wav",0.09,1};
		};
		class RscButton_1606: RscButtonPhone
		{
			idc = 1606;
			text = "5";
			x = 0.472644;
			y = 0.716588;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_5.wav",0.09,1};
		};
		class RscButton_1607: RscButtonPhone
		{
			idc = 1607;
			text = "6";
			x = 0.534954;
			y = 0.716588;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_6.wav",0.09,1};
		};
		class RscButton_1608: RscButtonPhone
		{
			idc = 1608;
			text = "7";
			x = 0.407295;
			y = 0.759056;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_7.wav",0.09,1};
		};
		class RscButton_1609: RscButtonPhone
		{
			idc = 1609;
			text = "8";
			x = 0.472644;
			y = 0.76118;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_8.wav",0.09,1};
		};
		class RscButton_1610: RscButtonPhone
		{
			idc = 1610;
			text = "9";
			x = 0.531915;
			y = 0.76118;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.wav",0.09,1};
		};
		class RscButton_1611: RscButtonPhone
		{
			idc = 1611;
			text = "*";
			x = 0.416413;
			y = 0.801525;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_star.wav",0.09,1};
		};
		class RscButton_1612: RscButtonPhone
		{
			idc = 1612;
			text = "0";
			x = 0.471125;
			y = 0.805771;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav",0.09,1};
		};
		class RscButton_1613: RscButtonPhone
		{
			idc = 1613;
			text = "#";
			x = 0.525836;
			y = 0.803648;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_hash.wav",0.09,1};
		};
		class RscButton_1614: RscButtonPhone
		{
			idc = 1614;
			text = "Screen";
			x = 0.416413;
			y = 0.260054;
			w = 0.168389;
			h = 0.299601;
		};
	};
};
class CfgCloudlets
{
	class Default;
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
class RscPhoneDisplay
{
	access = 0;
	idd = 12;
	enableSimulation = 1;
	enableDisplay = 1;
	movingEnable = 0;
	class controlsBackground{};
	class controls
	{
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "1";
			x = 0.379939;
			y = 0.714465;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "4";
			x = 0.381459;
			y = 0.771797;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "7";
			x = 0.387538;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "*";
			x = 0.396657;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "3";
			x = 0.553192;
			y = 0.718711;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "6";
			x = 0.551672;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "9";
			x = 0.544073;
			y = 0.831252;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "#";
			x = 0.539514;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "0";
			x = 0.468085;
			y = 0.880091;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "8";
			x = 0.468085;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "5";
			x = 0.468085;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "2";
			x = 0.468085;
			y = 0.725082;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "send";
			x = 0.378419;
			y = 0.631652;
			w = 0.0802433;
			h = 0.0702721;
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "end";
			x = 0.541034;
			y = 0.633775;
			w = 0.0802433;
			h = 0.0702721;
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Screen";
			x = 0.392097;
			y = 0.206969;
			w = 0.215502;
			h = 0.382414;
		};
	};
	class objects
	{
		class GPS: RscObject
		{
			idc = 106;
			type = 82;
			inBack = 0;
			enableZoom = 0;
			moving = 0;
			scale = 1.5;
			position[] = {0,0,0.25};
			direction[] = {0,1,7.2};
			up[] = {0,0,-1};
			zoomDuration = 1;
			waitForLoad = 0;
			onMouseButtonClick = "_this call usePhone;";
			onObjectMoved = "_this call movePhone;";
			model = "\dayz_equip\models\phone.p3d";
			x = 0.22;
			xBack = 0.72;
			y = 0.925;
			yBack = 0.5;
			z = 0.22;
			zBack = 0.12;
		};
	};
};
class cfgWeapons
{
	class Default;
	class ItemCore;
	class Loot: Default
	{
		scope = 2;
		value = 0;
		type = 0;
		displayName = "Use";
		canDrop = 0;
		muzzles[] = {"this"};
		magazines[] = {"FoodBioMeat","ItemZombieParts","ItemBandage","ItemHeatPack","PartWoodPile","PartFueltank","PartWheel","PartGeneric","PartEngine","PartVRotor","PartGlass","ItemWaterbottle","ItemWaterbottleUnfilled","ItemEpinephrine","ItemGoldBar","ItemSilverBar","ItemCopperBar","ItemMorphine","ItemBloodbag","ItemAntibiotic","ItemPainkiller","ItemJerrycan","ItemOilBarrel","ItemGenerator","ItemTent","ItemSandbag","ItemTankTrap","ItemWire","FoodSteakRaw","TrashTinCan","ItemSodaCoke","ItemSodaPepsi","ItemSodaMdew","ItemSodaMdew","FoodEdible","FoodSteakCooked","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta"};
		modes[] = {"this"};
		useAction = 0;
		useActionTitle = "";
		enableAttack = 0;
		showToPlayer = 0;
	};
	class ItemToolbox: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_2";
		model = "\dayz_equip\models\toolbox.p3d";
		picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_2";
	};
	class ItemEtool: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_1";
		model = "\dayz_equip\models\etool.p3d";
		picture = "\dayz_equip\textures\equip_etool_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_1";
	};
	class ItemMatchbox: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_3";
		model = "\dayz_equip\models\matchbox_gear.p3d";
		picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_3";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_LIGHTFIRE";
				script = "spawn player_makeFire;";
				use[] = {"PartWoodPile"};
			};
		};
	};
	class ItemHatchet: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_41";
		model = "\dayz_equip\models\hatchet.p3d";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_41";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_CHOPWOOD";
				script = "spawn player_chopWood;";
			};
			class Toolbelt
			{
				text = "Remove from Toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemHatchet"};
				output[] = {"MeleeHatchet"};
			};
		};
	};
	class ItemKnife: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_4";
		model = "\dayz_equip\models\knife_gear.p3d";
		picture = "\dayz_equip\textures\equip_knife_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_4";
	};
	class ItemFlashlight: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\models\flashlight.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_5";
		class ItemActions
		{
			class Toolbelt
			{
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlight"};
				output[] = {"MeleeFlashlight"};
			};
		};
	};
	class Pistol;
	class MeleeFlashlight: Pistol
	{
		scope = 2;
		canDrop = 0;
		model = "\dayz_equip\models\flashlight.p3d";
		modelOptics = "-";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		magazines[] = {};
		displayName = "$STR_EQUIP_NAME_5";
		begin1[] = {};
		begin2[] = {};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		class Library
		{
			libTextDesc = "A flashlight (or torch in British English) is a hand-held portable electric-powered light source. Usually the light source is a small incandescent light bulb or light-emitting diode (LED).";
		};
		descriptionShort = "$STR_EQUIP_DESC_5";
		autoFire = 0;
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
		class ItemActions
		{
			class Toolbelt
			{
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlight"};
				output[] = {"ItemFlashlight"};
			};
		};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class MeleeFlashlightRed: MeleeFlashlight
	{
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class FlashLight
		{
			color[] = {0.9,0.0,0.0,0.9};
			ambient[] = {0.1,0.0,0.0,1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.08;
		};
		class ItemActions
		{
			class Toolbelt
			{
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlightRed"};
				output[] = {"ItemFlashlightRed"};
			};
		};
	};
	class ItemFlashlightRed: ItemCore
	{
		scope = 2;
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class ItemActions
		{
			class Toolbelt
			{
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlightRed"};
				output[] = {"MeleeFlashlightRed"};
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_556x45_Stanag: CA_Magazine
	{
		scope = 2;
		displayName = "20Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
		ammo = "B_556x45_Ball";
		count = 20;
		initSpeed = 930;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: M249 SAW, M4A1, M16A4";
	};
	class 20Rnd_762x51_DMR: CA_Magazine
	{
		scope = 2;
		displayName = "DMR mag";
		picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
		model = "\dayz_equip\models\mag20.p3d";
		count = 20;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,20};
		descriptionShort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4 x M24";
				script = "spawn player_reloadMag;";
				use[] = {"20Rnd_762x51_DMR"};
				output[] = {"5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24"};
			};
		};
	};
	class 30Rnd_556x45_Stanag: 20Rnd_556x45_Stanag
	{
		displayName = "30Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
		model = "\dayz_equip\models\mag30.p3d";
		count = 30;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: M4A1, M249, M16A4, Mk12";
	};
	class 10x_303: CA_Magazine
	{
		scope = 2;
		displayName = "Lee Enfield Mag.";
		model = "\dayz_equip\models\mag10rnd.p3d";
		descriptionShort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 10;
		ammo = "B_303_Ball";
		initSpeed = 750;
	};
	class 5x_22_LR_17_HMR: CA_Magazine
	{
		scope = 2;
		displayName = "CZ 550 Magazine";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 870;
		sound[] = {"Ca\sounds\Weapons\rifles\M24_single3",10,1,1800};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload",0.01,1,20};
		descriptionShort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
	};
	class 5Rnd_762x51_M24: CA_Magazine
	{
		scope = 2;
		displayName = "5Rnd. M24";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3",10,1,1600};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,10};
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 5 <br/>Used in: M24, M40A3";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for DMR";
				script = "spawn player_reloadMag;";
				use[] = {"5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24"};
				output[] = {"20Rnd_762x51_DMR"};
			};
		};
	};
	class 10Rnd_127x99_m107: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd. M107";
		ammo = "B_127x99_Ball_noTracer";
		model = "\dayz_equip\models\mag10rnd.p3d";
		count = 10;
		initSpeed = 850;
		picture = "\CA\weapons\data\Equip\M_107_CA.paa";
		descriptionShort = "Caliber: 12.7x99mm NATO <br/>Rounds: 10 <br/>Used in: M107";
	};
	class AmmoBox_300x556: CA_Magazine
	{
		scope = 2;
		displayName = "Ammo 300 x 5.56mm";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 300;
		type = "2*		256";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 300";
		class ItemActions
		{
			class CreateMag1
			{
				text = "Load %1";
				script = "spawn player_loadMag;";
				outputOriented = "true";
				output[] = {"30Rnd_556x45_Stanag",10,"cfgMagazines"};
			};
			class CreateMag2: CreateMag1
			{
				output[] = {"30Rnd_556x45_G36",10,"cfgMagazines"};
			};
			class CreateMag3: CreateMag1
			{
				output[] = {"100Rnd_556x45_M249",3,"cfgMagazines"};
			};
		};
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		scope = 2;
		displayName = "200Rnd. M249 Belt";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		ammo = "B_556x45_Ball";
		count = 200;
		type = "2*		256";
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS",17.7828,1,1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload",0.01,1,20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	};
	class 100Rnd_762x51_M240: CA_Magazine
	{
		scope = 2;
		displayName = "100Rnd. M240";
		picture = "\CA\weapons\data\equip\m_m240_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 100;
		type = "2*		256";
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	};
	class 6Rnd_45ACP: CA_Magazine
	{
		scope = 2;
		displayName = ".45 ACP";
		ammo = "B_45ACP_noCartridge_Ball";
		count = 6;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_45acp_ca.paa";
		model = "\dayz_equip\models\ammo_acp45.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP<br/>Rounds: 6<br/>Used in: Revolver .45";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for M1911";
				script = "spawn player_reloadMag;";
				use[] = {"6Rnd_45ACP"};
				output[] = {"7Rnd_45ACP_1911"};
			};
		};
	};
	class 7Rnd_45ACP_1911: CA_Magazine
	{
		scope = 2;
		displayName = "M1911 Mag.";
		ammo = "B_45ACP_Ball";
		count = 7;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_1911_ca.paa";
		model = "\dayz_equip\models\ammo_1911.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP <br/>Rounds: 7 <br/>Used in: M1911A1";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for Revolver";
				script = "spawn player_reloadMag;";
				use[] = {"7Rnd_45ACP_1911"};
				output[] = {"6Rnd_45ACP"};
			};
		};
	};
	class ItemCanvas: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas";
		model = "\dayz_equip\models\canvas.p3d";
		picture = "\dayz_equip\textures\equip_canvas_ca.paa";
		descriptionShort = "Canvas Parcel";
		class ItemActions
		{
			class Crafting
			{
				text = "Craft Tent";
				script = "spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTent",1}};
				input[] = {{"ItemCanvas",2},{"ItemPole",2}};
			};
			class Crafting1
			{
				text = "Craft Desert Tent";
				script = "spawn player_craftItem1;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting2
			{
				text = "Craft Green Tent";
				script = "spawn player_craftItem2;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemTentDomed2",1}};
				input[] = {{"ItemCanvas",3},{"ItemPole",3}};
			};
			class Crafting3
			{
				text = "Craft Sun Shade";
				script = "spawn player_craftItem3;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"sun_shade_kit",1}};
				input[] = {{"ItemCanvas",1},{"PartWoodLumber",4}};
			};
			class Crafting4
			{
				text = "Craft Burlap";
				script = "spawn player_craftItem4;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemBurlap",1}};
				input[] = {{"ItemCanvas",2}};
			};
		};
	};
	class ItemBurlap: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Burlap";
		model = "\dayz_equip\models\burlap.p3d";
		picture = "\dayz_equip\textures\equip_burlap_ca.paa";
		descriptionShort = "Burlap: A strong cloth like material used for building sandbags";
		class ItemActions
		{
			class Crafting
			{
				text = "Craft Sandbag";
				script = "spawn player_craftItem;";
				neednearby[] = {"sand"}; // todo add sand requirement
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemSandbag",1}};
				input[] = {{"ItemBurlap",3}};
			};
		};
	};
	class SkinBase: CA_Magazine
	{
		scope = 0;
		count = 1;
		type = 256;
		displayName = "Clothes";
		model = "\dayz_equip\models\cloth_parcel.p3d";
		picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
		descriptionShort = "Clothes Parcel";
		class ItemActions
		{
			class Use
			{
				text = "Wear %1";
				script = "spawn player_wearClothes;";
			};
			class Crafting
			{
				text = "Craft Canvas";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"ItemCanvas",1}};
				input[] = {{"SkinBase",4}};
			};
		};
	};
	class Skin_Sniper1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_43";
		descriptionShort = "$STR_EQUIP_DESC_43";
	};
	class Skin_Rocket_DZ: SkinBase
	{
		scope = 2;
		displayName = "Officer Suit";
		descriptionShort = "Officer Suit";
	};
	class Skin_RU_Policeman_DZ: SkinBase
	{
		scope = 2;
		displayName = "Police Officer Uniform";
		descriptionShort = "Police Officer Uniform";
	};
	class Skin_Pilot_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Pilot Uniform";
		descriptionShort = "Pilot Uniform";
	};
	class Skin_Haris_Press_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Press Uniform";
		descriptionShort = "Press Uniform";
	};
	class Skin_Ins_Soldier_GL_DZ: SkinBase
	{
		scope = 2;
		displayName = "Terrorist Uniform";
		descriptionShort = "Terrorist Uniform";
	};
	class Skin_GUE_Commander_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rebel Uniform";
		descriptionShort = "Rebel Uniform";
	};
	class Skin_Functionary1_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Business Suit";
		descriptionShort = "Business Suit";
	};
	class Skin_Priest_DZ: SkinBase
	{
		scope = 2;
		displayName = "Priest Outfit";
		descriptionShort = "Priest Outfit";
	};
	class Skin_Rocker1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rocker (black)";
	};	
	class Skin_Rocker2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rocker (brown)";
	};
	class Skin_Rocker3_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rocker (blue)";
	};
	class Skin_Rocker4_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rocker (green)";
	};
	class Skin_Bandit1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Outfit";
		descriptionShort = "Bandit Outfit";
	};	
	class Skin_Bandit2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Camo";
		descriptionShort = "Bandit Camo Outfit";
	};
	class Skin_GUE_Soldier_MG_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Gunner";
		descriptionShort = "Bandit Gunner Outfit";
	};
	class Skin_GUE_Soldier_Sniper_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Sniper";
		descriptionShort = "Bandit Sniper Outfit";
	};
	class Skin_GUE_Soldier_Crew_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Baklava";
		descriptionShort = "Bandit Baklava Outfit";
	};
	class Skin_GUE_Soldier_CO_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Mask";
		descriptionShort = "Bandit Mask Outfit";
	};
	class Skin_GUE_Soldier_2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Hat";
		descriptionShort = "Bandit Hat with Baklava";
	};
	class Skin_BanditW1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit (female)";
		descriptionShort = "Bandit (female)";
	};
	class Skin_BanditW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Camo (female)";
		descriptionShort = "Bandit Camo (female)";
	};
	class Skin_SurvivorW3_DZ: SkinBase
	{
		scope = 2;
		displayName = "Camo Pants (female)";
		descriptionShort = "Camo Pants (female)";
	};
	class Skin_SurvivorW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Civilian (female)";
		descriptionShort = "Civilian (female)";
	};
	class Skin_SurvivorWpink_DZ: SkinBase
	{
		scope = 2;
		displayName = "Pink (female)";
		descriptionShort = "Pink Clothes (female)";
	};

	class Skin_SurvivorWcombat_DZ: SkinBase
	{
		scope = 2;
		displayName = "Camo (female)";
		descriptionShort = "Camo Clothes (female)";
	};
	class Skin_SurvivorWdesert_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert (female)";
		descriptionShort = "Desert Clothes (female)";
	};
	class Skin_SurvivorWurban_DZ: SkinBase
	{
		scope = 2;
		displayName = "Urban (female)";
		descriptionShort = "Urban Clothes (female)";
	};


	class Skin_TK_INS_Warlord_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Warlord";
		descriptionShort = "Takistani Warlord";
	};
	class Skin_TK_INS_Soldier_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Soldier";
		descriptionShort = "Takistani Soldier";
	};
	class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Special Forces";
		descriptionShort = "Special Forces";
	};
	class Skin_Drake_Light_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert Camo";
		descriptionShort = "Desert Camo";
	};
	class Skin_Soldier_Bodyguard_AA12_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bodyguard";
		descriptionShort = "Bodyguard";
	};
	class Skin_FR_OHara_DZ: SkinBase
	{
		scope = 2;
		displayName = "Jungle Camo";
		descriptionShort = "Jungle Camo";
	};
	class Skin_FR_Rodriguez_DZ: SkinBase
	{
		scope = 2;
		displayName = "Gunner Outfit";
		descriptionShort = "Gunner Outfit";
	};
	class Skin_CZ_Soldier_Sniper_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert Guille";
		descriptionShort = "Desert Guille";
	};
	class Skin_Graves_Light_DZ: SkinBase
	{
		scope = 2;
		displayName = "Urban Camo";
		descriptionShort = "Urban Camo";
	};
	class Skin_Soldier_Sniper_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Marksman";
		descriptionShort = "Marksman";
	};
	class Skin_Soldier_TL_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Team Leader";
		descriptionShort = "Team Leader";
	};
	
	
	
	class Skin_Camo1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_44";
		descriptionShort = "$STR_EQUIP_DESC_44";
	};
	class Skin_Survivor2_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_45";
		descriptionShort = "$STR_EQUIP_DESC_45";
	};
	class Skin_Soldier1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_46";
		descriptionShort = "$STR_EQUIP_DESC_46";
	};
	class ItemBandage: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 16;
		displayName = "$STR_EQUIP_NAME_7";
		model = "\dayz_equip\models\fad.p3d";
		picture = "\dayz_equip\textures\equip_fad_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_7";
		class ItemActions
		{
			class Use
			{
				text = "$STR_BANDAGE_SELF";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemLightBulb: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Bulb";
		model = "\dayz_equip\models\bulb.p3d";
		picture = "\dayz_equip\textures\equip_bulb_CA.paa";
		descriptionShort = "Lightbulb: Used in part to creat a buildable lamp post. Don't tell me you didn't find this in a barn.";
		class ItemActions {
			class Crafting
			{
				text = "Craft Light Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"light_pole_kit",1}};
				input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
			};
		};
	};
	class PartFueltank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\models\fueltank.p3d";
		picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_8";
	};
	class PartWheel: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\models\wheel.p3d";
		picture = "\dayz_equip\textures\equip_wheel_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_9";
	};
	class PartGeneric: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_10";
		class ItemActions {
			class Crafting
			{
				text = "Craft Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemPole",1}};
				input[] = {{"PartGeneric",2}};
			};
		};
	};
	class ItemCorrugated : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Corrugated Fence";
		// TODO model and picture
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		descriptionShort = "Corrugated Fence: A buildable object used for fortification purposes.";
		class ItemActions {
			class Build {
				text = "Build Corrugated Fence";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Fence_corrugated_DZ";
			};
			class Crafting
			{
				text = "Craft Wooden Shed";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"wooden_shed_kit",1}};
				input[] = {{"ItemCorrugated",2},{"PartWoodPlywood",5},{"PartWoodLumber",5}};
			};
			class Crafting1
			{
				text = "Craft Outhouse";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"outhouse_kit",1}};
				input[] = {{"ItemCorrugated",1},{"PartWoodPlywood",5},{"PartWoodLumber",3},{"ItemTrashToiletpaper",1}};
			};
			class Crafting2
			{
				text = "Craft Storage Shed";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"storage_shed_kit",1}};
				input[] = {{"ItemCorrugated",5},{"PartWoodPlywood",2},{"PartWoodLumber",5}};
			};
		};
	};
	class ItemPole: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Pole";
		model = "\dayz_equip\models\pipe.p3d";
		picture = "\dayz_equip\textures\equip_pipe_CA.paa";
		descriptionShort = "Pole: A few sturdy metal poles used to craft tents and other buildables";
		class ItemActions {
			class Crafting
			{
				text = "Craft Corrugated Fence";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemCorrugated",1}};
				input[] = {{"ItemPole",2},{"ItemTankTrap",2},{"PartWoodLumber",2}};
			};
			class Crafting1
			{
				text = "Craft Rusty Gate";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"rusty_gate_kit",1}};
				input[] = {{"ItemPole",6},{"PartGeneric",3},{"ItemTankTrap",1}};
			};
		};
	};
	class PartEngine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_11";
	};
	class PartWoodPile: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_40";
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_40";
		class ItemActions {
			class Crafting
			{
				text = "Craft Lumber";
				script = "spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"PartWoodLumber",1}};
				input[] = {{"PartWoodPile",2}};
			};
			class Crafting1
			{
				text = "Craft Arrows";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemKnife"};
				output[] = {{"WoodenArrow",3}};
				input[] = {{"PartWoodPile",1},{"ItemTrashRazor",1}};
				
			};
			class Crafting2
			{
				text = "Craft Stick Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"stick_fence_kit",1}};
				input[] = {{"PartWoodPile",6}};
				
			};
			
		};
	};
	class PartWoodLumber: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Lumber";
		model = "\dayz_equip\models\planks.p3d";
		picture = "\dayz_equip\textures\equip_wood_planks_CA.paa";
		descriptionShort = "Lumber: Used for building many structures and can also be used to make plywood.";
		class ItemActions {
			class Build {
				text = "Build Wood Gate";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodGate_DZ";
			};
			class Crafting
			{
				text = "Craft Plywood";
				script = "spawn player_craftItem;";
				neednearby[] = {"sawmill"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"PartWoodPlywood",1}};
				input[] = {{"PartWoodLumber",2}};
				
			};
			/*
			class Crafting1
			{
				text = "Craft Wood Bench";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"park_bench_kit",1}};
				input[] = {{"PartWoodLumber",4}};
				
			};
			*/
		};
	};
	class PartWoodPlywood: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Plywood";
		model = "\dayz_equip\models\plywood.p3d";
		picture = "\dayz_equip\textures\equip_plywood_CA.paa";
		descriptionShort = "Plywood: Used for building many structures.";
		class ItemActions {
			class Crafting
			{
				text = "Craft Shack";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"wood_shack_kit",1}};
				input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};
				
			};
		};
	};
	class PartWoodShed: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wooden Shack";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		descriptionShort = "Wooden Shack: A crafted object that holds some items/weapons/backpacks.";
		class ItemActions {
			class Build {
				text = "Build Wood Shack";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "WoodShack_DZ";
			};
		};
	};
	class PartVRotor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_32";
	};
	class PartGlass: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_30";
		model = "\dayz_equip\models\carglass.p3d";
		picture = "\dayz_equip\textures\equip_carglass_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_30";
	};
	class TrapBear: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";
		class ItemActions
		{
			class Build
			{
				text = "Place Trap";
				script = "spawn player_setTrap;";
				create = "BearTrap_DZ";
			};
		};
	};
	class FoodDrink: CA_Magazine
	{
		isWater = 1;
		count = 1;
		type = 256;
		class ItemActions
		{
			class Drink
			{
				text = "$STR_ACTIONS_DRINK";
				script = "spawn player_drink;";
			};
		};
	};
	class ItemWaterbottle: FoodDrink
	{
		scope = 2;
		refillable = 1;
		sfx = "drink";
		displayName = "$STR_EQUIP_NAME_12";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_12";
	};
	class ItemWaterbottleUnfilled: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_13";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_13";
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemSodaCoke: FoodDrink
	{
		scope = 2;
		sfx = "soda";
		displayName = "$STR_EQUIP_NAME_36a";
		model = "\dayz_equip\models\soda_coke.p3d";
		picture = "\dayz_equip\textures\equip_soda_coke_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_36";
	};
	class ItemSodaPepsi: ItemSodaCoke
	{
		displayName = "$STR_EQUIP_NAME_36b";
		model = "\dayz_equip\models\soda_pepsi.p3d";
		picture = "\dayz_equip\textures\equip_soda_pepsi_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_36";
	};
	class ItemSodaMdew: ItemSodaCoke
	{
		displayName = "$STR_EQUIP_NAME_37";
		model = "\dayz_equip\models\soda_mdew.p3d";
		picture = "\dayz_equip\textures\equip_soda_mdew_ca.paa";
		descriptionShort = "$STR_EQUIP_NAME_37";
	};
	class ItemBriefcase: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Briefcase";
		// model = "\misc3\briefcase.p3d";
		picture = "\dayz_equip\textures\equip_bar_gold_CA.paa";
		// TODO: Needs picture and model
		descriptionShort = "Briefcase full of Gold Bars";
	};
	class ItemGoldBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold";
		model = "\dayz_equip\models\gold_bar.p3d";
		picture = "\dayz_equip\textures\equip_gold_bar_CA.paa";
		descriptionShort = "Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemGoldBar10oz",1}};
				input[] = {{"ItemGoldBar",10}};
				
			};
		};
	};
	class ItemGoldBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Gold";
		model = "\dayz_equip\models\gold_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_gold_bar_10oz_CA.paa";
		descriptionShort = "10oz Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemGoldBar",10}};
				input[] = {{"ItemGoldBar10oz",1}};
			};
		};
	};
	class ItemSilverBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Silver";
		model = "\dayz_equip\models\silver_bar.p3d";
		picture = "\dayz_equip\textures\equip_silver_bar_CA.paa";
		descriptionShort = "Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemSilverBar10oz",1}};
				input[] = {{"ItemSilverBar",10}};
			};
		};
	};
	
	class ItemSilverBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Silver";
		model = "\dayz_equip\models\silver_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_silver_bar_10oz_CA.paa";
		descriptionShort = "10oz Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemSilverBar",10}};
				input[] = {{"ItemSilverBar10oz",1}};
			};
		};
	};
	class ItemCopperBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Copper";
		model = "\dayz_equip\models\copper_bar.p3d";
		picture = "\dayz_equip\textures\equip_copper_bar_CA.paa";
		descriptionShort = "Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemCopperBar10oz",1}};
				input[] = {{"ItemCopperBar",10}};
			};
		};
	};

	class ItemCopperBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Copper";
		model = "\dayz_equip\models\copper_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_copper_bar_10oz_CA.paa";
		descriptionShort = "10oz Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemCopperBar",10}};
				input[] = {{"ItemCopperBar10oz",1}};
			};
		};
	};
	
	class ItemBronzeBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bronze";
		model = "\dayz_equip\models\bronze_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_bronze_CA.paa";
		descriptionShort = "Bronze Bar";
	};
	class ItemAluminumBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Aluminum";
		model = "\dayz_equip\models\aluminum_bar.p3d";
		picture = "\dayz_equip\textures\equip_alum_bar_CA.paa";
		descriptionShort = "Aluminum Bar";
		
	};
	class ItemAluminumBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Aluminum";
		model = "\dayz_equip\models\aluminum_bar.p3d";
		picture = "\dayz_equip\textures\equip_alum_bar_10oz_CA.paa";
		descriptionShort = "10oz Aluminum Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemAluminumBar",10}};
				input[] = {{"ItemAluminumBar10oz",1}};
			};
		};
	};
	class ItemTinBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Tin";
		model = "\dayz_equip\models\tin_bar.p3d";
		picture = "\dayz_equip\textures\equip_tin_bar_CA.paa";
		descriptionShort = "Tin Bar";
		
	};
	class ItemTinBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Tin";
		model = "\dayz_equip\models\tin_bar.p3d";
		picture = "\dayz_equip\textures\equip_tin_bar_10oz_CA.paa";
		descriptionShort = "10oz Tin Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"ItemTinBar",10}};
				input[] = {{"ItemTinBar10oz",1}};
			};
		};
	};

	class ItemZombieParts: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Zombie Parts";
		model = "\dayz_equip\models\zombie_parts_bag_v2.p3d";
		picture = "\dayz_equip\textures\parts_bag_texture3c_CA.paa";
		descriptionShort = "Zombie Parts in a Bag: Trade these for Bio Meat at medic traders.";

	};
	class ItemEpinephrine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_14";
		model = "\dayz_equip\models\epi.p3d";
		picture = "\dayz_equip\textures\equip_epi_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_14";
	};
	class ItemMorphine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_15";
		model = "\dayz_equip\models\morphine.p3d";
		picture = "\dayz_equip\textures\equip_morphine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_15";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_MORPHINE";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemHeatPack: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_42";
		model = "\dayz_equip\models\Heat_pack.p3d";
		picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_42";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_HEATPACK";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemBloodbag: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_16";
		model = "\dayz_equip\models\bloodbag.p3d";
		picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_16";
	};
	class ItemAntibiotic: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_17";
		model = "\dayz_equip\models\med_antibiotic_gear.p3d";
		picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_17";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_ANTIBIOTIC";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemPainkiller: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_18";
		model = "\dayz_equip\models\med_painkiller_gear.p3d";
		picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_18";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_PAINKILLER";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemOilBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		// fuelQuantity = 210;
		type = 256;
		displayName = "Oil Barrel";
		model = "\dayz_equip\models\oil_drum_model.p3d";
		picture = "\dayz_equip\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of Oil in a Barrel";
	};
	class ItemFuelBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 210;
		type = 256;
		displayName = "Fuel Barrel";
		model = "\dayz_equip\models\oil_drum_model.p3d";
		picture = "\dayz_equip\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of fuel per barrel";
	};
	class ItemFuelBarrelEmpty: ItemFuelBarrel
	{
		scope = 2;
		count = 1;
		fuelQuantity = 0;
		type = 256;
		displayName = "Fuel Barrel (Empty)";
		picture = "\dayz_equip\textures\equip_oildrum_e_CA.paa";
		descriptionShort = "210 litres of fuel per barrel (Empty)";
	};
	class ItemJerrycan: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 20;
		type = 256;
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_19";
	};
	class ItemJerrycanEmpty: ItemJerrycan
	{
		fuelQuantity = 0;
		type = 256;
		displayName = "$STR_EQUIP_NAME_39";
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_39";
	};
	
	class bulk: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Supply Crate";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		descriptionShort = "12 x Random Item";
	};
	class bulk_NVGoggles: bulk
	{
		descriptionShort = "12 x NV Goggles";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"NVGoggles",12,"weapon"};
				// types magazine, weapon, backpack
			};
		};

	};
	class bulk_DZ_Backpack_EP1: bulk
	{
		descriptionShort = "4 x DZ_Backpack_EP1";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"DZ_Backpack_EP1",4,"backpack"};
				// types magazine, weapon, backpack
			};
		};
	};
	class bulk_30Rnd_9x19_MP5SD: bulk
	{
		descriptionShort = "12 x 30Rnd_9x19_MP5SD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
			};
		};
	};
	class bulk_15Rnd_9x19_M9SD: bulk
	{
		descriptionShort = "12 x 15Rnd_9x19_M9SD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
			};
		};
	};
	class bulk_30Rnd_556x45_StanagSD: bulk
	{
		descriptionShort = "12 x 30Rnd_556x45_StanagSD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
			};
		};
	};
	class bulk_ItemSandbag: bulk
	{
		descriptionShort = "12 x SandBag";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSandbag",12,"magazine"};
			};
		};
	};
	class bulk_ItemGPS: bulk
	{
		descriptionShort = "12 x GPS";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemGPS",12,"weapon"};
			};
		};
	};
	class bulk_ItemMap: bulk
	{
		descriptionShort = "12 x Map";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemMap",12,"weapon"};
			};
		};
	};
	class bulk_ItemEtool: bulk
	{
		descriptionShort = "12 x E-Tool";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemEtool",12,"weapon"};
			};
		};
	};
	class bulk_17Rnd_9x19_glock17: bulk
	{
		descriptionShort = "12 x 17Rnd_9x19_glock17";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"17Rnd_9x19_glock17",12,"magazine"};
			};
		};
	};
	
	// BUILDING KITS
	class 30m_plot_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "30 Meter Plot";
		descriptionShort = "Plot Pole: A placeable pole that will allow you and your friends to build within a 30m radius. Ownership of plot pole is lost after owners death.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Plastic_Pole_EP1_DZ";
			};
		};
	};
	class desert_large_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Desert Camo Net";
		descriptionShort = "Large Camo Netting: A very large buildable object that can be used to cover objects.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DesertLargeCamoNet_DZ";
			};
		};
	};
	class forest_large_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Large Forest Camo Net";
		descriptionShort = "Large Camo Netting: A very large buildable object that can be used to cover objects.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ForestLargeCamoNet_DZ";
			};
		};
	};
	class desert_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Desert Camo Net";
		descriptionShort = "Camo Netting: A buildable object that can be used to cover objects.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "DesertCamoNet_DZ";
			};
			class Crafting
			{
				text = "Craft Lg Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"desert_large_net_kit",1}};
				input[] = {{"desert_net_kit",3}};
			};
		};
	};
	class forest_net_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Forest Camo Net";
		descriptionShort = "Camo Netting: A buildable object that can be used to cover objects.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ForestCamoNet_DZ";
			};
			class Crafting
			{
				text = "Craft Lg Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {"workshop"};
				requiretools[] = {"ItemToolbox","ItemKnife"};
				output[] = {{"forest_large_net_kit",1}};
				input[] = {{"forest_net_kit",3}};
			};
		};
	};
	class fuel_pump_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Fuel Pump";
		descriptionShort = "Fuel Pump";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "FuelPump_DZ";
			};
		};
	};
	class light_pole_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Pole";
		descriptionShort = "Light Pole: A buildable object that can be used with a Generator to provide light in times of darkness.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "LightPole_DZ";
			};
		};
	};
	class stick_fence_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Stick Fence";
		descriptionShort = "Stick Fence: A buildable barrier that can be used to keep zombies out of your camp. They are fairly weak and can be ran over easier.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "StickFence_DZ";
			};
		};
	};
	class wooden_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Nice Wooden Shed";
		descriptionShort = "Nice Wooden Shed: A crafted object that holds a lot of items/weapons/backpacks and has a door that opens and closes.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "Wooden_shed_DZ";
			};
		};
	};
	class wood_shack_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Shack";
		descriptionShort = "Wood Shack";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "WoodShack_DZ";
			};
		};
	};
	class m240_nest_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "M240 Nest";
		descriptionShort = "M240 Nest";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "M240Nest_DZ";
			};
		};
	};
	class sun_shade_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas Sun Shade";
		descriptionShort = "Sun Shade: A buildable object used to keep the sun off your back.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "CanvasHut_DZ";
			};
		};
	};
	class park_bench_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Bench";
		descriptionShort = "Wood Bench";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "ParkBench_DZ";
			};
		};
	};
	class rusty_gate_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Rusty Gate";
		descriptionShort = "Rusty Gate: A buildable object that can be opened and closed.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "MetalGate_DZ";
			};
		};
	};
	class sandbag_nest_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Sandbag Nest";
		descriptionShort = "Sandbag Nest: A buildable fortification object, can be removed.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "SandNest_DZ";
			};
		};
	};
	class outhouse_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Outhouse";
		descriptionShort = "Outhouse: A buildable object that you can poop in. Comes pre-stocked with one roll of Toilet Paper.";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "OutHouse_DZ";
			};
		};
	};
	class storage_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Storage Shed";
		descriptionShort = "Storage Shed: A large buildable object that is non enterable and holds a lot of items/weapons/backpacks";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox"};
				create = "StorageShed_DZ";
			};
		};
	};
	
	class ItemGenerator: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_31";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Generator_DZ";
			};
		};
	};
	// Custom player vault
	class ItemVault: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Safe";
		model = "\dayz_equip\models\safe2_onside.p3d";
		picture = "\dayz_equip\textures\equip_safe2_ca.paa";
		descriptionShort = "Personal Safe: A placeable object that is used for very secure storage. WARNING!!! Placing your safe will give you a 4 digit number that is used to open the safe, save that number!";
		class ItemActions
		{
			class Pitch
			{
				text = "Place Safe";
				script = "spawn player_vaultPitch;";
			};
		};
	};
	
	class ItemTankTrap: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_22";
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_22";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Hedgehog_DZ";
			};
		};
	};
	class ItemWire: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_23";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_23";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Wire_cat1";
			};
		};
	};
	class FoodSteakRaw: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_24";
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_24";
	};
	class FoodEdible: CA_Magazine
	{
		isFood = 1;
		count = 1;
		type = 256;
		bloodRegen = 200;
		class ItemActions
		{
			class Eat
			{
				text = "$STR_EAT_FOOD";
				script = "spawn player_eat;";
			};
		};
	};
	
	class ItemTrout : FoodEdible {
		scope = 2;
		displayName = "Rainbow Trout";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\dayz_equip\models\trout.p3d";
		picture = "\dayz_equip\textures\equip_rainbowtrout_CA.paa";
		bloodRegen = 400;
	};
	class ItemSeaBass : FoodEdible {
		scope = 2;
		displayName = "Sea Bass";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\dayz_equip\models\seabass.p3d";
		picture = "\dayz_equip\textures\equip_seabass_CA.paa";
		bloodRegen = 800;
	};
	class ItemTuna : FoodEdible {
		scope = 2;
		displayName = "Blue Fin Tuna";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\dayz_equip\models\tuna.p3d";
		picture = "\dayz_equip\textures\equip_tuna_CA.paa";
		bloodRegen = 2500;
	};
	class ItemTroutCooked : FoodEdible {
		scope = 2;
		displayName = "Rainbow Trout (Cooked)";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\dayz_equip\models\trout_cooked.p3d";
		picture = "\dayz_equip\textures\equip_trout_cooked_CA.paa";
		bloodRegen = 800;
	};
	class ItemSeaBassCooked : FoodEdible {
		scope = 2;
		displayName = "Sea Bass (Cooked)";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\dayz_equip\models\seabass_cooked.p3d";
		picture = "\dayz_equip\textures\equip_seabass_cooked_CA.paa";
		bloodRegen = 1600;
	};
	class ItemTunaCooked : FoodEdible {
		scope = 2;
		displayName = "Blue Fin Tuna (Cooked)";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\dayz_equip\models\tuna_cooked.p3d";
		picture = "\dayz_equip\textures\equip_tuna_cooked_CA.paa";
		bloodRegen = 5000;
	};
	class FoodBioMeat: FoodEdible
	{
		scope = 2;
		displayName = "Bio Meat";
		model = "\dayz_equip\models\biomeat_can.p3d";
		picture = "\dayz_equip\textures\armourpottedmeat_CAN_test1_CA.paa";
		descriptionShort = "Bio Meat: A very good source of blood, and a very high chance of infection. Eat at own risk.";
		bloodRegen = 1600;
	};
	class FoodSteakCooked: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_25";
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_25";
		bloodRegen = 800;
	};
	class FoodCanBakedBeans: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_26";
		model = "\dayz_equip\models\food_bbtin.p3d";
		picture = "\dayz_equip\textures\equip_bbtin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_26";
	};
	class FoodCanSardines: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_27";
		model = "\dayz_equip\models\food_sardinestin.p3d";
		picture = "\dayz_equip\textures\equip_Sardinestin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_27";
	};
	class FoodCanFrankBeans: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_28";
		model = "\dayz_equip\models\food_fbtin.p3d";
		picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_28";
	};
	class FoodCanPasta: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_29";
		model = "\dayz_equip\models\food_pastatin.p3d";
		picture = "\dayz_equip\textures\equip_pastatin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_29";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class BuiltItems: NonStrategic{};
	class TrapItems: NonStrategic{};
	class Wire_cat1: BuiltItems
	{
		scope = 2;
		animated = 0;
		vehicleClass = "Fortifications";
		icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		offset[] = {0,1.5,0.5};
		accuracy = 0.3;
		mapSize = 5.5;
		displayName = "Wire (CAT1)";
		model = "\dayz_equip\models\wire_cat1.p3d";
		destrType = "DestructTent";
		armor = 100;
		GhostPreview = "Fort_RazorWirePreview";
	};
	class Wire_cat2: Wire_cat1
	{
		displayName = "Wire (CAT2)";
		model = "\dayz_equip\models\wire_cat2.p3d";
	};
	class Hedgehog_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemTankTrap",1}};
	};
	class Generator_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model = "\dayz_equip\models\generator.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Generator";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemGenerator",1}};
	};
	class FuelPump_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,2,0};
		model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d"; 
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Fuel Pump";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemFuelPump",1}};
	};

	class Fort_RazorWire : BuiltItems { 
	  scope = 2; 
	  animated = 0; 
	  vehicleClass = "Fortifications"; 
	  model = "\ca\misc\Fort_Razorwire"; 
	  icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa"; 
	  offset[] = {0,1.5,0.5};
	  accuracy = 0.3; 
	  mapSize = 5.5; 
	  displayName = "Wire"; 
	  destrType = "DestructTent"; 
	  armor = 100; 
	  GhostPreview = "Fort_RazorWirePreview"; 
	};

	class Sandbag1_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemSandbag",1}};
	};

	class Land_HBarrier1_DZ : BuiltItems { 
		scope = 2; 
		animated = 0; 
		vehicleClass = "Fortifications"; 
		typicalCargo[] = {}; 
		offset[] = {0,2,0};
		irTarget = 0; 
		accuracy = 0.3; 
		transportAmmo = 0; 
		transportRepair = 0; 
		transportFuel = 0; 
		destrType = "DestructBuilding"; 
		armor = 500; 
		coefInside = 0.5; 
		coefInsideHeur = 0.8; 
		cost = 0; 
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa"; 
		model = "\ca\misc2\HBarrier1.p3d"; 
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa"; 
		mapSize = 2; 
		displayName = "H-barrier cube"; 
		GhostPreview = "Land_HBarrier1Preview"; 
		constructioncount = 10;
		removeoutput[] = {{"ItemSandbagLarge",1}};
	};
	
	// PLAYER BUILDINGS
	class Plastic_Pole_EP1;
	class Plastic_Pole_EP1_DZ: Plastic_Pole_EP1
	{
		scope = 2;
		// destrType = "DestructNo"; 
		offset[] = {0,2.5,0};
		displayName = "30m Plot Pole";
		vehicleClass = "Fortifications";
	};



	class USMC_WarfareBMGNest_M240;
	class M240Nest_DZ: USMC_WarfareBMGNest_M240
	{
		destrType = "DestructBuilding"; 
		armor = 450;
		scope = 2;
		offset[] = {0,3.5,0};
		displayName = "M240 Nest";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 25;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 1;
		constructioncount = 10;
		removeoutput[] = {{"m240_nest_kit",1}};
		
	};
	class Land_covering_hut_EP1;
	class CanvasHut_DZ: Land_covering_hut_EP1
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Canvas Hut";
		vehicleClass = "Fortifications";
	};
	class Park_bench1;
	class ParkBench_DZ: Park_bench1
	{
		scope = 2;
		offset[] = {0,1.5,0.5};
		displayName = "Wood Bench";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"park_bench_kit",1}};
	};
	class Land_CamoNet_EAST_EP1;
	class DesertCamoNet_DZ: Land_CamoNet_EAST_EP1
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,5,0};
		displayName = "Desert Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"desert_net_kit",1}};
	};
	class Land_CamoNet_EAST;
	class ForestCamoNet_DZ: Land_CamoNet_EAST
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,5,0};
		displayName = "Forest Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"forest_net_kit",1}};
	};
	class Land_CamoNetB_EAST_EP1;
	class DesertLargeCamoNet_DZ: Land_CamoNetB_EAST_EP1
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,9,0};
		displayName = "Large Desert Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"desert_large_net_kit",1}};
	};
	class Land_CamoNetB_EAST;
	class ForestLargeCamoNet_DZ: Land_CamoNetB_EAST
	{
		armor = 300;
		destrType = "DestructNo";
		scope = 2;
		offset[] = {0,9,0};
		displayName = "Large Forest Camo Net";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"forest_large_net_kit",1}};
	};
	
	class Land_fortified_nest_small_EP1;
	class SandNest_DZ: Land_fortified_nest_small_EP1
	{
		armor = 400;
		scope = 2;
		offset[] = {0,3,1};
		displayName = "Sandbag Nest";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"sandbag_nest_kit",1}};
	};
	class Land_Wall_Gate_Ind1_L;
	class MetalGate_DZ: Land_Wall_Gate_Ind1_L
	{
		armor = 400;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Rusty Gate";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"rusty_gate_kit",1}};
	};
	class Land_KBud;
	class OutHouse_DZ: Land_KBud
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Outhouse";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 4;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		constructioncount = 5;
		class transportmagazines
		{
			class _xx_ItemTrashToiletpaper
			{
				magazine = "ItemTrashToiletpaper";
				count = 1;
			};
		};
	};
	class Land_Shed_M01;
	class StorageShed_DZ: Land_Shed_M01
	{
		armor = 400;
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Storage Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 400;
		transportMaxWeapons = 40;
		transportMaxBackpacks = 20;
		constructioncount = 5;
	};
	class Fence_corrugated_plate;
	class Fence_corrugated_DZ: Fence_corrugated_plate
	{
		armor = 300;
		scope = 2;
		offset[] = {0,2.5,1};
		removeoutput[] = {{"ItemCorrugated",1}};
		displayName = "Corrugated Fence";
		vehicleClass = "Fortifications";
		
	};
	class Land_kulna;
	class WoodShack_DZ: Land_kulna
	{
		scope = 2;
		destrType = "DestructBuilding"; 
		offset[] = {0,2.5,1.3};
		armor = 200;
		displayName = "Wooden Shack";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		constructioncount = 5;
	};
	class Land_Shed_wooden;
	class Wooden_shed_DZ: Land_Shed_wooden
	{
		scope = 2;
		destrType = "DestructBuilding"; 
		//cost = 100;
		offset[] = {0,2.5,1};
		armor = 400;
		displayName = "Wooden Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};
	
	class Wall_FenW2_6_EP1;
	class StickFence_DZ: Wall_FenW2_6_EP1
	{
		destrType = "DestructTree"; 
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,0};
		displayName = "Stick Fence";
		vehicleClass = "Fortifications";
	};
	class ASC_EU_LHVOld;
	class LightPole_DZ: ASC_EU_LHVOld
	{
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,0};
		displayName = "Light Pole";
		vehicleClass = "Fortifications";
	};
	class WoodGate_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree"; 
		//cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\structures\Wall\Gate_wood2_5";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		// armor = 100;
		displayName = "Wood Panel";
		vehicleClass = "Fortifications";
		
		class AnimationSources
		{
			class DoorR { 
			  source = "User"; 
			  animPeriod = 1; 
			  initPhase = 0; 
			};
		};
		class UserActions
		{
			class CloseDoor
			{
				position = "";
				displayName = "Close Door";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'DoorR' == 1";
				statement = "this animate ['DoorR', 0];";
			};
			class OpenDoor
			{
				position = "";
				displayName = "Open Door";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'DoorR' == 0";
				statement = "this animate ['DoorR', 1];";
			};
		};
	};
	class BearTrap_DZ: TrapItems
	{
		scope = 2;
		destrType = "DestructNo";
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap.p3d";
		class Eventhandlers
		{
			init = "_this execFSM '\z\addons\dayz_code\system\trap_monitor.fsm';";
		};
		class AnimationSources
		{
			class LeftShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			class RightShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class OpenTrap
			{
				position = "";
				displayName = "Reset Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "this animate ['LeftShutter', 0];this animate ['RightShutter', 0];";
			};
			class CloseTrap
			{
				position = "";
				displayName = "Activate Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 0";
				statement = "this animate ['LeftShutter', 1];this animate ['RightShutter', 1];";
			};
			class CollectTrap
			{
				position = "";
				displayName = "Take Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "[0,0,0,['cfgMagazines','TrapBear',this]] call object_pickup;";
			};
		};
	};
	class ReammoBox;
	class WeaponHolderBase: ReammoBox
	{
		scope = 0;
		accuracy = 1000;
		vehicleClass = "Survival";
		displayName = "Weapon";
		memoryPointSupply = "collect";
		supplyRadius = 3;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
	};
	class WeaponHolder_Colt1911: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_1";
		model = "\dayz_equip\proxy\Colt1911.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','Colt1911'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemHatchet: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_41";
		model = "\dayz_equip\models\hatchet.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemHatchet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemMachete: WeaponHolderBase
	{
		scope = 2;
		displayName = "Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_MeleeCrowbar: WeaponHolderBase
	{
		scope = 2;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_huntingrifle: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_2";
		model = "\dayz_equip\proxy\huntingrifle.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','huntingrifle'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_M4A1: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_3";
		model = "\dayz_equip\proxy\M4A1.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','M4A1'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemTent: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_20";
		model = "\dayz_equip\proxy\tentbag.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemTent'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemTentDomed: WeaponHolderBase
	{
		scope = 2;
		displayName = "Domed Desert Tent";
		model = "\dayz_equip\proxy\tentbag.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemTentDomed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemTentDomed2: WeaponHolderBase
	{
		scope = 2;
		displayName = "Domed Green Tent";
		model = "\dayz_equip\proxy\tentbag.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemTentDomed2'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemVault: WeaponHolderBase
	{
		scope = 2;
		displayName = "Safe";
		model = "\dayz_equip\models\safe2.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemVault'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlight: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\proxy\flashlight.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemFlashlight'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlightRed: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_6";
		model = "\dayz_equip\proxy\flashlight_mil.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemWaterbottle: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_12";
		model = "\dayz_equip\proxy\waterbottle.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemWaterbottleUnfilled'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemGenerator: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemGenerator'] execVM '\z\addons\dayz_code\init\object_generator.sqf';";
		};
	};
	class WeaponHolder_ItemToolbox: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_2";
		model = "\dayz_equip\proxy\toolbox.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemToolbox'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartFueltank: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\proxy\fueltank.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartWheel: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\proxy\wheel.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartGeneric: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\proxy\genericparts.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartVRotor: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\proxy\vrotor.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartEngine: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\proxy\engine.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartGlass: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_30";
		model = "\dayz_equip\proxy\carglass.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemOilBarrel: WeaponHolderBase
	{
		scope = 2;
		displayName = "Oil Barrel";
		model = "\dayz_equip\proxy\oil_drum_model.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemOilBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFuelBarrel: WeaponHolderBase
	{
		scope = 2;
		displayName = "Fuel Barrel";
		model = "\dayz_equip\proxy\oil_drum_model.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemFuelBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycanEmpty: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_39";
		model = "\dayz_equip\proxy\jerrycan.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycan: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\proxy\jerrycan.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemJerrycan'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycanSide: WeaponHolder_ItemJerrycan
	{
		model = "\dayz_equip\proxy\jerrycan_side.p3d";
	};
	class Land_A_tent;
	class ACamp;
	class TentStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_ItemTent";
	};
	class TentStorageDomed: TentStorage
	{
		displayName = "Digital Camo Tent";
		vehicleClass = "Survival";
		model = "\dayz_equip\models\astan.p3d";
		transportMaxMagazines = 75;
		transportMaxWeapons = 12;
		transportMaxBackpacks = 7;
		create = "WeaponHolder_ItemTentDomed";
	};
	class TentStorageDomed2: TentStorage
	{
		displayName = "Green Domed Tent";
		vehicleClass = "Survival";
		model = "\ca\Misc_E\Astan_ep1.p3d"; 
		transportMaxMagazines = 75;
		transportMaxWeapons = 12;
		transportMaxBackpacks = 7;
		create = "WeaponHolder_ItemTentDomed2";
	};
	class VaultStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Safe";
		model = "\dayz_equip\models\safe2.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};	
	class VaultStorageLocked: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Locked Safe";
		model = "\dayz_equip\models\safe2.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
	};
	

	class CardboardBox: ReammoBox
	{
		accuracy = 1000;
		vehicleClass = "Survival";
	};
	class FoodBox0: CardboardBox
	{
		scope = 2;
		displayName = "$STR_DAYZ_OBJ_1";
		model = "\dayz_equip\models\cardboard_box.p3d";
		class TransportWeapons
		{
			class _xx_ItemMatchbox
			{
				weapon = "ItemMatchbox";
				count = 3;
			};
			class _xx_ItemFlashlight
			{
				weapon = "ItemFlashlight";
				count = 3;
			};
			class _xx_ItemKnife
			{
				weapon = "ItemKnife";
				count = 3;
			};
		};
		class transportmagazines
		{
			class _xx_FoodCanBakedBeans
			{
				magazine = "FoodCanBakedBeans";
				count = 6;
			};
			class _xx_FoodCanSardines
			{
				magazine = "FoodCanSardines";
				count = 6;
			};
			class _xx_FoodCanFrankBeans
			{
				magazine = "FoodCanFrankBeans";
				count = 6;
			};
			class _xx_FoodCanPasta
			{
				magazine = "FoodCanPasta";
				count = 6;
			};
		};
	};
	class FoodBox1: FoodBox0{};
	class FoodBox2: FoodBox0{};
	class MedBox0: CardboardBox
	{
		scope = 2;
		displayName = "$STR_DAYZ_OBJ_2";
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemBandage
			{
				magazine = "ItemBandage";
				count = 10;
			};
			class _xx_ItemEpinephrine
			{
				magazine = "ItemEpinephrine";
				count = 5;
			};
			class _xx_ItemMorphine
			{
				magazine = "ItemMorphine";
				count = 5;
			};
			class _xx_ItemBloodbag
			{
				magazine = "ItemBloodbag";
				count = 5;
			};
			class _xx_ItemPainkiller
			{
				magazine = "ItemPainkiller";
				count = 5;
			};
		};
	};
	class AmmoBoxSmall: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Small";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
	};
	class Land_Fire;
	class Land_Fire_DZ: Land_Fire
	{
		transportMaxMagazines = 8;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		class TransportMagazines
		{
			class _xx_PartWoodPile
			{
				magazine = "PartWoodPile";
				count = "1";
			};
		};
		class Eventhandlers
		{
			init = "_this call eh_localCleanup;";
		};
	};
	class AmmoBoxMedium: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxBig.p3d";
	};
	class AmmoBoxBig: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBox.p3d";
	};
	class AmmoBoxSmall_556: AmmoBoxSmall
	{
		displayName = "Ammo 5.56";
		class transportmagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 10;
			};
		};
	};
	class AmmoBoxSmall_762: AmmoBoxSmall
	{
		displayName = "Ammo 7.62";
		class transportmagazines
		{
			class _xx_20Rnd_762x51_DMR
			{
				magazine = "20Rnd_762x51_DMR";
				count = 10;
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = 10;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 10;
			};
		};
	};
};
class CfgSounds
{
	class trap_bear_0
	{
		name = "";
		sound[] = {"\dayz_equip\sound\trap_bear_0",1,1,60};
		titles[] = {};
	};
};
//};
