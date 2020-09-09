// DayZ Epoch TRADERS for 17
serverTraders = ["FR_AC","GUE_Commander","GUE_Woodlander2","RU_Citizen4","Profiteer1","Rita_Ensler_EP1","Dr_Hladik_EP1","Worker2","TK_CIV_Worker01_EP1","CIV_EuroMan01_EP1","CIV_EuroMan02_EP1","RU_WorkWoman5","Doctor","Worker1","TK_CIV_Worker02_EP1","Rocker4","RU_Citizen3","RU_WorkWoman1","Dr_Annie_Baker_EP1","Worker3","RU_Pilot","RU_Villager3","HouseWife1","Profiteer2","Profiteer3","Functionary1_EP1_DZ"];

/***************Hero Vendor*********/
menu_FR_AC = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRVEHICLES",1],[localize "STR_EPOCH_TRADER_CATEGORY_GROUNDVEHICLES",2],[localize "STR_EPOCH_TRADER_CATEGORY_WEAPONS",3],[localize "STR_EPOCH_TRADER_CATEGORY_AMMUNITION",4],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",5]],
	[["","ItemDogTagBandit",1,1,150]],
	"hero"
];
if (Z_singleCurrency) then {(menu_FR_AC select 0) set [count (menu_FR_AC select 0), [localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]];};
/***************Bandit Vendor*********/
menu_GUE_Commander = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRVEHICLES",6],[localize "STR_EPOCH_TRADER_CATEGORY_GROUNDVEHICLES",7],[localize "STR_EPOCH_TRADER_CATEGORY_WEAPONS",8],[localize "STR_EPOCH_TRADER_CATEGORY_AMMUNITION",9],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",10]],
	[["","ItemDogTagHero",1,1,-150]],
	"hostile"
];
if (Z_singleCurrency) then {(menu_GUE_Commander select 0) set [count (menu_GUE_Commander select 0), [localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]];};
/************************************Lenzburg*************************************/
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
	[["ItemTinBar","TrashJackDaniels",1,1,0]],
	"neutral"
];

/***************Medical Supplies*********/
menu_Dr_Hladik_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_MEDICALSUPPLIES",33]],
	[["FoodBioMeat","ItemZombieParts",1,1,20]],
	"neutral"
];

/***************Building/Parts*********/
menu_Worker2 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_TOOLS",34],[localize "STR_EPOCH_TRADER_CATEGORY_BUILDINGSUPPLIES",35],[localize "STR_EPOCH_TRADER_CATEGORY_VEHICLEPARTS",36]],
	[],
	"neutral"
];
if (Z_singleCurrency) then {(menu_Worker2 select 0) set [count (menu_Worker2 select 0), [localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]];};
/***************Vehicles*********/
menu_TK_CIV_Worker01_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BIKESATVS",37],[localize "STR_EPOCH_TRADER_CATEGORY_CARS",38],[localize "STR_EPOCH_TRADER_CATEGORY_PICKUPS",39],[localize "STR_EPOCH_TRADER_CATEGORY_UAZS",40],[localize "STR_EPOCH_TRADER_CATEGORY_SUVS",41],[localize "STR_EPOCH_TRADER_CATEGORY_CARGOTRUCKS",42],[localize "STR_EPOCH_TRADER_CATEGORY_FUELTRUCKS",43],[localize "STR_EPOCH_TRADER_CATEGORY_MILITARYUNARMED",44],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",45]],
	[],
	"neutral"
];

/*****************************************************************************/
/************************************Emmen*************************************/
/***************Weapons*********/
menu_CIV_EuroMan01_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_ATTACHMENTS",12],[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLS",13],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNS",14],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOT",15],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLES",16],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLES",17],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNS",18]],
	[],
	"neutral"
];

/***************Ammunition*********/
menu_CIV_EuroMan02_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLAMMO",19],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNAMMO",20],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOTAMMO",21],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLEAMMO",22],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLEAMMO",23],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNAMMO",24],[localize "STR_EPOCH_TRADER_CATEGORY_SMOKEGRENADES",25],[localize "STR_EPOCH_TRADER_CATEGORY_FLARES",26]],
	[],
	"neutral"
];

/***************General Store*********/
menu_RU_WorkWoman5 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PACKAGEFOOD",27],[localize "STR_EPOCH_TRADER_CATEGORY_COOKMEAT",28],[localize "STR_EPOCH_TRADER_CATEGORY_DRINKS",29],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",30],[localize "STR_EPOCH_TRADER_CATEGORY_BACKPACKS",31],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",32]],
	[["ItemTinBar","TrashJackDaniels",1,1,0]],
	"neutral"
];

/***************Medical Supplies*********/
menu_Doctor = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_MEDICALSUPPLIES",33]],
	[["FoodBioMeat","ItemZombieParts",1,1,20]],
	"neutral"
];

/***************Building/Parts*********/
menu_Worker1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_TOOLS",34],[localize "STR_EPOCH_TRADER_CATEGORY_BUILDINGSUPPLIES",35],[localize "STR_EPOCH_TRADER_CATEGORY_VEHICLEPARTS",36]],
	[],
	"neutral"
];
if (Z_singleCurrency) then {(menu_Worker1 select 0) set [count (menu_Worker1 select 0), [localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]];};
/***************Vehicles*********/
menu_TK_CIV_Worker02_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BIKESATVS",37],[localize "STR_EPOCH_TRADER_CATEGORY_CARS",38],[localize "STR_EPOCH_TRADER_CATEGORY_PICKUPS",39],[localize "STR_EPOCH_TRADER_CATEGORY_UAZS",40],[localize "STR_EPOCH_TRADER_CATEGORY_SUVS",41],[localize "STR_EPOCH_TRADER_CATEGORY_CARGOTRUCKS",42],[localize "STR_EPOCH_TRADER_CATEGORY_FUELTRUCKS",43],[localize "STR_EPOCH_TRADER_CATEGORY_MILITARYUNARMED",44],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",45]],
	[],
	"neutral"
];
/*****************************************************************************/
/***********************************Schratten***********************************/
/***************Weapons*********/
menu_Rocker4 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_ATTACHMENTS",12],[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLS",13],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNS",14],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOT",15],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLES",16],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLES",17],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNS",18]],
	[],
	"friendly"
];

/***************Ammunition*********/
menu_RU_Citizen3 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PISTOLAMMO",19],[localize "STR_EPOCH_TRADER_CATEGORY_SUBMACHINEGUNAMMO",20],[localize "STR_EPOCH_TRADER_CATEGORY_SINGLESHOTAMMO",21],[localize "STR_EPOCH_TRADER_CATEGORY_ASSAULTRIFLEAMMO",22],[localize "STR_EPOCH_TRADER_CATEGORY_SNIPERRIFLEAMMO",23],[localize "STR_EPOCH_TRADER_CATEGORY_LIGHTMACHINEGUNAMMO",24],[localize "STR_EPOCH_TRADER_CATEGORY_SMOKEGRENADES",25],[localize "STR_EPOCH_TRADER_CATEGORY_FLARES",26]],
	[],
	"friendly"
];

/***************General Store*********/
menu_RU_WorkWoman1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_PACKAGEFOOD",27],[localize "STR_EPOCH_TRADER_CATEGORY_COOKMEAT",28],[localize "STR_EPOCH_TRADER_CATEGORY_DRINKS",29],[localize "STR_EPOCH_TRADER_CATEGORY_CLOTHES",30],[localize "STR_EPOCH_TRADER_CATEGORY_BACKPACKS",31],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",32]],
	[["ItemTinBar","TrashJackDaniels",1,1,0]],
	"friendly"
];

/***************Medical Supplies*********/
menu_Dr_Annie_Baker_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_MEDICALSUPPLIES",33]],
	[["FoodBioMeat","ItemZombieParts",1,1,20]],
	"friendly"
];

/***************Building/Parts*********/
menu_Worker3 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_TOOLS",34],[localize "STR_EPOCH_TRADER_CATEGORY_BUILDINGSUPPLIES",35],[localize "STR_EPOCH_TRADER_CATEGORY_VEHICLEPARTS",36]],
	[],
	"friendly"
];
if (Z_singleCurrency) then {(menu_Worker3 select 0) set [count (menu_Worker3 select 0), [localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]];};
/***************Vehicles*********/
menu_TK_CIV_Worker01_EP1 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BIKESATVS",37],[localize "STR_EPOCH_TRADER_CATEGORY_CARS",38],[localize "STR_EPOCH_TRADER_CATEGORY_PICKUPS",39],[localize "STR_EPOCH_TRADER_CATEGORY_UAZS",40],[localize "STR_EPOCH_TRADER_CATEGORY_SUVS",41],[localize "STR_EPOCH_TRADER_CATEGORY_CARGOTRUCKS",42],[localize "STR_EPOCH_TRADER_CATEGORY_FUELTRUCKS",43],[localize "STR_EPOCH_TRADER_CATEGORY_MILITARYUNARMED",44],[localize "STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS",45]],
	[],
	"friendly"
];
/*****************************************************************************/
/***************Aircraft Dealer*********/
menu_RU_Pilot = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_AIRPLANES",46],[localize "STR_EPOCH_TRADER_CATEGORY_HELICOPTER",47]],
	[],
	"neutral"
];

/***************Boat Vendor*********/
menu_RU_Villager3 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_BOATSARMED",48],[localize "STR_EPOCH_TRADER_CATEGORY_BOATSUNARMED",49]],
	[],
	"neutral"
];

/***************Boat Vendor*********/
menu_HouseWife1 = [
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

/***************Wholesaler*********/
menu_Profiteer3 = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_WHOLESALE",50]],
	[],
	"neutral"
];

/***************Banker*********/
menu_Functionary1_EP1_DZ = [
	[[localize "STR_EPOCH_TRADER_CATEGORY_CURRENCY",51]],
    [],
    "neutral"
];
