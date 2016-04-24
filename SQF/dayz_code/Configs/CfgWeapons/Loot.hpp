class Loot : Default
{
	scope = public;
	value = 0;
	type = WeaponNoSlot;
	displayName = "Use";
	canDrop = false;
	muzzles[] = {this};
	modes[] = {this};
	useAction = false;
	useActionTitle = "";
	enableAttack = false;
	showToPlayer = false;
	
	//Insert here magazines to show up as "Take x" in action menu
	magazines[] =
	{
		//medical
		"ItemBandage",
		"ItemSepsisBandage",
		"ItemPainkiller",
		"ItemMorphine",
		"ItemAntibiotic",
		"ItemHeatPack",
		"ItemEpinephrine"
		
		//vehicle parts
		/*"PartFueltank",
		"PartWheel",
		"PartGeneric",
		"PartEngine",
		"PartVRotor",
		"PartGlass",
		"ItemJerrycan",*/
	};
};