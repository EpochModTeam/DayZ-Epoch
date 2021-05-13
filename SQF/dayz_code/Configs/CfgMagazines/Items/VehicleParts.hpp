class PartFueltank : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
	displayName = $STR_EQUIP_NAME_FUELTANK;
	descriptionShort = $STR_EQUIP_DESC_FUELTANK;
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",1}};
			input[] = {{"PartFueltank",1}};
		};
	};
};
	
class PartWheel : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_equip\textures\equip_wheel_ca.paa";
	displayName = $STR_EQUIP_NAME_CAR_WHEEL;
	descriptionShort = $STR_EQUIP_DESC_CAR_WHEEL;
};

class PartEngine : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\engine.p3d";
	picture = "\dayz_equip\textures\equip_engine_ca.paa";
	displayName = $STR_EQUIP_NAME_ENGINE;
	descriptionShort = $STR_EQUIP_DESC_ENGINE;
	
	class ItemActions 
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",2}};
			input[] = {{"PartEngine",1}};
		};
	};
};

class PartVRotor : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\vrotor.p3d";
	picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
	displayName = $STR_EQUIP_NAME_MAIN_ROTOR;
	descriptionShort = $STR_EQUIP_DESC_MAIN_ROTOR;
	
	class ItemActions 
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",3}};
			input[] = {{"PartVRotor",1}};
		};
	};
};

class PartGlass : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\carglass.p3d";
	picture = "\dayz_equip\textures\equip_carglass_ca.paa";
	displayName = $STR_EQUIP_NAME_WINDSCREEN_GLASS;
	descriptionShort = $STR_EQUIP_DESC_WINDSCREEN_GLASS;
	
	class ItemActions 
	{	
		class Crafting 
		{
			text = $STR_EPOCH_ACTION_GLASS_FLOOR_QUARTER;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"glass_floor_quarter_kit",1}};
			input[] = {{"ItemPole",8},{"PartGlass",4}};
		};
	};	
};

class PartFueltankBroken : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_fueltank_broken_ca";
	displayName = $STR_EPOCH_BROKEN_FUELTANK;
	descriptionShort = $STR_EPOCH_BROKEN_FUELTANK_DESC;
	
	class ItemActions 
	{
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",1}};
			input[] = {{"PartFueltankBroken",1}};
		};
	};
};
	
class PartWheelBroken : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_wheel_broken_ca.paa";
	displayName = $STR_EPOCH_BROKEN_CARWHEEL;
	descriptionShort = $STR_EPOCH_BROKEN_CARWHEEL_DESC;
};

class PartEngineBroken : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\engine.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_engine_broken_ca.paa";
	displayName = $STR_EPOCH_BROKEN_ENGINEPARTS;
	descriptionShort = $STR_EPOCH_BROKEN_ENGINEPARTS_DESC;
	
	class ItemActions 
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",2}};
			input[] = {{"PartEngineBroken",1}};
		};
	};
};

class PartVRotorBroken : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\vrotor.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_vrotor_broken_ca.paa";
	displayName = $STR_EPOCH_BROKEN_ROTOR;
	descriptionShort = $STR_EPOCH_BROKEN_ROTOR_DESC;
	
	class ItemActions 
	{
		class Crafting
		{
			text = $STR_EPOCH_PLAYER_212;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox","ItemCrowbar"};
			output[] = {{"PartGeneric",3}};
			input[] = {{"PartVRotorBroken",1}};
		};
	};
};

class PartGlassBroken : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\dayz_equip\models\carglass.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_carglass_broken_CA.paa";
	displayName = $STR_EPOCH_BROKEN_GLASS;
	descriptionShort = $STR_EPOCH_BROKEN_GLASS_DESC;	
};


	
// PartGeneric can be found under Items\Metal.hpp