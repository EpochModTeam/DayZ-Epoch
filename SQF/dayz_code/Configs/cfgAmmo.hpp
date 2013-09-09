class CfgAmmo {
	class Bolt;
	class WoodenArrow : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class Melee;
	class Machete_Swing_Ammo : Melee {
		hit = 9;
		simulation = "shotBullet";
	};
	class Fishing_Swing_Ammo : Melee {
		hit = 7;
		simulation = "shotBullet";
	};
	class Sledge_Swing_Ammo : Melee {
		hit = 11;
		simulation = "shotBullet";
	};
	class Dummy_Swing_Ammo : Melee {
		hit = 0;
		simulation = "shotBullet";
	};
};
