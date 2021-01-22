class Animal;
class CAAnimalBase: Animal
{
	class Eventhandlers
	{
		local = "_z = _this select 0; if ((_this select 1) && isServer && (({isPlayer _x} count (_z nearEntities ['CAManBase',150])) == 0)) exitWith { _z call sched_co_deleteVehicle; };";
	};
	class UserActions
	{
		class Butcher
		{			
			displayName = $STR_ACTIONS_SELF_04;
			displayNameDefault = $STR_ACTIONS_SELF_04;
			priority = 3;
			radius = 3;
			position = "";
			showWindow = 1;
			onlyForPlayer = 1;
			shortcut = "";
			condition = "(['Butcher',this] call userActionConditions)";
			statement = "this spawn player_butcher;";
		};
	};
};

class Pastor: CAAnimalBase {
	scope = 2;
	side = 1;
	model = "\ca\animals2\Dogs\Pastor\Pastor";
	displayName = "Alsatian";
	moves = "CfgMovesDogDZ";
	gestures = "CfgGesturesDogDZ";
	fsmDanger = "";
	fsmFormation = "";
	agentTasks[] = {};
	woman = 0;
	class EventHandlers{};
	class Wounds
	{
		tex[] = {};
		mat[] = {};
	};
	class VariablesScalar {};
	class VariablesString {};
};

class Fin: CAAnimalBase {
	scope = 2;
	model = "\ca\animals2\Dogs\Fin\Fin";
	displayName = "Fin";
	moves = "CfgMovesDogDZ";
	gestures = "CfgGesturesDogDZ";
	fsmDanger = "";
	fsmFormation = "";
};

class Dog_Zombie1: Pastor {
	displayName = $STR_EPOCH_DOG_ZOMBIE;
};
class Dog_Zombie2: Fin {
	displayName = $STR_EPOCH_DOG_ZOMBIE;
};

class Cow: CAAnimalBase
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
class Cow_Zombie1: Cow01
{
	displayName = $STR_EPOCH_COW_ZOMBIE;
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
};
class Cow_Zombie2: Cow_Zombie1
{
	hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
};

class Cow_Base_EP1 : Cow {};
class Cow01_EP1 : Cow_Base_EP1 {};

class Goat: CAAnimalBase
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
class Goat_Base_EP1 : Goat {};
class Goat01_EP1 : Goat_Base_EP1 {};
class Goat02_EP1 : Goat01_EP1 {};

class Goat_Zombie1 : Goat01_EP1 {
	displayName = $STR_EPOCH_GOAT_ZOMBIE;
};
class Goat_Zombie2 : Goat_Zombie1 {};

class Rabbit: CAAnimalBase
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

class Rabbit_Zombie : Rabbit {
	displayName = $STR_EPOCH_RABBIT_ZOMBIE;
};

class Sheep: CAAnimalBase
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
class Sheep_Base_EP1 : Sheep {};
class Sheep01_EP1 : Sheep_Base_EP1 {};
class Sheep02_EP1 : Sheep01_EP1 {};
class Sheep_Zombie1 : Sheep01_EP1 {
	displayName = $STR_EPOCH_SHEEP_ZOMBIE;
};
class Sheep_Zombie2 : Sheep_Zombie1 {};

class WildBoar: CAAnimalBase
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
class WildBoar_Zombie : WildBoar {
	displayName = $STR_EPOCH_BOAR_ZOMBIE;
};

class Hen : CAAnimalBase {};
class Hen_Zombie : Hen {
	displayName = $STR_EPOCH_CHICKEN_ZOMBIE;
};

class Cock : Hen {};
class Cock_Zombie : Cock {
	displayName = $STR_EPOCH_COCK_ZOMBIE;
};
