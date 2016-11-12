class CfgAmmo
{
	class Default;
	class BulletBase;
	class GrenadeHand;
	class GrenadeCore;
	
	/* MELEE */
	
	class Melee : Default
	{
		//Simulation
		simulation = "shotSpread";
		dispersion = 0.174;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		airFriction = 0;
		
		//AI visibility and audibility
		visibleFire = 0.1;
		visibleFireTime = 0;
		audibleFire = 1;
		
		cost = 0.01;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		typicalSpeed = 50;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\ca\Weapons\shell";
		caliber = 0.22;
		
		soundDefault1[] = {"ca\sounds\weapons\hits\hit_concrete_01", 0.316228, 1, 60};
		soundDefault2[] = {"ca\sounds\weapons\hits\hit_concrete_02", 0.316228, 1, 60};
		soundDefault3[] = {"ca\sounds\weapons\hits\hit_concrete_03", 0.316228, 1, 60};
		soundDefault4[] = {"ca\sounds\weapons\hits\hit_concrete_04", 0.316228, 1, 60};
		soundDefault5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01", 0.316228, 1, 60};
		soundDefault6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02", 0.316228, 1, 60};
		soundDefault7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03", 0.316228, 1, 60};
		soundDefault8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04", 0.316228, 1, 60};
		soundGroundSoft1[] = {"ca\sounds\weapons\hits\hit_earth_01", 0.0562341, 1, 60};
		soundGroundSoft2[] = {"ca\sounds\weapons\hits\hit_earth_02", 0.0562341, 1, 60};
		soundGroundSoft3[] = {"ca\sounds\weapons\hits\hit_earth_03", 0.0562341, 1, 60};
		soundGroundSoft4[] = {"ca\sounds\weapons\hits\hit_earth_04", 0.0562341, 1, 60};
		soundGroundSoft5[] = {"ca\sounds\weapons\hits\rico_hit_earth_01", 0.0562341, 1, 60};
		soundGroundSoft6[] = {"ca\sounds\weapons\hits\rico_hit_earth_02", 0.0562341, 1, 60};
		soundGroundSoft7[] = {"ca\sounds\weapons\hits\rico_hit_earth_03", 0.0562341, 1, 60};
		soundGroundSoft8[] = {"ca\sounds\weapons\hits\rico_hit_earth_04", 0.0562341, 1, 60};
		soundGroundHard1[] = {"ca\sounds\weapons\hits\hit_concrete_01", 0.125893, 1, 80};
		soundGroundHard2[] = {"ca\sounds\weapons\hits\hit_concrete_02", 0.125893, 1, 80};
		soundGroundHard3[] = {"ca\sounds\weapons\hits\hit_concrete_03", 0.125893, 1, 80};
		soundGroundHard4[] = {"ca\sounds\weapons\hits\hit_concrete_04", 0.125893, 1, 80};
		soundGroundHard5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01", 0.125893, 1, 80};
		soundGroundHard6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02", 0.125893, 1, 80};
		soundGroundHard7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03", 0.125893, 1, 80};
		soundGroundHard8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04", 0.125893, 1, 80};
		soundMetal1[] = {"ca\sounds\weapons\hits\hit_metalplate_01", 0.316228, 1, 90};
		soundMetal2[] = {"ca\sounds\weapons\hits\hit_metalplate_02", 0.316228, 1, 90};
		soundMetal3[] = {"ca\sounds\weapons\hits\hit_metalplate_03", 0.316228, 1, 90};
		soundMetal4[] = {"ca\sounds\weapons\hits\hit_metalplate_04", 0.316228, 1, 90};
		soundMetal5[] = {"ca\sounds\weapons\hits\hit_metalplate_05", 0.316228, 1, 90};
		soundMetal6[] = {"ca\sounds\weapons\hits\hit_metalplate_06", 0.316228, 1, 90};
		soundMetal7[] = {"ca\sounds\weapons\hits\hit_metalplate_07", 0.316228, 1, 90};
		soundMetal8[] = {"ca\sounds\weapons\hits\hit_metalplate_08", 0.316228, 1, 90};
		soundMetal9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01", 0.316228, 1, 90};
		soundMetal10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02", 0.316228, 1, 90};
		soundMetal11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03", 0.316228, 1, 90};
		soundMetal12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04", 0.316228, 1, 90};
		soundGlass1[] = {"ca\sounds\weapons\hits\hit_glass_01", 0.177828, 1, 50};
		soundGlass2[] = {"ca\sounds\weapons\hits\hit_glass_02", 0.177828, 1, 50};
		soundGlass3[] = {"ca\sounds\weapons\hits\hit_glass_03", 0.177828, 1, 50};
		soundGlass4[] = {"ca\sounds\weapons\hits\hit_glass_04", 0.177828, 1, 50};
		soundGlass5[] = {"ca\sounds\weapons\hits\hit_glass_05", 0.177828, 1, 50};
		soundGlass6[] = {"ca\sounds\weapons\hits\hit_glass_06", 0.177828, 1, 50};
		soundGlass7[] = {"ca\sounds\weapons\hits\hit_glass_07", 0.177828, 1, 50};
		soundGlass8[] = {"ca\sounds\weapons\hits\hit_glass_08", 0.177828, 1, 50};
		soundGlass9[] = {"ca\sounds\weapons\hits\hit_glass_09", 0.177828, 1, 50};
		soundGlass10[] = {"ca\sounds\weapons\hits\hit_glass_10", 0.177828, 1, 50};
		soundIron1[] = {"ca\sounds\weapons\hits\hit_iron_01", 0.316228, 1, 90};
		soundIron2[] = {"ca\sounds\weapons\hits\hit_iron_02", 0.316228, 1, 90};
		soundIron3[] = {"ca\sounds\weapons\hits\hit_iron_03", 0.316228, 1, 90};
		soundIron4[] = {"ca\sounds\weapons\hits\hit_iron_04", 0.316228, 1, 90};
		soundIron5[] = {"ca\sounds\weapons\hits\hit_iron_05", 0.316228, 1, 90};
		soundIron6[] = {"ca\sounds\weapons\hits\hit_iron_06", 0.316228, 1, 90};
		soundIron7[] = {"ca\sounds\weapons\hits\hit_iron_07", 0.316228, 1, 90};
		soundIron8[] = {"ca\sounds\weapons\hits\hit_iron_08", 0.316228, 1, 90};
		soundIron9[] = {"ca\sounds\weapons\hits\rico_hit_iron_01", 0.316228, 1, 90};
		soundIron10[] = {"ca\sounds\weapons\hits\rico_hit_iron_02", 0.316228, 1, 90};
		soundIron11[] = {"ca\sounds\weapons\hits\rico_hit_iron_03", 0.316228, 1, 90};
		soundIron12[] = {"ca\sounds\weapons\hits\rico_hit_iron_04", 0.316228, 1, 90};
		soundGlassArmored1[] = {"ca\sounds\weapons\hits\hit_glass_armored_01", 0.177828, 1, 60};
		soundGlassArmored2[] = {"ca\sounds\weapons\hits\hit_glass_armored_02", 0.177828, 1, 60};
		soundGlassArmored3[] = {"ca\sounds\weapons\hits\hit_glass_armored_03", 0.177828, 1, 60};
		soundGlassArmored4[] = {"ca\sounds\weapons\hits\hit_glass_armored_04", 0.177828, 1, 60};
		soundGlassArmored5[] = {"ca\sounds\weapons\hits\hit_glass_armored_05", 0.177828, 1, 60};
		soundGlassArmored6[] = {"ca\sounds\weapons\hits\hit_glass_armored_06", 0.177828, 1, 60};
		soundGlassArmored7[] = {"ca\sounds\weapons\hits\hit_glass_armored_07", 0.177828, 1, 60};
		soundGlassArmored8[] = {"ca\sounds\weapons\hits\hit_glass_armored_08", 0.177828, 1, 60};
		soundVehiclePlate1[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_01", 0.562341, 1, 90};
		soundVehiclePlate2[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_02", 0.562341, 1, 90};
		soundVehiclePlate3[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_03", 0.562341, 1, 90};
		soundVehiclePlate4[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_04", 0.562341, 1, 90};
		soundVehiclePlate5[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_05", 0.562341, 1, 90};
		soundVehiclePlate6[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_06", 0.562341, 1, 90};
		soundVehiclePlate7[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_07", 0.562341, 1, 90};
		soundVehiclePlate8[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_08", 0.562341, 1, 90};
		soundVehiclePlate9[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_01", 0.562341, 1, 90};
		soundVehiclePlate10[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_02", 0.562341, 1, 90};
		soundVehiclePlate11[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_03", 0.562341, 1, 90};
		soundVehiclePlate12[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_04", 0.562341, 1, 90};
		soundWood1[] = {"ca\sounds\weapons\hits\hit_wood_01", 0.316228, 1, 60};
		soundWood2[] = {"ca\sounds\weapons\hits\hit_wood_02", 0.316228, 1, 60};
		soundWood3[] = {"ca\sounds\weapons\hits\hit_wood_03", 0.316228, 1, 60};
		soundWood4[] = {"ca\sounds\weapons\hits\hit_wood_04", 0.316228, 1, 60};
		soundWood5[] = {"ca\sounds\weapons\hits\hit_wood_05", 0.316228, 1, 60};
		soundWood6[] = {"ca\sounds\weapons\hits\hit_wood_06", 0.316228, 1, 60};
		soundWood7[] = {"ca\sounds\weapons\hits\hit_wood_07", 0.316228, 1, 60};
		soundWood8[] = {"ca\sounds\weapons\hits\hit_wood_08", 0.316228, 1, 60};
		soundWood9[] = {"ca\sounds\weapons\hits\rico_hit_wood_01", 0.316228, 1, 60};
		soundWood10[] = {"ca\sounds\weapons\hits\rico_hit_wood_02", 0.316228, 1, 60};
		soundWood11[] = {"ca\sounds\weapons\hits\rico_hit_wood_03", 0.316228, 1, 60};
		soundWood12[] = {"ca\sounds\weapons\hits\rico_hit_wood_04", 0.316228, 1, 60};
		soundHitBody1[] = {"ca\sounds\weapons\hits\hit_body_01", 0.0177828, 1, 50};
		soundHitBody2[] = {"ca\sounds\weapons\hits\hit_body_02", 0.0177828, 1, 50};
		soundHitBody3[] = {"ca\sounds\weapons\hits\hit_body_03", 0.0177828, 1, 50};
		soundHitBody4[] = {"ca\sounds\weapons\hits\hit_body_04", 0.0177828, 1, 50};
		soundHitBody5[] = {"ca\sounds\weapons\hits\hit_body_05", 0.0177828, 1, 50};
		soundHitBody6[] = {"ca\sounds\weapons\hits\hit_body_06", 0.0177828, 1, 50};
		soundHitBody7[] = {"ca\sounds\weapons\hits\hit_body_07", 0.0177828, 1, 50};
		soundHitBody8[] = {"ca\sounds\weapons\hits\hit_body_08", 0.0177828, 1, 50};
		soundHitBody9[] = {"ca\sounds\weapons\hits\hit_body_09", 0.0177828, 1, 50};
		soundHitBody10[] = {"ca\sounds\weapons\hits\hit_body_10", 0.0177828, 1, 50};
		soundHitBody11[] = {"ca\sounds\weapons\hits\hit_body_11", 0.0177828, 1, 50};
		soundHitBody12[] = {"ca\sounds\weapons\hits\hit_body_12", 0.0177828, 1, 50};
		soundHitBody13[] = {"ca\sounds\weapons\hits\hit_body_13", 0.0177828, 1, 50};
		soundMetalPlate1[] = {"ca\sounds\weapons\hits\hit_metalplate_01", 0.562341, 1, 90};
		soundMetalPlate2[] = {"ca\sounds\weapons\hits\hit_metalplate_02", 0.562341, 1, 90};
		soundMetalPlate3[] = {"ca\sounds\weapons\hits\hit_metalplate_03", 0.562341, 1, 90};
		soundMetalPlate4[] = {"ca\sounds\weapons\hits\hit_metalplate_04", 0.562341, 1, 90};
		soundMetalPlate5[] = {"ca\sounds\weapons\hits\hit_metalplate_05", 0.562341, 1, 90};
		soundMetalPlate6[] = {"ca\sounds\weapons\hits\hit_metalplate_06", 0.562341, 1, 90};
		soundMetalPlate7[] = {"ca\sounds\weapons\hits\hit_metalplate_07", 0.562341, 1, 90};
		soundMetalPlate8[] = {"ca\sounds\weapons\hits\hit_metalplate_08", 0.562341, 1, 90};
		soundMetalPlate9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01", 0.562341, 1, 90};
		soundMetalPlate10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02", 0.562341, 1, 90};
		soundMetalPlate11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03", 0.562341, 1, 90};
		soundMetalPlate12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04", 0.562341, 1, 90};
		soundHitBuilding1[] = {"ca\sounds\weapons\hits\hit_wall_01", 0.251189, 1, 60};
		soundHitBuilding2[] = {"ca\sounds\weapons\hits\hit_wall_02", 0.251189, 1, 60};
		soundHitBuilding3[] = {"ca\sounds\weapons\hits\hit_wall_03", 0.251189, 1, 60};
		soundHitBuilding4[] = {"ca\sounds\weapons\hits\hit_wall_04", 0.251189, 1, 60};
		soundHitBuilding5[] = {"ca\sounds\weapons\hits\hit_wall_05", 0.251189, 1, 60};
		soundHitBuilding6[] = {"ca\sounds\weapons\hits\rico_hit_wall_01", 0.251189, 1, 60};
		soundHitBuilding7[] = {"ca\sounds\weapons\hits\rico_hit_wall_02", 0.251189, 1, 60};
		soundHitBuilding8[] = {"ca\sounds\weapons\hits\rico_hit_wall_03", 0.251189, 1, 60};
		soundHitBuilding9[] = {"ca\sounds\weapons\hits\rico_hit_wall_04", 0.251189, 1, 60};
		soundHitBuilding10[] = {"ca\sounds\weapons\hits\rico_hit_wall_05", 0.251189, 1, 60};
		soundHitFoliage1[] = {"ca\sounds\weapons\hits\hit_grass_01", 0.177828, 1, 50};
		soundHitFoliage2[] = {"ca\sounds\weapons\hits\hit_grass_02", 0.177828, 1, 50};
		soundHitFoliage3[] = {"ca\sounds\weapons\hits\hit_grass_03", 0.177828, 1, 50};
		soundHitFoliage4[] = {"ca\sounds\weapons\hits\hit_grass_04", 0.177828, 1, 50};
		soundPlastic1[] = {"ca\sounds\weapons\hits\hit_Rubber_01", 0.177828, 1, 50};
		soundPlastic2[] = {"ca\sounds\weapons\hits\hit_Rubber_02", 0.177828, 1, 50};
		soundConcrete1[] = {"ca\sounds\weapons\hits\hit_concrete_01", 0.177828, 1, 70};
		soundConcrete2[] = {"ca\sounds\weapons\hits\hit_concrete_02", 0.177828, 1, 70};
		soundConcrete3[] = {"ca\sounds\weapons\hits\hit_concrete_03", 0.177828, 1, 70};
		soundConcrete4[] = {"ca\sounds\weapons\hits\hit_concrete_04", 0.177828, 1, 70};
		soundConcrete5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01", 0.177828, 1, 70};
		soundConcrete6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02", 0.177828, 1, 70};
		soundConcrete7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03", 0.177828, 1, 70};
		soundConcrete8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04", 0.177828, 1, 70};
		soundRubber1[] = {"ca\sounds\weapons\hits\hit_Rubber_01", 0.316228, 1, 50};
		soundRubber2[] = {"ca\sounds\weapons\hits\hit_Rubber_02", 0.316228, 1, 50};
		soundRubber3[] = {"ca\sounds\weapons\hits\hit_Rubber_03", 0.316228, 1, 50};
		soundRubber4[] = {"ca\sounds\weapons\hits\hit_Rubber_04", 0.316228, 1, 50};
		soundRubber5[] = {"ca\sounds\weapons\hits\hit_Rubber_05", 0.316228, 1, 50};
		hitGroundSoft[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.1, "soundGroundSoft4", 0.1, "soundGroundSoft5", 0.1, "soundGroundSoft6", 0.1, "soundGroundSoft7", 0.1, "soundGroundSoft8", 0.1};
		hitGroundHard[] = {"soundGroundHard1", 0.2, "soundGroundHard2", 0.2, "soundGroundHard3", 0.1, "soundGroundHard4", 0.1, "soundGroundHard5", 0.1, "soundGroundHard6", 0.1, "soundGroundHard7", 0.1, "soundGroundHard8", 0.1};
		hitMan[] = {"soundHitBody1", 0.077, "soundHitBody2", 0.077, "soundHitBody3", 0.077, "soundHitBody4", 0.077, "soundHitBody5", 0.077, "soundHitBody6", 0.077, "soundHitBody7", 0.077, "soundHitBody8", 0.077, "soundHitBody9", 0.077, "soundHitBody10", 0.077, "soundHitBody11", 0.077, "soundHitBody12", 0.077, "soundHitBody13", 0.077};
		hitArmor[] = {"soundVehiclePlate1", 0.1, "soundVehiclePlate2", 0.1, "soundVehiclePlate3", 0.05, "soundVehiclePlate4", 0.05, "soundVehiclePlate5", 0.1, "soundVehiclePlate6", 0.05, "soundVehiclePlate7", 0.1, "soundVehiclePlate8", 0.1, "soundVehiclePlate9", 0.05, "soundVehiclePlate10", 0.1, "soundVehiclePlate11", 0.1, "soundVehiclePlate12", 0.1};
		hitIron[] = {"soundIron1", 0.1, "soundIron2", 0.1, "soundIron3", 0.1, "soundIron4", 0.1, "soundIron5", 0.1, "soundIron6", 0.1, "soundIron7", 0.05, "soundIron8", 0.05, "soundIron9", 0.1, "soundIron10", 0.1, "soundIron11", 0.05, "soundIron12", 0.05};
		hitBuilding[] = {"soundHitBuilding1", 0.1, "soundHitBuilding2", 0.1, "soundHitBuilding3", 0.1, "soundHitBuilding4", 0.1, "soundHitBuilding5", 0.1, "soundHitBuilding6", 0.1, "soundHitBuilding7", 0.1, "soundHitBuilding8", 0.1, "soundHitBuilding9", 0.1, "soundHitBuilding10", 0.1};
		hitFoliage[] = {"soundHitFoliage1", 0.25, "soundHitFoliage2", 0.25, "soundHitFoliage3", 0.25, "soundHitFoliage4", 0.25};
		hitWood[] = {"soundWood1", 0.1, "soundWood2", 0.1, "soundWood3", 0.1, "soundWood4", 0.05, "soundWood5", 0.05, "soundWood6", 0.1, "soundWood7", 0.1, "soundWood8", 0.1, "soundWood9", 0.1, "soundWood10", 0.1, "soundWood11", 0.05, "soundWood12", 0.05};
		hitGlass[] = {"soundGlass1", 0.1, "soundGlass2", 0.1, "soundGlass3", 0.1, "soundGlass4", 0.1, "soundGlass5", 0.1, "soundGlass6", 0.1, "soundGlass7", 0.1, "soundGlass8", 0.1, "soundGlass9", 0.1, "soundGlass10", 0.1};
		hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
		hitConcrete[] = {"soundConcrete1", 0.2, "soundConcrete2", 0.2, "soundConcrete3", 0.2, "soundConcrete4", 0.05, "soundConcrete5", 0.05, "soundConcrete6", 0.1, "soundConcrete7", 0.1, "soundConcrete8", 0.1};
		hitRubber[] = {"soundRubber1", 0.2, "soundRubber2", 0.2, "soundRubber3", 0.2, "soundRubber4", 0.2, "soundRubber5", 0.2};
		hitPlastic[] = {"soundPlastic1", 0.5, "soundPlastic2", 0.5};
		hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
		hitMetal[] = {"soundMetal1", 0.1, "soundMetal2", 0.1, "soundMetal3", 0.1, "soundMetal4", 0.05, "soundMetal5", 0.1, "soundMetal6", 0.1, "soundMetal7", 0.05, "soundMetal8", 0.1, "soundMetal9", 0.05, "soundMetal10", 0.05, "soundMetal11", 0.1, "soundMetal12", 0.1};
		hitMetalplate[] = {"soundMetalPlate1", 0.1, "soundMetalPlate2", 0.1, "soundMetalPlate3", 0.1, "soundMetalPlate4", 0.05, "soundMetalPlate5", 0.05, "soundMetalPlate6", 0.05, "soundMetalPlate7", 0.1, "soundMetalPlate8", 0.1, "soundMetalPlate9", 0.1, "soundMetalPlate10", 0.1, "soundMetalPlate11", 0.1, "soundMetalPlate12", 0.05};
	};
	
	class Hatchet_Swing_Ammo : Melee
	{
		hit = 3;
	};
	
	class Crowbar_Swing_Ammo : Melee
	{
		hit = 2;
	};
	
	class Machete_Swing_Ammo : Melee
	{
		hit = 3;
	};
	
	class Fishing_Swing_Ammo : Melee
	{
		hit = 1;
	};
	
	class Bat_Swing_Ammo : Melee
	{
		hit = 2;
	};
	
	class BatBarbed_Swing_Ammo : Melee
	{
		hit = 3;
	};
	
	class BatNailed_Swing_Ammo : Melee
	{
		hit = 3;
	};
	
	
	
	
	/* BOLT / ARROW */
	
	class Bolt : BulletBase
	{
		model = "\dayz_weapons\models\bolt";
		soundFly[] = {"", 1, 1};
		hit = 6;
		cartridge = "";
		cost = 5;
		typicalSpeed = 100;
		airFriction = -0.002751;
		caliber = 0.33;
		visibleFire = 1;
		audibleFire = 1;
	};
	
	class WoodenArrow : Bolt
	{
		model = "\dayz_weapons\models\bolt";
		hit = 8;
	};
	
	class tranquiliser_bolt : BulletBase
	{
		hit = 1;  					
		indirectHit = 0;				
 		indirectHitRange = 0;			 			
		maxRange = 100;
		deflecting = 5;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		model = "z\addons\community_crossbow\models\bolt.p3d";
		typicalSpeed=75; //100
		maxSpeed = 75;
		airFriction=-0.007;//0.007
		caliber=0.33000001;
		visibleFire=0;
		audibleFire=0;
	};
	
	class explosive_bolt : GrenadeCore   
	{
		hit=6;
		indirectHit=10;
		indirectHitRange=2.5;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1", db25, 1, 1500};
		muzzleEffect = "BIS_Effects_Rifle";

		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";

		simulation = "shotShell";
		visibleFire = 50;			// how much is visible when this weapon is fired
		audibleFire = 50;
		visibleFireTime = 5;			// how long is it visible
		explosive = 0.5;			// Munition explosive.
		cost = 25;
		deflecting = 5;
		airFriction=-0.02;//0.007
		typicalSpeed=35; //100
		maxSpeed = 35;

		maxRange = 50; //100
		maxRangeProbab = 0.2;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=10;
		tracerStartTime=0.075000003;
		tracerEndTime=5;
	};
	
	
	
	/* BULLET */
	
	//.44 Henry			Winchester 1866
	class B_1866_Slug : BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 200;
		visibleFire = 25;
		audibleFire = 25;
		airFriction = -0.005;
		caliber = 0.5;
	};
	
	//makarov
	class B_9x18_Ball : BulletBase
	{
		airfriction = -0.002751;
		audiblefire = 15;
		caliber = 0.33;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 6;
		typicalspeed = 350;
		visiblefire = 15;
	};
	
	//makarov sd
	class B_9x18_SD : B_9x18_Ball
	{
		airfriction = -0.001893;
		audiblefire = 0.035;
		cost = 5;
		hit = 6;
		typicalspeed = 310;
		visiblefire = 0.035;
		visiblefiretime = 2;
	};
	
	//M1911
	class B_45ACP_Ball : BulletBase
	{
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
	
	//mosin nagant
	/*class Mosin_762 : BulletBase
	{
		hit = 9;
		typicalSpeed = 850;
		airFriction = -0.00055;
		supersonicCrackNear[] = {"",1,1};
		supersonicCrackFar[] = {"",1,1};
		visibleFire=40;
		audibleFire=40;
		visibleFireTime = 0.5;
		tracerColor[] = {255,255,0,0};
		tracerColorR[] = {255,255,0,0};
		cartridge = "FxCartridge_762";
	};*/
	
	
	
	
	/* THROWN */
	
	class ThrownObjects : GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		cost = 1;
		whistleDist = 0;
		fuseDistance = 0;
		initTime = 0;
		explosive = true;
	};
	
	class SodaCan : ThrownObjects
	{
		model = "\dayz_equip\models\soda_coke_e.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_0", 0.5, 1, 40};
	};
	
	class TinCan : ThrownObjects
	{
		model = "\dayz_equip\models\trash_tincan.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_1", 0.5, 1, 30};
	};
	
	class JackDaniels : ThrownObjects
	{
		model = "\dayz_equip\models\bottle_jd.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "GlassSmash";
		soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 60};
	};
	
	class LitObject : GrenadeHand
	{
		displayName = $STR_MAG_ACTION_4;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = false;
		fuseDistance = 0;
		initTime = 0;
	};
	
	class RoadFlare : LitObject
	{
		displayName = $STR_MAG_ACTION_4;
		model = "\dayz_weapons\models\flare_red";
		simulation = "shotSmoke";
		simulationStep = 1;
		soundFly[] = {"dayz_weapons\sounds\roadflare", 0.316228, 1, 60};
		cost = 100;
		explosive = false;
		deflecting = 60;
		explosionTime = 0;
		timeToLive = 300;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "FlareSparks";
	};
	
	class ChemLight : LitObject
	{
		displayName = $STR_MAG_ACTION_5;
		simulation = "shotShell";
		simulationStep = 5;
		soundFly[] = {"", 0, 0};
		cost = 100;
		deflecting = 0;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {0, 0, 0, 0};
		effectsSmoke = "";
		explosionTime = 3600;
		timeToLive = 3600;
	};
	
	class ChemGreen : ChemLight
	{
		model = "\dayz_weapons\models\chem_green";
		lightColor[] = {0, 0.5, 0};
	};
	
	class ChemRed : ChemLight
	{
		model = "\dayz_weapons\models\chem_red";
		lightColor[] = {0.5, 0, 0};
	};
	
	class ChemBlue : ChemLight
	{
		model = "\dayz_weapons\models\chem_blue";
		lightColor[] = {0, 0, 0.5};
	};
	
	
	

	// used for grenade traps
	class GrenadeHandTimedWest;
	class GrenadeHandTimedWest_DZ : GrenadeHandTimedWest
	{
		//explosiontime = 1;
		fusedistance = 0;
	};
	
	//VSS_Vintorez
	class B_9x39_SP5 : BulletBase {
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		typicalSpeed = 300;
		visibleFire = 0.07;
		audibleFire = 0.07;
		visibleFireTime = 2;
		airFriction = -0.001;
		caliber = 0.33;
	};	
	//Epoch Melee
	class Chainsaw_Swing_Ammo : Melee {
		hit = 9;
		simulation = "shotBullet";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 2.5;
		maxRangeProbab = 2;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Sledge_Swing_Ammo : Melee {
		hit = 12;
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
