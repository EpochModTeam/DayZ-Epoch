class ItemKnife_Base : ItemCore
{
	scope = private;
	
	model = "\dayz_equip\models\knife_gear.p3d";
	picture = "\dayz_equip\textures\equip_knife_ca.paa";
	displayName = $STR_EQUIP_NAME_4;
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
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4;
	sharpnessRemaining = "ItemKnife5";
};

class ItemKnife5 : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4_A;
	sharpnessRemaining = "ItemKnife4";
};

class ItemKnife4 : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4_B;
	sharpnessRemaining = "ItemKnife3";
};

class ItemKnife3 : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4_C;
	sharpnessRemaining = "ItemKnife2";
};

class ItemKnife2 : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4_D;
	sharpnessRemaining = "ItemKnife1";
};

class ItemKnife1 : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_DESC_4_E;
	sharpnessRemaining = "ItemKnifeBlunt";
};

class ItemKnifeBlunt : ItemKnife_Base
{
	scope = public;
	descriptionShort = $STR_EQUIP_CODE_DESC_4;
	sharpnessRemaining = "ItemKnifeBlunt";
	class ItemActions
	{
		class FixKnife
		{
			text = $STR_ACTIONS_FIX_KNIFE;
			script = "; ['ItemKnifeBlunt','ItemKnife'] spawn player_sharpen;";
		};
		class Use
		{
			text= $STR_EQUIP_KNIFE_ACTION;
			script="spawn player_harvestPlant;";
		};
	};
};