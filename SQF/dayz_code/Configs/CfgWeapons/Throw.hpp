class Throw : GrenadeLauncher
{
	autoReload = true;
	backgroundReload = true;
	
	muzzles[] =
	{
		HandGrenadeMuzzle,
		SmokeShellMuzzle,
		
		RoadFlareMuzzle,
		ChemLightMuzzle,
		TrashMuzzle
	};
	
	class ThrowMuzzle : GrenadeLauncher
	{
		cursor = "\ca\Weapons\Data\clear_empty";
		backgroundReload = true;
	};
	
	class RoadFlareMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_4;
		magazines[] = {HandRoadFlare};
		
		begin1[] = {"dayz_weapons\sounds\roadflare_start", 1.77828, 1, 1000};
		soundBegin[] = {begin1, 1};
	};
	
	class ChemLightMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_5;
		magazines[] = {HandChemGreen, HandChemRed, HandChemBlue};
	};
	
	class TrashMuzzle : ThrowMuzzle
	{
		displayName = $STR_ACTION_THROW;
		magazines[] =
		{
			TrashJackDaniels,
			
			TrashTinCan,
			FoodCanGriffEmpty,
			FoodCanBadguyEmpty,
			FoodCanBoneboyEmpty,
			FoodCanCornEmpty,
			FoodCanCurgonEmpty,
			FoodCanDemonEmpty,
			FoodCanFraggleosEmpty,
			FoodCanHerpyEmpty,
			FoodCanDerpyEmpty,
			FoodCanOrlokEmpty,
			FoodCanPowellEmpty,
			FoodCanTylersEmpty,
			FoodCanUnlabeledEmpty,
			FoodCanRusUnlabeledEmpty,
			FoodCanRusPorkEmpty,
			FoodCanRusPeasEmpty,
			FoodCanRusMilkEmpty,
			FoodCanRusCornEmpty,
			FoodCanRusStewEmpty,
			FoodCanBeefEmpty,
			FoodCanPotatoesEmpty,
			
			ItemSodaEmpty,
			ItemSodaClaysEmpty,
			ItemSodaCokeEmpty,
			ItemSodaDrwasteEmpty,
			ItemSodaFrankaEmpty,
			ItemSodaGrapeDrinkEmpty,
			ItemSodaLemonadeEmpty,
			ItemSodaLirikEmpty,
			ItemSodaLvgEmpty,
			ItemSodaMdewEmpty,
			ItemSodaMtngreenEmpty,
			ItemSodaMzlyEmpty,
			ItemSodaPeppsyEmpty,
			ItemSodaPepsiEmpty,
			ItemSodaR4z0rEmpty,
			ItemSodaRabbitEmpty,
			ItemSodaRocketFuelEmpty,
			ItemSodaSacriteEmpty,
			ItemSodaSherbetEmpty,
			ItemSodaSmashtEmpty
		};
	};
};