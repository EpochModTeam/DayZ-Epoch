class 100Rnd_762x54_PK : CA_Magazine {
	scope = 2;
	displayName = "PKM Mag.";
	picture = "\CA\weapons\data\equip\m_pk_ca.paa";
	ammo = "B_762x54_Ball";
	count = 100;
	type = "256";
	initSpeed = 850;
	sound[] = {"\ca\Weapons\Data\Sound\PK_1_SS", 3.16228, 1, 1500};
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	descriptionShort = "Caliber: 7.62x54mm <br/>Rounds: 100 <br/>Used in: PK";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x54_PK.p3d";
};
class 100Rnd_762x51_M240 : CA_Magazine {
	scope = 2;
	displayName = "100Rnd. M240";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	count = 100;
	type = "256";
	ammo = "B_762x51_Ball";
	initSpeed = 900;
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
};
class 200Rnd_762x51_M240 : 100Rnd_762x51_M240 {
	count = 200;
};
class 200Rnd_556x45_M249 : CA_Magazine {
	scope = 2;
	displayName = "200Rnd. M249 Belt";
	picture = "\CA\weapons\data\equip\m_m249_ca.paa";
	ammo = "B_556x45_Ball";
	count = 200;
	type = "256";
	initSpeed = 915;
	sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS", 17.7828, 1, 1300};
	reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.01, 1, 20};
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\200Rnd_556x45_M249.p3d";
};
class 100Rnd_556x45_M249 : 200Rnd_556x45_M249 {
	displayName = "M249 Mag.";
	descriptionShort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M249";
	count = 100;
	picture = "\CA\weapons_E\Data\icons\m_m245_CA.paa";
};
class 100Rnd_556x45_BetaCMag: CA_Magazine {
	scope = 2;
	displayName = "MG36 Mag.";
	ammo = "B_556x45_Ball";
	count = 100;
	initSpeed = 920;
	picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	type="256";
	tracersEvery = 4;
	lastRoundsTracer = 4;
	descriptionShort = "Caliber: 5.56x45 mm NATO Rounds: 100 Used in: MG36, X8 SAW";
};
class 75Rnd_545x39_RPK: CA_Magazine {
	scope = 2;
	displayName = "75Rnd. RPK";
	ammo = "B_545x39_Ball";
	count = 75;
	type="256";
	picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	tracersEvery = 4;
	lastRoundsTracer = 4;
	nameSound = "mgun";
	descriptionShort = "Caliber: 5.45x39mm Rounds: 75 Used in: RPK-74";
};

class 8Rnd_B_Beneli_74Slug;
class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug {
	displayName="2Rnd. Slug";
	count=2;
	descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
	model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
	class ItemActions {
		class ReloadMag {
			text="Combine to 8 rounds";
			script="spawn player_reloadMag;";
			use[]= {
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug"
			};
			output[]= {
				"8Rnd_B_Beneli_74Slug"
			};
		};
	};
};

class 8Rnd_B_Beneli_Pellets;
class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets {
	displayName="2Rnd. Pellets";
	count=2;
	descriptionShort="Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
	model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
	weight = 0.1;
	class ItemActions {
		class ReloadMag {
			text="Combine to 8 rounds";
			script="spawn player_reloadMag;";
			use[]= {
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets"
			};
			output[]= {
				"8Rnd_B_Beneli_Pellets"
			};
		};
	};
};

class Quiver : CA_Magazine {
	scope = public;
	ammo = "WoodenArrow";
	count = 6;
	descriptionshort = "Small Quiver used with the Crossbow, Max arrows 6.";
	displayname = "Quiver";
	initSpeed = 150;
	model = "\z\addons\dayz_communityassets\models\quiver";
	picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
};
class WoodenArrow : CA_Magazine {
	scope = public;
	displayName = "Arrow"; //$STR_MAG_NAME_3;
	model = "\dayz_weapons\models\bolt_gear";
	picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
	ammo = "WoodenArrow";
	count = 1;
	initSpeed = 150;
	descriptionShort = "Arrow made out of wood, used with the Crossbow."; //$STR_MAG_DESC_3;
	class ItemActions {
		class ReloadMag {
			text = "Combine into Quiver";
			script = "spawn player_reloadMag;";
			use[] = {"WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow","WoodenArrow"};
			output[] = {"Quiver"};
		};
	};
};