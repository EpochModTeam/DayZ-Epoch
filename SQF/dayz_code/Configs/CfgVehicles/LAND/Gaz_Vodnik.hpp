class Wheeled_APC : Car
{
class SpeechVariants
{
  class Default
  {
	speechSingular[] = {
	  "veh_WheeledAPC"
	};
	speechPlural[] = {
	  "veh_WheeledAPCs"
	};
  };
  class EN : Default
  {
  };
  class CZ
  {
	speechSingular[] = {
	  "veh_WheeledAPC_CZ"
	};
	speechPlural[] = {
	  "veh_WheeledAPCs_CZ"
	};
  };
  class CZ_Akuzativ
  {
	speechSingular[] = {
	  "veh_WheeledAPC_CZ4P"
	};
	speechPlural[] = {
	  "veh_WheeledAPCs_CZ4P"
	};
  };
  class RU
  {
	speechSingular[] = {
	  "veh_WheeledAPC_RU"
	};
	speechPlural[] = {
	  "veh_WheeledAPCs_RU"
	};
  };
};
TextPlural = "APCs";
TextSingular = "APC";
nameSound = "veh_WheeledAPC";
displayName = "APC";
terrainCoef = 1.5;
preferRoads = 0;
damperSize = 0.2;
damperForce = 1;
damperDamping = 1;
turnCoef = 5;
steerAheadSimul = 0.2;
steerAheadPlan = 0.3;
predictTurnSimul = 0.9;
predictTurnPlan = 1;
brakeDistance = 3;
};
class GAZ_Vodnik_HMG : Wheeled_APC
{
wheelCircumference = 3.541;
scope = 2;
model = "\ca\wheeled2\GAZ39371\GAZ39371_Vodnik_HMG.p3d";
displayname = "Vodnik (BPPU)";
picture = "\Ca\wheeled2\data\UI\Picture_GAZ39371_HMG_CA.paa";
Icon = "\Ca\wheeled2\data\UI\Icon_GAZ39371_HMG_CA.paa";
mapSize = 6.5;
side = 0;
faction = "RU";
vehicleClass = "Armored";
crew = "RU_Soldier";
maxSpeed = 100;
canFloat = 1;
fuelCapacity = 220;
terrainCoef = 2;
class Library
{
  libTextDesc = "GAZ-3937 ""Vodnik"" is a Russian high-mobility multipurpose amphibious vehicle. It can carry up to 10 people and drive at speeds up to 112 km/h (or 5 km when floating).<br/>This is equipped with a heavy machine gun.";
};
armor = 100;
damageResistance = 0.02972;
threat[] = {
  0.5,
  0.5,
  0.5
};
class HitPoints : HitPoints
{
  class HitLFWheel : HitLFWheel
  {
	armor = 0.4;
  };
  class HitLBWheel : HitLBWheel
  {
	armor = 0.4;
  };
  class HitRFWheel : HitRFWheel
  {
	armor = 0.4;
  };
  class HitRBWheel : HitRBWheel
  {
	armor = 0.4;
  };
  class HitFuel
  {
	armor = 1.4;
	material = -1;
	name = "palivo";
	visual = "";
	passThrough = 1;
  };
  class HitGlass1 : HitGlass1
  {
	armor = 0.65;
  };
  class HitGlass2 : HitGlass2
  {
	armor = 0.65;
  };
  class HitGlass3 : HitGlass3
  {
	armor = 0.65;
  };
  class HitGlass4 : HitGlass4
  {
	armor = 0.65;
  };
};
class AnimationSources : AnimationSources
{
  class recoil_source
  {
	source = "reload";
	weapon = "2A42";
  };
};
enableGPS = 1;
weapons[] = {
  "TruckHorn2"
};
magazines[] = {
};
transportSoldier = 2;
DriverAction = "GAZ_Driver";
driverInAction = "GAZ_Driver";
cargoAction[] = {
  "HMMWV_Cargo01",
  "Landrover_Cargo01"
};
viewCargoShadow = 1;
unitInfoType = "UnitInfoShip";
soundGear[] = {
  "",
  5.62341e-005,
  1
};
soundGetIn[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
  1,
  1
};
soundGetOut[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
  1,
  1,
  30
};
soundEngineOnInt[] = {
  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-start-02",
  0.562341,
  1
};
soundEngineOnExt[] = {
  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-start-02",
  0.562341,
  1,
  250
};
soundEngineOffInt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\int\int-AV-stop-02",
  0.562341,
  1
};
soundEngineOffExt[] = {
  "\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-stop-02",
  0.562341,
  1,
  250
};
buildCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_01",
  0.707946,
  1,
  200
};
buildCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_02",
  0.707946,
  1,
  200
};
buildCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_03",
  0.707946,
  1,
  200
};
buildCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_building_04",
  0.707946,
  1,
  200
};
soundBuildingCrash[] = {
  "buildCrash0",
  0.25,
  "buildCrash1",
  0.25,
  "buildCrash2",
  0.25,
  "buildCrash3",
  0.25
};
WoodCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_01",
  0.707946,
  1,
  200
};
WoodCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_02",
  0.707946,
  1,
  200
};
WoodCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_03",
  0.707946,
  1,
  200
};
WoodCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_04",
  0.707946,
  1,
  200
};
WoodCrash4[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_05",
  0.707946,
  1,
  200
};
WoodCrash5[] = {
  "Ca\sounds\Vehicles\Crash\crash_mix_wood_06",
  0.707946,
  1,
  200
};
soundWoodCrash[] = {
  "woodCrash0",
  0.166,
  "woodCrash1",
  0.166,
  "woodCrash2",
  0.166,
  "woodCrash3",
  0.166,
  "woodCrash4",
  0.166,
  "woodCrash5",
  0.166
};
ArmorCrash0[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_01",
  0.707946,
  1,
  200
};
ArmorCrash1[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_02",
  0.707946,
  1,
  200
};
ArmorCrash2[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_03",
  0.707946,
  1,
  200
};
ArmorCrash3[] = {
  "Ca\sounds\Vehicles\Crash\crash_vehicle_04",
  0.707946,
  1,
  200
};
soundArmorCrash[] = {
  "ArmorCrash0",
  0.25,
  "ArmorCrash1",
  0.25,
  "ArmorCrash2",
  0.25,
  "ArmorCrash3",
  0.25
};
class SoundEvents
{
  class AccelerationIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-acce-01",
	  0.562341,
	  1
	};
	limit = "0.15";
	expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
  class AccelerationOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-acce-01",
	  0.562341,
	  1,
	  250
	};
	limit = "0.15";
	expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
  };
};
class Sounds
{
  class Engine
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low",
	  1.77828,
	  1,
	  300
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
  };
  class EngineHighOut
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high",
	  1.77828,
	  0.9,
	  500
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
  };
  class IdleOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02",
	  0.562341,
	  1,
	  230
	};
	frequency = "1";
	volume = "engineOn*camPos*(rpm factor[0.4, 0])";
  };
  class TiresRockOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*rock*(speed factor[2, 20])";
  };
  class TiresSandOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*sand*(speed factor[2, 20])";
  };
  class TiresGrassOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*grass*(speed factor[2, 20])";
  };
  class TiresMudOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*mud*(speed factor[2, 20])";
  };
  class TiresGravelOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*asphalt*(speed factor[2, 20])";
  };
  class NoiseOut
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",
	  0.316228,
	  1,
	  30
	};
	frequency = "1";
	volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
  };
  class EngineLowIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low",
	  1.77828,
	  1
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
  };
  class EngineHighIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high",
	  1.77828,
	  0.9
	};
	frequency = "(randomizer*0.05+0.95)*rpm";
	volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
  };
  class IdleIn
  {
	sound[] = {
	  "\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02",
	  0.316228,
	  1
	};
	frequency = "1";
	volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
  };
  class TiresRockIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*rock*(speed factor[2, 20])";
  };
  class TiresSandIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*sand*(speed factor[2, 20])";
  };
  class TiresGrassIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*grass*(speed factor[2, 20])";
  };
  class TiresMudIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*mud*(speed factor[2, 20])";
  };
  class TiresGravelIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*gravel*(speed factor[2, 20])";
  };
  class TiresAsphaltIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",
	  0.0562341,
	  1
	};
	frequency = "1";
	volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
  };
  class NoiseIn
  {
	sound[] = {
	  "\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",
	  1,
	  1
	};
	frequency = "1";
	volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
  };
  class Movement
  {
	sound = "soundEnviron";
	frequency = "1";
	volume = "0";
  };
};
enableManualFire = 0;
class Turrets
{
  class MainTurret : NewTurret
  {
	outGunnerMayFire = 1;
	minElev = -8;
	maxElev = 40;
	minTurn = -180;
	maxTurn = 180;
	initTurn = 0;
	gunBeg = "muzzle_1";
	gunEnd = "chamber_1";
	memoryPointGun = "machinegun";
	weapons[] = {
	  "2A42",
	  "PKT_veh"
	};
	magazines[] = {
	  "150Rnd_30mmAP_2A42",
	  "150Rnd_30mmHE_2A42",
	  "1500Rnd_762x54_PKT"
	};
	gunnerOutOpticsShowCursor = 0;
	gunnerOpticsShowCursor = 0;
	gunnerAction = "GAZ_Gunner";
	gunnerInAction = "GAZ_Gunner";
	primaryGunner = 1;
	commanding = 2;
	primaryObserver = 1;
	stabilizedInAxes = "StabilizedInAxesNone";
	forceHideGunner = 1;
	gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
	gunnerForceOptics = 1;
	class ViewOptics
	{
	  initAngleX = 5;
	  minAngleX = -30;
	  maxAngleX = 30;
	  initAngleY = 0;
	  minAngleY = 0;
	  maxAngleY = 0;
	  initFov = 0.203;
	  minFov = 0.203;
	  maxFov = 0.203;
	};
	soundServo[] = {
	  "\ca\wheeled\Data\Sound\servo4",
	  0.00562341,
	  1,
	  15
	};
	startEngine = 1;
	class HitPoints
	{
	  class HitTurret
	  {
		armor = 0.8;
		material = -1;
		name = "vez";
		visual = "vez";
		passThrough = 0.5;
	  };
	  class HitGun
	  {
		armor = 0.4;
		material = -1;
		name = "zbran";
		visual = "zbran";
		passThrough = 0.1;
	  };
	};
  };
};
class Reflectors
{
  class Left
  {
	color[] = {
	  0.9,
	  0.8,
	  0.8,
	  1
	};
	ambient[] = {
	  0.1,
	  0.1,
	  0.1,
	  1
	};
	position = "L svetlo";
	direction = "konec L svetla";
	hitpoint = "L svetlo";
	selection = "L svetlo";
	size = 0.5;
	brightness = 0.5;
  };
  class Right
  {
	color[] = {
	  0.9,
	  0.8,
	  0.8,
	  1
	};
	ambient[] = {
	  0.1,
	  0.1,
	  0.1,
	  1
	};
	position = "P svetlo";
	direction = "konec P svetla";
	hitpoint = "P svetlo";
	selection = "P svetlo";
	size = 0.5;
	brightness = 0.5;
  };
};
memoryPointExhaust = "vyfuk_start";
memoryPointExhaustDir = "vyfuk konec";
class Damage
{
  tex[] = {
  };
  mat[] = {
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_Full_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_Full_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_module.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_module_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_module_Full_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_int.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_int.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_int_destruct.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in_Half_D.rvmat",
	"ca\wheeled2\gaz39371\data\gaz39371_vodnik_glass_in_Half_D.rvmat"
  };
};
hiddenSelections[] = {
  "Camo1",
  "Camo2",
  "Camo3"
};
hiddenSelectionsTextures[] = {
  "\ca\wheeled2\gaz39371\data\gaz39371_vodnik_basis_01_co.paa",
  "\ca\wheeled2\gaz39371\data\gaz39371_vodnik_cabin_co.paa",
  "\ca\wheeled2\gaz39371\data\gaz39371_vodnik_mod_out_co.paa"
};
};

class GAZ_Vodnik_DZ : GAZ_Vodnik_HMG
{
model = "\ca\wheeled2\GAZ39371\GAZ39371_Vodnik.p3d";
displayname = "Vodnik (2xPK) DZ";
picture = "\Ca\wheeled2\data\UI\Picture_GAZ39371_CA.paa";
Icon = "\Ca\wheeled2\data\UI\Icon_GAZ39371_CA.paa";
mapSize = 6.5;
transportSoldier = 10;
cargoAction[] = {
  "HMMWV_Cargo01",
  "Landrover_Cargo01",
  "UAZ_Cargo01"
};
class Library
{
  libTextDesc = "GAZ-3937 ""Vodnik"" is a Russian high-mobility multipurpose amphibious vehicle. It can carry up to 10 people and drive at speeds up to 112 km/h (or 5 km when floating).<br/>This is equipped with dual PK 7.62 mm machine gun.";
};
armor = 85;
damageResistance = 0.032;
threat[] = {
  0.5,
  0.1,
  0.2
};
enableManualFire = 0;
class Turrets : Turrets
{
  class MainTurret : MainTurret
  {
	minElev = -25;
	maxElev = 60;
	minTurn = -90;
	maxTurn = 90;
	initElev = 23;
	gunnerName = "front gunner";
	weapons[] = {
	  "PKT"
	};
	magazines[] = {
	  "100Rnd_762x54_PK",
	};
	soundServo[] = {
	};
	viewGunnerInExternal = 1;
	castGunnerShadow = 1;
	gunnerForceOptics = 0;
	gunnerOpticsModel = "\ca\weapons\optika_empty";
	LODTurnedOut = 1000;
	LODTurnedIn = 1000;
	forceHideGunner = 0;
	commanding = 2;
	primaryGunner = 0;
	stabilizedInAxes = "StabilizedInAxesNone";
	primaryObserver = 1;
	class ViewOptics
	{
	  initAngleX = 0;
	  minAngleX = -30;
	  maxAngleX = 30;
	  initAngleY = 0;
	  minAngleY = -100;
	  maxAngleY = 100;
	  initFov = 0.7;
	  minFov = 0.25;
	  maxFov = 1.1;
	};
	class ViewGunner
	{
	  initAngleX = 5;
	  minAngleX = -65;
	  maxAngleX = 85;
	  initAngleY = 0;
	  minAngleY = -150;
	  maxAngleY = 150;
	  initFov = 0.7;
	  minFov = 0.25;
	  maxFov = 1.1;
	};
	startEngine = 0;
  };
  class BackTurret : MainTurret
  {
	body = "turret_2";
	gun = "gun_2";
	weapons[] = {
	  "PKT_2"
	};
	animationSourceBody = "turret_2";
	animationSourceGun = "gun_2";
	selectionFireAnim = "zasleh2";
	proxyIndex = 2;
	gunnerName = "rear gunner";
	forceHideGunner = 0;
	commanding = -2;
	primaryGunner = 1;
	primaryObserver = 0;
	minTurn = 90;
	maxTurn = 270;
	initTurn = 180;
	stabilizedInAxes = "StabilizedInAxesNone";
	gunBeg = "muzzle_2";
	gunEnd = "chamber_2";
	memoryPointGun = "machinegun2";
	memoryPointGunnerOptics = "gunnerview2";
	startEngine = 0;
  };
};
class AnimationSources : AnimationSources
{
  class ReloadAnim
  {
	source = "reload";
	weapon = "PKT";
  };
  class ReloadMagazine
  {
	source = "reloadmagazine";
	weapon = "PKT";
  };
  class Revolving
  {
	source = "revolving";
	weapon = "PKT";
  };
  class ReloadAnim_2
  {
	source = "reload";
	weapon = "PKT_2";
  };
  class ReloadMagazine_2
  {
	source = "reloadmagazine";
	weapon = "PKT_2";
  };
  class Revolving_2
  {
	source = "revolving";
	weapon = "PKT_2";
  };
};
};


class GAZ_Vodnik_DZE : GAZ_Vodnik_HMG
{
model = "\ca\wheeled2\GAZ39371\GAZ39371_Vodnik.p3d";
displayname = "Vodnik (2xPK) AL";
picture = "\Ca\wheeled2\data\UI\Picture_GAZ39371_CA.paa";
Icon = "\Ca\wheeled2\data\UI\Icon_GAZ39371_CA.paa";
mapSize = 6.5;
transportSoldier = 10;
cargoAction[] = {
  "HMMWV_Cargo01",
  "Landrover_Cargo01",
  "UAZ_Cargo01"
};
class Library
{
  libTextDesc = "GAZ-3937 ""Vodnik"" is a Russian high-mobility multipurpose amphibious vehicle. It can carry up to 10 people and drive at speeds up to 112 km/h (or 5 km when floating).<br/>This is equipped with dual PK 7.62 mm machine gun.";
};
armor = 85;
damageResistance = 0.032;
threat[] = {
  0.5,
  0.1,
  0.2
};
enableManualFire = 0;
class Turrets : Turrets
{
  class MainTurret : MainTurret
  {
	minElev = -25;
	maxElev = 60;
	minTurn = -90;
	maxTurn = 90;
	initElev = 23;
	gunnerName = "front gunner";
	weapons[] = {
	  "PKT"
	};
	magazines[] = {};
	soundServo[] = {
	};
	viewGunnerInExternal = 1;
	castGunnerShadow = 1;
	gunnerForceOptics = 0;
	gunnerOpticsModel = "\ca\weapons\optika_empty";
	LODTurnedOut = 1000;
	LODTurnedIn = 1000;
	forceHideGunner = 0;
	commanding = 2;
	primaryGunner = 0;
	stabilizedInAxes = "StabilizedInAxesNone";
	primaryObserver = 1;
	class ViewOptics
	{
	  initAngleX = 0;
	  minAngleX = -30;
	  maxAngleX = 30;
	  initAngleY = 0;
	  minAngleY = -100;
	  maxAngleY = 100;
	  initFov = 0.7;
	  minFov = 0.25;
	  maxFov = 1.1;
	};
	class ViewGunner
	{
	  initAngleX = 5;
	  minAngleX = -65;
	  maxAngleX = 85;
	  initAngleY = 0;
	  minAngleY = -150;
	  maxAngleY = 150;
	  initFov = 0.7;
	  minFov = 0.25;
	  maxFov = 1.1;
	};
	startEngine = 0;
  };
  class BackTurret : MainTurret
  {
	body = "turret_2";
	gun = "gun_2";
	weapons[] = {
	  "PKT_2"
	};
	animationSourceBody = "turret_2";
	animationSourceGun = "gun_2";
	selectionFireAnim = "zasleh2";
	proxyIndex = 2;
	gunnerName = "rear gunner";
	forceHideGunner = 0;
	commanding = -2;
	primaryGunner = 1;
	primaryObserver = 0;
	minTurn = 90;
	maxTurn = 270;
	initTurn = 180;
	stabilizedInAxes = "StabilizedInAxesNone";
	gunBeg = "muzzle_2";
	gunEnd = "chamber_2";
	memoryPointGun = "machinegun2";
	memoryPointGunnerOptics = "gunnerview2";
	startEngine = 0;
  };
};
class AnimationSources : AnimationSources
{
  class ReloadAnim
  {
	source = "reload";
	weapon = "PKT";
  };
  class ReloadMagazine
  {
	source = "reloadmagazine";
	weapon = "PKT";
  };
  class Revolving
  {
	source = "revolving";
	weapon = "PKT";
  };
  class ReloadAnim_2
  {
	source = "reload";
	weapon = "PKT_2";
  };
  class ReloadMagazine_2
  {
	source = "reloadmagazine";
	weapon = "PKT_2";
  };
  class Revolving_2
  {
	source = "revolving";
	weapon = "PKT_2";
  };
};
};