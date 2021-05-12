class ItemKnife_Base : ItemCore
{
	scope = 0;	
	model = "\dayz_equip\models\knife_gear.p3d";
	picture = "\dayz_equip\textures\equip_knife_ca.paa";
	displayName = $STR_EQUIP_NAME_KNIFE;
	
	class ItemActions
	{
		class Use
		{
			text= $STR_EQUIP_KNIFE_ACTION;
			script="spawn player_harvestPlant;";
		};
	};
};

class ItemKnife : ItemKnife_Base
{
	scope = 2;
	model = "\dayz_equip\models\knife_gear.p3d"; // Some mods override this. We leave this here just to be sure.
	picture = "\dayz_equip\textures\equip_knife_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_KNIFE;
	sharpnessRemaining = "ItemKnife5";
};

class ItemKnife5 : ItemKnife_Base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_5;
	sharpnessRemaining = "ItemKnife4";
};

class ItemKnife4 : ItemKnife_Base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_4;
	sharpnessRemaining = "ItemKnife3";
};

class ItemKnife3 : ItemKnife_Base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_3;
	sharpnessRemaining = "ItemKnife2";
};

class ItemKnife2 : ItemKnife_Base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_2;
	sharpnessRemaining = "ItemKnife1";
};

class ItemKnife1 : ItemKnife_Base
{
	scope = 2;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_1;
	sharpnessRemaining = "ItemKnifeBlunt";
};

class ItemKnifeBlunt : ItemKnife_Base
{
	scope = 2;
	displayName = $STR_EQUIP_NAME_KNIFE_DULL;
	descriptionShort = $STR_EQUIP_DESC_KNIFE_DULL;
	sharpnessRemaining = "ItemKnifeBlunt";
	class ItemActions
	{
		class FixKnife
		{
			text = $STR_ACTIONS_SHARPEN_KNIFE;
			script = "; ['ItemKnifeBlunt','ItemKnife'] spawn player_sharpen;";
		};
		class Use
		{
			text= $STR_EQUIP_KNIFE_ACTION;
			script="spawn player_harvestPlant;";
		};
	};
};