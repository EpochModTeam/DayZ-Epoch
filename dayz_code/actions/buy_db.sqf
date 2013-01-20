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
	`id`,
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
	switch(true)do{ 
		case (_btype == 1): { 
			_btype = "CfgMagazines";
		}; 
		case (_btype == 2): { 
			_btype = "CfgVehicles";
		}; 
		case (_btype == 3): { 
			_btype = "CfgWeapons";
		}; 
	}; 
	// Display Name of buy item
	_textCurrency =	getText(configFile >> _btype >> _bname >> "displayName");
	
	// Sell data from array
	_sell = _x select 4;
	_sqty = _sell select 0;
	_sname = _sell select 1;
	_stype = _sell select 2;
	
	// Menu sort order
	_order = _x select 5;
	
	// Trader Menu ID
	_tid = _x select 6;
	
	// Action file to use for trade
	_afile = _x select 7;
	_File = "\z\addons\dayz_code\actions\" + _afile + ".sqf";
	
	// Allways 1 for now
	_out = 1;
	// qty consumed of bname
	_in = _bqty;
	
	// trade_items.sqf | [part_out, part_in, qty_out, qty_in,_textPart,_textCurrency];
	if(_qty <= 0) then {
		//_Display = format["Buy %1 (Out of Stock: %2)", _textPart, _qty];
		//_part = player addAction [_Display, "\z\addons\dayz_code\actions\trade_cancel.sqf",[], 0, true, false, "",""];
		//_part = player addAction [_Display, _File,[_name,_bname,_out,_in,"buy",_textCurrency,_textPart,_header], _order, true, true, "",""];
	} else {
		_Display = format["Buy %1 for %2 %3 (Available: %4)", _textPart, _in, _textCurrency, _qty];
		_part = player addAction [_Display, _File,[_name,_bname,_out,_in,"buy",_textCurrency,_textPart,_header], _order, true, true, "",""];
	};
	
	diag_log format["DEBUG TRADER: %1", _part];
	s_player_parts set [count s_player_parts,_part];
	
} forEach dayzTraderMenuResult;

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["medical"], 0, true, false, "",""];
s_player_parts set [count s_player_parts,_cancel];

// Clear Data maybe consider cacheing results
dayzTraderMenuResult = nil;
s_player_parts_crtl = 1;