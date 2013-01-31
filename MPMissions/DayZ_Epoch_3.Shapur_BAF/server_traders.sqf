// DayZ Epoch TRADERS
serverTraders = [
	"Policeman",
	"CIV_EuroMan01_EP1",
	"Profiteer4",
	"Functionary1",
	"CIV_EuroMan02_EP1",
	"RU_Pilot",
	"RU_WorkWoman5",
	"Dr_Hladik_EP1",
	"RU_Profiteer3",
	"Citizen3_EP1"
];

// Weapons Traders
menu_Policeman = [
	[["Sidearm",30011],["Rifle",30012],["Shotgun",30013],["Assault Rifle",1414],["Machine Gun",1515],["Sniper Rifle",1616]],
	[],
	"neutral"
];

// Parts Traders
menu_CIV_EuroMan01_EP1 = [
	[["Car Parts",30021],["Building Supplies",30022],["Explosives",30023]],
	[],
	"neutral"
];


// Can Traders
menu_Profiteer4 = [
	[["Food and Drinks",30051],["Backpacks",30052],["Toolbelt",30053],["Clothes",30054]],
	[
		["ItemCopperBar","ItemSodaEmpty",1,3,"buy","Empty Soda Cans","Copper Bar",103],
		["ItemCopperBar","TrashTinCan",1,3,"buy","Empty Tin Cans","Copper Bar",102],
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"neutral"
];

// Ammo Traders
menu_Functionary1 = [
	[["Sidearm Ammo",30001],["Rifle Ammo",30002],["Shotgun and Crossbow Ammo",30003],["Assault Rifle Ammo",4004],["Machine Gun Ammo",5005],["Sniper Rifle Ammo",6006]],
	[],
	"neutral"
];

// Auto Traders
menu_CIV_EuroMan02_EP1 = [
	[["Cars",30041],["Trucks Unarmed",30042],["SUV",30466],["Buses and Vans",30467],["Offroad",30043],["Helicopter Unarmed",30044],["Military Unarmed",30045]],
	[],
	"neutral"
];
menu_RU_Pilot = [
	[["Trucks Armed",30422],["Utility",30046],["Helicopter Armed",30444],["Military Armed",30455],["Fuel Trucks",30047],["Heavy Armor Unarmed",30048]],
	[],
	"neutral"
];

// Doctors
menu_Dr_Hladik_EP1 = [
	[["Medical Supplies",30031],["Chem-lites/Flares",30032],["Smoke Grenades",30033]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"neutral"
];

// Metals Traders
menu_RU_Profiteer3 = [
	[["Vaults",30411]],
	[ 
		["ItemSilverBar","ItemCopperBar",1,6,"buy","Copper","Silver",103],
		["ItemCopperBar","ItemSilverBar",6,1,"buy","Silver","Copper",102],
		["ItemGoldBar","ItemSilverBar",1,6,"buy","Silver","Gold",101],
		["ItemSilverBar","ItemGoldBar",6,1,"buy","Gold","Silver",100]
	],
	"neutral"
];

// Boat Traders
menu_Citizen3_EP1 = [
	[["Boats Unarmed",30049],["Boats Armed",30499]], 
	[
		["ItemJerrycanEmpty","ItemCopperBar",1,1,"buy","Copper Bar","Empty Jerrycan",101],
		["ItemGenerator","ItemGoldBar",1,3,"buy","Gold Bars","Portable Generator",100]
	],
	"neutral"
];

// ["friendly"] must have more than -2000 humanity,
// ["neutral"] can have any ammount of humanity
// ["hostile"] must have lower than -2000
