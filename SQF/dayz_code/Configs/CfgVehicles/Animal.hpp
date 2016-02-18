
class CAAnimalBase;
class animal_DZ: CAAnimalBase
{
	class Eventhandlers
	{
		local = "_z = _this select 0; if ((!isServer and !isNull _z) and {(side _z != civilian)}) exitWith { PVDZ_sec_atp = [ 'wrong side', player ]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; }; if ((_this select 1) and isServer) exitWith { _z call sched_co_deleteVehicle; };";
	};
};

class Cow: animal_DZ
{
	scope = 0;
	model = "\ca\animals2\cow\cow";
	displayName = "$STR_DN_COW";
	moves = "CfgMovesCow";
	maxTurnAngularVelocity = 30;
	costTurnCoef = 1e-005;
	boneHead = "head";
	bonePrimaryWeapon = "head";
	weaponBone = "head";
	triggerAnim = "";
	wildAnimal = 0;
	humansDetectionRadius = 2;
	runDistanceMax = 10;
	minIdleTime = 20;
	maxIdleTime = 40;
	idleSpecialAnim = "";
	favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
	extCameraPosition[] = {0,0.75,-3.0};
	hiddenSelections[] = {"Camo"};
	class VariablesString
	{
		_sound1 = "cow_01";
		_sound2 = "cow_02";
		_sound3 = "cow_03";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\animals2\Cow\data\Cow.rvmat","Ca\animals2\Cow\data\W1_Cow.rvmat","Ca\animals2\Cow\data\W2_Cow.rvmat"};
	};
};
class Cow01: Cow
{
	scope = 2;
	accuracy = 1000;
	model = "\ca\animals2\cow\cow";
	displayName = "$STR_DN_COW01";
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow_co.PAA"};
};
class Cow02: Cow01
{
	displayName = "$STR_DN_COW02";
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow2_co.PAA"};
};
class Cow03: Cow01
{
	displayName = "$STR_DN_COW03";
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow3_co.PAA"};
};
class Cow04: Cow01
{
	displayName = "$STR_DN_COW04";
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
};

class Goat: animal_DZ
{
	scope = 2;
	model = "\ca\animals2\Goat\Goat";
	displayName = "$STR_DN_GOAT";
	moves = "CfgMovesGoat";
	wildAnimal = 0;
	humansDetectionRadius = 2;
	runDistanceMax = 10;
	minIdleTime = 10;
	maxIdleTime = 15;
	favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
	class VariablesString
	{
		_sound1 = "goat_01";
		_sound2 = "goat_02";
		_sound3 = "goat_03";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\animals2\Goat\data\goat.rvmat","ca\animals2\Goat\data\W1_goat.rvmat","ca\animals2\Goat\data\W2_goat.rvmat"};
	};
};

class Rabbit: animal_DZ
{
	scope = 2;
	side = 3;
	model = "\ca\animals2\rabbit\rabbit";
	displayName = "$STR_DN_RABBIT";
	moves = "CfgMovesRabbit";
	fsmFormation = "";
	fsmDanger = "";
	maxTurnAngularVelocity = 30;
	costTurnCoef = 1e-005;
	boneHead = "head";
	bonePrimaryWeapon = "head";
	weaponBone = "head";
	triggerAnim = "";
	wildAnimal = 1;
	humansDetectionRadius = 50;
	runDistanceMax = 10;
	minIdleTime = 5;
	maxIdleTime = 10;
	favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
	class VariablesString
	{
		_sound1 = "";
		_sound2 = "";
		_sound3 = "";
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"Ca\animals2\Rabbit\data\Rabbit.rvmat","Ca\animals2\Rabbit\data\W1_Rabbit.rvmat","Ca\animals2\Rabbit\data\W2_Rabbit.rvmat"};
	};
};

class Sheep: animal_DZ
{
	scope = 2;
	model = "\ca\animals2\Sheep\Sheep";
	displayName = "$STR_DN_SHEEP";
	moves = "CfgMovesSheep";
	class Wounds
	{
		tex[] = {};
		mat[] = {"ca\animals2\sheep\data\sheep.rvmat","ca\animals2\sheep\data\W1_sheep.rvmat","ca\animals2\sheep\data\W2_sheep.rvmat"};
	};
	wildAnimal = 0;
	humansDetectionRadius = 2;
	runDistanceMax = 10;
	minIdleTime = 15;
	maxIdleTime = 20;
	idleSpecialAnim = "Sheep_Eat";
	favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
	class VariablesString
	{
		_sound1 = "sheep_01";
		_sound2 = "sheep_02";
		_sound3 = "sheep_03";
	};
};


class WildBoar: animal_DZ
{
	scope = 2;
	model = "\ca\animals2\WildBoar\WildBoar";
	displayName = "$STR_DN_WILDBOAR";
	moves = "CfgMovesWildBoar";
	wildAnimal = 1;
	humansDetectionRadius = 100;
	runDistanceMax = 10;
	minIdleTime = 10;
	maxIdleTime = 20;
	favouritezones = "(forest) * (1 - houses) * (1 - meadow) * (1 - sea)";
	class VariablesString
	{
		_sound1 = "";
		_sound2 = "";
		_sound3 = "";
	};
};

