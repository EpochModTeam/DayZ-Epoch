// DZE Namalsk A2 Rail Gun Spawn Script by JasonTM
// Random Chance of an "Alien Super Weapon" spawning on the second floor of Object A2.

if (random 1 <= _this) then {
	local _wh = "WeaponHolder" createVehicle [0,0,0];	
	_wh setPosATL [4978.17, 6647.25, 17.2435];
	_wh setVariable ["permaLoot",true];
	_wh addWeaponCargoGlobal ["nsw_er7s",1];
	_wh addMagazineCargoGlobal ["nsw_er7mm",2];
	//diag_log "Rail gun has spawned at object AII";
};