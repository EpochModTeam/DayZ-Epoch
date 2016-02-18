class Blueprint_HerbalDrink : Recipe {
	displayName = $STR_CRAFT_NAME_HerbalDrink;
	descriptionShort = $STR_CRAFT_DESC_herbalDrink;
	input[] = 
	{
		{"ItemWaterBottleBoiled","CfgMagazines",1},
		{"equip_herb_box","CfgMagazines",1}
	};
	output[] = 
	{
		{"ItemWaterBottleHerbal","CfgMagazines",1}
	};
	required[] = 
	{
	};
};
