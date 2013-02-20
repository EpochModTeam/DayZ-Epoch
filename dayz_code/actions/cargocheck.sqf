private["_vehicle"];
_vehicle = _this select 3;

_class = typeOf _vehicle;

// Get max magazines count
_maxMagazines =	getNumber (configFile >> "CfgVehicles" >> _class >> "transportMaxMagazines");

// Get max weapon count
_maxWeapons =	getNumber (configFile >> "CfgVehicles" >> _class >> "transportMaxWeapons");

// Get max backpack count
_maxBackpacks =	getNumber (configFile >> "CfgVehicles" >> _class >> "transportmaxbackpacks");

// Count and show magazines available space 
_magazineCount = count (getMagazineCargo _vehicle);

// Count and show weapons available space
_weaponsCount = count (getWeaponCargo _vehicle);

// Count and show backpacks available space
_backpackCount = count (getBackpackCargo _vehicle);

cutText [format[("Magazine %1 / %2 - Weapons %3 / %4 - Backpacks %5 / %6"),_magazineCount,_maxMagazines,_weaponsCount,_maxWeapons,_backpackCount,_maxBackpacks], "PLAIN DOWN"];