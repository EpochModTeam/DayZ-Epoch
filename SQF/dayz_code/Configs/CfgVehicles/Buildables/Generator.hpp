class Generator_Base: Land_A_tent //Vanilla generator uses SkodaBase but is currently not functional
{
	scope = private;
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
	displayName="Generator";
};
class Generator_DZ: Generator_Base
{
	scope = public;
	transportMaxWeapons=0;
	transportmaxbackpacks = 0;
	transportMaxMagazines=10;
	displayName = "Generator";
	weapons[] = {};
	magazines[] = {};
	class TransportBackpacks{};
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
	maximumLoad = 200;
	supplyRadius = -1;
	memoryPointSupply = "";
	
	soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
	soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};		
	// Epoch values
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\dayz_equip\models\generator.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;		
	vehicleClass = "DayZ Epoch Buildables";
	constructioncount = 1;
	removeoutput[] = {{"ItemGenerator",1}};
	requireplot = 0;
	nounderground = 0;

	class Turrets {};
};