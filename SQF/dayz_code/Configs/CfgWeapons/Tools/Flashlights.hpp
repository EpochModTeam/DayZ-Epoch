class ItemFlashlight : ItemCore
{
	scope = public;
	
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	displayName = $STR_EQUIP_NAME_5;
	descriptionShort = $STR_EQUIP_DESC_5;
	
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

class ItemFlashlightBroken : ItemFlashlight
{
	displayName = $STR_EQUIP_NAME_5_BROKEN;
	descriptionShort = $STR_EQUIP_DESC_5_BROKEN;
	class ItemActions {};
};

class MeleeFlashlight : Pistol
{
	scope = public;
	
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	displayName = $STR_EQUIP_NAME_5;
	descriptionShort = $STR_EQUIP_DESC_5;
	
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
	displayName = $STR_EQUIP_NAME_6;
	descriptionShort = $STR_EQUIP_DESC_6;
	
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

class ItemFlashlightRedBroken : ItemFlashlightRed 
{
	displayName = $STR_EQUIP_NAME_6_BROKEN;	
	descriptionShort = $STR_EQUIP_DESC_6_BROKEN;
	class ItemActions {};
};

class MeleeFlashlightRed : MeleeFlashlight
{
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	displayName = $STR_EQUIP_NAME_6;
	descriptionShort = $STR_EQUIP_DESC_6;
	
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