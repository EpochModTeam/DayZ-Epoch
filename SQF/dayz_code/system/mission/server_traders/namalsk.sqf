// DayZ Epoch TRADERS for 15

serverTraders = ["FR_AC","GUE_Commander","GUE_Woodlander2","RU_Citizen4","Profiteer1","Rita_Ensler_EP1","Dr_Hladik_EP1","Worker2","TK_CIV_Worker01_EP1","RU_Pilot","RU_Villager3","Profiteer2"];

/***************Hero Vendor*********/
menu_FR_AC = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRVEHICLES",1],[localize "STR_EPOCH_TRADER_CATEGORY_GROUNDVEHICLES",2],[localize "STR_EPOCH_TRADER_CATEGORY_WEAPONS",3],[localize "STR_EPOCH_TRADER_CATEGORY_AMMUNITION",4],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",5]],
	[],
	"hero"
];
/***************Bandit Vendor*********/
menu_GUE_Commander = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRVEHICLES",6],[localize "STR_EPOCH_TRADER_CATEGORY_GROUNDVEHICLES",7],[localize "STR_EPOCH_TRADER_CATEGORY_WEAPONS",8],[localize "STR_EPOCH_TRADER_CATEGORY_AMMUNITION",9],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",10]],
	[],
	"hostile"
];
/************************************Sebjan*************************************/
/***************Black Market*********/
menu_GUE_Woodlander2 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BLACKMARKET",11]],
	[],
	"neutral"
];

/***************Weapons*********/
menu_RU_Citizen4 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_ATTACHMENTS",12],[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLS",13],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNS",14],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOT",15],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLES",16],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLES",17],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNS",18]],
	[],
	"neutral"
];

/***************Ammunition*********/
menu_Profiteer1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLAMMO",19],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNAMMO",20],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOTAMMO",21],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLEAMMO",22],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLEAMMO",23],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNAMMO",24],[localize "STR_EPOCH_TRADER_CATEGORY_SMOKEGRENADES",25],[localize "STR_EPOCH_TRADER_CATEGORY_FLARES",26]],
	[],
	"neutral"
];

/***************General Store*********/
menu_Rita_Ensler_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PACKAGEFOOD",27],[localize "STR_EPOCH_TRADER_CATEGORY_COOKMEAT",28],[localize "STR_EPOCH_TRADER_CATEGORY_DRINKS",29],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",30],[localize "STR_EPOCH_TRADER_CATEGORY_BACKPACKS",31],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",32]],
	[["ItemTinBar","TrashJackDaniels",1,1]],
	"neutral"
];

/***************Medical Supplies*********/
menu_Dr_Hladik_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_MEDICALSUPPLIES",33]],
	[["FoodBioMeat","ItemZombieParts",1,1]],
	"neutral"
];

/***************Building/Parts*********/
menu_Worker2 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_TOOLS",34],[localize "STR_EPOCH_TRADER_CATEGORY_BUILDINGSUPPLIES",35],[localize "STR_EPOCH_TRADER_CATEGORY_VEHICLEPARTS",36]],
	[],
	"neutral"
];

/***************Vehicles*********/
menu_TK_CIV_Worker01_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BIKESATVS",37],[localize "STR_EPOCH_TRADER_CATEGORY_CARS",38],[localize "STR_EPOCH_TRADER_CATEGORY_PICKUPS",39],[localize "STR_EPOCH_TRADER_CATEGORY_UAZS",40],[localize "STR_EPOCH_TRADER_CATEGORY_SUVS",41],[localize "STR_EPOCH_TRADER_CATEGORY_CARGOTRUCKS",42],[localize "STR_EPOCH_TRADER_CATEGORY_FUELTRUCKS",43],[localize "STR_EPOCH_TRADER_CATEGORY_MILITARYUNARMED",44],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",45]],
	[],
	"neutral"
];
/***************Aircraft Dealer*********/
menu_RU_Pilot = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRPLANES",46],[localize "STR_EPOCH_TRADER_CATEGORY_HELICOPTER",47]],
	[],
	"neutral"
];
/*****************************************************************************/
/***************Boat Vendor*********/
menu_RU_Villager3 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BOATSARMED",48],[localize "STR_EPOCH_TRADER_CATEGORY_BOATSUNARMED",49]],
	[],
	"neutral"
];

/***************Wholesaler*********/
menu_Profiteer2 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_WHOLESALE",50]],
	[],
	"neutral"
];