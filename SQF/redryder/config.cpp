// RedRyder BB Gun by WillRobinson.

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

class CfgPatches
{
	class RedRyder
	{
		units[] = {};
		weapons[] = {"RedRyder"};
		requiredVersion = 1.00000;
	};
};
class CfgModels
{
	class Default {};
 	class Weapon : Default {};
 	class RedRyder : Weapon{};
};

class CfgAmmo
{
    class BulletBase;
	class 177_BB : BulletBase {
		model = "z\addons\redryder\models\BB_Round.p3d";
		simulation = shotShell;
		soundHit[] = {0, 1};
		hit = 3.7;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 10;
		audibleFire = 10;
		visibleFireTime = 3;
		deflecting = 5;
		airFriction = -0.001064;
		fuseDistance = 0;
		CraterEffects = "";
		explosionEffects = "";
		muzzleEffect = "BIS_Effects_Rifle";
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 350Rnd_BB_Magazine : CA_Magazine 
	{   
		scope = 2;
		model = "z\addons\redryder\models\bb_magazine.p3d";	
		picture = "z\addons\redryder\textures\bb_magazine_picture.paa"; 
		displayName = "350 Count 177 Cal. BBs";
		count = 350;
		ammo = 177_BB;
		initSpeed = 175;
		sound[] = {"z\addons\redryder\M9SD_S1", db + 8, 1,60}; 
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload", db - 40, 1, 20};
		descriptionShort = "350 Zinc Coated .177, 4.5mm BBs";
	};
};
class CfgWeapons
{
	class Default {};
	class Rifle : Default {};
	class RedRyder : Rifle {
		scope = 2;
		model = "z\addons\redryder\models\RedRyder.p3d"; 
		displayName = "RedRyder BB Gun";
		displayNameMagazine = "BB";
		magazines[] = {"350Rnd_BB_Magazine"};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		reloadTime = 0.45;
		sound[] = {"z\addons\redryder\RedRyder\M9SD_S1", db + 8, 1, 60}; 
		dispersion = 0.00045;
		minRange = 0;
		minRangeProbab = 0.30;
		midRange = 39;
		midRangeProbab = 0.7;
		maxRange = 75;
		maxRangeProbab = 0.05;
		picture = "z\addons\redryder\textures\redryder_picture.paa"; 
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
	};
};
