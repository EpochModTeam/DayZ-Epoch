//Trader ["Trader City Name",false,"enter"] - Trader City Name | Show Message | "enter" || "leave"
private ["_traderName","_showText","_enterORleave"];
_traderName = _this select 0;
_showText = _this select 1;
_enterORleave = _this select 2;

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
		inTraderCity = "Any";
		isInTraderCity = false;
	};
};