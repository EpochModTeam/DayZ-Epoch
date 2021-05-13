class bloodBagBase : CA_Magazine
{
	scope = 0;
	count = 1;
	type = 256;	
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
};

class bloodBagANEG : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagANEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagANEG;
};

class bloodBagAPOS : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagAPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagAPOS;
};

class bloodBagBNEG : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagBNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagBNEG;
};

class bloodBagBPOS : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagBPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagBPOS;
};

class bloodBagABNEG : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagABNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagABNEG;
};

class bloodBagABPOS : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagABPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagABPOS;
};

class bloodBagONEG : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagONEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagONEG;
};

class bloodBagOPOS : bloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_bloodBagOPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagOPOS;
};

//Whole blood bags -- Can only be obtained by taking blood from another player.
class wholeBloodBagBase : bloodBagBase
{
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_use;
			script = "spawn player_useMeds;";
		};
	};
};

class wholeBloodBagANEG : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagANEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagANEG;
};
class wholeBloodBagAPOS : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagAPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagAPOS;
};
class wholeBloodBagBNEG : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagBNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBNEG;
};
class wholeBloodBagBPOS : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagBPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBPOS;
};
class wholeBloodBagABNEG : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagABNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABNEG;
};
class wholeBloodBagABPOS : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagABPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABPOS;
};
class wholeBloodBagONEG : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagONEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagONEG;
};
class wholeBloodBagOPOS : wholeBloodBagBase
{
	scope = 2;
	displayName = $STR_BLD_name_wholeBloodBagOPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagOPOS;
};

//MISC tools needed
class bloodTester : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\blood_test.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_blood_test_ca.paa";
	displayName = $STR_BLD_name_bloodTester;
	descriptionShort = $STR_BLD_desc_bloodTester;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_use_bloodTester;
			script = "spawn player_useMeds;";
		};
	};
};

class transfusionKit : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\blood_transfuse.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bloodbag_transfuse_CA.paa";
	displayName = $STR_BLD_name_transfusionKit;
	descriptionShort = $STR_BLD_desc_transfusionKit;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_use_transfusionKit;
			script = "spawn player_useMeds;";
		};
	};
};

class emptyBloodBag : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "z\addons\dayz_communityassets\models\bbag_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_empty_ca.paa";
	displayName = $STR_BLD_name_emptyBloodBag;
	descriptionShort = $STR_BLD_desc_emptyBloodBag;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_take;
			script = "spawn player_useMeds;";
		};
	};
};

//Classic blood bag
class ItemBloodbag: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_BLOOD_BAG;
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_BLOOD_BAG;
	
	class ItemActions 
	{
		class Use 
		{
			text = $STR_BLD_use;
			script = "spawn player_useMeds;";
		};
	};
};

class ItemBloodbagInfected: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_INFECTED";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_INFECTED_DESC";
};

class ItemBloodbagZombie: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_ZOMBIE";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_ZOMBIE_DESC";
};

class ItemBloodbagRabbit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_RABBIT";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_RABBIT_DESC";
};

class ItemBloodbagChicken: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_CHICKEN";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_CHICKEN_DESC";
};

class ItemBloodbagDog: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_DOG";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_DOG_DESC";
};

class ItemBloodbagCow: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_COW";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_COW_DESC";
};

class ItemBloodbagBoar: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_BOAR";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_BOAR_DESC";
};

class ItemBloodbagGoat: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_GOAT";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_GOAT_DESC";
};

class ItemBloodbagSheep: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = "$STR_EPOCH_BLOODBAG_SHEEP";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	descriptionShort = "$STR_EPOCH_BLOODBAG_SHEEP_DESC";
};