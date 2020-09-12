if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };

#include "\z\addons\dayz_code\actions\AdvancedTrading\functions\defines.hpp"

disableSerialization;

Z_traderData = (_this select 3); // gets the trader data ( e.g menu_Functionary1 )

if (isNil "Z_traderData" or {count Z_traderData == 0}) exitWith {
	localize "STR_EPOCH_TRADE_ERROR" call dayz_rollingMessages;
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
