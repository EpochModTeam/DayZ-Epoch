private["_buy_item1","_buy_item2","_buy_item3","_buy_item4","_buy_item5","_buy_item6","_buy_item7"];

{player removeAction _x} forEach s_player_bank;s_player_bank = [];

// [part_out, part_in, qty_out, qty_in,];
_buy_item1 = player addAction ["Withdraw 1 Gold Bar", "\z\addons\dayz_code\actions\bank_withdraw_gold.sqf",["ItemGoldBar",1], 99, true, false, "",""];
_buy_item2 = player addAction ["Withdraw 3 Gold Bars", "\z\addons\dayz_code\actions\bank_withdraw_gold.sqf",["ItemGoldBar",3], 98, true, false, "",""];
_buy_item3 = player addAction ["Withdraw 6 Gold Bars", "\z\addons\dayz_code\actions\bank_withdraw_gold.sqf",["ItemGoldBar",6], 97, true, false, "",""];
_buy_item4 = player addAction ["Withdraw 12 Gold Bars", "\z\addons\dayz_code\actions\bank_withdraw_gold.sqf",["ItemGoldBar",12], 96, true, false, "",""];
_buy_item8 = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["bank"], 92, true, false, "",""];

s_player_bank set [count s_player_bank,_buy_item1];
s_player_bank set [count s_player_bank,_buy_item2];
s_player_bank set [count s_player_bank,_buy_item3];
s_player_bank set [count s_player_bank,_buy_item4];
s_player_bank set [count s_player_bank,_buy_item8];

s_player_bank_crtl = 1;