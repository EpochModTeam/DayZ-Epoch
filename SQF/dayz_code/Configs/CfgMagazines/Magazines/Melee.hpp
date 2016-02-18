class Melee_Swing : CA_Magazine
{
	type = WeaponNoSlot;
	count = 100000;
	initSpeed = 100;
};

class Hatchet_Swing : Melee_Swing
{
	scope = public;
	
	//TODO: test which one is shown and delete the rest
	displayName = "Hatchet";
	displayNameMagazine = "Hatchet1";
	shortNameMagazine = "Hatchet2";
	ammo = "Hatchet_Swing_Ammo";
};

class Crowbar_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "Crowbar";
	displayNameMagazine = "Crowbar";
	shortNameMagazine = "Crowbar";
	ammo = "Crowbar_Swing_Ammo";
};

class Machete_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "Machete";
	displayNameMagazine = "Machete";
	shortNameMagazine = "Machete";
	ammo = "Machete_Swing_Ammo";
};

class Fishing_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "Fishing";
	displayNameMagazine = "Fishing";
	shortNameMagazine = "Fishing";
	ammo = "Fishing_Swing_Ammo";
};

class Bat_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "BaseBallBat";
	displayNameMagazine = "BaseBallBat";
	shortNameMagazine = "BaseBallBat";
	ammo = "Bat_Swing_Ammo";
};

class BatBarbed_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "BaseBallBatBarbed";
	displayNameMagazine = "BaseBallBatBarbed";
	shortNameMagazine = "BaseBallBatBarbed";
	ammo = "BatBarbed_Swing_Ammo";
};

class BatNails_Swing : Melee_Swing
{
	scope = public;
	
	displayName = "BaseBallBatNails";
	displayNameMagazine = "BaseBallBatNails";
	shortNameMagazine = "BaseBallBatNails";
	ammo = "BatNailed_Swing_Ammo";
};