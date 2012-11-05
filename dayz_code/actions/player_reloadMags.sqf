private["_item"];
disableSerialization;
_item = 	_this;
_config =	configFile >> "CfgMagazines" >> _item;

_consume = 	getArray (_config >> "ItemActions" >> "ReloadMag" >> "use");
_create = 	getArray (_config >> "ItemActions" >> "ReloadMag" >> "output");

_textConsume =	getText(configFile >> "CfgMagazines" >> (_consume select 0) >> "displayName");
_textCreate =	getText(configFile >> "CfgMagazines" >> (_create select 0) >> "displayName");
//_qtyConsume =	getText(configFile >> "CfgMagazines" >> (_consume select 0) >> "count");
//_qtyCreate =	getText(configFile >> "CfgMagazines" >> (_create select 0) >> "count");


_amountNeed = count _consume;
_amountHas = {_x == (_consume select 0)} count magazines player;
_amountMake = count _create;

_qty = 0;
if (_amountNeed == 1 and _amountMake == 1) then {
	_control = uiNamespace getVariable 'uiControl';
	_qty = gearSlotAmmoCount _control;
};

_hasInput = (_amountNeed <= _amountHas);
player playActionNow "PutDown";
if (_hasInput) then {
	//Take Items
	{
		player removeMagazine _x;
	} forEach _consume;
	sleep 1;
	//Give Items
	{
		if (_qty > 0) then {
			player addMagazine [_x,_qty];
		} else {
			player addMagazine _x;
		};
	} forEach _create;
	cutText [format[(localize  "str_player_29"),_amountMake,_textCreate], "PLAIN DOWN"];
} else {
	cutText [format[(localize  "str_player_28"),_amountNeed,_textConsume], "PLAIN DOWN"];
};