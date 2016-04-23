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