local _player = _this select 0;
local _traderID = _this select 1;
local _buyorsell = _this select 2;	//0 > Buy // 1 > Sell
local _classname = _this select 3;
local _traderCity = _this select 4;
local _currency = _this select 5;
local _price = _this select 6;

local _message = "";
local _playerUID = getPlayerUID _player;
local _name = if (alive _player) then {name _player} else {"Dead Player"};
local _quantity = 1;
local _container = "gear";

if (count _this > 7) then {
	_quantity = _this select 7;
	_container = _this select 8;	
};

local _checkItems = true; //	Activate this to log all items within the '_watchClasses'. Specify the quantity with '_watchNumber' when the sold items will be logged.

if (_checkItems) then {
	local _watchClasses = ["ItemBriefcase40oz","ItemBriefcase50oz","ItemBriefcase60oz","ItemBriefcase70oz","ItemBriefcase80oz","ItemBriefcase90oz","ItemBriefcase100oz","ItemTopaz","ItemObsidian","ItemSapphire","ItemAmethyst","ItemEmerald","ItemCitrine","ItemRuby"]; // Items to be logged
	local _watchNumber = 4; // Minimum number of quantity before logging occurs

	if (_quantity >= _watchNumber && {_className in _watchClasses} && {_buyOrSell == 1}) then {
		_message = format ["%1 (%2) could be duping! Selling %3x %4",_name,_playerUID,_quantity,_className];
		diag_log _message;
	};
};	

if (typeName _currency  == "STRING") then {_price = format ["%1 %2",_price,_currency];};

if (_buyorsell == 0) then { // Buy
	_message = format["Trader Menu: %1 (%2) purchased %3x %4 into %5 at %6 for %7",_name,_playerUID,_quantity,_classname,_container,_traderCity,_price];
} else { // Sell
	_message = format["Trader Menu: %1 (%2) sold %3x %4 from %5 at %6 for %7",_name,_playerUID,_quantity,_classname,_container,_traderCity,_price];
};

diag_log _message;