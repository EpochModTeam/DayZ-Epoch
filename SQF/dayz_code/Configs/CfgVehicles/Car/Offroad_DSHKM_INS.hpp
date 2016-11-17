class Offroad_DSHKM_base: Car
{
	class Turrets: Turrets
	{
		class MainTurret;
	};
};
class Offroad_DSHKM_Gue_DZ: Offroad_DSHKM_base
{
	scope = public;
	side = 2;
	faction = "GUE";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayName = "Off-road (DShKM) DZ";
	hiddenSelectionsTextures[] = {"\ca\wheeled\hilux_armed\data\coyota_trup4_CO.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {"50Rnd_127x107_DSHKM"};
			gunnerAction = "Hilux_Gunner";
			gunnerInAction = "Hilux_Gunner";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 60;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
};

class Offroad_DSHKM_Gue_DZE: Offroad_DSHKM_base
{
	scope = public;
	side = 2;
	faction = "GUE";
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayName = "Off-road (DShKM) AL";
	hiddenSelectionsTextures[] = {"\ca\wheeled\hilux_armed\data\coyota_trup4_CO.paa"};
	class Damage
	{
		tex[] = {};
		mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_trup3_destruct.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky.rvmat","ca\wheeled\hilux_armed\data\detailmapy\drziaky_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "mainTurret";
			gun = "mainGun";
			outGunnerMayFire = 1;
			forceHideGunner = 1;
			castGunnerShadow = 1;
			viewGunnerInExternal = 1;
			gunnerOpticsModel = "\ca\Weapons\optika_empty";
			gunnerForceOptics = 0;
			weapons[] = {"DShKM"};
			soundServo[] = {};
			stabilizedInAxes = 0;
			magazines[] = {};
			gunnerAction = "Hilux_Gunner";
			gunnerInAction = "Hilux_Gunner";
			ejectDeadGunner = 1;
			minElev = -18;
			maxElev = 60;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			gunnerCompartments = "Compartment2";
		};
	};
	class Upgrades
	{
		ItemORP[] = {"Offroad_DSHKM_Gue_DZE1",
		{  },
		{ 
			{ "ItemORP",1 },
			{ "PartEngine",2 } }};
	};
};

// Performance 1
class Offroad_DSHKM_Gue_DZE1: Offroad_DSHKM_Gue_DZE
{
	original = "Offroad_DSHKM_Gue_DZE";
	maxspeed = 170; // Offroad_DSHKM_base 150 | car 100
	class Upgrades
	{
		ItemLRK[] = {"Offroad_DSHKM_Gue_DZE2",
		{  },
		{ 
			{ "ItemLRK",1 },
			{ "PartGeneric",2 },
			{ "ItemTent",1 } }};
	};
};
// Armmor 2
class Offroad_DSHKM_Gue_DZE2: Offroad_DSHKM_Gue_DZE1
{
	armor = 55; // car 20
	damageResistance = 0.02099;
	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel
		{
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel
		{
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel
		{
			armor = 0.3;
		};
		class HitFuel
		{
			armor = 0.28;
			material = -1;
			name = "palivo";
			visual = "";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 1;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 1;
		};
		class HitGlass1: HitGlass1
		{
			armor = 0.1;
		};
		class HitGlass2: HitGlass2
		{
			armor = 0.1;
		};
		class HitGlass3: HitGlass3
		{
			armor = 0.1;
		};
		class HitGlass4: HitGlass4
		{
			armor = 0.1;
		};
	};
	class Upgrades
	{
		ItemLRK[] = {"Offroad_DSHKM_Gue_DZE3",
		{  },
		{ 
			{ "ItemLRK",1 },
			{ "PartGeneric",2 },
			{ "ItemTent",1 } }};
	};

};
// Cargo 3
class Offroad_DSHKM_Gue_DZE3: Offroad_DSHKM_Gue_DZE2
{
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50 
        transportmaxbackpacks = 4; // car 2
        class Upgrades
	{
		ItemTNK[] = {"Offroad_DSHKM_Gue_DZE4",
		{  },
		{ 
			{ "ItemTNK",1 },
			{ "PartFueltank",2 } }};
	};
};

// Fuel 4
class Offroad_DSHKM_Gue_DZE4: Offroad_DSHKM_Gue_DZE3
{
	fuelCapacity = 210; // car 100
};
	
