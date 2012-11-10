private["_item"];
_item = 	_this;
_config =	configFile >> "CfgMagazines" >> _item;

_consume = 	getArray (_config >> "ItemActions" >> "SplitBar" >> "use");
_create = 	getArray (_config >> "ItemActions" >> "SplitBar" >> "output");

_textConsume =	getText(configFile >> "CfgMagazines" >> (_consume select 0) >> "displayName");
_textCreate =	getText(configFile >> "CfgMagazines" >> (_create select 0) >> "displayName");

_amountNeed = count _consume;
_amountHas = {_x == (_consume select 0)} count magazines player;
_amountMake = count _create;

_hasInput = 		(_amountNeed <= _amountHas);
player playActionNow "PutDown";
if (_hasInput) then {
	//Take Items
	{
		player removeMagazine _x;
	} forEach _consume;
	sleep 1;
	//Give Items
	{
		player addMagazine _x;
	} forEach _create;
	cutText [format[("You have successfully converted %1 %2."),_amountMake,_textCreate], "PLAIN DOWN"];
} else {
	cutText [format[("You cannot convert that combination, you need %1 %2."),_amountNeed,_textConsume], "PLAIN DOWN"];
};