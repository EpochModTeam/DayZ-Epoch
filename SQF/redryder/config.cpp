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

// type scope
#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class RedRyder
	{
		units[] = {};
		weapons[] = {"RedRyder"};
		requiredVersion = 1.00000;
		requiredAddons[] = {"dayz_code"};
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
    class BulletCore;
	class 177_BB : BulletCore
	{
		model = "z\addons\redryder\models\BB_Round.p3d";
		soundHit[] = {,0,1};
		hit=3.7;indirectHit=0;indirectHitRange=0;
		visibleFire = 10;
		audibleFire = 10;
		visibleFireTime = 3;
		airFriction = -0.020;
		fuseDistance = 0;
		tracerStartTime=0.001;
		tracerEndTime = 3.5;
		deflecting = 10;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 350Rnd_BB_Magazine : CA_Magazine
	{   
		scope = public;
		tracersEvery = 1;
		model = "z\addons\redryder\models\bb_magazine";
		picture ="z\addons\redryder\textures\bb_magazine_picture.paa";
		displayName = 350 Count 177 Cal. BBs;
		count =350;
		ammo = 177_BB;
		initSpeed = 160;
		sound[] = {"", db8, 1,60};
		reloadMagazineSound[] = {"",db-40,1,20};
		descriptionShort = "350 .177, 4.5mm BBs";
	};
};

class cfgRecoils
{
 redryder_recoil[] = {0,0,0, 0.1,0.0001,0.0001, 0.1,-0.00003,-0.00003, 0.05,0,0};
 redryder_pronerecoil[] = {0,0,0, 0.1,0.00005,0.00005, 0.05,-0.0003,-0.0003, 0.05,0,0};
}; 

class CfgWeapons
{
	class Default {};
	class Rifle : Default {};
	class RedRyder : Rifle {
		scope = public;
		distanceZoomMin = 20;
		distanceZoomMax = 20;
		model = "z\addons\redRyder\models\RedRyder";
		displayName = "RedRyder BB Gun";
		displayNameMagazine = "BB";
		magazines[]={"350Rnd_BB_Magazine"};
		recoil = "redryder_recoil";
		recoilProne = "redryder_pronerecoil";
		reloadTime = 0.45;
		sound[] = {"z\addons\redryder\red_fire", db8, 1,60};
		dispersion = 0.00045;
		minRange = 0;
		minRangeProbab = 0.30;
		midRange = 39;
		midRangeProbab = 0.7;
		maxRange = 75;
		maxRangeProbab = 0.05;
		picture = "z\addons\redryder\textures\redryder_picture.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
	};
};
