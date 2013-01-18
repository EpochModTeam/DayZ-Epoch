private["_activatingPlayer","_trader_id","_category","_action","_id","_type","_loc","_name","_qty","_cost","_qty","_sell","_cur","_order","_tid","_currency","_actionFile","_in","_out","_part","_cat","_cancel","_Display","_File","_textCurrency","_textPart"];

{player removeAction _x} forEach s_player_parts;s_player_parts = [];

// [ _trader_id, _category, _action ];
_activatingPlayer = _this select 1;

_trader_id = (_this select 3) select 0;
_category = (_this select 3) select 1;

diag_log format["DEBUG TRADER OBJ: %1", _trader_id];

["dayzTraderMenu",[_activatingPlayer,_trader_id,_category,_action]] call callRpcProcedure;

waitUntil {!isNil "dayzTraderMenuResult"};

/*
	`item` varchar(255) NOT NULL COMMENT '[Class Name,1 = CfgMagazines | 2 = Vehicle | 3 = Weapon]',
	`qty` int(8) NOT NULL COMMENT 'amount in stock available to buy',
	`buy`  varchar(255) NOT NULL COMMENT '[[Qty,Class,Type],]',
	`sell`  varchar(255) NOT NULL COMMENT '[[Qty,Class,Type],]',
	`order` int(2) NOT NULL DEFAULT '0' COMMENT '# sort order for addAction menu',
	`tid` int(8) NOT NULL COMMENT 'Trader Menu ID',
	`afile` varchar(64) NOT NULL DEFAULT 'trade_items',
*/

diag_log format["DEBUG Buy: %1", dayzTraderMenuResult];
{
	_header = _x select 0; // "TRD"
	
	// Trader Item name|type
	_item = _x select 1;
	_name = _item select 0;
	_type = _item select 1;
	switch(true)do{ 
		case (_type == 1): { 
			_type = "CfgMagazines";
		}; 
		case (_type == 2): { 
			_type = "CfgVehicles";
		}; 
		case (_type == 3): { 
			_type = "CfgWeapons";
		}; 
	}; 
	// Display Name of item
	_textPart =	getText(configFile >> _type >> _name >> "displayName");
	
	// Total in stock
	_qty = _x select 2;
	
	// Buy Data from array
	_buy = _x select 3;	
	_bqty = _buy select 0;
	_bname = _buy select 1;
	_btype = _buy select 2;
	
	// Sell data from array
	_sell = _x select 4;
	_sqty = _sell select 0;
	_sname = _sell select 1;
	_stype = _sell select 2;
	switch(true)do{ 
		case (_stype == 1): { 
			_stype = "CfgMagazines";
		}; 
		case (_stype == 2): { 
			_stype = "CfgVehicles";
		}; 
		case (_stype == 3): { 
			_stype = "CfgWeapons";
		}; 
	}; 
	// Display Name of sell item
	_textCurrency =	getText(configFile >> _stype >> _sname >> "displayName");
	
	// Menu sort order
	_order = _x select 5;
	
	// Trader Menu ID
	_tid = _x select 6;
	
	// Action file to use for trade
	_afile = _x select 7;
	_File = "\z\addons\dayz_code\actions\" + _afile + ".sqf";
	
	// Allways 1 for now
	_out = _sqty;
	// qty consumed of bname
	_in = 1;
	
	// trade_items.sqf | [part_out, part_in, qty_out, qty_in,_textPart,_textCurrency];	
	_Display = format["Sell %1 for %2 %3", _textPart, _sqty, _textCurrency];
	_part = player addAction [_Display, _File,[_sname,_name,_out,_in,"sell",_textPart,_textCurrency,_header], _order, true, true, "",""];

	diag_log format["DEBUG TRADER: %1", _part];
	s_player_parts set [count s_player_parts,_part];
	
} forEach dayzTraderMenuResult;

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["medical"], 0, true, false, "",""];
s_player_parts set [count s_player_parts,_cancel];

// Clear Data maybe consider cacheing results
dayzTraderMenuResult = nil;
s_player_parts_crtl = 1;
