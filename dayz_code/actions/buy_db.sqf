private["_activatingPlayer","_trader_id","_category","_action","_id","_type","_loc","_name","_qty","_cost","_qty","_sell","_cur","_order","_tid","_currency","_actionFile","_in","_out","_part","_cat","_cancel","_Display","_File","_textCurrency","_textPart"];

{player removeAction _x} forEach s_player_parts;s_player_parts = [];

// [ _trader_id, _category, _action ];
_activatingPlayer = _this select 1;

_trader_id = (_this select 3) select 0;
_category = (_this select 3) select 1;

dayzTraderMenu = [_activatingPlayer,_trader_id,_category,_action];
publicVariable "dayzTraderMenu";
if (isServer) then {
	dayzTraderMenu call server_traders;
};

waitUntil {!isNil "dayzTraderMenuResult"};

//diag_log format["DEBUG Buy: %1", dayzTraderMenuResult];
{
	_id = parseNumber (_x select 0);
	_type = _x select 1;
	_loc = _x select 2;
	_name = _x select 3;
	_qty = parseNumber (_x select 4);
	_cost = parseNumber (_x select 5);
	_sell = parseNumber (_x select 6);
	_cur = _x select 7;
	_cat = _x select 8;
	_order = parseNumber (_x select 9);
	_tid = parseNumber (_x select 10);
	_currency = _x select 11;
	_actionFile = _x select 12;
	
	_textPart =	getText(configFile >> _type >> _name >> "displayName");
	
	_File = "\z\addons\dayz_code\actions\" + _actionFile + ".sqf";
	
	_part_out = _name;
	_part_in = _currency;
	_out = 1;
	_in = _cost;
	
	_textCurrency =	getText(configFile >> "CfgMagazines" >> _part_in >> "displayName");
	
	_Display = "Buy " +  _textPart + " for " + str(_cost) + " " + _textCurrency;	
	
	// trade_items.sqf | [part_out, part_in, qty_out, qty_in,];
	_part = player addAction [_Display, _File,[_part_out,_part_in,_out,_in], _order, true, true, "",""];
	//diag_log format["DEBUG TRADER: %1", _part];
	s_player_metals set [count s_player_metals,_part];
	
} forEach dayzTraderMenuResult;

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["medical"], 92, true, false, "",""];
s_player_metals set [count s_player_metals,_cancel];

// Clear Data maybe consider cacheing results
dayzTraderMenuResult = nil;
s_player_parts_crtl = 1;