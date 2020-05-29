// For Chainsaw
class ItemMixOil : CA_Magazine 
{
	scope = 2;
	displayName = $STR_EPOCH_CHAINSAW_OIL;
	model = "\z\addons\dayz_epoch\models\oilmix.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oilmix_CA.paa";
	count = 1;
	type = 256;
	descriptionShort = $STR_EPOCH_CHAINSAW_OIL;
	sfx = "refuel";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXGAS_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemJerryMixed",1}};
			input[] = {{"ItemMixOil",1},{"ItemJerrycan",1}};
			inputstrict = true;
		};
	};
};
class CSGAS : CA_Magazine 
{
	scope = 2;
	type = VSoft;
	displayName = $STR_EPOCH_CHAINSAW_GAS;
	descriptionShort = $STR_EPOCH_CHAINSAW_GAS_DESC;
	count = 1000;
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	ammo = "Chainsaw_Swing_Ammo";

	initSpeed = 100;
	maxLeadSpeed = 15;
	tracersEvery = 0;
	lastRoundsTracer = 0;

	optics = false;
	distanceZoomMin = 0;
	distanceZoomMax = 0;

	showEmpty = 0;
	autoReload = true;
	canLock = LockNo;

	burst = 1;
	multiplier = 1;
	ffMagnitude = 0.1;
	ffFrequency = 1;
	ffCount = 1;

	class HitEffects {
		hit_blood = "ImpactBlood";
		hit_concrete = "ImpactConcrete";
		hit_foliage = "ImpactWood";
		hit_foliage_green = "ImpactWood";
		hit_glass = "ImpactGlass";
		hit_glass_thin = "ImpactGlassThin";
		hit_metal = "ImpactMetal";
		hit_plaster = "ImpactPlaster";
		hit_rubber = "ImpactRubber";
		hit_wood = "ImpactWood";
	};
};
class ItemJerryMixed: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAINSAW_MIXEDGAS20L_CAN;
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = $STR_EPOCH_CHAINSAW_MIXEDGAS20L_CAN_DESC;
	sfx = "refuel";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ChainSaw"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed4",1}};
			input[] = {{"ItemJerryMixed",1}};
		};
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};
	};
};
class ItemJerryMixed4: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAINSAW_MIXEDGAS16L_CAN;
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = $STR_EPOCH_CHAINSAW_MIXEDGAS16L_CAN_DESC;
	sfx = "refuel";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ChainSaw"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed3",1}};
			input[] = {{"ItemJerryMixed4",1}};
		};
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};		
	};
};
class ItemJerryMixed3: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAINSAW_MIXEDGAS12L_CAN;
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = $STR_EPOCH_CHAINSAW_MIXEDGAS12L_CAN_DESC;
	sfx = "refuel";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ChainSaw"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed2",1}};
			input[] = {{"ItemJerryMixed3",1}};
		};
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};		
	};
};
class ItemJerryMixed2: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAINSAW_MIXEDGAS8L_CAN;
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = $STR_EPOCH_CHAINSAW_MIXEDGAS8L_CAN_DESC;
	sfx = "refuel";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ChainSaw"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed1",1}};
			input[] = {{"ItemJerryMixed2",1}};
		};
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};		
	};
};
class ItemJerryMixed1: CA_Magazine 
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CHAINSAW_MIXEDGAS4L_CAN;
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = $STR_EPOCH_CHAINSAW_MIXEDGAS4L_CAN;
	sfx = "refuel";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ChainSaw"};
			output[] = {{"CSGAS",1},{"ItemJerrycanEmpty",1}};
			input[] = {{"ItemJerryMixed1",1}};
		};
		class Empty	
		{
			text = $STR_EQUIP_NAME_13_EMPTY;
			script = "spawn player_emptyContainer";
		};		
	};
};