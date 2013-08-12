class CfgMovesAnimalsBase {
	class ManActions;
	class StandBase;
	class DefaultDie;
	class BlendAnims;
};

class CfgMovesDogBase
{
	class Default
	{
		actions = "";
		access = 3;
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 1;
		enableOptics = 0;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingNo";
		leaning = "aimingNo";
		untiltWeapon = "aimingNo";
		aimingBody = "aimingUpDefault";
		legs = "legsNo";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		collisionShape = "ca\animals2\data\geom\basicColide.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		rightHandIKCurve[] = {};
		leftHandIKCurve[] = {};
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge[] = {0.45};
		soundEnabled = 0;
	};
	class ManActions
	{
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
		GestureBark = " ";
		GestureIdle1 = " ";
		GestureIdle2 = " ";
		GestureSniff = " ";
		GestureHeadL = " ";
		GestureHeadR = " ";
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
};

class CfgMovesDogDZ: CfgMovesDogBase
{
	primaryActionMaps[] = {"DogActions","NoActions"};
	skeletonName = "DogSkeleton";
	gestures = "CfgGesturesDogDZ";
	
	class States
	{
		class Dog_Stop: StandBase
		{
			actions = "DogActions";
			duty = -1;
			file = "\CA\animals2\dogs\data\Anim\dogStop";
			//variantsAI[] = {"Dog_Stop",1};
			//variantAfter[] = {0,2,3};
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			//collisionShape = "Ca\animals2\Dogs\Dog_CollShape.p3d";
			ConnectTo[] = {"Dog_TurnR",0.1,"Dog_StopV2",0.1,"Dog_StopV1",0.1,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
			InterpolateTo[] = {"Dog_TurnR",0.1,"Dog_Die",0.02,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
		};
		class Dog_TurnL: Dog_Stop
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
			speed = 1;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_TurnR: Dog_TurnL
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_StopV1: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogIDLE";
			speed = 2.14;
			variantAfter[] = {5,7,10};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_StopV2: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogBark";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Attack: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogAttack";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Sniff: Dog_Stop
		{
			file = "\dayz_anim\dog\dogGestureSniff";
			speed = 0.3;
			mask = "frontBody";	
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_SitDown: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit1In";
			speed = 1.43;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_LieDown: Dog_Stop
		{
			actions = "DogSit";
			file = "\dayz_anim\dog\dogStandDown";
			speed = 1.428571;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_GetUp: Dog_Stop
		{
			actions = "DogSit";
			file = "\dayz_anim\dog\dogDownStand";
			speed = 1.428571;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Stop",0.1,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
		};
		class Dog_Siting: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit2Idle";
			speed = 1.58;
			variantAfter[] = {1,1,1};
			looped = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_SitUp: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit3Out";
			speed = 1.08;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Stop",0.1,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
		};
		class Dog_Sprint: Dog_Stop
		{
			actions = "DogSprint";
			file = "\CA\animals2\dogs\data\Anim\dogSprint";
			duty = 0.5;
			speed = 4.5;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.02};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.02};
		};
		class Dog_Run: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogRun";
			duty = -0.5;
			speed = 1.8;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02};
		};
		
		class Dog_Walk: Dog_Stop
		{
			duty = -0.7;
			file = "\CA\animals2\dogs\data\Anim\dogWalk";
			speed = 1.3;
			variantAfter[] = {3,10,20};
			ConnectTo[] = {"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
		};
		
		class Dog_Die: DefaultDie
		{
			enableDirectControl = 0;
			actions = "NoActions";
			file = "\CA\animals2\dogs\data\Anim\dogDeath";
			speed = 1.2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {""};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			//collisionShape = "";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
			GestureBark[] = {
				"GestureBark", "Gesture"
			};
			GestureIdle1[] = {
				"GestureIdle1", "Gesture"
			};
			GestureIdle2[] = {
				"GestureIdle2", "Gesture"
			};
			GestureSniff[] = {
				"GestureSniff", "Gesture"
			};
			GestureHeadL[] = {
				"GestureHeadL", "Gesture"
			};
			GestureHeadR[] = {
				"GestureHeadR", "Gesture"
			};
		};
		class DogActions: NoActions
		{
			Stop = "Dog_Stop";
			StopRelaxed = "Dog_Stop";
			TurnL = "Dog_TurnL";
			TurnR = "Dog_TurnR";
			TurnLRelaxed = "Dog_TurnL";
			TurnRRelaxed = "Dog_TurnR";
			Default = "Dog_Stop";
			JumpOff = "Dog_Stop";
			WalkF = "Dog_Walk";
			//WalkF = "Dog_Run";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			Down = "Dog_Stop";
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			PlayerProne = "Dog_Stop";
			PlayerCrouch = "";
			Crouch = "";
			Lying = "Dog_Stop";
			Stand = "Dog_Stop";
			Combat = "Dog_Stop";
			CanNotMove = "Dog_Stop";
			Civil = "Dog_Stop";
			CivilLying = "Dog_Stop";
			FireNotPossible = "Dog_StopV1";
			Die = "Dog_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
		class DogSprint: DogActions
		{
			Die = "Dog_Die";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class DogSit: NoActions
		{
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			Stand = "Dog_Stop";
			WalkF = "Dog_Walk";
			//WalkF = "Dog_Run";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			PlayerCrouch = "Dog_Stop";
			Crouch = "Dog_Stop";
			Die = "Dog_Die";
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";		
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
		frontBody[] = {
			/*
			"spine",0.1,
			"spine1",0.3,
			"spine2",0.6,
			*/
			"neck",1,
			"neck1",1,
			"head",1,
			"Jaw",1,
			"Tongue1",1,
			"Tongue2",1,
			"leftArm",0.5,
			"rightArm",0.5,
			"leftEar",1,
			"rightEar",1
		};
	};
};

class CfgGesturesDogDZ
{
	skeletonName = "DogSkeleton";
	class ManActions
	{
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	class States
	{
		class GestureBark: Default
		{
			file = "\dayz_anim\dog\dogBarkOnce";
			looped = 0;
			speed = 3;
			mask = "barking";
		};
		class GestureIdle1: Default
		{
			file = "\dayz_anim\dog\dogGestureIdle1";
			looped = 0;
			speed = 0.3;
			mask = "idle";			
		};
		class GestureIdle2: Default
		{
			file = "\dayz_anim\dog\dogGestureIdle2";
			looped = 0;
			speed = 0.3;
			mask = "idle";			
		};
		class GestureHeadL: Default
		{
			file = "\dayz_anim\dog\dogGestureHeadL";
			looped = 0;
			speed = 0.3;
			mask = "idle";			
		};
		class GestureHeadR: Default
		{
			file = "\dayz_anim\dog\dogGestureHeadR";
			looped = 0;
			speed = 0.3;
			mask = "idle";			
		};
		class GestureSniff: Default
		{
			file = "\dayz_anim\dog\dogGestureSniff";
			looped = 0;
			speed = 0.3;
			mask = "frontBody";			
		};
	};
	class BlendAnims
	{
		barking[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1,"Tail1",0.3,"Tail2",0.6,"Tail3",1};
		idle[] = {"head",1,"Jaw",1,"Neck1",0.6,"Tongue1",1,"Tongue2",1,"Tail1",0.3,"Tail2",0.6,"Tail3",1,"Spine",0.1,"Spine1",0.2,"Spine2",0.4};
		frontBody[] = {
			"spine",0.1,
			"spine1",0.3,
			"spine2",0.6,
			"neck",1,
			"neck1",1,
			"head",1,
			"Jaw",1,
			"Tongue1",1,
			"Tongue2",1,
			"leftArm",0.5,
			"rightArm",0.5,
			"leftEar",1,
			"rightEar",1
		};
	};
	class Interpolations
	{
	};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};