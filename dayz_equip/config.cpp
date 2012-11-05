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
		magazines[] = {"FoodBioMeat","ItemBandage","ItemHeatPack","PartWoodPile","PartFueltank","PartWheel","PartGeneric","PartEngine","PartVRotor","PartGlass","ItemWaterbottle","ItemWaterbottleUnfilled","ItemEpinephrine","ItemMorphine","ItemBloodbag","ItemAntibiotic","ItemPainkiller","ItemJerrycan","ItemGenerator","ItemTent","ItemSandbag","ItemTankTrap","ItemWire","FoodSteakRaw","TrashTinCan","ItemSodaCoke","ItemSodaPepsi","ItemSodaMdew","FoodEdible","FoodSteakCooked","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta"};
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
				output[] = {"20Rnd_556x45_Stanag","cfgMagazines"};
			};
			class CreateMag2: CreateMag1
			{
				output[] = {"30Rnd_556x45_Stanag","cfgMagazines"};
			};
			class CreateMag3: CreateMag1
			{
				output[] = {"30Rnd_556x45_G36","cfgMagazines"};
			};
			class CreateMag4: CreateMag1
			{
				output[] = {"200Rnd_556x45_M249","cfgMagazines"};
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
		displayName = "Rocket Suit";
		descriptionShort = "Rocket Suit";
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
	class PartFueltank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 4)";
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\models\fueltank.p3d";
		picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_8";
	};
	class PartWheel: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\models\wheel.p3d";
		picture = "\dayz_equip\textures\equip_wheel_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_9";
	};
	class PartGeneric: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_10";
	};
	class PartEngine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_11";
	};
	class PartWoodPile: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "$STR_EQUIP_NAME_40";
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_40";
	};
	class PartVRotor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_32";
	};
	class PartGlass: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
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
	class ItemJerrycan: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 20;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_19";
	};
	class ItemJerrycanEmpty: ItemJerrycan
	{
		fuelQuantity = 0;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_39";
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_39";
	};
	class ItemGenerator: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_31";
	};
	class ItemTent: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_20";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_20";
		class ItemActions
		{
			class Pitch
			{
				text = "$STR_PITCH_TENT";
				script = "spawn player_tentPitch;";
			};
		};
	};
	class ItemSandbag: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_21";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_21";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
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
	class FoodBioMeat: FoodEdible
	{
		scope = 2;
		displayName = "Bio Meat";
		model = "\dayz_equip\models\biomeat_can.p3d";
		picture = "\dayz_equip\textures\armourpottedmeat_CAN_test1_CA.paa";
		descriptionShort = "Re purposed Meat";
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
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
	};
	class Sandbag1_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
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
	class WeaponHolder_MeleeCrowbar: WeaponHolderBase
	{
		scope = 2;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','MeleeCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
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
