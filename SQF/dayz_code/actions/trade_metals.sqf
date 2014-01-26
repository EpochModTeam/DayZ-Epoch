private ["_buy","_metals_conversion","_cancel"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_103") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

{player removeAction _x} forEach s_player_parts;s_player_parts = [];
s_player_parts_crtl = 1;

_metals_conversion = [ 
	["ItemGoldBar","ItemSilverBar10oz",1,10,"buy","10oz Silver","Gold",102],
	["ItemSilverBar10oz","ItemGoldBar",10,1,"buy","Gold","10oz Silver",101],
	["ItemBriefcase100oz","ItemGoldBar10oz",1,12,"buy","10oz Gold","Full Briefcase",99]
];

// Static Menu
{
	//diag_log format["DEBUG TRADER: %1", _x];
	_buy = player addAction [format["Trade %1 %2 for %3 %4",(_x select 3),(_x select 5),(_x select 2),(_x select 6)], "\z\addons\dayz_code\actions\trade_items_wo_db.sqf",[(_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4),(_x select 5),(_x select 6)], (_x select 7), true, true, "",""];
	s_player_parts set [count s_player_parts,_buy];
				
} forEach _metals_conversion;

_cancel = player addAction ["Cancel", "\z\addons\dayz_code\actions\trade_cancel.sqf",["na"], 0, true, false, "",""];
s_player_parts set [count s_player_parts,_cancel];

DZE_ActionInProgress = false;
