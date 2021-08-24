class CfgMovesAnimalsBase {
	class ManActions;
	class StandBase;
	class DefaultDie;
	class BlendAnims;
};

class CfgMovesBasic; //Fix for server CTD
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class TransAnimBase_noIK;
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr: TransAnimBase_noIK
		{
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr",0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr",0.02};
			actions = "BinocKneelLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			canPullTrigger = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_una";
		};
	};
};

class CfgMovesDogBase
{
	class Default
	{
		actions = "";
		//access = 3;
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

class CfgMovesBloodsucker: CfgMovesMaleSdr
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class StandBase;
	class StatesExt
	{
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			actions="CivilStandActions";
			duty=-1;
			equivalentTo="";
			preload=0;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			showWeaponAim=0;
			disableWeapons=1;
			canPullTrigger=0;
			speed=1e+010;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			looped=1;
			soundEnabled=0;
			soundOverride="";
			soundEdge[]={0.5,1};
			enableBinocular=1;
			leftHandIKBeg=0;
			leftHandIKCurve[]={};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={};
			rightHandIKEnd=0;
			hasCollShapeSafe=0;
			collisionShapeSafe="";
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			headBobStrength=0.21393;
			limitGunMovement=0.1;
			enableOptics=-1;
			ConnectTo[]=
			{
				"ActsPercMstpSnonWpstDnon_suicide1A",
				0.02,
				"ActsPercMstpSnonWpstDnon_suicide2A",
				0.02,
				"AmovPercMstpSnonWnonDnon_sekaniIn",
				0.02,
				"AidlPercMstpSnonWnonDnon",
				0.0099999998,
				"AidlPercMstpSnonWnonDnon_player",
				0.0099999998,
				"AovrPercMstpSnonWnonDf",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_turnL",
				0.02,
				"AmovPercMstpSnonWnonDnon_turnR",
				0.02,
				"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon",
				0.029999999,
				"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon",
				0.02,
				"ActsPercMstpSnonWnonDnon_varStayLeant",
				2,
				"ActsPercMstpSnonWrflDnon_Interrogate01",
				2,
				"ActsPercMstpSnonWrflDnon_Interrogate02",
				2,
				"ActsPsitMstpSnonWnonDnon_InterrogateLeaves",
				2,
				"AmovPercMstpSnonWnonDnon_Scared",
				2,
				"AmovPercMstpSnonWnonDnon_Scared2",
				2,
				"AmovPercMstpSnonWnonDnon_carCheckPush",
				2,
				"AmovPercMstpSnonWnonDnon_carCheckWash",
				2,
				"AmovPercMstpSnonWnonDnon_carCheckWheel",
				2,
				"AmovPercMstpSnonWnonDnon_exerciseKata",
				2,
				"ActsPercMstpSnonWnonDnon_DancingDuoIvan",
				2,
				"ActsPercMstpSnonWnonDnon_DancingDuoStefan",
				2,
				"ActsPercMstpSnonWnonDnon_DancingStefan",
				2,
				"AmovPercMstpSnonWnonDnon_exercisekneeBendA",
				2,
				"AmovPercMstpSnonWnonDnon_exercisekneeBendB",
				2,
				"AmovPercMstpSnonWnonDnon_exercisePushup",
				2,
				"AmovPercMstpSnonWnonDnon_seeWatch",
				2,
				"AmovPercMstpSnonWnonDnon_talking",
				2,
				"ActsPercMstpSnonWpstDnon_sceneBardak01",
				0.1,
				"AmovPercMstpSnonWnonDnon_normalizationTest",
				0.1,
				"AmovPercMstpSnonWnonDnon_SaluteIn",
				0.1,
				"AmovPercMstpSnonWnonDnon_EaseIn",
				0.1,
				"AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground",
				0.1,
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",
				0.1,
				"AwopPercMstpSgthWnonDnon_start",
				0.1,
				"LadderCivilOn",
				1,
				"AswmPercMstpSnonWnonDnon",
				0.30000001,
				"ActsPknlMstpWunaSnonDnon_sceneCrashSite_Villager",
				0.1,
				"AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow",
				0.02,
				"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium",
				0.02,
				"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh",
				0.02,
				"amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon",
				0.02,
				"ActsPercSnonWnonDnon_assembling",
				0.0099999998,
				"ActsPercSnonWnonDnon_carFixing",
				0.0099999998,
				"ActsPercSnonWnonDnon_carFixing2",
				0.0099999998,
				"ActsPercSnonWnonDnon_tableSupport_TalkIn",
				0.0099999998,
				"ActsPercMstpSrasWunaDnon_sceneLopotevBandCaptured_Kostey",
				0.0099999998,
				"AidlPpneMstpSnonWnonDnon_SleepA_layDown",
				0.0099999998,
				"AidlPpneMstpSnonWnonDnon_SleepB_layDown",
				0.0099999998,
				"AidlPpneMstpSnonWnonDnon_SleepC_layDown",
				0.0099999998,
				"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Nikitin",
				0.0099999998,
				"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Bardak",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Homeless",
				0.0099999998,
				"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Lopotev1",
				0.0099999998,
				"ErcUnarm_sitUnarm_L",
				0.0099999998,
				"ErcUnarm_sitUnarm_R",
				0.0099999998,
				"sitTableRfl_listening_onTTractor",
				0.0099999998,
				"sitUnarm_L_idleLoop_onFoiledPallets",
				0.0099999998,
				"sitUnarm_L_idleLoop_onFoiledPallets2",
				0.0099999998,
				"ErcUnarm_sitTable",
				0.0099999998,
				"sitTableUnarm_talkingListening_TowingTractor",
				0.0099999998,
				"UnaErc_UnaErcPoslechVelitele",
				0.0099999998,
				"Csdr_LHD_oprenOzabradli118cm_A",
				0.0099999998,
				"UnaErcVelitelProslov1",
				0.0099999998,
				"FPS_shift",
				0.0099999998,
				"ctsLopoHover_cdf2",
				0.0099999998,
				"ctsLopoHover_lopotev",
				0.0099999998,
				"sitUnarm_L_idleLoop_inUH1Y",
				0.0099999998,
				"AmelPercMstpSnonWnonDnon_amaterUder1",
				0.02,
				"AmelPercMstpSnonWnonDnon_amaterUder2",
				0.02,
				"AmelPercMstpSnonWnonDnon_amaterUder3",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah1",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah2",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah3hard",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah4",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah5hard",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah6hlava",
				0.02,
				"AmelPercMstpSnonWnonDnon_zasah7bricho",
				0.02,
				"NavigationDriverReverse",
				0.0099999998,
				"RepairingKneel",
				0.0099999998,
				"RepairingErc",
				0.0099999998,
				"NavigationHeli",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_initLoop",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_idle70chozeniPoRukou",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_idle68boxing",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_zevl",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic",
				0.02,
				"AmovPercMstpSnonWnonDnon_turnL",
				0.02,
				"AmovPercMstpSnonWnonDnon_turnR",
				0.02,
				"AmovPercMwlkSnonWnonDf",
				0.02,
				"AmovPercMwlkSnonWnonDfl",
				0.02,
				"AmovPercMwlkSnonWnonDl",
				0.02,
				"AmovPercMwlkSnonWnonDbl",
				0.02,
				"AmovPercMwlkSnonWnonDb",
				0.02,
				"AmovPercMwlkSnonWnonDbr",
				0.02,
				"AmovPercMwlkSnonWnonDr",
				0.02,
				"AmovPercMwlkSnonWnonDfr",
				0.02,
				"AmovPercMrunSnonWnonDf",
				0.02,
				"AmovPercMrunSnonWnonDfl",
				0.02,
				"AmovPercMrunSnonWnonDl",
				0.02,
				"AmovPercMrunSnonWnonDbl",
				0.02,
				"AmovPercMrunSnonWnonDb",
				0.02,
				"AmovPercMrunSnonWnonDbr",
				0.02,
				"AmovPercMrunSnonWnonDr",
				0.02,
				"AmovPercMrunSnonWnonDfr",
				0.02,
				"AmovPercMevaSnonWnonDf",
				0.02,
				"AmovPercMevaSnonWnonDfl",
				0.02,
				"AmovPercMevaSnonWnonDfr",
				0.02,
				"AdthPercMstpSnonWnonDnon_1",
				0.0099999998,
				"AdthPercMstpSnonWnonDnon_2",
				0.0099999998,
				"AdthPercMstpSnonWnonDnon_3",
				0.0099999998,
				"ActsPsitMstpSnonWnonDnon_varSittingDrinking",
				0.02,
				"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",
				0.1,
				"ActsPercMstpSnonWnonDnon_talking01",
				0.1,
				"ActsPercMstpSnonWnonDnon_talking02",
				0.1,
				"ActsPercMstpSnonWnonDnon_talking03",
				0.1,
				"ActsPercMstpSnonWnonDnon_talking04",
				0.1,
				"AidlPercSnonWnonDnon_talkBS",
				0.0099999998,
				"sitTableRfl_listening_onTTractor",
				0.0099999998,
				"sitUnarm_L_idleLoop_onFoiledPallets",
				0.0099999998,
				"sitUnarm_L_idleLoop_onFoiledPallets2",
				0.0099999998,
				"sitUnarm_L_idleLoop_inUH1Y",
				0.0099999998
			};
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			actions="CivilRunActionsF";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			soundEdge[]={0.25,0.5,0.75,1};
			duty=0.40000001;
			soundOverride="run";
			soundEnabled=1;
			limitGunMovement=0.1;
			walkcycles=2;
			disableWeapons=1;
			ConnectTo[]=
			{
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMwlkSnonWnonDf",
				0.025,
				"AmovPercMrunSnonWnonDfl",
				0.025,
				"AmovPercMrunSnonWnonDfr",
				0.025,
				"AmovPknlMrunSnonWnonDf",
				0.029999999,
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPercMevaSnonWnonDf",
				0.02
			};
		};
		class AmovPercMwlkSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			actions="CivilWlkActionsF";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			soundEdge[]={0.25,0.5,0.75,1};
			speed=3.21;
			duty=-0.1;
			soundOverride="walk";
			soundEnabled=1;
			walkcycles=2;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDfl",
				0.025,
				"AmovPercMwlkSnonWnonDfr",
				0.025,
				"AmovPercMrunSnonWnonDf",
				0.025,
				"AmovPknlMwlkSnonWnonDf",
				0.029999999,
				"AmovPercMevaSnonWnonDf",
				0.025,
				"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",
				0.1
			};
		};
		class AmovPercMwlkSnonWnonDfl: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsFL";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDf",
				0.025,
				"AmovPercMwlkSnonWnonDl",
				0.025,
				"AmovPercMrunSnonWnonDfl",
				0.025,
				"AmovPknlMwlkSnonWnonDfl",
				0.029999999,
				"AmovPercMevaSnonWnonDfl",
				0.025,
				"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",
				0.1
			};
		};
		class AmovPercMwlkSnonWnonDl: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsL";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDfl",
				0.025,
				"AmovPercMwlkSnonWnonDbl",
				0.025,
				"AmovPercMrunSnonWnonDl",
				0.025,
				"AmovPknlMwlkSnonWnonDl",
				0.029999999
			};
		};
		class AmovPercMwlkSnonWnonDbl: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsBL";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDl",
				0.025,
				"AmovPercMwlkSnonWnonDb",
				0.025,
				"AmovPercMrunSnonWnonDbl",
				0.025,
				"AmovPknlMwlkSnonWnonDbl",
				0.029999999
			};
		};
		class AmovPercMwlkSnonWnonDb: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsB";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDbl",
				0.025,
				"AmovPercMwlkSnonWnonDbr",
				0.025,
				"AmovPercMrunSnonWnonDb",
				0.025,
				"AmovPknlMwlkSnonWnonDb",
				0.029999999
			};
		};
		class AmovPercMwlkSnonWnonDbr: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsBR";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDb",
				0.025,
				"AmovPercMwlkSnonWnonDr",
				0.025,
				"AmovPercMrunSnonWnonDbr",
				0.025,
				"AmovPknlMwlkSnonWnonDbr",
				0.029999999
			};
		};
		class AmovPercMwlkSnonWnonDr: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsR";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDbr",
				0.025,
				"AmovPercMwlkSnonWnonDfr",
				0.15000001,
				"AmovPercMrunSnonWnonDr",
				0.025,
				"AmovPknlMwlkSnonWnonDr",
				0.029999999
			};
		};
		class AmovPercMwlkSnonWnonDfr: AmovPercMwlkSnonWnonDf
		{
			actions="CivilWlkActionsFR";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMwlkSnonWnonDnon_transition",
				0.015,
				"AmovPercMwlkSnonWnonDf",
				0.025,
				"AmovPercMwlkSnonWnonDr",
				0.15000001,
				"AmovPercMrunSnonWnonDfr",
				0.025,
				"AmovPknlMwlkSnonWnonDfr",
				0.029999999,
				"AmovPercMevaSnonWnonDfr",
				0.025,
				"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",
				0.1
			};
		};
		class SprintBaseDf: StandBase
		{
			actions="RifleStandEvasiveActions";
			preload=0;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			soundOverride="sprint";
			duty=0.60000002;
			showWeaponAim=0;
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			limitGunMovement=0;
			relSpeedMin=0.69717097;
			relSpeedMax=1.1;
			enableAutoActions=0;
			visibleSize=1.000121;
			soundEnabled=1;
			aiming="aimingCivil";
			aimingBody="aimingUpCivil";
			headBobStrength=0.154229;
			headBobMode=2;
			ConnectTo[]=
			{
				"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",
				0.02
			};
		};
		class SprintBaseDfl: SprintBaseDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class SprintBaseDfr: SprintBaseDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class SprintCivilBaseDf: SprintBaseDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			visibleSize=1.000121;
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class SprintCivilBaseDfl: SprintCivilBaseDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class SprintCivilBaseDfr: SprintCivilBaseDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			ConnectTo[]={};
			InterpolateTo[]={};
		};
		class AmovPercMevaSnonWnonDf: SprintCivilBaseDf
		{
			actions="CivilEvasiveActions";
			soundOverride="sprint";
			soundEnabled=1;
			speed=3.21;
			canPullTrigger=0;
			duty=0.60000002;
			walkcycles=1;
			ConnectTo[]=
			{
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMwlkSnonWnonDf",
				0.025,
				"AmovPercMrunSnonWnonDf",
				0.02,
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPercMevaSnonWnonDfl",
				0.02,
				"AmovPercMevaSnonWnonDfr",
				0.02
			};
		};
		class AmovPercMevaSnonWnonDfl: SprintCivilBaseDfl
		{
			actions="CivilEvasiveActions";
			soundOverride="sprint";
			soundEnabled=1;
			canPullTrigger=0;
			duty=0.60000002;
			relSpeedMin=0.69717097;
			relSpeedMax=1.1064889;
			walkcycles=2;
			ConnectTo[]=
			{
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMwlkSnonWnonDfl",
				0.025,
				"AmovPercMrunSnonWnonDfl",
				0.02,
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPercMevaSnonWnonDf",
				0.02,
				"AmovPercMevaSnonWnonDfr",
				0.02
			};
		};
		class AmovPercMevaSnonWnonDfr: SprintCivilBaseDfr
		{
			actions="CivilEvasiveActions";
			soundOverride="sprint";
			soundEnabled=1;
			canPullTrigger=0;
			duty=0.60000002;
			relSpeedMin=0.69717097;
			relSpeedMax=1.1064889;
			walkcycles=2;
			ConnectTo[]=
			{
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMwlkSnonWnonDfr",
				0.025,
				"AmovPercMrunSnonWnonDfr",
				0.02,
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPercMevaSnonWnonDf",
				0.02,
				"AmovPercMevaSnonWnonDfl",
				0.02
			};
		};
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
			actions="RifleStandEvasiveActions";
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			relSpeedMin=0.797005;
			soundOverride="sprint";
			soundEnabled=1;
			limitGunMovement=0.1;
			weaponIK=1;
			headBobStrength=0.25373101;
			duty=0.60000002;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPercMrunSlowWrflDf",
				0.025,
				"AmovPercMwlkSrasWrflDf",
				0.025,
				"AmovPercMrunSrasWrflDf",
				0.025,
				"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPknlMevaSrasWrflDf",
				0.025,
				"AmovPercMevaSlowWrflDf",
				0.025,
				"AmovPercMevaSrasWrflDfl",
				0.025,
				"AmovPercMevaSrasWrflDfr",
				0.025,
				"AdthPercMrunSlowWrflDf_6",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A1short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A2short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A3short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A4short",
				0.0099999998
			};
		};
		class AmovPknlMevaSrasWrflDf: AmovPercMevaSrasWrflDf
		{
			actions="RifleKneelEvasiveActions";
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPknlMrunSlowWrflDf",
				0.025,
				"AmovPknlMrunSrasWrflDf",
				0.025,
				"AmovPercMevaSrasWrflDf",
				0.025,
				"AmovPercMevaSlowWrflDf",
				0.025
			};
		};
		class AmovPercMevaSlowWrflDf: AmovPercMevaSrasWrflDf
		{
			actions="RifleStandLowEvasiveActions";
			limitGunMovement=0.1;
			weaponIK=1;
			headBobStrength=0.25373101;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWrflDnon",
				0.025,
				"AmovPercMwlkSlowWrflDf",
				0.025,
				"AmovPercMrunSlowWrflDf",
				0.025,
				"AmovPercMevaSrasWrflDf",
				0.025,
				"AidlPercMevaSrasWrflDf",
				0.0099999998,
				"AmovPercMevaSlowWrflDfl",
				0.025,
				"AmovPercMevaSlowWrflDfr",
				0.025,
				"AdthPercMrunSlowWrflDf_A1short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A2short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A3short",
				0.0099999998,
				"AdthPercMrunSlowWrflDf_A4short",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon: StandBase
		{
			actions="PistolStandActions";
			duty=-1;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			showWeaponAim=1;
			disableWeapons=0;
			disableWeaponsLong=0;
			showHandGun=1;
			speed=1e+010;
			relSpeedMin=0.700001;
			relSpeedMax=1.1;
			aiming="aimingPistol";
			aimingBody="aimingUpPistol";
			looped=1;
			soundEnabled=0;
			enableBinocular=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			collisionShape="ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			weaponIK=2;
			enableOptics=2;
			headBobStrength=0.22388101;
			headBobMode=2;
			ConnectTo[]=
			{
				"AidlPercMstpSrasWpstDnon_player_0S",
				0.02,
				"AovrPercMstpSrasWpstDf",
				0.0099999998,
				"AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon",
				0.0099999998,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.02,
				"PistolMagazineReloadStand",
				0.1,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",
				0.02,
				"ActsPercMstpSnonWpstDnon_sceneBardakPistol01",
				0.1,
				"AmovPercMstpSrasWpstDnon_SaluteIn",
				0.02,
				"AwopPercMstpSgthWpstDnon_Part1",
				0.1,
				"AswmPercMstpSnonWnonDnon",
				0.30000001,
				"AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon",
				0.02,
				"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon",
				0.02,
				"ctsLopoHover_shagarov",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.02,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMrunSrasWpstDbl",
				0.02,
				"AmovPercMrunSrasWpstDb",
				0.02,
				"AmovPercMrunSrasWpstDbr",
				0.02,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AdthPercMstpSrasWpstDnon_1",
				0.0099999998,
				"AdthPercMstpSrasWpstDnon_3",
				0.0099999998,
				"AdthPercMstpSrasWpstDnon_5",
				0.0099999998
			};
		};
		class AmovPpneMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			actions="PistolProneActions";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			showWeaponAim=1;
			visibleSize=0.100123;
			onLandBeg=1;
			onLandEnd=1;
			aiming="aimingPistol";
			aimingBody="aimingUpPistol";
			legs="legsDefault";
			collisionShape="ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			leaning="leaningDefault";
			soundOverride="crawl";
			weaponIK=2;
			limitGunMovement=1;
			ConnectTo[]=
			{
				"AmovPpneMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWpstDnon_turnR",
				0.02,
				"PistolMagazineReloadProne",
				0.1,
				"AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr",
				0.02,
				"AwopPpneMstpSgthWpstDnon_Part1",
				0.1,
				"AidlPpneMstpSrasWpstDnon0S",
				0.1,
				"AidlPpneMstpSrasWpstDnon01",
				0.1,
				"AidlPpneMstpSrasWpstDnon02",
				0.1,
				"AidlPpneMstpSrasWpstDnon03",
				0.1,
				"AmovPpneMstpSrasWpstDnon_healed",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPpneMrunSlowWpstDf",
				0.02,
				"AmovPpneMrunSlowWpstDfl",
				0.02,
				"AmovPpneMrunSlowWpstDl",
				0.02,
				"AmovPpneMrunSlowWpstDbl",
				0.02,
				"AmovPpneMrunSlowWpstDb",
				0.02,
				"AmovPpneMrunSlowWpstDbr",
				0.02,
				"AmovPpneMrunSlowWpstDr",
				0.02,
				"AmovPpneMrunSlowWpstDfr",
				0.02,
				"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",
				0.0099999998,
				"AdthPpneMstpSrasWpstDnon_1",
				0.0099999998,
				"AdthPpneMstpSrasWpstDnon_2",
				0.0099999998,
				"AidlPpneMstpSrasWpstDnon0S",
				0.02,
				"AidlPpneMstpSrasWpstDnon01",
				0.02,
				"AidlPpneMstpSrasWpstDnon02",
				0.02,
				"AidlPpneMstpSrasWpstDnon03",
				0.02
			};
		};
		class AmovPpneMrunSlowWpstDf: AmovPpneMstpSrasWpstDnon
		{
			visibleSize=0.150123;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			soundOverride="crawl";
			duty=0.40000001;
			showWeaponAim=0;
			disableWeapons=1;
			limitGunMovement=0;
			soundEnabled=1;
			legs="wholeBody";
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDl",
				0.025,
				"AmovPpneMrunSlowWpstDfr",
				0.025,
				"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",
				0.0099999998
			};
		};
		class AmovPpneMrunSlowWpstDfl: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDl",
				0.025,
				"AmovPpneMrunSlowWpstDb",
				0.025,
				"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",
				0.0099999998
			};
		};
		class AmovPpneMrunSlowWpstDl: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDf",
				0.025,
				"AmovPpneMrunSlowWpstDfl",
				0.025
			};
		};
		class AmovPpneMrunSlowWpstDbl: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDb",
				0.025,
				"AmovPpneMrunSlowWpstDbr",
				0.025
			};
		};
		class AmovPpneMrunSlowWpstDb: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDfl",
				0.025,
				"AmovPpneMrunSlowWpstDbl",
				0.025
			};
		};
		class AmovPpneMrunSlowWpstDbr: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDbl",
				0.025,
				"AmovPpneMrunSlowWpstDr",
				0.025
			};
		};
		class AmovPpneMrunSlowWpstDr: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDbr",
				0.025,
				"AmovPpneMrunSlowWpstDfr",
				0.025
			};
		};
		class AmovPpneMrunSlowWpstDfr: AmovPpneMrunSlowWpstDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=3.21;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMrunSlowWpstDf",
				0.025,
				"AmovPpneMrunSlowWpstDr",
				0.025,
				"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",
				0.0099999998
			};
		};
		class AmovPercMstpSlowWrflDnon: StandBase
		{
			actions="RifleLowStandActions";
			duty=-1;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			showWeaponAim=0;
			disableWeapons=0;
			disableWeaponsLong=1;
			speed=1e+010;
			relSpeedMin=0.69999999;
			relSpeedMax=1.1;
			looped=1;
			soundEnabled=0;
			enableBinocular=1;
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			aimPrecision=1;
			weaponIK=1;
			headBobMode=2;
			canPullTrigger=0;
			ConnectTo[]=
			{
				"AidlPercMstpSlowWrflDnon_player_0S",
				0.0099999998,
				"AovrPercMstpSlowWrflDf",
				0.0099999998,
				"AmovPercMstpSlowWrflDnon_turnL",
				0.02,
				"AmovPercMstpSlowWrflDnon_turnR",
				0.02,
				"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon",
				0.02,
				"AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",
				0.0099999998,
				"ActsPsitMstpSnonWrflDnon_varSittingDrinking",
				10,
				"AmovPercMstpSlowWrflDnon_ScaredTalking",
				2,
				"AmovPercMstpSlowWrflDnon_talking",
				2,
				"AmovPercMstpSlowWrflDnon_seeWatch",
				2,
				"AmovPercMstpSlowWrflDnon_SaluteIn",
				0.1,
				"AmovPercMstpSrasWrflDnon_SaluteIn",
				0.15000001,
				"AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon",
				0.1,
				"AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon",
				0.1,
				"LadderRifleOn",
				1,
				"AswmPercMstpSnonWnonDnon",
				0.30000001,
				"AidlPercMstpSrasWrflDnon0S",
				0.0099999998,
				"ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper",
				0.1,
				"AidlPercMstpSlowWrflDnon0S",
				0.0099999998,
				"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Ohara",
				0.1,
				"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Sykes",
				0.1,
				"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Rodriguez",
				0.1,
				"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",
				0.1,
				"ActsPercMstpSnonWnonDnon_talking01a",
				0.1,
				"AidlPercSlowWrflDnon_talkCalm",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Rodriguez1",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Ohara1",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneLopotevBandCaptured_Cooper",
				0.1,
				"AidlPercSlowWrflDnon_talkHeated",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Steve",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Simms",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Kostey",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Adamson",
				0.0099999998,
				"ActsPercMstpSgthWmagDnon_sceneNikitinDisloyalty_USflashbang1",
				10,
				"ActsPercMstpSlowWpstDnon_sceneLopotevBandCaptured_Sykes",
				0.0099999998,
				"ErcRflLow_sitRfl_L",
				0.0099999998,
				"ErcRflLow_sitRfl_L2",
				0.0099999998,
				"ErcRflLow_sitRfl_R",
				0.0099999998,
				"ErcRflLow_sitTable",
				0.0099999998,
				"ErcRflLow_sitRfl_L_CARGO",
				0.0099999998,
				"CtsDoktor_Doktor_uder4",
				0.0099999998,
				"CtsDoktor_Doktor_uder5",
				0.0099999998,
				"CtsDoktor_Vojak_vyslechStand2unaerc_reverse",
				0.0099999998,
				"otockaErcRflLow_180leva",
				0.0099999998,
				"ctsLopoHover_cooper",
				0.0099999998,
				"ctsLopoHover_ohara",
				0.0099999998,
				"ctsLopoHover_rodriguez",
				0.0099999998,
				"ctsLopoHover_sykes",
				0.0099999998,
				"sitRfl_R_BidleLoopTest",
				0.0099999998,
				"AmelPercMstpSlowWrflDnon_StrokeGun",
				0.02,
				"ActsPercMstpSlowWrflDnon_listeningOrdersUnderFireShort",
				0.0099999998,
				"AmovPercMstpSlowWrflDnon_ActsPercMstpSlowWrflDr_HideFromFire",
				0.0099999998,
				"AsigPercMstpSlowWrflDnon_GoGo",
				0.0099999998,
				"AsigPercMstpSlowWrflDnon_AmovPercMrunSlowWrflDnon_GoGo",
				0.0099999998,
				"AsigPercMstpSlowWrflDnon_SendMenInAction",
				0.0099999998,
				"AmovPercMstpSnonWnonDnon_zevl",
				0.0099999998,
				"c4coming2cdf_genericstani",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWrflDnon_turnL",
				0.02,
				"AmovPercMstpSlowWrflDnon_turnR",
				0.02,
				"AmovPercMwlkSlowWrflDf",
				0.02,
				"AmovPercMwlkSlowWrflDfl",
				0.02,
				"AmovPercMwlkSlowWrflDl",
				0.02,
				"AmovPercMwlkSlowWrflDbl",
				0.02,
				"AmovPercMwlkSlowWrflDb",
				0.02,
				"AmovPercMwlkSlowWrflDbr",
				0.02,
				"AmovPercMwlkSlowWrflDr",
				0.02,
				"AmovPercMwlkSlowWrflDfr",
				0.02,
				"AmovPercMrunSlowWrflDf",
				0.02,
				"AmovPercMrunSlowWrflDfl",
				0.02,
				"AmovPercMrunSlowWrflDl",
				0.02,
				"AmovPercMrunSlowWrflDbl",
				0.02,
				"AmovPercMrunSlowWrflDb",
				0.02,
				"AmovPercMrunSlowWrflDbr",
				0.02,
				"AmovPercMrunSlowWrflDr",
				0.02,
				"AmovPercMrunSlowWrflDfr",
				0.02,
				"AmovPercMevaSlowWrflDf",
				0.025,
				"AmovPercMevaSlowWrflDfl",
				0.025,
				"AmovPercMevaSlowWrflDfr",
				0.025,
				"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl",
				0.02,
				"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr",
				0.02,
				"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb",
				0.02,
				"AdthPercMstpSlowWrflDnon_1",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_2",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_4",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_8",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_rS0",
				0.0099999998,
				"AwopPercMstpSgthWrflDnon_Start1",
				0.1,
				"AwopPercMstpSgthWrflDnon_Throw1",
				0.1,
				"AwopPercMstpSgthWrflDnon_End1",
				0.1,
				"AwopPercMstpSgthWrflDnon_Throw2",
				0.1,
				"AwopPercMstpSgthWrflDnon_End2",
				0.1,
				"AidlPercMstpSlowWrflDnon01",
				0.02,
				"AidlPercMstpSlowWrflDnon02",
				0.02,
				"AidlPercMstpSlowWrflDnon03",
				0.02,
				"AidlPercMstpSlowWrflDnon04",
				0.02,
				"AidlPercMstpSlowWrflDnon_i01",
				0.02,
				"AidlPercMstpSlowWrflDnon_i02",
				0.02,
				"AidlPercMstpSlowWrflDnon_i03",
				0.02,
				"AidlPercMstpSlowWrflDnon_i04",
				0.02,
				"AidlPercMstpSlowWrflDnon_i05",
				0.02,
				"AidlPercMstpSlowWrflDnon_i06",
				0.02,
				"AidlPercMstpSlowWrflDnon_i07",
				0.02,
				"AidlPercMstpSlowWrflDnon_i08",
				0.02,
				"AidlPercMstpSlowWrflDnon_i09",
				0.02,
				"AidlPercMstpSlowWrflDnon_i10",
				0.02,
				"AidlPercMstpSlowWrflDnon_i11",
				0.02,
				"AidlPercMstpSlowWrflDnon_i12",
				0.02,
				"AidlPercMstpSlowWrflDnon_i13",
				0.02,
				"AidlPercMstpSlowWrflDnon05",
				0.02,
				"AidlPercMstpSlowWrflDnon06",
				0.02,
				"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_16",
				0.0099999998,
				"AdthPercMstpSlowWrflDnon_32",
				0.0099999998,
				"ActsPercMstpSlowWrflDnon_talking_C3BeginBriefing",
				0.1,
				"AidlPercSlowWrflDnon_talkListeningS",
				0.0099999998,
				"AidlPercSnonWnonDnon_talkAS",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon
		{
			visibleSize=0.70012099;
			actions="RifleStandActions";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Perc_Wrfl.p3d";
			showWeaponAim=1;
			disableWeapons=0;
			disableWeaponsLong=0;
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			relSpeedMax=1.1;
			relSpeedMin=0.700001;
			aimPrecision=1;
			weaponIK=1;
			canPullTrigger=1;
			ConnectTo[]=
			{
				"AidlPercMstpSrasWrflDnon_aiming0S",
				0.02,
				"AovrPercMstpSrasWrflDf",
				0.0099999998,
				"AmovPercMwlkSrasWrflDnon_transition",
				0.02,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.02,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.02,
				"WeaponMagazineReloadStand",
				0.1,
				"amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon",
				0.0099999998,
				"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon",
				0.0099999998,
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon",
				0.02,
				"AwopPercMstpSgthWrflDnon_Start2",
				0.1,
				"AswmPercMstpSnonWnonDnon",
				0.30000001,
				"AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon",
				0.02,
				"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",
				0.0099999998,
				"ActsPercMstpSnonWpstDnon_sceneBardakRifle01",
				0.1,
				"adthpercmstpsraswrfldnon_NikitinDead",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_zevl1",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_zevl2",
				0.0099999998,
				"ActsPercMstpSrasWunaDnon_sceneLopotevBandCaptured_Bardak",
				10,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Lopotev",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Miles",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Nameless",
				0.0099999998,
				"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Nikitin",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon_turnL",
				0.02,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.02,
				"AmovPercMwlkSrasWrflDf",
				0.02,
				"AmovPercMwlkSrasWrflDfl",
				0.02,
				"AmovPercMwlkSrasWrflDl",
				0.02,
				"AmovPercMwlkSrasWrflDbl",
				0.02,
				"AmovPercMwlkSrasWrflDb",
				0.02,
				"AmovPercMwlkSrasWrflDbr",
				0.02,
				"AmovPercMwlkSrasWrflDr",
				0.02,
				"AmovPercMwlkSrasWrflDfr",
				0.02,
				"AmovPercMrunSrasWrflDf",
				0.02,
				"AmovPercMrunSrasWrflDfl",
				0.02,
				"AmovPercMrunSrasWrflDl",
				0.02,
				"AmovPercMrunSrasWrflDbl",
				0.02,
				"AmovPercMrunSrasWrflDb",
				0.02,
				"AmovPercMrunSrasWrflDbr",
				0.02,
				"AmovPercMrunSrasWrflDr",
				0.02,
				"AmovPercMrunSrasWrflDfr",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon",
				0.02,
				"AmovPercMevaSrasWrflDf",
				0.02,
				"AmovPercMevaSrasWrflDfl",
				0.02,
				"AmovPercMevaSrasWrflDfr",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr",
				0.02,
				"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb",
				0.02,
				"AdthPercMstpSrasWrflDnon_1",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_2",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_4",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_8",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_rS0",
				0.0099999998,
				"AidlPercMstpSrasWrflDnon0S",
				0.02,
				"AidlPercMstpSrasWrflDnon",
				0.0099999998,
				"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_16",
				0.0099999998,
				"AdthPercMstpSrasWrflDnon_32",
				0.0099999998,
				"adthpercmstpsraswrfldnon_NikitinDead",
				0.0099999998
			};
		};
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			variantsAI[]={};
			actions="RifleProneActions";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			onLandBeg=1;
			onLandEnd=1;
			showWeaponAim=1;
			disableWeapons=0;
			visibleSize=0.100123;
			aimPrecision=0.30000001;
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			leaning="leaningDefault";
			legs="legsDefault";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			limitGunMovement=1;
			soundOverride="crawl";
			weaponIK=1;
			headBobStrength=0.20398;
			ConnectTo[]=
			{
				"AmovPpneMstpSrasWrflDnon_injured",
				0.1,
				"AmovPpneMstpSrasWrflDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWrflDnon_turnR",
				0.02,
				"WeaponMagazineReloadProne",
				0.1,
				"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",
				0.02,
				"AwopPpneMstpSgthWrflDnon_Start",
				0.1,
				"AwopPpneMstpSgthWrflDnon_End",
				0.1,
				"AidlPpneMstpSrasWrflDnon0S",
				0.1,
				"AidlPpneMstpSrasWrflDnon01",
				0.1,
				"AidlPpneMstpSrasWrflDnon02",
				0.1,
				"AidlPpneMstpSrasWrflDnon03",
				0.1,
				"AmovPpneMstpSrasWrflDnon_healed",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWrflDnon_turnL",
				0.02,
				"AmovPpneMstpSrasWrflDnon_turnR",
				0.02,
				"AmovPpneMrunSlowWrflDf",
				0.02,
				"AmovPpneMrunSlowWrflDfl",
				0.02,
				"AmovPpneMrunSlowWrflDl",
				0.02,
				"AmovPpneMrunSlowWrflDbl",
				0.02,
				"AmovPpneMrunSlowWrflDb",
				0.02,
				"AmovPpneMrunSlowWrflDbr",
				0.02,
				"AmovPpneMrunSlowWrflDr",
				0.02,
				"AmovPpneMrunSlowWrflDfr",
				0.02,
				"AmovPpneMsprSlowWrflDf",
				0.02,
				"AmovPpneMsprSlowWrflDbl",
				0.02,
				"AmovPpneMsprSlowWrflDl",
				0.02,
				"AmovPpneMsprSlowWrflDr",
				0.02,
				"AmovPpneMsprSlowWrflDbr",
				0.02,
				"AmovPpneMsprSlowWrflDb",
				0.02,
				"AmovPpneMsprSlowWrflDfl",
				0.02,
				"AmovPpneMsprSlowWrflDfr",
				0.02,
				"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",
				0.050000001,
				"AdthPpneMstpSrasWrflDnon_1",
				0.0099999998,
				"AdthPpneMstpSrasWrflDnon_2",
				0.0099999998,
				"AidlPpneMstpSrasWrflDnon0S",
				0.02,
				"AidlPpneMstpSrasWrflDnon01",
				0.02,
				"AidlPpneMstpSrasWrflDnon02",
				0.02,
				"AidlPpneMstpSrasWrflDnon03",
				0.02
			};
		};
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			visibleSize=0.150123;
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			soundOverride="crawl";
			duty=0.40000001;
			showWeaponAim=0;
			disableWeapons=1;
			soundEnabled=1;
			limitGunMovement=0;
			legs="wholeBody";
			aiming="empty";
			aimingBody="empty";
			leaning="empty";
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			leftHandIKBeg=0;
			leftHandIKCurve[]={};
			leftHandIKEnd=0;
			actions="RifleProneActionsRunF";
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPpneMrunSlowWrflDfl",
				0.025,
				"AmovPpneMrunSlowWrflDfr",
				0.025,
				"AmovPpneMsprSlowWrflDf",
				0.025,
				"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",
				0.050000001,
				"AdthPpneMstpSlowWrflDf_1",
				0.0099999998,
				"AdthPpneMstpSlowWrflDf_2",
				0.0099999998
			};
		};
		class AmovPpneMstpSrasWrflDnon_turnL: AmovPpneMstpSrasWrflDnon
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			soundOverride="crawl";
			ConnectTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
			};
		};
		class AmovPpneMstpSrasWrflDnon_turnR: AmovPpneMstpSrasWrflDnon
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			soundOverride="crawl";
			ConnectTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSrasWrflDnon",
				0.02
			};
		};
		class AmovPpneMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			actions="CivilProneActions";
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			legs="Wholebody";
			onLandBeg=1;
			onLandEnd=1;
			collisionShape="ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			aimingBody="empty";
			disableWeapons=0;
			soundOverride="crawl";
			canPullTrigger=0;
			ConnectTo[]=
			{
				"AmovPpneMstpSnonWnonDnon_turnL",
				0.02,
				"AmovPpneMstpSnonWnonDnon_turnR",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",
				0.050000001,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr",
				0.02,
				"AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground",
				0.1,
				"AwopPpneMstpSgthWnonDnon_start",
				0.1,
				"AidlPpneMstpSnonWnonDnon0S",
				0.1,
				"AidlPpneMstpSnonWnonDnon01",
				0.1,
				"AidlPpneMstpSnonWnonDnon02",
				0.1,
				"AidlPpneMstpSnonWnonDnon03",
				0.1,
				"AmovPpneMstpSnonWnonDnon_healed",
				0.02,
				"AmovPpneMstpSnonWnonDnon_injured",
				0.1
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon_turnL",
				0.02,
				"AmovPpneMstpSnonWnonDnon_turnR",
				0.02,
				"AmovPpneMrunSnonWnonDf",
				0.02,
				"AmovPpneMrunSnonWnonDfl",
				0.02,
				"AmovPpneMrunSnonWnonDl",
				0.02,
				"AmovPpneMrunSnonWnonDbl",
				0.02,
				"AmovPpneMrunSnonWnonDb",
				0.02,
				"AmovPpneMrunSnonWnonDbr",
				0.02,
				"AmovPpneMrunSnonWnonDr",
				0.02,
				"AmovPpneMrunSnonWnonDfr",
				0.02,
				"AdthPpneMstpSnonWnonDnon",
				0.0099999998
			};
		};
		class AmovPpneMrunSnonWnonDf: AmovPpneMstpSnonWnonDnon
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			soundOverride="crawl";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			soundEnabled=1;
			legs="wholeBody";
			aimingBody="empty";
			leaning="empty";
			aiming="empty";
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDfl",
				0.025,
				"AmovPpneMrunSnonWnonDfr",
				0.025,
				"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",
				0.050000001
			};
		};
		class AmovPpneMstpSnonWnonDnon_turnL: AmovPpneMstpSnonWnonDnon
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			soundOverride="crawl";
			canPullTrigger=0;
			ConnectTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02
			};
		};
		class AmovPpneMstpSnonWnonDnon_turnR: AmovPpneMstpSnonWnonDnon
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			soundOverride="crawl";
			canPullTrigger=0;
			ConnectTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02
			};
		};
		class AmovPpneMrunSnonWnonDfl: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDf",
				0.025,
				"AmovPpneMrunSnonWnonDl",
				0.025,
				"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",
				0.050000001
			};
		};
		class AmovPpneMrunSnonWnonDl: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDfl",
				0.025,
				"AmovPpneMrunSnonWnonDbl",
				0.025
			};
		};
		class AmovPpneMrunSnonWnonDbl: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDl",
				0.025,
				"AmovPpneMrunSnonWnonDb",
				0.025
			};
		};
		class AmovPpneMrunSnonWnonDb: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDbl",
				0.025,
				"AmovPpneMrunSnonWnonDbr",
				0.025
			};
		};
		class AmovPpneMrunSnonWnonDbr: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDb",
				0.025,
				"AmovPpneMrunSnonWnonDr",
				0.025
			};
		};
		class AmovPpneMrunSnonWnonDr: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=0.5;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDbr",
				0.025,
				"AmovPpneMrunSnonWnonDfr",
				0.025
			};
		};
		class AmovPpneMrunSnonWnonDfr: AmovPpneMrunSnonWnonDf
		{
			file="\nst\ns_anims\bloodsucker\forward.rtm";
			speed=1.05;
			duty=0.40000001;
			relSpeedMin=0.69717097;
			relSpeedMax=1.096506;
			soundOverride="crawl";
			soundEnabled=1;
			canPullTrigger=0;
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWnonDnon",
				0.02,
				"AmovPpneMrunSnonWnonDf",
				0.025,
				"AmovPpneMrunSnonWnonDr",
				0.025,
				"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",
				0.050000001
			};
		};
	};
};