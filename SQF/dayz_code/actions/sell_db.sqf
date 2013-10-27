private ["_activatingPlayer","_trader_id","_type","_name","_sell","_order","_tid","_in","_part","_cancel","_Display","_File","_textCurrency","_textPart","_count","_btype","_stype","_bag","_bagclass","_header","_item","_buy","_sqty","_sname","_afile"];

if(TradeInprogress) exitWith { cutText ["already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

{player removeAction _x} forEach s_player_parts;s_player_parts = [];

// [ _trader_id, _category, _action ];
_activatingPlayer = player;

_trader_id = (_this select 3) select 0;
//_category = (_this select 3) select 1;

PVDZE_plr_TradeMenuResult = call compile format["tcacheSell_%1;",_trader_id];

if(isNil "PVDZE_plr_TradeMenuResult") then {
	//diag_log format["DEBUG TRADER OBJ: %1", _trader_id];
	//["PVDZE_plr_TradeMenu",[_activatingPlayer,_trader_id,_category,_action]] call callRpcProcedure;
	PVDZE_plr_TradeMenu = [_activatingPlayer,_trader_id];
	publicVariableServer  "PVDZE_plr_TradeMenu";
	waitUntil {!isNil "PVDZE_plr_TradeMenuResult"};
};

//diag_log format["DEBUG Buy: %1", PVDZE_plr_TradeMenuResult];
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
	//_qty = _x select 2;
	
	// Buy Data from array
	_buy = _x select 3;	
	//_bqty = _buy select 0;
	//_bname = _buy select 1;
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
	//_textCurrencyBuy =	getText(configFile >> _btype >> _bname >> "displayName");
	
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
	//_out = _sqty;
	// qty consumed of bname
	_in = 1;
	
	_count = 0;
	if(_type == "CfgVehicles") then {
		if (_afile == "trade_backpacks") then {
			_bag = unitBackpack player;
			_bagclass = typeOf _bag;
			if(_name == _bagclass) then {
				_count = 1;
			};
		} else {
			_count = {(typeOf _x) == _name} count (nearestObjects [player, [_name], 20]);
		}
	};
	if(_type == "CfgMagazines") then {
		_count = {_x == _name} count magazines player;
	};
	if(_type == "CfgWeapons") then {
		_count = {_x == _name} count weapons player;
	};


	if (_count > 0) then {
		_Display = format["Sell %1 for %2 %3 each", _textPart, _sqty, _textCurrency];
	} else {
		_Display = format["<t color='#ffff00'>Sell %1 for %2 %3 each</t>", _textPart, _sqty, _textCurrency];
	};

	// trade_items.sqf | [part_out, part_in, qty_out, qty_in,_textPart,_textCurrency];	
	_part = player addAction [_Display, _File,[_sname,_name,_sqty,_in,"sell",_textPart,_textCurrency,_header], _order, true, true, "",""];
	

	// diag_log format["DEBUG TRADER: %1", _part];
	s_player_parts set [count s_player_parts,_part];
	
} forEach PVDZE_plr_TradeMenuResult;

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["medical"], 0, true, false, "",""];
s_player_parts set [count s_player_parts,_cancel];

// Cache data in client side global variable
call compile format["tcacheSell_%1 = %2;",_tid,PVDZE_plr_TradeMenuResult];


// Clear Data
PVDZE_plr_TradeMenuResult = nil;


s_player_parts_crtl = 1;
TradeInprogress = false;