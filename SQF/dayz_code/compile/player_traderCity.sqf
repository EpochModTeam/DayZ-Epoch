private ["_traderName","_showText","_enterORleave"];
_traderName = _this select 0;
_showText = _this select 1;
_enterORleave = _this select 2;

switch _enterORleave do {
	case "enter": {
		if (_showText) then {
			cutText [format [localize "STR_EPOCH_TRADER_ENTER", _traderName], "PLAIN DOWN"];
		};
		canbuild = false;
		inTraderCity = _traderName;
		isInTraderCity = true;
	};

	case "leave": {
		if (_showText) then {
			cutText [format [localize "STR_EPOCH_TRADER_LEAVE", _traderName], "PLAIN DOWN"];
		};

		canbuild = true;
		inTraderCity = "Any";
		isInTraderCity = false;
	};
};