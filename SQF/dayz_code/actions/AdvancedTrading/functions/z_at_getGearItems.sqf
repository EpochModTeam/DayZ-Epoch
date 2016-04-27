/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your gear and innitiates the selling list.
**/
private ["_mags","_weaps","_skin","_formattedText","_icon"];
#include "defines.sqf";
call Z_clearLists;
Z_SellArray = [];
Z_SellableArray = [];
 _mags = magazines player;
 _weaps = weapons player;

_skin = typeOf player;

_pic = getText (configFile >> 'CfgVehicles' >> _skin >> 'picture');
_icon = getText (configFile >> 'CfgVehicles' >> _skin >> 'icon');

if (!isNil '_pic' && _pic == "") then {
  _pic = _icon;
};

_formattedText = format [
	"<t size='1' align='center' color='#ffffff'> Gear </t>"
	, _pic
];

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

[_weaps,_mags,"your gear"] call	Z_checkArrayInConfig;
