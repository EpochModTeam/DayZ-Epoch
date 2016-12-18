#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\z\addons\dayz_code\actions\AdvancedTrading\functions\sub_path)
#define CPP compile preprocessFileLineNumbers

disableSerialization;

Z_traderData = (_this select 3); // gets the trader data ( e.g menu_Functionary1 )

if (isNil "Z_traderData" or {count Z_traderData == 0}) exitWith {
	localize "STR_EPOCH_TRADE_ERROR" call dayz_rollingMessages;
};

if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };

if (isNil "Z_AdvancedTradingInit") then {

	#include "\z\addons\dayz_code\actions\AdvancedTrading\functions\defines.hpp"

	/* Configs that needs to be defined but not changed in config file */

	Z_Selling = true;
	Z_OriginalSellableArray = [];
	Z_SellableArray = [];
	Z_SellArray = [];
	Z_OriginalBuyableArray = [];
	Z_BuyableArray = [];
	Z_BuyingArray = [];

	/* end script config */

	Z_fillTradeTitle = 				CPP PATH(z_at_fillTradeTitle.sqf);
	Z_clearLists =					CPP PATH(z_at_clearLists.sqf);
	Z_clearSellableList =			CPP PATH(z_at_clearSellableList.sqf);
	Z_clearBuyList = 				CPP PATH(z_at_clearBuyList.sqf);
	Z_clearBuyingList = 			CPP PATH(z_at_clearBuyingList.sqf);
	Z_fillCategories = 				CPP PATH(z_at_fillCategories.sqf);
	Z_getItemInfo =					CPP PATH(z_at_getItemInfo.sqf);
	Z_getItemConfig =				CPP PATH(z_at_getItemConfig.sqf);
	Z_displayItemInfo = 			CPP PATH(z_at_displayItemInfo.sqf);
	Z_displayWeaponInfo = 			CPP PATH(z_at_displayWeaponInfo.sqf);
	Z_displayBackpackInfo = 		CPP PATH(z_at_displayBackpackInfo.sqf);
	Z_displayVehicleInfo = 			CPP PATH(z_at_displayVehicleInfo.sqf);
	Z_getContainer = 				CPP PATH(z_at_getContainer.sqf);
	Z_getBackpackItems = 			CPP PATH(z_at_getBackpackItems.sqf);
	Z_getVehicleItems = 			CPP PATH(z_at_getVehicleItems.sqf);
	Z_getGearItems = 				CPP PATH(z_at_getGearItems.sqf);
	Z_logTrade = 					CPP PATH(z_at_logTrade.sqf);
	Z_filterList =					CPP PATH(z_at_filterList.sqf);
	Z_checkArrayInConfig = 			CPP PATH(z_at_checkArrayInConfig.sqf);
	Z_calcPrice = 					CPP PATH(z_at_calcPrice.sqf);
	Z_fillCategoryList =			CPP PATH(z_at_fillCategoryList.sqf);
	Z_fillSellList = 				CPP PATH(z_at_fillSellList.sqf);
	Z_fillSellingList = 			CPP PATH(z_at_fillSellingList.sqf);
	Z_pushItemToList = 				CPP PATH(z_at_pushItemToList.sqf);
	Z_removeItemFromList = 			CPP PATH(z_at_removeItemFromList.sqf);
	Z_pushAllToList = 				CPP PATH(z_at_pushAllToList.sqf);
	Z_removeAllToList = 			CPP PATH(z_at_removeAllToList.sqf);
	Z_SellItems = 					CPP PATH(z_at_sellItems.sqf);
	Z_BuyItems = 					CPP PATH(z_at_buyItems.sqf);
	Z_ChangeBuySell = 				CPP PATH(z_at_changeBuySell.sqf);
	Z_removeAllFromBuyingList = 	CPP PATH(z_at_removeAllFromBuyingList.sqf);
	Z_removeItemFromBuyingList =	CPP PATH(z_at_removeItemFromBuyingList.sqf);
	Z_toBuyingList =				CPP PATH(z_at_toBuyingList.sqf);
	Z_calcBuyableList = 			CPP PATH(z_at_calcBuyableList.sqf);
	Z_fillBuyableList = 			CPP PATH(z_at_fillBuyableList.sqf);
	Z_fillBuyingList = 				CPP PATH(z_at_fillBuyingList.sqf);
	Z_displayFreeSpace = 			CPP PATH(z_at_displayFreeSpace.sqf);
	Z_allowBuying =  				CPP PATH(z_at_allowBuying.sqf);
	DZE_deleteTradedVehicle =		CPP PATH(DZE_deleteTradedVehicle.sqf);

	Z_AdvancedTradingInit = true;
};

Z_Selling = true; // Always start menu in buy mode (flipped in z_at_changeBuySell.sqf on startup)
Z_CategoryView = true; // Always start in category view
Z_BuyingArray = [];
Z_ResetContainer = true;
createDialog "AdvancedTrading";

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_REMOVESELLITEMBUTTON) ctrlSetText " < ";
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_REMOVEALLSELLITEMBUTTON) ctrlSetText " << ";
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_REMOVEBUYITEMBUTTON) ctrlSetText " < ";
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_REMOVEALLBUYITEMBUTTON) ctrlSetText " << ";
(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_DETAILSTEXT) ctrlSetText "   " + localize "STR_EPOCH_TRADE_DETAILS";

call Z_ChangeBuySell;
false call Z_checkCloseVehicle; // set up vehicle for removing currency from it, otherwise you need to click vehicle before currency will be removed.
