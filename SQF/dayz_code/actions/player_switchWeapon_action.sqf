if (primaryWeapon player == "") then {
	if (dayz_onBack in MeleeWeapons) then {
		4 call dz_fn_switchWeapon; // Melee
	} else {
		2 call dz_fn_switchWeapon; // Rifle
	};
} else {
	1 call dz_fn_switchWeapon;
};