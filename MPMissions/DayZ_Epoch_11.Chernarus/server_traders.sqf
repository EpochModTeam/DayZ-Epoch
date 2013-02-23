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
	"RU_Villager3",
	"RU_Citizen4",
	"RU_Citizen1",
	"Pilot_EP1",
	"Rita_Ensler_EP1"
];

// Weapons Traders
menu_CIV_EuroMan01_EP1 = [
	[["Sidearm",11],["Rifles",12],["Shotguns and Crossbows",13]],
	[],
	"friendly"
];
menu_Rocker4 = [
	[["Sidearm",1111],["Rifles",1212],["Shotguns and Crossbows",1313]],
	[],
	"friendly"
];

// Parts Traders
menu_Woodlander3 = [
	[["Vehicle Parts",21],["Building Supplies",22]],
	[],
	"friendly"
];
menu_Woodlander1 = [
	[["Vehicle Parts",2121],["Building Supplies",2222]],
	[],
	"friendly"
];

// Can Traders
menu_RU_WorkWoman1 = [
	[["Food and Drinks",51],["Backpacks",52],["Toolbelt Items",53],["Clothes",54]],
	[
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"friendly"
];
menu_RU_WorkWoman5 = [
	[["Food and Drinks",5151],["Backpacks",5252],["Toolbelt Items",5353],["Clothes",5454]],
	[
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"friendly"
];
menu_Rita_Ensler_EP1 = [
	[["Food and Drinks",515151],["Backpacks",525252],["Toolbelt Items",535353],["Clothes",545454]],
	[
		["ItemCopperBar","TrashJackDaniels",1,1,"buy","Empty Wiskey Bottle","Copper Bar",101]
	],
	"friendly"
];

// Ammo Traders
menu_CIV_EuroMan02_EP1 = [
	[["Sidearm Ammo",1],["Rifle Ammo",2],["Shotgun and Crossbow Ammo",3]],
	[],
	"friendly"
];
menu_RU_Citizen3 = [
	[["Sidearm Ammo",1001],["Rifle Ammo",2002],["Shotgun and Crossbow Ammo",3003]],
	[],
	"friendly"
];
// ,["Assault Rifle Ammo",4004],["Machine Gun Ammo",5005],["Sniper Rifle Ammo",6006]
menu_Pilot_EP1 = [
	[["Assault Rifle Ammo",4],["Machine Gun Ammo",5],["Sniper Rifle Ammo",6]],
	[],
	"neutral"
];
// Auto Traders
menu_Worker3 = [
	[["Cars",41],["Trucks Unarmed",42],["SUV",466],["Buses and Vans",467],["Bikes and ATV",43],["Helicopter Unarmed",44],["Military Unarmed",45]],
	[],
	"friendly"
];
menu_Profiteer4 = [
	[["Trucks Armed",422],["UAZ",46],["Helicopter Armed",444],["Military Armed",455],["Fuel Trucks",47],["Heavy Armor Unarmed",48]],
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
	[["Clothes",411]],
	[],
	"hero"
];

// Boat Traders
menu_RU_Villager3 = [
	[["Boats Unarmed",49],["Boats Armed",499],["Wholesale",99]], 
	[],
	"neutral"
];

menu_TK_CIV_Takistani04_EP1 = [
	[["Assault Rifle",14],["Machine Gun",15],["Sniper Rifle",16],["Explosives",23]], 
	[],
	"neutral"
];

menu_RU_Citizen4 = [
	[["Wholesale",999]],
	[],
	"neutral"
];
menu_RU_Citizen1 = [
	[["Wholesale",9999]], 
	[],
	"neutral"
];
// Unused
// ["ItemOilBarrel","ItemGoldBar",1,3,"buy","Gold Bars","Oil Barrel",100]
// ["friendly"] must have more than -2000 humanity,
// ["neutral"] can have any ammount of humanity
// ["hostile"] must have lower than -2000
// OLD ["Wholesale",999]

