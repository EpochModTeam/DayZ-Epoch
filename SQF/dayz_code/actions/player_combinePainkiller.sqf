if (dayz_actionInProgress) exitWith { localize "str_player_actionslimit" call dayz_rollingMessages; };
dayz_actionInProgress = true;

private ["_total", "_full", "_remain", "_amount"];

_total = 0;
{
	if (configName inheritsFrom (configfile >> "CfgMagazines" >> _x) == "ItemPainkiller") then {
		_amount = getNumber(configFile >> "CfgMagazines" >> _x >> "medical" >> "amount");
		if(_amount > 0) then {
			_total = _total + _amount;
			player removeMagazine _x;
		};
	};
} count (magazines player);

_full = floor(_total / 6);
_remain = _total % 6;

for "_i" from 1 to _full do
{
	player addMagazine "ItemPainkiller6";
};

if(_remain > 0 ) then {
	player addMagazine "ItemPainkiller" + str(_remain);
};

dayz_actionInProgress = false;
