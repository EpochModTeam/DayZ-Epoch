class Throw : GrenadeLauncher
{
/*
	scope = public;
	autoAimEnabled = false;
	cursor = "Vehicle_Grenade_W";
	cursoraim = "\ca\Weapons\Data\clear_empty";
	cursorSize = 1;
	value = 0;
	type = VSoft;
	displayName = $STR_MAG_ACTION2_4;
	canDrop = false;
	//autoReload = true;
	//backgroundReload = true;
*/
	
	muzzles[] =
	{
		"HandGrenadeMuzzle",
		"SmokeShellMuzzle",
		"RoadFlareMuzzle",
		"ChemLightMuzzle",
		"TrashMuzzle"
	};
	
	class ThrowMuzzle : GrenadeLauncher
	{
	/*
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
		sound[] = {"", 0.000316228, 1};
		reloadSound[] = {"", 0.000316228, 1};
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		reloadTime = 0;
		magazineReloadTime = 0;
		enableAttack = false;
		showEmpty = 0;
		autoReload = true;
		modelOptics = "";
		minRange = 30;
		minRangeProbab = 0.5;
		midRange = 45;
		midRangeProbab = 0.2;
		maxRange = 60;
		maxRangeProbab = 0.03;
	*/
		cursor = "\ca\Weapons\Data\clear_empty";
		//backgroundReload = true;
	};
	
	class RoadFlareMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_4;
		magazines[] = {"HandRoadFlare"};
		
		begin1[] = {"dayz_weapons\sounds\roadflare_start", 1.77828, 1, 1000};
		soundBegin[] = {"begin1", 1};
	};
	
	class ChemLightMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_5;
		magazines[] = {"HandChemGreen", "HandChemRed", "HandChemBlue"};
	};
	
	class TrashMuzzle : ThrowMuzzle
	{
		displayName = $STR_ACTION_THROW;
		magazines[] =
		{
			"TrashJackDaniels",
			"TrashTinCan",
			"FoodCanGriffEmpty",
			"FoodCanBadguyEmpty",
			"FoodCanBoneboyEmpty",
			"FoodCanCornEmpty",
			"FoodCanCurgonEmpty",
			"FoodCanDemonEmpty",
			"FoodCanFraggleosEmpty",
			"FoodCanHerpyEmpty",
			"FoodCanDerpyEmpty",
			"FoodCanOrlokEmpty",
			"FoodCanPowellEmpty",
			"FoodCanTylersEmpty",
			"FoodCanUnlabeledEmpty",
			"FoodCanRusUnlabeledEmpty",
			"FoodCanRusPorkEmpty",
			"FoodCanRusPeasEmpty",
			"FoodCanRusMilkEmpty",
			"FoodCanRusCornEmpty",
			"FoodCanRusStewEmpty",
			"FoodCanBeefEmpty",
			"FoodCanPotatoesEmpty",
			"ItemSodaEmpty",
			"ItemSodaClaysEmpty",
			"ItemSodaCokeEmpty",
			"ItemSodaDrwasteEmpty",
			"ItemSodaFrankaEmpty",
			"ItemSodaGrapeDrinkEmpty",
			"ItemSodaLemonadeEmpty",
			"ItemSodaLirikEmpty",
			"ItemSodaLvgEmpty",
			"ItemSodaMdewEmpty",
			"ItemSodaMtngreenEmpty",
			"ItemSodaMzlyEmpty",
			"ItemSodaPeppsyEmpty",
			"ItemSodaPepsiEmpty",
			"ItemSodaR4z0rEmpty",
			"ItemSodaRabbitEmpty",
			"ItemSodaRocketFuelEmpty",
			"ItemSodaSacriteEmpty",
			"ItemSodaSherbetEmpty",
			"ItemSodaSmashtEmpty"
		};
	};
};