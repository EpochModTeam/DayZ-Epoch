class Blueprint_Trap_Cans : Recipe {
	displayName = $STR_ITEM_NAME_TRIPWIRE_CANS;
	descriptionShort = $STR_ITEM_DESC_TRIPWIRE_CANS;
	input[] = 
	{
		{"equip_string","CfgMagazines",1},
		{"PartWoodPile","CfgMagazines",1},
		{{"TrashTinCan","CfgMagazines",1},
		//	{"FoodCanLongSpratsEmpty","CfgMagazines",1}, 
			{"FoodCanBeefEmpty","CfgMagazines",1}, 
			{"FoodCanPotatoesEmpty","CfgMagazines",1}, 
			{"FoodCanGriffEmpty","CfgMagazines",1}, 
			{"FoodCanBadguyEmpty","CfgMagazines",1}, 
			{"FoodCanBoneboyEmpty","CfgMagazines",1}, 
			{"FoodCanCornEmpty","CfgMagazines",1}, 
			{"FoodCanCurgonEmpty","CfgMagazines",1}, 
			{"FoodCanDemonEmpty","CfgMagazines",1}, 
			{"FoodCanFraggleosEmpty","CfgMagazines",1},
			{"FoodCanHerpyEmpty","CfgMagazines",1},
			{"FoodCanDerpyEmpty","CfgMagazines",1},
			{"FoodCanOrlokEmpty","CfgMagazines",1},
			{"FoodCanPowellEmpty","CfgMagazines",1},
			{"FoodCanTylersEmpty","CfgMagazines",1},
			{"FoodCanUnlabeledEmpty","CfgMagazines",1},
			{"FoodCanRusUnlabeledEmpty","CfgMagazines",1},
			{"FoodCanRusStewEmpty","CfgMagazines",1},
			{"FoodCanRusPorkEmpty","CfgMagazines",1},
			{"FoodCanRusPeasEmpty","CfgMagazines",1},
			{"FoodCanRusMilkEmpty","CfgMagazines",1},
			{"FoodCanRusCornEmpty","CfgMagazines",1},
			{"FoodChipsSulahoopsEmpty","CfgMagazines",1},
			{"FoodChipsMysticalesEmpty","CfgMagazines",1},
			{"FoodChipsChocolateEmpty","CfgMagazines",1}}
	};
	output[] = 
	{
		{"ItemTrapTripwireCans","CfgMagazines",1}
	};
	required[] = 
	{
		{"ItemToolbox","CfgWeapons",1}
	};
};


