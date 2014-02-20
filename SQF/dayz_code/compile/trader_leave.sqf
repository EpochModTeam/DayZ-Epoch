private ["_traderName","_showText"];
_traderName = _this select 0;
_showText = _this select 1;

if (_showText) then {
	cutText [format [localize "STR_EPOCH_TRADER_LEAVE", _traderName], "PLAIN DOWN"];
};

if (DZE_ForceNameTagsInTrader) then {
	player setVariable["DZE_display_name", (player getVariable "DZE_display_name_old"), true];
};

canbuild = true;
inTraderCity = "Any";