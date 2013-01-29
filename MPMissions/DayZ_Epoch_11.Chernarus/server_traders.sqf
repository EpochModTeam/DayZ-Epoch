// DayZ Epoch TRADERS
serverTraders = [
	"TK_CIV_Takistani04_EP1",
	"CIV_EuroMan01_EP1",
	"Rocker4",
	"Woodlander3",
	"Woodlander1",
	"RU_WorkWoman1",
	"RU_WorkWoman5",
	"CIV_EuroMan02_EP1",
	"RU_Citizen3",
	"Worker3",
	"Profiteer4",
	"Dr_Hladik_EP1",
	"Doctor",
	"RU_Functionary1",
	"RU_Villager3"
];

// Weapons Traders
menu_CIV_EuroMan01_EP1 = [
	[["Sidearm",11],["Rifle",12],["Shotgun",13],["Assault Rifle",14],["Machine Gun",15],["Sniper Rifle",16]],
	[],
	"friendly"
];
menu_Rocker4 = [
	[["Sidearm",1111],["Rifle",1212],["Shotgun",1313],["Assault Rifle",1414],["Machine Gun",1515],["Sniper Rifle",1616]],
	[],
	"friendly"
];

// Parts Traders
menu_Woodlander3 = [
	[["Car Parts",21],["Building Supplies",22]],
	[],
	"friendly"
];
menu_Woodlander1 = [
	[["Car Parts",2121],["Building Supplies",2222]],
	[],
	"friendly"
];

// Can Traders
menu_RU_WorkWoman1 = [
	[["Food and Drinks",51],["Backpacks",52],["Toolbelt",53],["Clothes",54]],
	[
		["ItemCopperBar","ItemSodaEmpty",1,3,"buy","Empty Soda Cans","Copper Bar",103],
		["ItemCopperBar","TrashTinCan",1,3,"buy","Empty Tin Cans","Copper Bar",102],
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"friendly"
];
menu_RU_WorkWoman5 = [
	[["Food and Drinks",5151],["Backpacks",5252],["Toolbelt",5353],["Clothes",5454]],
	[
		["ItemCopperBar","ItemSodaEmpty",1,3,"buy","Empty Soda Cans","Copper Bar",103],
		["ItemCopperBar","TrashTinCan",1,3,"buy","Empty Tin Cans","Copper Bar",102],
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"friendly"
];
// Ammo Traders
menu_CIV_EuroMan02_EP1 = [
	[["Sidearm Ammo",1],["Rifle Ammo",2],["Shotgun and Crossbow Ammo",3],["Assault Rifle Ammo",4],["Machine Gun Ammo",5],["Sniper Rifle Ammo",6]],
	[],
	"friendly"
];
menu_RU_Citizen3 = [
	[["Sidearm Ammo",1001],["Rifle Ammo",2002],["Shotgun and Crossbow Ammo",3003],["Assault Rifle Ammo",4004],["Machine Gun Ammo",5005],["Sniper Rifle Ammo",6006]],
	[],
	"friendly"
];
// Auto Traders
menu_Worker3 = [
	[["Cars",41],["Trucks Unarmed",42],["SUV",466],["Buses and Vans",467],["Offroad",43],["Helicopter Unarmed",44],["Military Unarmed",45]],
	[],
	"friendly"
];
menu_Profiteer4 = [
	[["Trucks Armed",422],["Utility",46],["Helicopter Armed",444],["Military Armed",455],["Fuel Trucks",47],["Heavy Armor Unarmed",48]],
	[],
	"friendly"
];

// Doctors
menu_Dr_Hladik_EP1 = [
	[["Medical Supplies",31],["Chem-lites/Flares",32],["Smoke Grenades",33]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"friendly"
];
menu_Doctor = [
	[["Medical Supplies",3131],["Chem-lites/Flares",3232],["Smoke Grenades",3333]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"friendly"
];

// Metals Traders
menu_RU_Functionary1 = [
	[["Vaults",411]],
	[
		["ItemSilverBar","ItemCopperBar",1,6,"buy","Copper","Silver",99],
		["ItemCopperBar","ItemSilverBar",6,1,"buy","Silver","Copper",98],
		["ItemGoldBar","ItemSilverBar",1,6,"buy","Silver","Gold",97],
		["ItemSilverBar","ItemGoldBar",6,1,"buy","Gold","Silver",96]
	],
	"neutral"
];

// Boat Traders
menu_RU_Villager3 = [
	[["Boats Unarmed",49],["Boats Armed",499]], 
	[
		["ItemJerrycanEmpty","ItemCopperBar",1,1,"buy","Copper Bar","Empty Jerrycan",101],
		["ItemGenerator","ItemGoldBar",1,3,"buy","Gold Bars","Portable Generator",100]
	],
	"neutral"
];

menu_TK_CIV_Takistani04_EP1 = [
	[["Explosives",23]], 
	[],
	"neutral"
];

// ["friendly"] must have more than -2000 humanity,
// ["neutral"] can have any ammount of humanity
// ["hostile"] must have lower than -2000
// OLD ["Wholesale",999]

