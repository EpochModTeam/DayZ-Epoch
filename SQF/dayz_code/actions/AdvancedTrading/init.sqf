disableSerialization;

Z_traderData = (_this select 3); // gets the trader data ( e.g menu_Functionary1 )

if (isNil "Z_traderData" || count (Z_traderData) == 0) exitWith {
	localize "STR_EPOCH_TRADE_ERROR" call dayz_rollingMessages;
};

if (DZE_ActionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };

if (isNil "Z_AdvancedTradingInit") then {

	//#include "config.sqf"; // Moved to dayz_code/configVariables.sqf
	#include "\z\addons\dayz_code\actions\AdvancedTrading\functions\defines.hpp"

	/* Configs that needs to be defined but not changed in config file */

	_tempGemList = [];
	_tempWorthList = [];
	DZE_GemList = [];
	DZE_GemWorthList = [];
	{
		_tempGemList set [(count _tempGemList), (_x select 0)];
		_tempWorthList set [(count _tempWorthList), (_x select 1)];
	} count DZE_GemWorthArray;

	//sort the array
	for "_i" from 0 to ((count _tempGemList) - 1) do {
		_largest = _tempWorthList call BIS_fnc_greatestNum;
		_LargestGem = _tempGemList select (_tempWorthList find _largest);
		_tempWorthList = _tempWorthList - [_largest];
		_tempGemList = _tempGemList - [_LargestGem];
		DZE_GemList set [(count DZE_GemList), _LargestGem];
		DZE_GemWorthList set [(count DZE_GemWorthList), _largest];
	};

	Z_Selling = true;
	Z_SellingFrom = 2;
	Z_vehicle = objNull;
	Z_OriginalSellableArray = [];
	Z_SellableArray = [];
	Z_SellArray = [];
	Z_OriginalBuyableArray = [];
	Z_BuyableArray = [];
	Z_BuyingArray = [];

	if (isNil 'CurrencyName' && Z_SingleCurrency) then {
		CurrencyName = 'Coins'; // fallback
	};
	if (!Z_SingleCurrency) then {
		CurrencyName = '';
	};

	/* end script config */

	ZUPA_fnc_removeWeaponsAndMagazinesCargo = 	compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\zupa_fnc_removeWeaponsAndMagazinesCargo.sqf");

	Z_filleTradeTitle = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_filleTradeTitle.sqf");
	Z_clearLists =								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_clearLists.sqf");
	Z_clearSellableList =						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_clearSellableList.sqf");
	Z_clearBuyList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_clearBuyList.sqf");
	Z_clearBuyingList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_clearBuyingList.sqf");
	Z_fillCategories = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillCategories.sqf");
	Z_getItemInfo =								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getItemInfo.sqf");
	Z_getItemConfig =							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getItemConfig.sqf");
	Z_displayItemInfo = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_displayItemInfo.sqf");
	Z_displayWeaponInfo = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_displayWeaponInfo.sqf");
	Z_displayBackpackInfo = 					compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_displayBackpackInfo.sqf");
	Z_displayVehicleInfo = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_displayVehicleInfo.sqf");
	Z_getContainer = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getContainer.sqf");
	Z_getBackpackItems = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getBackpackItems.sqf");
	Z_getVehicleItems = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getVehicleItems.sqf");
	Z_getGearItems = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_getGearItems.sqf");
	Z_logTrade = 								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_logTrade.sqf");
	Z_filterList =								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_filterList.sqf");
	Z_checkArrayInConfig = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_checkArrayInConfig.sqf");
	Z_calcPrice = 								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcPrice.sqf");
	Z_fillCategoryList =						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillCategoryList.sqf");
	Z_fillSellList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillSellList.sqf");
	Z_fillSellingList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillSellingList.sqf");
	Z_pushItemToList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_pushItemToList.sqf");
	Z_removeItemFromList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_removeItemFromList.sqf");
	Z_pushAllToList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_pushAllToList.sqf");
	Z_removeAllToList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_removeAllToList.sqf");
	Z_SellItems = 								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_sellItems.sqf");
	Z_BuyItems = 								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_buyItems.sqf");
	Z_ChangeBuySell = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_changeBuySell.sqf");
	Z_removeAllFromBuyingList = 				compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_removeAllFromBuyingList.sqf");
	Z_removeItemFromBuyingList = 				compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_removeItemFromBuyingList.sqf");
	Z_toBuyingList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_toBuyingList.sqf");
	Z_calcBuyableList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcBuyableList.sqf");
	Z_fillBuyableList = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillBuyableList.sqf");
	Z_fillBuyingList = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_fillBuyingList.sqf");
	Z_calcFreeSpace = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcFreeSpace.sqf");
	Z_displayFreeSpace = 						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_displayFreeSpace.sqf");
	Z_checkCloseVehicle =  						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_checkCloseVehicle.sqf");
	Z_allowBuying =  							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_allowBuying.sqf");
	Z_canAfford =  								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_canAfford.sqf");
	Z_returnChange =  							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_returnChange.sqf");
	Z_payDefault =  							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_payDefault.sqf");
	Z_calcDefaultCurrency =						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcDefaultCurrency.sqf");
	z_calcDefaultCurrencyNoImg  =				compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcDefaultCurrencyNoImg.sqf");
	DZE_deleteTradedVehicle =					compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\DZE_deleteTradedVehicle.sqf");

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
