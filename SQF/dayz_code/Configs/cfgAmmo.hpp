class CfgAmmo {
	class BulletBase;
//as50
	class B_127x99_Ball: BulletBase {
		airfriction = -0.00068;
		airlock = 1;
		audiblefire = 22;
		caliber = 2.07;
		cartridge = "FxCartridge_127";
		cost = 20;
		hit = 0; //26
		indirecthit = 0;
		indirecthitrange = 0;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerendtime = 2.3;
		tracerscale = 1.5;
		tracerstarttime = 0.1;
		visiblefire = 22;
		visiblefiretime = 3;
	};
	class B_127x99_Ball_noTracer: B_127x99_Ball {
		airfriction = -0.0005;
		audiblefire = 22;
		muzzleeffect = "BIS_Effects_HeavySniper";
		tracercolor[] = {0, 0, 0, 0};
		tracercolorr[] = {0, 0, 0, 0};
		tracerstarttime = -1;
		visiblefire = 20;
		visiblefiretime = 3;
	};
	class B_127x99_Ball_noTracer_BAF: B_127x99_Ball_noTracer {
		hit = 0; //56
		indirecthit = 0;
		indirecthitrange = 0;
	};
//mak
	class B_9x18_Ball : BulletBase {
		airfriction = -0.002751;
		audiblefire = 15;
		caliber = 0.33;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 6;
		typicalspeed = 350;
		visiblefire = 15;
	};
//macSD
	class B_9x18_SD : B_9x18_Ball {
		airfriction = -0.001893;
		audiblefire = 0.035;
		cost = 5;
		hit = 6;
		typicalspeed = 310;
		visiblefire = 0.035;
		visiblefiretime = 2;
	};
//1911
	class B_45ACP_Ball : BulletBase {
		airfriction = -0.0013522;
		audiblefire = 16;
		caliber = 0.33; //33
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 9;
		indirecthit = 0;
		indirecthitrange = 0;
		typicalspeed = 260;
		visiblefire = 16;
	};

	class Bolt;
	class WoodenArrow : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class Melee;
	class Machete_Swing_Ammo : Melee {
		hit = 53;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Hatchet_Swing_Ammo : Melee {
		hit = 50;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Crowbar_Swing_Ammo : Melee {
		hit = 48;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Fishing_Swing_Ammo : Melee {
		hit = 45;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 1;
		midRange = 2;
		midRangeProbab = 2;
		maxRange = 3;
		maxRangeProbab = 3;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Sledge_Swing_Ammo : Melee {
		hit = 49;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
};
