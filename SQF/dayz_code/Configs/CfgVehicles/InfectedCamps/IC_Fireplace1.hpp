class IC_Fireplace1: House {
	scope = 2;
	displayname = "Campfire";
	model = "\Ca\misc3\Campfire";
};

class IC_Tent: House {
	armor = 10;
	destrtype = "DestructTent";
	displayname = "Old camping tent";
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\CA\Misc3\A_tent";
	scope = 2;
	
	vehicleClass = "Survival";
	pack = "WeaponHolder_ItemTent";
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
};

class IC_DomeTent : IC_Tent {
	displayname = "Old Dome camping tent";
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";
	model = "\ca\buildings\Tents\astan";
	pack = "WeaponHolder_ItemDomeTent";
	vehicleClass = "Survival";
	
	transportMaxMagazines = 35;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 0;
};