class Melee_Swing : CA_Magazine {
	//	scopeWeapon = protected;
	//	scopeMagazine = protected;
	//	magazineType = WeaponNoSlot;
	type = VSoft;
	flash = "";
	flashSize = 0;
	initSpeed = 100;
	maxLeadSpeed = 15; //20
	dexterity = 2; //20
	picture = "\dayz_weapons\textures\equip_shells_ca.paa";
	displayName = "crt";
	displayNameMagazine = "crt";
	shortNameMagazine = "crt";
	optics = false;
	distanceZoomMin = 0;
	distanceZoomMax = 0;
	reloadTime = 0.1;
	magazineReloadTime = 0.01;
	drySound[] = {"", 0, 1};
	reloadMagazineSound[] = {"", 0, 1};
	modes[] = {"Single"};
	sound[] = {"Weapons\grenade_launch", 0.0031623, 1};
	reloadSound[] = {"", 0.0003162, 1};
	showEmpty = 0;
	autoReload = true;
	count = 100000;
	canLock = LockNo;
	//
	burst = 1;
	multiplier = 1;
	ffMagnitude = 0.1;
	ffFrequency = 1;
	ffCount = 1;
	recoil = "Empty";
	dispersion = 0.2;
	class HitEffects {
		hit_blood = "ImpactBlood";
		hit_concrete = "ImpactConcrete";
		hit_foliage = "ImpactLeaves";
		hit_foliage_green = "ImpactLeavesGreen";
		hit_glass = "ImpactGlass";
		hit_glass_thin = "ImpactGlassThin";
		hit_metal = "ImpactMetal";
		hit_plaster = "ImpactPlaster";
		hit_rubber = "ImpactRubber";
		hit_wood = "ImpactWood";
	};
};

class Machete_Swing : Melee_Swing {
	displayName = Machete;
	displayNameMagazine = Machete;
	shortNameMagazine = Machete;
	ammo = "Machete_Swing_Ammo";
};
class crowbar_swing : Melee_Swing {
	displayName = Crowbar;
	displayNameMagazine = Crowbar;
	shortNameMagazine = Crowbar;
	ammo = "Crowbar_Swing_Ammo";
};
class Fishing_Swing : Melee_Swing {
	displayName = Fishing;
	displayNameMagazine = Fishing;
	shortNameMagazine = Fishing;
	ammo = "Fishing_Swing_Ammo";
};
class sledge_swing : Melee_Swing {
	displayName = "Sledge";
	displayNameMagazine = "Sledge";
	shortNameMagazine = "Sledge";
	ammo = "Sledge_Swing_Ammo";
};
class Hatchet_Swing : Melee_Swing {
	displayName = Hatchet;
	displayNameMagazine = Hatchet;
	shortNameMagazine = Hatchet;
	ammo = "Hatchet_Swing_Ammo";
};
/*
class Bat_Swing : Melee_Swing {
	displayName = BaseBallBat;
	displayNameMagazine = BaseBallBat;
	shortNameMagazine = BaseBallBat;
	ammo = Bat_Swing_Ammo;
};
class BatBarbed_Swing : Melee_Swing {
	displayName = BaseBallBatBarbed;
	displayNameMagazine = BaseBallBatBarbed;
	shortNameMagazine = BaseBallBatBarbed;
	ammo = BatBarbed_Swing_Ammo;
};
class BatNails_Swing : Melee_Swing {
	displayName = BaseBallBatNails;
	displayNameMagazine = BaseBallBatNails;
	shortNameMagazine = BaseBallBatNails;
	ammo = BatNailed_Swing_Ammo;
};
*/