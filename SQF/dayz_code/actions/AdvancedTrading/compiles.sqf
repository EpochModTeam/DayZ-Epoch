#define STRINGIFY(x) #x
#define PATH(sub_path) STRINGIFY(\z\addons\dayz_code\actions\AdvancedTrading\functions\sub_path)
#define CPP compile preprocessFileLineNumbers

private ["_tempGemList","_tempWorthList","_largest","_LargestGem"];

Z_SellingFrom = 2;
DZE_GemList = [];
DZE_GemWorthList = [];
Z_Selling = true;
Z_OriginalSellableArray = [];
Z_SellableArray = [];
Z_SellArray = [];
Z_OriginalBuyableArray = [];
Z_BuyableArray = [];
Z_BuyingArray = [];

_tempGemList = [];
_tempWorthList = [];

{
	_tempGemList set [(count _tempGemList), (_x select 0)];
	_tempWorthList set [(count _tempWorthList), (_x select 1)];
} count DZE_GemWorthArray;

for "_i" from 0 to ((count _tempGemList) - 1) do {
	_largest = -1e9;
	
	{
		_largest = _largest max _x;
	} forEach _tempWorthList;
	
	_LargestGem = _tempGemList select (_tempWorthList find _largest);
	_tempWorthList = _tempWorthList - [_largest];
	_tempGemList = _tempGemList - [_LargestGem];
	DZE_GemList set [(count DZE_GemList), _LargestGem];
	DZE_GemWorthList set [(count DZE_GemWorthList), _largest];
};

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
Z_checkCloseVehicle =  			CPP PATH(z_at_checkCloseVehicle.sqf);
Z_canAfford =  					CPP PATH(z_at_canAfford.sqf);
Z_calcFreeSpace = 				CPP PATH(z_at_calcFreeSpace.sqf);
Z_returnChange =  				CPP PATH(z_at_returnChange.sqf);
Z_payDefault =  				CPP PATH(z_at_payDefault.sqf);
z_calcCurrency =				CPP PATH(z_at_calcCurrency.sqf);
ZUPA_fnc_removeWeaponsAndMagazinesCargo = CPP PATH(zupa_fnc_removeWeaponsAndMagazinesCargo.sqf);
