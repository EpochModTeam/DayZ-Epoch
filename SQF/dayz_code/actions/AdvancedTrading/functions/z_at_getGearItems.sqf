/**
*	call Z_getBackpackItems
*
*	Gets all your items stored in your gear and innitiates the selling list.
**/
private ["_mags","_weaps","_skin","_formattedText","_bag","_bags"];
#include "defines.hpp"
call Z_clearLists;
Z_SellArray = [];
Z_SellableArray = [];
 _mags = magazines player;
 _weaps = weapons player;
_bag = unitBackpack player;
_bags = if (isNull _bag) then {[]} else {[typeOf _bag]};

_skin = typeOf player;
_pic = getText (configFile >> 'CfgVehicles' >> _skin >> 'portrait');

_formattedText = format [
	"<img image='%1' size='3' align='center'/>"
	, _pic
];

(findDisplay Z_AT_DIALOGWINDOW displayCtrl Z_AT_CONTAINERINFO) ctrlSetStructuredText parseText _formattedText;

[_weaps,_mags,localize "STR_EPOCH_YOUR_GEAR",_bags] call Z_checkArrayInConfig;
