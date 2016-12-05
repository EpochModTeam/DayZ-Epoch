//Trader ["Trader City Name",false,"enter"] - Trader City Name | Show Message | "enter" || "leave"
private ["_traderName","_showText","_enterORleave"];
_traderName = _this select 0;
_showText = _this select 1;
_enterORleave = _this select 2;

// Do not show cutText when player changes clothes in trader area
if ((dayz_lastClothesChange + 3 > diag_tickTime) or (player distance respawn_west_original < 100)) then {
	_showText = false;
};

switch _enterORleave do {
	case "enter": {
		if (_showText) then {
			format[localize "STR_EPOCH_TRADER_ENTER", _traderName] call dayz_rollingMessages;
		};
		canbuild = false;
		inTraderCity = _traderName;
		isInTraderCity = true;
	};

	case "leave": {
		if (_showText) then {
			format[localize "STR_EPOCH_TRADER_LEAVE", _traderName] call dayz_rollingMessages;
		};

		canbuild = true;
		inTraderCity = "Unknown Trader";
		isInTraderCity = false;
	};
};