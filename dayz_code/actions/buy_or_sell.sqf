private["_trader_id","_category","_buy","_sell","_cancel"];

if (TradeInprogress) exitWith {}; // Do not allow if any script is running.

{player removeAction _x} forEach s_player_parts;s_player_parts = [];

_trader_id = (_this select 3) select 0;
_category = (_this select 3) select 1;

_buy = player addAction ["Buy "+_category, "\z\addons\dayz_code\actions\buy_db.sqf",[_trader_id], 99, true, false, "",""];
s_player_parts set [count s_player_parts,_buy];

_sell = player addAction ["Sell "+_category, "\z\addons\dayz_code\actions\sell_db.sqf",[_trader_id], 98, true, false, "",""];
s_player_parts set [count s_player_parts,_sell];

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["medical"], 0, true, false, "",""];
s_player_parts set [count s_player_parts,_cancel];

s_player_parts_crtl = 1;