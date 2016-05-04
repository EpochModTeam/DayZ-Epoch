/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your gear and innitiates the selling list.
**/
private ["_mags","_weaps","_skin","_formattedText"];
#include "defines.sqf";
call Z_clearLists;
Z_SellArray = [];
Z_SellableArray = [];
 _mags = magazines player;
 _weaps = weapons player;

_skin = typeOf player;
_pic = getText (configFile >> 'CfgVehicles' >> _skin >> 'portrait');

_formattedText = format [
	"<t size='1' align='center' color='#ffffff'>%2</t><br />" +
	"<img image='%1' size='3' align='center'/><br />"
	, _pic, localize "STR_UI_GEAR"
];

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

[_weaps,_mags,localize "STR_EPOCH_YOUR_GEAR"] call	Z_checkArrayInConfig;
