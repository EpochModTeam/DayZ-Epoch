class ItemStone: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemStone;//"Rough Stone"
	picture = "\z\addons\dayz_buildings\equip\rocks.paa";
	model = "z\addons\dayz_buildings\models\rocks.p3d";
	descriptionShort = $STR_BLD_desc_ItemStone;//"Rough Stone"
};

class ItemConcreteBlock: CA_Magazine //Construection,indestrial
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemConcreteBlock;//"Concrete Block"
	picture = "\z\addons\dayz_buildings\equip\concreteblock.paa";
	model = "z\addons\dayz_buildings\models\concreteblock.p3d";
	descriptionShort = $STR_BLD_desc_ItemConcreteBlock;//"Concrete Block"
};

class CinderBlocks: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CINDERBLOCKS;
	model = "\z\addons\dayz_epoch\models\cinder_stack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\epuip_cinder_blocks_CA.paa";
	descriptionShort = $STR_EPOCH_CINDERBLOCKS_DESC;
	weight = 100;
	class ItemActions
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_252;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"half_cinder_wall_kit",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1}};
		};
		class Crafting1
		{
			text = $STR_EPOCH_PLAYER_253;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_garage_kit",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}};
		};
		class Crafting2
		{
			text = $STR_EPOCH_PLAYER_234;
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"cinder_door_kit",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}};
		};
		class Crafting3
		{
			text = $STR_EPOCH_PLAYER_252_1;
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"full_cinder_wall_kit",1}};
			input[] = {{"CinderBlocks",7},{"MortarBucket",2}};
		};
	};
};
class MortarBucket: CA_Magazine
{
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_BUCKETOFMORTAR;
	model = "\z\addons\dayz_epoch\models\mortar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_mortar_CA.paa";
	descriptionShort = $STR_EPOCH_BUCKETOFMORTAR_DESC;
	weight = 21;
};

class equip_brick : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityassets\models\brick.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_brick.paa";
	displayName = $STR_ITEM_NAME_equip_brick;
	descriptionShort = $STR_ITEM_DESC_equip_brick;
};