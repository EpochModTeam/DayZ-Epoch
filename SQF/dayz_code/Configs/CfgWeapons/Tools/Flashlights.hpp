class ItemFlashlight : ItemCore
{
	scope = 2;	
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT;
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT;
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] = {"ItemFlashlight"};
			output[] = {"MeleeFlashlight"};
		};
	};
};

class ItemFlashlightBroken : ItemCore
{
	scope = 2;	
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemFlashlightBroken.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT_BROKEN;
};

class MeleeFlashlight : Pistol
{
	scope = 2;	
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT;
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT;
	
	modelOptics = "-";
	magazines[] = {};
	
	class FlashLight
	{
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeFlashlight"};
			output[] = {"ItemFlashlight"};
		};
	};
};

class ItemFlashlightRed : ItemFlashlight
{
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT_MILITARY;
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT_MILITARY;
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_RFROMTB;
			script = "spawn player_addToolbelt;";
			use[] = {"ItemFlashlightRed"};
			output[] = {"MeleeFlashlightRed"};
		};
	};
};

class ItemFlashlightRedBroken : ItemCore 
{
	scope = 2;
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemMilitaryFlashlightBroken.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT_MILITARY_BROKEN;	
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT_MILITARY_BROKEN;
};

class MeleeFlashlightRed : MeleeFlashlight
{
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	displayName = $STR_EQUIP_NAME_FLASHLIGHT_MILITARY;
	descriptionShort = $STR_EQUIP_DESC_FLASHLIGHT_MILITARY;
	
	class FlashLight
	{
		color[] = {0.9, 0.0, 0.0, 0.9};
		ambient[] = {0.1, 0.0, 0.0, 1};
		position = "flash dir";
		direction = "flash";
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.08;
	};
	
	class ItemActions
	{
		class Toolbelt
		{
			text = $STR_ACTIONS_2TB;
			script = "spawn player_addToolbelt;";
			use[] = {"MeleeFlashlightRed"};
			output[] = {"ItemFlashlightRed"};
		};
	};
};