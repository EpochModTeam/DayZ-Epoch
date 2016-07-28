/*

	CUSTOM TRADERS FOR TAVIANA EPOCH
	(Credits: DayZ Epoch Devs for their original traders.)
	AUTHOR: AVendettaForYou
	Date: 12/11/2013

*/

serverTraders = [
"GUE_Worker2",
"Soldier_Sniper_KSVK_PMC",
"Soldier_GL_PMC",
"GUE_Soldier_Pilot",
"GUE_Woodlander3",
"Worker4",
"Reynolds_PMC",
"Soldier_Sniper_PMC",
"GUE_Soldier_3",
"RU_Doctor",
"Doctor",
"UN_CDF_Soldier_Pilot_EP1",
"RU_Worker4",
"RU_Woodlander4",
"Citizen3",
"RU_Damsel5",
"Dr_Hladik_EP1",
"GUE_Commander",
"GUE_Soldier_CO",
"Profiteer2_EP1",
"RU_Farmwife5",
"GUE_Woodlander1",
"RU_Worker1",
"GUE_Soldier_2"];

/*---------------------------------------------------------------------------
			HERO VENDORS
---------------------------------------------------------------------------*/

//COMBINATION VENDOR
menu_Soldier_Sniper_PMC = [
	[["Attachments",693],["Ammunition",478],["Military Armed",562],["Helicopter Armed",512],["Trucks Armed",479],["Weapons",477]],
	[],
	"hero"
];
//SUPPLIES
menu_GUE_Woodlander3 = [
	[["Building Supplies",530],["Tools",532],["Vehicle Parts",531]],
	[],
	"hero"
];
//MEDICAL
menu_RU_Doctor = [
	[["Chem-lites/Flares",542],["Medical Supplies",541],["Smoke Grenades",543]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"hero"
];
//FOOD & DRINK
menu_RU_Damsel5 = [
	[["Backpacks",538],["Clothes",628],["Cooked Meats",630],["Drinks",601],["Packaged Food",629]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"hero"
];

/*---------------------------------------------------------------------------
			BANDIT VENDORS
---------------------------------------------------------------------------*/

//COMBINATION VENDOR
menu_GUE_Woodlander1 = [
	[["Attachments",693],["Ammunition",577],["Helicopter Armed",512],["Military Armed",569],["Trucks Armed",534],["Weapons",627]],
	[],
	"hostile"
];
//SUPPLIES
menu_RU_Worker1 = [
	[["Building Supplies",662],["Tools",663],["Vehicle Parts",664]],
	[],
	"hostile"
];
//MEDICAl
menu_Dr_Hladik_EP1 = [
	[["Chem-lites/Flares",666],["Medical Supplies",665],["Smoke Grenades",668]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"hostile"
];
//FOOD & DRINK
menu_RU_Farmwife5 = [
	[["Backpacks",632],["Clothes",631],["Cooked Meats",634],["Drinks",633],["Packaged Food",635]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"hostile"
];

/*---------------------------------------------------------------------------
			NEUTRAL VENDORS
---------------------------------------------------------------------------*/

//MEDICAL
menu_Doctor = [
	[["Chem-lites/Flares",666],["Medical Supplies",665],["Smoke Grenades",668]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"neutral"
];
//SUPPLIES
menu_RU_Worker4 = [
	[["Building Supplies",508],["Tools",510],["Vehicle Parts",509]],
	[],
	"neutral"
];
//WEAPONS
menu_Soldier_Sniper_KSVK_PMC = [
	[["Attachments",693],["Assault Rifle",485],["Light Machine Gun",486],["Pistols",489],["Shotguns and Single-shot",574],["Sniper Rifle",487],["Submachine Guns",488]],
	[],
	"neutral"
];
//AMMUNITION
menu_Soldier_GL_PMC = [
	[["Assault Rifle Ammo",480],["Light Machine Gun Ammo",481],["Pistol Ammo",484],["Shotguns and Single-shot Ammo",573],["Sniper Rifle Ammo",482],["Submachine Gun Ammo",483]],
	[],
	"neutral"
];
//FOOD & DRINK
menu_Citizen3 = [
	[["Backpacks",496],["Clothes",497],["Cooked Meats",580],["Drinks",498],["Packaged Food",579]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"neutral"
];


/*---------------------------------------------------------------------------
			NEUTRAL VEHICLE VENDORS
---------------------------------------------------------------------------*/

menu_GUE_Soldier_3 = [
	[["Bikes and ATV",608],["Buses and Vans",563],["Cargo Trucks",564],["Fuel Trucks",492],["Military Unarmed",491],["Trucks",495],["Used Cars",585],["Utility Vehicles",565]],
	[],
	"neutral"
];
menu_RU_Woodlander4 = [
	[["Bikes and ATV",587],["Buses and Vans",588],["Cargo Trucks",586],["Fuel Trucks",589],["Military Unarmed",598],["Trucks",590],["Used Cars",520],["Utility Vehicles",591]],
	[],
	"neutral"
];
menu_Worker4 = [
	[["Boats Armed",558],["Boats Unarmed",557]],
	[],
	"neutral"
];
menu_Profiteer2_EP1 = [
	[["Boats Armed",673],["Boats Unarmed",672]],
	[],
	"neutral"
];
menu_GUE_Soldier_Pilot = [
	[["Helicopter Unarmed",519],["Airplanes",517]],
	[],
	"neutral"
];
menu_UN_CDF_Soldier_Pilot_EP1 = [
	[["Helicopter Unarmed",519],["Airplanes",517]],
	[],
	"neutral"
];

/*---------------------------------------------------------------------------
			FRIENDLY VENDORS
---------------------------------------------------------------------------*/

//WEAPONS
menu_GUE_Commander = [
	[["Attachments",693],["Assault Rifle",637],["Light Machine Gun",638],["Pistols",674],["Shotguns and Single-shot",641],["Sniper Rifle",640],["Submachine Guns",642]],
	[],
	"friendly"
];
//AMMUNITION
menu_GUE_Soldier_CO = [
	[["Assault Rifle Ammo",643],["Light Machine Gun Ammo",644],["Pistol Ammo",646],["Shotguns and Single-shot Ammo",649],["Sniper Rifle Ammo",647],["Submachine Gun Ammo",648]],
	[],
	"friendly"
];
//HELICOPTERS
menu_GUE_Worker2 = [
	[["Helicopter Armed",493]],
	[],
	"friendly"
];

/*---------------------------------------------------------------------------
			WHOLESALE VENDORS
---------------------------------------------------------------------------*/

//EAST BRIDGE
menu_GUE_Soldier_2 = [
	[["Wholesale",675]],
	[],
	"neutral"
];
//WEST BRIDGE
menu_Reynolds_PMC = [
	[["Wholesale",636]],
	[],
	"neutral"
];