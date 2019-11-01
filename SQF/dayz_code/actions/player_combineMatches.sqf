if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

private ["_total", "_full", "_remain", "_amount"];

_total = 0;
{
	if (configName inheritsFrom (configfile >> "CfgWeapons" >> _x) == "ItemMatchbox") then {
		_amount = getNumber(configFile >> "CfgWeapons" >> _x >> "matches");
		if(_amount > 0) then {
			_total = _total + _amount;
			player removeWeapon _x;
		};
	};
} count (weapons player);

_full = floor(_total / 5);
_remain = _total % 5;

for "_i" from 1 to _full do
{
	if ("Item5Matchbox" in weapons player) then {
		"Item5Matchbox" call player_addDuplicateTool;
	} else {
		player addWeapon "Item5Matchbox";
	};
};

if(_remain > 0 ) then {
	player addWeapon "Item"+ str(_remain)+"Matchbox";
};

dayz_actionInProgress = false;