class CfgMovesZombie : CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	
	class Actions : Actions {
		class ZombieCrouchActions : CivilStandActions {
			die = "AdthPknlMstpSnonWnonDnon_2";
		};
	};
	
	class States {
		class TransAnimBase : Default {
			visibleSize = 0.500125;
			looped = 0;
			soundEnabled = 1;
			enableOptics = 0;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			soundEdge[] = {0.01};
			headBobStrength = 0.164179;
			headBobMode = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon : StandBase {
			actions = "CivilStandActions";
			duty = RunDuty;
			file = "\dayz_anim\zmb\zmbStandPose";
			showWeaponAim = 0;
			disableWeapons = 0;
			canPullTrigger = 0;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			headBobStrength = 0.21393;
			limitGunMovement = 0.1;
			enableOptics = -1;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player", 0.01, "AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02, "LadderCivilOn", 1.0, "AswmPercMstpSnonWnonDnon", 0.3};
			InterpolateTo[] = {"ZombieStandingAttack1", 0.01, "ZombieStandingAttack2", 0.01, "ZombieStandingAttack3", 0.01, "ZombieStandingAttack4", 0.01, "ZombieStandingAttack5", 0.01, "ZombieStandingAttack6", 0.01, "ZombieStandingAttack7", 0.01, "ZombieStandingAttack8", 0.01, "ZombieStandingAttack9", 0.01, "ZombieStandingAttack10", 0.01, "ZombieStandingAttack4", 0.01, "AmovPercMrunSnonWnonDf", 0.02, "AmovPercMwlkSnonWnonDf", 0.02, "AmovPercMwlkSnonWnonDl", 0.02, "AmovPercMwlkSnonWnonDb", 0.02, "AmovPercMrunSnonWnonDb", 0.02, "AmovPercMevaSnonWnonDf", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01, "AdthPercMstpSnonWnonDnon_2", 0.01, "AdthPercMstpSnonWnonDnon_3", 0.01, "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1", 0.1};
		};
		
		class AmovPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon {
			actions = "CivilKneelActions";
			duty = WalkDuty;
			file = "\dayz_anim\zmb\zmbKneelPose";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			enableOptics = -1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01, "AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02, "AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02, "amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon_player", 0.01, "AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"ZombieFeed1", 0.02, "ZombieFeed2", 0.02, "ZombieFeed3", 0.02, "ZombieFeed4", 0.02, "ZombieFeed5", 0.02, "ZombieFeed6", 0.01, "ZombieFeed7", 0.01, "ZombieFeed8", 0.01, "ZombieFeed9", 0.01, "AmovPknlMstpSnonWnonDnon_turnL", 0.02, "AmovPknlMstpSnonWnonDnon_turnR", 0.02, "AmovPknlMrunSnonWnonDf", 0.02, "AmovPknlMwlkSnonWnonDf", 0.02, "AmovPknlMwlkSnonWnonDbr", 0.02, "AmovPknlMwlkSnonWnonDbl", 0.02, "AmovPknlMwlkSnonWnonDb", 0.02, "AmovPknlMwlkSnonWnonDl", 0.02, "AmovPknlMwlkSnonWnonDr", 0.02, "AmovPknlMwlkSnonWnonDfr", 0.02, "AmovPknlMwlkSnonWnonDfl", 0.02, "AmovPknlMrunSnonWnonDfl", 0.02, "AmovPknlMrunSnonWnonDl", 0.02, "AmovPknlMrunSnonWnonDbl", 0.02, "AmovPknlMrunSnonWnonDb", 0.02, "AmovPknlMrunSnonWnonDbr", 0.02, "AmovPknlMrunSnonWnonDr", 0.02, "AmovPknlMrunSnonWnonDfr", 0.02, "AdthPknlMstpSnonWnonDnon_1", 0.01, "AdthPknlMstpSnonWnonDnon_2", 0.01, "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2", 0.1};
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf : TransAnimBase {
			actions = "CivilKneelActions";
			file = "\dayz_anim\zmb\zmbStand_zmbKneel";
			speed = 0.6;
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\dayz_anim\zmb\zmbKneel_zmbStand";
			speed = 0.6;
			soundOverride = "standup";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpDefault";
			limitGunMovement = 0.1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMrunSnonWnonDf : AmovPercMstpSnonWnonDnon {
			actions = "CivilRunActionsF";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDf";
			speed = 1.7;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			duty = CrawlDuty;
			soundOverride = "run";
			soundEnabled = 1;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			walkcycles = 3;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDf", 0.025, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPknlMrunSnonWnonDf : AmovPknlMstpSnonWnonDnon {
			file = "\dayz_anim\zmb\zombie_frenziedCrawl3";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 1.3;
			duty = CrawlDuty;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "CivilKneelActionsRunF";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			walkcycles = 2;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDf", 0.03, "AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMwlkSnonWnonDf", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDb : AmovPknlMrunSnonWnonDf {
			file = "\dayz_anim\zmb\zmbKneelWalkB";
			speed = 0.07619;
			actions = "CivilKneelActionsRunB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDb", 0.03, "AmovPknlMwlkSnonWnonDb", 0.025};
		};
		
		class AmovPercMwlkSnonWnonDf : AmovPercMstpSnonWnonDnon {
			actions = "CivilWlkActionsF";
			file = "\dayz_anim\zmb\zombie3_walk";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.2;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			walkcycles = 3;
			ConnectTo[] = {};
			InterpolateTo[] = {"ZombieWalkingDeath", 0.01, "AmovPercMwlkSnonWnonDfr", 0.025, "AmovPercMrunSnonWnonDf", 0.025, "AmovPercMwlkSnonWnonDfl", 0.025, "AmovPknlMwlkSnonWnonDf", 0.03, "AmovPercMevaSnonWnonDf", 0.025, "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart", 0.1};
		};
		
		class AmovPercMwlkSnonWnonDb : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsB";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDbl", 0.025, "AmovPercMwlkSnonWnonDbr", 0.025, "AmovPercMrunSnonWnonDb", 0.025, "AmovPknlMwlkSnonWnonDb", 0.03};
		};
		
		class AmovPknlMwlkSnonWnonDf : AmovPknlMrunSnonWnonDf {
			file = "\dayz_anim\zmb\zmbKneelWalkF";
			speed = 0.1;
			duty = CrawlDuty;
			walkcycles = 3;
			actions = "CivilKneelActionsWlkF";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDf", 0.03, "AmovPknlMrunSnonWnonDf", 0.025, "AmovPknlMwlkSnonWnonDfr", 0.025, "AmovPknlMwlkSnonWnonDfl", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDb : AmovPknlMwlkSnonWnonDf {
			file = "\dayz_anim\zmb\zmbKneelWalkB";
			speed = 0.2;
			actions = "CivilKneelActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDb", 0.03, "AmovPknlMwlkSnonWnonDbr", 0.025, "AmovPknlMwlkSnonWnonDbl", 0.025, "AmovPknlMrunSnonWnonDb", 0.025};
		};
		
		class AidlPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon {
			variantsAI[] = {"AidlPercMstpSnonWnonDnon01", 0.1, "AidlPercMstpSnonWnonDnon02", 0.1, "AidlPercMstpSnonWnonDnon03", 0.1, "AidlPercMstpSnonWnonDnon04", 0.1, "AidlPercMstpSnonWnonDnon05", 0.1, "AidlPercMstpSnonWnonDnon06", 0.1, "AidlPercMstpSnonWnonDnon07", 0.1, "AidlPercMstpSnonWnonDnon08", 0.1, "AidlPercMstpSnonWnonDnon09", 0.1, "AidlPercMstpSnonWnonDnon10", 0.1};
			variantAfter[] = {1, 1, 1};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSnonWnonDnon0S : AmovPercMstpSnonWnonDnon {
			equivalentTo = "AidlPercMstpSnonWnonDnon01";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon01", 0.01, "AidlPercMstpSnonWnonDnon02", 0.01, "AidlPercMstpSnonWnonDnon03", 0.01, "AidlPercMstpSnonWnonDnon04", 0.01, "AidlPercMstpSnonWnonDnon05", 0.01, "AidlPercMstpSnonWnonDnon06", 0.01, "AidlPercMstpSnonWnonDnon07", 0.01, "AidlPercMstpSnonWnonDnon08", 0.01, "AidlPercMstpSnonWnonDnon09", 0.01, "AidlPercMstpSnonWnonDnon10", 0.01};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon01 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandIdleA";
			speed = 0.088757;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon02 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandIdleB";
			speed = 0.107143;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon03 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandIdleC_lookAround";
			speed = 0.089286;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon04 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbBentIdleA";
			speed = 0.172414;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon05 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbBentIdleB_lookAroundSwing";
			speed = 0.09375;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon06 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbBentIdleC_lookAround";
			speed = 0.091463;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon07 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandIdleD_sniffingHyped";
			speed = 0.091463;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon08 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandIdleE_swinging";
			speed = 0.091463;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon09 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandCry1";
			speed = 0.2;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon10 : AidlPercMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbStandCry2";
			speed = 0.2;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 6;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon {
			variantsAI[] = {"AidlPknlMstpSnonWnonDnon01", 0.25, "AidlPknlMstpSnonWnonDnon02", 0.25, "AidlPknlMstpSnonWnonDnon03", 0.25, "AidlPknlMstpSnonWnonDnon04", 0.25};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSnonWnonDnon0S : AidlPknlMstpSnonWnonDnon {
			equivalentTo = "AidlPknlMstpSnonWnonDnon01";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wnon.p3d";
			file = "\dayz_anim\zmb\zmbKneelPose";
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon01", 0.01, "AidlPknlMstpSnonWnonDnon02", 0.01, "AidlPknlMstpSnonWnonDnon03", 0.01, "AidlPknlMstpSnonWnonDnon04", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon01 : AidlPknlMstpSnonWnonDnon0S {
			file = "\dayz_anim\zmb\zmbKneel_idleA";
			speed = 0.04065;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon02 : AidlPknlMstpSnonWnonDnon01 {
			file = "\dayz_anim\zmb\zmbKneel_idleB";
			speed = 0.049505;
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon03 : AidlPknlMstpSnonWnonDnon01 {
			file = "\dayz_anim\zmb\zmbKneel_idleC";
			speed = 0.043732;
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon04 : AidlPknlMstpSnonWnonDnon01 {
			file = "\dayz_anim\zmb\zmbKneel_idleD";
			speed = 0.140187;
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1", 0.01, "AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class CutSceneAnimationBase : AmovPercMstpSnonWnonDnon {
			enableDirectControl = 1;
			showWeaponAim = 0;
			relSpeedMin = 1;
			relSpeedMax = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			head = "headNo";
			enableBinocular = 0;
			headBobMode = 5;
			headBobStrength = -1;
			forceAim = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ZombieStandingAttack : CutSceneAnimationBase {};
		
		class ZombieStandingAttack1 : ZombieStandingAttack {
			file = "\dayz_anim\zmb\zmbStandAttack6";
			speed = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack2 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zmbStandAttack5";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack3 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zmbStandAttack4";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack4 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zmbStandAttack3";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack5 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_67-158";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack6 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_183-274";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack7 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_441-554";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack8 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_570-707";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack9 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_742-833";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieStandingAttack10 : ZombieStandingAttack1 {
			file = "\dayz_anim\zmb\zombie_staticAttack3_855-987";
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class ZombieFeed : CutSceneAnimationBase {
			actions = "ZombieCrouchActions";
		};
		
		class ZombieFeed1 : ZombieFeed {
			file = "\dayz_anim\zmb\zmbKneel_feedA";
			speed = 0.2;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class ZombieFeed2 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zmbKneel_feedB";
		};
		
		class ZombieFeed3 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zmbKneel_feedC";
		};
		
		class ZombieFeed4 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zmbKneel_feedD";
		};
		
		class ZombieFeed5 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zmbKneel_feedE";
		};
		
		class ZombieFeed6 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zombie_kneelFeeding2_112_301";
		};
		
		class ZombieFeed7 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zombie_kneelFeeding2_1054_1275";
		};
		
		class ZombieFeed8 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zombie_kneelFeeding3_109-308";
		};
		
		class ZombieFeed9 : ZombieFeed1 {
			file = "\dayz_anim\zmb\zombie_kneelFeeding3_363-574";
		};
		
		class AinvPknlMstpSnonWrflDnon_medicEnd : HealBaseRfl {
			file = "\ca\anims\characters\data\anim\sdr\inj\healing\ainvpknlmstpsnonwrfldnon_medic_ainvpknlmstpsnonwrfldnon";
			speed = 0.5;
			actions = "RifleKneelTakeActions";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPknlMstpSrasWrflDnon", 0.02, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic : HealBaseRfl {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medicS0";
			speed = "1e+008.0";
			looped = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			interpolationSpeed = 2.5;
			forceAim = 1;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medicEnd", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AinvPknlMstpSnonWrflDr_medic0", 0.1, "AinvPknlMstpSnonWrflDr_medic1", 0.1, "AinvPknlMstpSnonWrflDr_medic2", 0.1, "AinvPknlMstpSnonWrflDr_medic3", 0.1, "AinvPknlMstpSnonWrflDr_medic4", 0.1, "AinvPknlMstpSnonWrflDr_medic5", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AinvPknlMstpSnonWrflDnon_medic0", 0.1, "AinvPknlMstpSnonWrflDnon_medic1", 0.1, "AinvPknlMstpSnonWrflDnon_medic2", 0.1, "AinvPknlMstpSnonWrflDnon_medic3", 0.1, "AinvPknlMstpSnonWrflDnon_medic4", 0.1, "AinvPknlMstpSnonWrflDnon_medic5", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\non\non\AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon.rtm";
			speed = 0.95;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 0;
			interpolationRestart = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			duty = SprintDuty;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon_2", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class DeadState : Default {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1.67;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			canPullTrigger = 1;
			headBobMode = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class Crew : Default {
			actions = "CargoActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Sit\stp\non\non\AmovPsitMstpSnonWnonDnon.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			hasCollShapeSafe = 0;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class BasicDriver : Default {
			actions = "CargoActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_basicGunner.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			interpolationSpeed = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"BasicDriverDying", 1.0};
			InterpolateTo[] = {"BasicDriverDying", 0.1};
		};
		
		class BasicDriverDying : DefaultDie {
			actions = "NoActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			looped = 0;
			soundEnabled = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"BasicDriverDead", 1.0};
			InterpolateTo[] = {};
		};
		
		class BasicDriverDead : BasicDriverDying {
			actions = "DeadActions";
			speed = 1e+010;
			terminal = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class BasicDriverOut : Default {
			actions = "CargoActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_basicGunner.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			interpolationSpeed = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"BasicDriverOutDying", 1.0};
			InterpolateTo[] = {"BasicDriverOutDying", 0.1};
		};
		
		class BasicDriverOutDying : DefaultDie {
			actions = "NoActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			looped = 0;
			soundEnabled = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"BasicDriverOutDead", 1.0};
			InterpolateTo[] = {};
		};
		
		class BasicDriverOutDead : BasicDriverOutDying {
			actions = "DeadActions";
			speed = 1e+010;
			terminal = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end.rtm";
			disableWeapons = 1;
			actions = "PistolStandActions";
			showHandGun = 1;
			speed = 1.4;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AinvPknlMstpSnonWrflDr_medic0S : AinvPknlMstpSnonWrflDnon_medic {
			VariantAfter[] = {5, 5, 5};
			VariantsPlayer[] = {"AinvPknlMstpSnonWrflDnon_medic0", 0.075, "AinvPknlMstpSnonWrflDnon_medic1", 0.075, "AinvPknlMstpSnonWrflDnon_medic2", 0.075, "AinvPknlMstpSnonWrflDnon_medic3", 0.075, "AinvPknlMstpSnonWrflDnon_medic4", 0.075, "AinvPknlMstpSnonWrflDnon_medic5", 0.075, "AinvPknlMstpSnonWrflDr_medic0", 0.075, "AinvPknlMstpSnonWrflDr_medic1", 0.075, "AinvPknlMstpSnonWrflDr_medic2", 0.075, "AinvPknlMstpSnonWrflDr_medic3", 0.075, "AinvPknlMstpSnonWrflDr_medic4", 0.075, "AinvPknlMstpSnonWrflDr_medic5", 0.075, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			equivalentTo = "AinvPknlMstpSnonWrflDr_medic0";
			actions = "HealActionBaseDr";
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0", 0.1, "AinvPknlMstpSnonWrflDr_medic1", 0.1, "AinvPknlMstpSnonWrflDr_medic2", 0.1, "AinvPknlMstpSnonWrflDr_medic3", 0.1, "AinvPknlMstpSnonWrflDr_medic4", 0.1, "AinvPknlMstpSnonWrflDr_medic5", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDr_medic0", 0.1, "AinvPknlMstpSnonWrflDr_medic1", 0.1, "AinvPknlMstpSnonWrflDr_medic2", 0.1, "AinvPknlMstpSnonWrflDr_medic3", 0.1, "AinvPknlMstpSnonWrflDr_medic4", 0.1, "AinvPknlMstpSnonWrflDr_medic5", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic0 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic0";
			speed = 0.11;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic1 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic1";
			speed = 0.21;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic2 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic2";
			speed = 0.13;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic3 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic3";
			speed = 0.22;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic4 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic4";
			speed = 0.22;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDr_medic5 : AinvPknlMstpSnonWrflDr_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDr_medic5";
			speed = 0.11;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDr_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon.rtm";
			disableWeapons = 1;
			actions = "LauncherStandStpActions";
			interpolationRestart = 2;
			canPullTrigger = 0;
			rightHandIKCurve[] = {0.55, 0, 0.6, 1};
			leftHandIKCurve[] = {0.85, 0, 0.95, 1};
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon", 0.02};
		};
		
		class amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end.rtm";
			disableWeapons = 1;
			actions = "LauncherStandStpActions";
			speed = 0.5;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.35, 0, 0.4, 1};
			leftHandIKCurve[] = {0.85, 0, 0.9, 1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			enableOptics = 2;
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon", 0.02};
		};
		
		class BasicSittingGunner_Dead : DefaultDie {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			canPullTrigger = 0;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class BasicSittingGunner : Crew {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_basicGunner.rtm";
			ConnectTo[] = {"BasicSittingGunner_Dead", 1.0};
			InterpolateTo[] = {};
		};
		
		class SprintBaseDf : StandBase {
			actions = "RifleStandEvasiveActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\low\Rfl\AmovPercMsprSlowWrflDf.rtm";
			speed = 1.71429;
			soundOverride = "sprint";
			duty = WalkDuty;
			showWeaponAim = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			limitGunMovement = 0;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.1;
			enableAutoActions = 0;
			visibleSize = 1.00012;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			headBobStrength = 0.154229;
			headBobMode = 2;
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02};
		};
		
		class SprintBaseDfl : SprintBaseDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\low\Rfl\AmovPercMsprSlowWrflDfl.rtm";
			speed = 1.8;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class SprintBaseDfr : SprintBaseDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\low\Rfl\AmovPercMsprSlowWrflDfr.rtm";
			speed = 1.8;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class SprintCivilBaseDf : SprintBaseDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDf.rtm";
			speed = 1.71429;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			visibleSize = 1.00012;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class SprintCivilBaseDfl : SprintCivilBaseDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDfl.rtm";
			speed = 1.71429;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class SprintCivilBaseDfr : SprintCivilBaseDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDfr.rtm";
			speed = 1.71429;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon : StandBase {
			actions = "RifleLowStandActions";
			duty = RunDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\low\rfl\AmovPercMstpSlowWrflDnon.rtm";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 1;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			//aimPrecision = 1;
			weaponIK = 1;
			headBobMode = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S", 0.01, "AovrPercMstpSlowWrflDf", 0.01, "AmovPercMstpSlowWrflDnon_turnL", 0.02, "AmovPercMstpSlowWrflDnon_turnR", 0.02, "AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.01, "ActsPsitMstpSnonWrflDnon_varSittingDrinking", 10.0, "AmovPercMstpSlowWrflDnon_ScaredTalking", 2.0, "AmovPercMstpSlowWrflDnon_talking", 2.0, "AmovPercMstpSlowWrflDnon_seeWatch", 2.0, "AmovPercMstpSlowWrflDnon_SaluteIn", 0.1, "AmovPercMstpSrasWrflDnon_SaluteIn", 0.15, "AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon", 0.1, "AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon", 0.1, "LadderRifleOn", 1.0, "AswmPercMstpSnonWnonDnon", 0.3, "AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_turnL", 0.02, "AmovPercMstpSlowWrflDnon_turnR", 0.02, "AmovPercMwlkSlowWrflDf", 0.02, "AmovPercMwlkSlowWrflDfl", 0.02, "AmovPercMwlkSlowWrflDl", 0.02, "AmovPercMwlkSlowWrflDbl", 0.02, "AmovPercMwlkSlowWrflDb", 0.02, "AmovPercMwlkSlowWrflDbr", 0.02, "AmovPercMwlkSlowWrflDr", 0.02, "AmovPercMwlkSlowWrflDfr", 0.02, "AmovPercMrunSlowWrflDf", 0.02, "AmovPercMrunSlowWrflDfl", 0.02, "AmovPercMrunSlowWrflDl", 0.02, "AmovPercMrunSlowWrflDbl", 0.02, "AmovPercMrunSlowWrflDb", 0.02, "AmovPercMrunSlowWrflDbr", 0.02, "AmovPercMrunSlowWrflDr", 0.02, "AmovPercMrunSlowWrflDfr", 0.02, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMevaSlowWrflDfr", 0.025};
		};
		
		class AidlPercMstpSlowWrflDnon_player_0S : AmovPercMstpSlowWrflDnon {
			variantAfter[] = {2, 3, 5};
			variantsPlayer[] = {"AidlPercMstpSlowWrflDnon_player_idleSteady04", 0.25, "AmovPercMstpSlowWrflDnon_player_idleSteady03", 0.25, "AmovPercMstpSlowWrflDnon_player_idleSteady02", 0.25, "AmovPercMstpSlowWrflDnon_player_idleSteady01", 0.25};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AmovPercMstpSlowWrflDnon_player_idleSteady01", 0.01, "AmovPercMstpSlowWrflDnon_player_idleSteady02", 0.01, "AmovPercMstpSlowWrflDnon_player_idleSteady03", 0.01, "AidlPercMstpSlowWrflDnon_player_idleSteady04", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady01 : AidlPercMstpSlowWrflDnon_player_0S {
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 30.5;
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady01";
			speed = 0.067415;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady02 : AmovPercMstpSlowWrflDnon_player_idleSteady01 {
			speed = 0.042553;
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady02";
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady03 : AmovPercMstpSlowWrflDnon_player_idleSteady01 {
			speed = 0.057143;
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady03";
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_player_idleSteady04 : AmovPercMstpSlowWrflDnon_player_idleSteady01 {
			speed = 0.075949;
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady04";
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class AovrPercMstpSlowWrflDf : AmovPercMstpSlowWrflDnon {
			looped = 0;
			speed = 0.441176;
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\low\rfl\AovrPercMstpSlowWrflDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			duty = SprintDuty;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_turnL : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02};
		};
		
		class AmovPercMstpSlowWrflDnon_turnR : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon {
			visibleSize = 0.700121;
			actions = "RifleStandActions";
			duty = RunDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon.rtm";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wrfl.p3d";
			showWeaponAim = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			relSpeedMax = 1.1;
			relSpeedMin = 0.700001;
			//aimPrecision = 1;
			weaponIK = 1;
			canPullTrigger = 1;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02, "AovrPercMstpSrasWrflDf", 0.01, "AmovPercMwlkSrasWrflDnon_transition", 0.02, "AmovPercMstpSrasWrflDnon_turnL", 0.02, "AmovPercMstpSrasWrflDnon_turnR", 0.02, "WeaponMagazineReloadStand", 0.1, "amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon", 0.01, "AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon", 0.01, "AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon", 0.02, "AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon", 0.02, "AwopPercMstpSgthWrflDnon_Start2", 0.1, "AswmPercMstpSnonWnonDnon", 0.3, "AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon", 0.02, "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1", 0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_turnL", 0.02, "AmovPercMstpSrasWrflDnon_turnR", 0.02, "AmovPercMwlkSrasWrflDf", 0.02, "AmovPercMwlkSrasWrflDfl", 0.02, "AmovPercMwlkSrasWrflDl", 0.02, "AmovPercMwlkSrasWrflDbl", 0.02, "AmovPercMwlkSrasWrflDb", 0.02, "AmovPercMwlkSrasWrflDbr", 0.02, "AmovPercMwlkSrasWrflDr", 0.02, "AmovPercMwlkSrasWrflDfr", 0.02, "AmovPercMrunSrasWrflDf", 0.02, "AmovPercMrunSrasWrflDfl", 0.02, "AmovPercMrunSrasWrflDl", 0.02, "AmovPercMrunSrasWrflDbl", 0.02, "AmovPercMrunSrasWrflDb", 0.02, "AmovPercMrunSrasWrflDbr", 0.02, "AmovPercMrunSrasWrflDr", 0.02, "AmovPercMrunSrasWrflDfr", 0.02, "AmovPercMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfl", 0.02, "AmovPercMevaSrasWrflDfr", 0.02, "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_rS0", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.01, "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_aiming0S : AmovPercMstpSrasWrflDnon {
			variantsPlayer[] = {"AidlPercMstpSrasWrflDnon_aiming01", 0.1666, "AidlPercMstpSrasWrflDnon_aiming02", 0.1666, "AidlPercMstpSrasWrflDnon_idleSteady04", 0.1666, "AidlPercMstpSrasWrflDnon_idleSteady03", 0.1666, "AidlPercMstpSrasWrflDnon_idleSteady02", 0.1666, "AidlPercMstpSrasWrflDnon_idleSteady01"};
			variantAfter[] = {0, 0, 0};
			headBobMode = 0;
			headBobStrength = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AidlPercMstpSrasWrflDnon_aiming01", 0.02, "AidlPercMstpSrasWrflDnon_idleSteady01", 0.02, "AidlPercMstpSrasWrflDnon_idleSteady02", 0.02, "AidlPercMstpSrasWrflDnon_idleSteady03", 0.02, "AidlPercMstpSrasWrflDnon_idleSteady04", 0.02, "AidlPercMstpSrasWrflDnon_aiming02", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_aiming01 : AidlPercMstpSrasWrflDnon_aiming0S {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_aiming01";
			speed = 0.098039;
			looped = 0;
			variantAfter[] = {1, 1.5, 2};
			interpolationSpeed = 200;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady01 : AidlPercMstpSrasWrflDnon_aiming01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_idleSteady01";
			speed = 0.067415;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.02, "AdthPercMstpSrasWrflDnon_2", 0.02, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.02, "AdthPercMstpSrasWrflDnon_32", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady02 : AidlPercMstpSrasWrflDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_idleSteady02";
			speed = 0.042553;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.02, "AdthPercMstpSrasWrflDnon_2", 0.02, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.02, "AdthPercMstpSrasWrflDnon_32", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady03 : AidlPercMstpSrasWrflDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_idleSteady02";
			speed = 0.057143;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.02, "AdthPercMstpSrasWrflDnon_2", 0.02, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.02, "AdthPercMstpSrasWrflDnon_32", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady04 : AidlPercMstpSrasWrflDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_idleSteady01";
			speed = 0.075949;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.02, "AdthPercMstpSrasWrflDnon_2", 0.02, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.02, "AdthPercMstpSrasWrflDnon_32", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_aiming02 : AidlPercMstpSrasWrflDnon_aiming01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\rfl\AidlPercMstpSrasWrflDnon_aiming02";
			speed = 0.066079;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AovrPercMstpSrasWrflDf : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			looped = 0;
			speed = 0.441176;
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\ras\rfl\AovrPercMstpSrasWrflDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			duty = SprintDuty;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon {
			actions = "RifleKneelLowActions";
			duty = WalkDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon.rtm";
			disableWeapons = 0;
			visibleSize = 0.300122;
			disableWeaponsLong = 1;
			enableOptics = 0;
			//aimPrecision = 0.5;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			weaponIK = 1;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon_player_0S", 0.01, "AmovPknlMstpSlowWrflDnon_gear", 0.02, "AmovPknlMstpSlowWrflDnon_diary", 0.02, "AmovPknlMstpSrasWrflDnon_gear", 0.02, "AmovPknlMstpSrasWrflDnon_diary", 0.02, "AmovPercMstpSrasWrflDnon_gear", 0.02, "AmovPercMstpSrasWrflDnon_diary", 0.02, "AmovPercMstpSlowWrflDnon_gear", 0.02, "AmovPercMstpSlowWrflDnon_diary", 0.02, "AidlPknlMstpSlowWrflDnon0S", 0.1, "aidlpknlmstpslowwrfldnon01", 0.1, "aidlpknlmstpslowwrfldnon03", 0.1, "aidlpknlmstpslowwrfldnon02", 0.1, "AidlPknlMstpSlowWrflDnon_i01", 0.1, "AidlPknlMstpSlowWrflDnon_i02", 0.1, "AidlPknlMstpSlowWrflDnon_i03", 0.1, "AidlPknlMstpSlowWrflDnon_i04", 0.1, "AidlPknlMstpSlowWrflDnon_i05", 0.1, "AidlPknlMstpSlowWrflDnon_i06", 0.1, "AidlPknlMstpSlowWrflDnon_i07", 0.1, "AidlPknlMstpSlowWrflDnon_i08", 0.1, "AidlPknlMstpSlowWrflDnon_i09", 0.1, "AidlPknlMstpSlowWrflDnon_i10", 0.1, "AidlPknlMstpSlowWrflDnon_i11", 0.1, "AidlPknlMstpSlowWrflDnon_i12", 0.1, "AidlPknlMstpSlowWrflDnon_i13", 0.1, "AidlPknlMstpSlowWrflDnon_i14", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady01", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady02", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady03", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady04", 0.1, "AidlPknlMstpSlowWrflDnon_i15", 0.1, "AmovPknlMstpSlowWrflDnon_turnL", 0.02, "AmovPknlMstpSlowWrflDnon_turnR", 0.02, "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AidlPknlMstpSlowWrflDnon0S", 0.1, "aidlpknlmstpslowwrfldnon01", 0.1, "aidlpknlmstpslowwrfldnon03", 0.1, "aidlpknlmstpslowwrfldnon02", 0.1, "AidlPknlMstpSlowWrflDnon_i01", 0.1, "AidlPknlMstpSlowWrflDnon_i02", 0.1, "AidlPknlMstpSlowWrflDnon_i03", 0.1, "AidlPknlMstpSlowWrflDnon_i04", 0.1, "AidlPknlMstpSlowWrflDnon_i05", 0.1, "AidlPknlMstpSlowWrflDnon_i06", 0.1, "AidlPknlMstpSlowWrflDnon_i07", 0.1, "AidlPknlMstpSlowWrflDnon_i08", 0.1, "AidlPknlMstpSlowWrflDnon_i09", 0.1, "AidlPknlMstpSlowWrflDnon_i10", 0.1, "AidlPknlMstpSlowWrflDnon_i11", 0.1, "AidlPknlMstpSlowWrflDnon_i12", 0.1, "AidlPknlMstpSlowWrflDnon_i13", 0.1, "AidlPknlMstpSlowWrflDnon_i14", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady01", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady02", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady03", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady04", 0.1, "AidlPknlMstpSlowWrflDnon_i15", 0.1, "AmovPknlMstpSlowWrflDnon_turnL", 0.02, "AmovPknlMstpSlowWrflDnon_turnR", 0.02, "AmovPknlMwlkSlowWrflDf", 0.02, "AmovPknlMwlkSlowWrflDfl", 0.02, "AmovPknlMwlkSlowWrflDl", 0.02, "AmovPknlMwlkSlowWrflDbl", 0.02, "AmovPknlMwlkSlowWrflDb", 0.02, "AmovPknlMwlkSlowWrflDbr", 0.02, "AmovPknlMwlkSlowWrflDr", 0.02, "AmovPknlMwlkSlowWrflDfr", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPknlMrunSlowWrflDf", 0.01, "AmovPknlMrunSlowWrflDfl", 0.02, "AmovPknlMrunSlowWrflDl", 0.02, "AmovPknlMrunSlowWrflDbl", 0.02, "AmovPknlMrunSlowWrflDb", 0.02, "AmovPknlMrunSlowWrflDbr", 0.02, "AmovPknlMrunSlowWrflDr", 0.02, "AmovPknlMrunSlowWrflDfr", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic : HealBaseRfl {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic";
			speed = 0.5;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			forceAim = 1;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSlowWrflDnon_player_0S : AmovPknlMstpSlowWrflDnon {
			variantAfter[] = {0, 0, 0};
			variantsPlayer[] = {"AidlPknlMstpSlowWrflDnon_player_idleSteady01", 0.25, "AidlPknlMstpSlowWrflDnon_player_idleSteady02", 0.25, "AidlPknlMstpSlowWrflDnon_player_idleSteady03", 0.25, "AidlPknlMstpSlowWrflDnon_player_idleSteady04", 0.25};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.01, "AidlPknlMstpSlowWrflDnon_player_idleSteady01", 0.01, "AidlPknlMstpSlowWrflDnon_player_idleSteady02", 0.01, "AidlPknlMstpSlowWrflDnon_player_idleSteady03", 0.01, "AidlPknlMstpSlowWrflDnon_player_idleSteady04", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady01 : AidlPknlMstpSlowWrflDnon_player_0S {
			variantAfter[] = {1, 1, 1};
			interpolationSpeed = 30.5;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady01";
			speed = 0.129311;
			looped = 1;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady02 : AidlPknlMstpSlowWrflDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady02";
			speed = 0.057143;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady03 : AidlPknlMstpSlowWrflDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady03";
			speed = 0.067415;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady04 : AidlPknlMstpSlowWrflDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady04";
			speed = 0.098361;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AmovPknlMstpSlowWrflDnon_gear : AmovPknlMstpSlowWrflDnon {
			actions = "RifleKneelLowActions_gear";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_gear", 0.05, "AmovPknlMstpSnonWnonDnon_gear", 0.05};
		};
		
		class AmovPknlMstpSlowWrflDnon_diary : AmovPknlMstpSlowWrflDnon_gear {
			actions = "RifleKneelLowActions_diary";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSrasWrflDnon_gear : AmovPknlMstpSlowWrflDnon {
			actions = "RifleKneelActions_gear";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_gear", 0.05, "AmovPknlMstpSnonWnonDnon_gear", 0.05};
		};
		
		class AmovPknlMstpSrasWrflDnon_diary : AmovPknlMstpSrasWrflDnon_gear {
			actions = "RifleKneelActions_diary";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_gear : AmovPknlMstpSrasWrflDnon_gear {
			actions = "RifleStandActions_gear";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_gear", 0.05, "AmovPercMstpSnonWnonDnon_gear", 0.05, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon_diary : AmovPercMstpSrasWrflDnon_gear {
			actions = "RifleStandActions_diary";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMstpSlowWrflDnon_gear : AmovPercMstpSrasWrflDnon_gear {
			actions = "RifleLowStandActions_gear";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_gear", 0.05, "AmovPercMstpSnonWnonDnon_gear", 0.05};
		};
		
		class AmovPercMstpSlowWrflDnon_diary : AmovPercMstpSlowWrflDnon_gear {
			actions = "RifleLowStandActions_diary";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSlowWrflDnon0S : AmovPknlMstpSlowWrflDnon {
			variantAfter[] = {0, 0, 0};
			variantsAI[] = {"AidlPknlMstpSlowWrflDnon01", 0.01, "AidlPknlMstpSlowWrflDnon02", 0.01, "AidlPknlMstpSlowWrflDnon03", 0.01, "AidlPknlMstpSlowWrflDnon_i01", 0.01, "AidlPknlMstpSlowWrflDnon_i02", 0.01, "AidlPknlMstpSlowWrflDnon_i03", 0.01, "AidlPknlMstpSlowWrflDnon_i04", 0.01, "AidlPknlMstpSlowWrflDnon_i05", 0.01, "AidlPknlMstpSlowWrflDnon_i06", 0.01, "AidlPknlMstpSlowWrflDnon_i07", 0.01, "AidlPknlMstpSlowWrflDnon_i08", 0.01, "AidlPknlMstpSlowWrflDnon_i09", 0.01, "AidlPknlMstpSlowWrflDnon_i10", 0.01, "AidlPknlMstpSlowWrflDnon_i11", 0.01, "AidlPknlMstpSlowWrflDnon_i12", 0.01, "AidlPknlMstpSlowWrflDnon_i13", 0.01, "AidlPknlMstpSlowWrflDnon_i14", 0.01, "AidlPknlMstpSlowWrflDnon_i15", 0.01, "AidlPknlMstpSlowWrflDnon_idleSteady01", 0.205, "AidlPknlMstpSlowWrflDnon_idleSteady02", 0.205, "AidlPknlMstpSlowWrflDnon_idleSteady03", 0.205, "AidlPknlMstpSlowWrflDnon_idleSteady04", 0.205};
			equivalentTo = "aidlpknlmstpslowwrfldnon01";
			actions = "RifleKneelActions";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "aidlpknlmstpslowwrfldnon01", 0.01, "aidlpknlmstpslowwrfldnon03", 0.01, "aidlpknlmstpslowwrfldnon02", 0.01, "AidlPknlMstpSlowWrflDnon_i01", 0.01, "AidlPknlMstpSlowWrflDnon_i02", 0.01, "AidlPknlMstpSlowWrflDnon_i03", 0.01, "AidlPknlMstpSlowWrflDnon_i04", 0.01, "AidlPknlMstpSlowWrflDnon_i05", 0.01, "AidlPknlMstpSlowWrflDnon_i06", 0.01, "AidlPknlMstpSlowWrflDnon_i07", 0.01, "AidlPknlMstpSlowWrflDnon_i08", 0.01, "AidlPknlMstpSlowWrflDnon_i09", 0.01, "AidlPknlMstpSlowWrflDnon_i10", 0.01, "AidlPknlMstpSlowWrflDnon_i11", 0.01, "AidlPknlMstpSlowWrflDnon_i12", 0.01, "AidlPknlMstpSlowWrflDnon_i13", 0.01, "AidlPknlMstpSlowWrflDnon_i14", 0.01, "AidlPknlMstpSlowWrflDnon_idleSteady01", 0.01, "AidlPknlMstpSlowWrflDnon_idleSteady02", 0.01, "AidlPknlMstpSlowWrflDnon_idleSteady03", 0.01, "AidlPknlMstpSlowWrflDnon_idleSteady04", 0.01, "AidlPknlMstpSlowWrflDnon_i15", 0.01, "AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class aidlpknlmstpslowwrfldnon01 : AidlPknlMstpSlowWrflDnon0S {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\rfl\aidlpknlmstpslowwrfldnon01.rtm";
			variantAfter[] = {1, 1, 1};
			speed = 0.3;
			enableOptics = 0;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class aidlpknlmstpslowwrfldnon03 : aidlpknlmstpslowwrfldnon01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\rfl\aidlpknlmstpslowwrfldnon03.rtm";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class aidlpknlmstpslowwrfldnon02 : aidlpknlmstpslowwrfldnon01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\rfl\aidlpknlmstpslowwrfldnon02.rtm";
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i01 : aidlpknlmstpslowwrfldnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle01ZavrteniSe1";
			speed = 0.258621;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i02 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle02checkRifle1.rtm";
			speed = 0.12931;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i03 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle03checkRifle2";
			speed = 0.137615;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i04 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle04ZavrteniSe2";
			speed = 0.147783;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i05 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle05ZavrteniSe3";
			speed = 0.181818;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i06 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle06ZavrteniSe4";
			speed = 0.10989;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i07 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle07ZavrteniSe5";
			speed = 0.17341;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i08 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle08checkRifle3";
			speed = 0.054446;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i09 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle09";
			speed = 0.212766;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i10 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle10rozhlizeni1";
			speed = 0.04329;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i11 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle11rozhlizeni2";
			speed = 0.10101;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i12 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle12";
			speed = 0.110294;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i13 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle13";
			speed = 0.135747;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_i14 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle14";
			speed = 0.123457;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady01 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady01";
			speed = 0.164384;
			interpolationSpeed = 30;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.1, "AdthPknlMstpSrasWrflDnon_2", 0.1};
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady02 : AidlPknlMstpSlowWrflDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady02";
			speed = 0.114286;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.1, "AdthPknlMstpSrasWrflDnon_2", 0.1};
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady03 : AidlPknlMstpSlowWrflDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady03";
			speed = 0.134831;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.1, "AdthPknlMstpSrasWrflDnon_2", 0.1};
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady04 : AidlPknlMstpSlowWrflDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idleSteady04";
			speed = 0.196721;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.1, "AdthPknlMstpSrasWrflDnon_2", 0.1};
		};
		
		class AidlPknlMstpSlowWrflDnon_i15 : AidlPknlMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\low\rfl\AidlPknlMstpSlowWrflDnon_idle15rozhlizeni3";
			speed = 0.229008;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AidlPknlMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.1, "AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDnon_transition : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWrflDnon_transition";
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMwlkSrasWrflDf", 0.015, "AmovPercMwlkSrasWrflDl", 0.015, "AmovPercMwlkSrasWrflDb", 0.015, "AmovPercMwlkSrasWrflDr", 0.015};
		};
		
		class AmovPercMstpSrasWrflDnon_turnL : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon_turnR : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_turnR : AmovPercMstpSrasWrflDnon_turnR {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AIturn90R";
			actions = "RifleStandActions_Idle";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_turnL : AmovPercMstpSrasWrflDnon_turnL {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AIturn90L";
			actions = "RifleStandActions_Idle";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPknlMstpSlowWrflDnon_turnL : AmovPknlMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
		};
		
		class AmovPknlMstpSlowWrflDnon_turnR : AmovPknlMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWrflDnon : AmovPknlMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon.rtm";
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wrfl.p3d";
			showWeaponAim = 1;
			enableOptics = 1;
			visibleSize = 0.300122;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			actions = "RifleKneelActions";
			disableWeapons = 0;
			weaponIK = 1;
			disableWeaponsLong = 0;
			canPullTrigger = 1;
			ConnectTo[] = {"AidlPknlMstpSlowWrflDnon0S", 0.1, "AidlPknlMstpSrasWrflDnon_player_0S", 0.1, "AmovPknlMwlkSrasWrflDnon_transition", 0.02, "AmovPknlMstpSrasWrflDnon_turnL", 0.02, "AmovPknlMstpSrasWrflDnon_turnR", 0.02, "WeaponMagazineReloadKneel", 0.1, "amovpknlmstpsraswrfldnon_amovpknlmstpslowwrfldnon", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon", 0.02, "AwopPknlMstpSgthWrflDnon_Start", 0.1, "AwopPknlMstpSgthWrflDnon_End", 0.1, "AidlPknlMstpSrasWrflDnon0S", 0.1, "AidlPknlMstpSrasWrflDnon01", 0.1, "AidlPknlMstpSrasWrflDnon02", 0.1, "AidlPknlMstpSrasWrflDnon03", 0.1, "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon", 0.02};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "aidlpknlmstpslowwrfldnon01", 0.1, "aidlpknlmstpslowwrfldnon03", 0.1, "aidlpknlmstpslowwrfldnon02", 0.1, "AidlPknlMstpSlowWrflDnon_i01", 0.01, "AidlPknlMstpSlowWrflDnon_i02", 0.1, "AidlPknlMstpSlowWrflDnon_i03", 0.1, "AidlPknlMstpSlowWrflDnon_i04", 0.1, "AidlPknlMstpSlowWrflDnon_i05", 0.1, "AidlPknlMstpSlowWrflDnon_i06", 0.1, "AidlPknlMstpSlowWrflDnon_i07", 0.1, "AidlPknlMstpSlowWrflDnon_i08", 0.1, "AidlPknlMstpSlowWrflDnon_i09", 0.1, "AidlPknlMstpSlowWrflDnon_i10", 0.1, "AidlPknlMstpSlowWrflDnon_i11", 0.1, "AidlPknlMstpSlowWrflDnon_i12", 0.01, "AidlPknlMstpSlowWrflDnon_i13", 0.1, "AidlPknlMstpSlowWrflDnon_i14", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady01", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady02", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady03", 0.1, "AidlPknlMstpSlowWrflDnon_idleSteady04", 0.1, "AidlPknlMstpSlowWrflDnon_i15", 0.1, "AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf", 0.01, "AmovPknlMstpSrasWrflDnon_turnL", 0.02, "AmovPknlMstpSrasWrflDnon_turnR", 0.02, "AmovPknlMwlkSrasWrflDf", 0.02, "AmovPknlMwlkSrasWrflDfl", 0.02, "AmovPknlMwlkSrasWrflDl", 0.02, "AmovPknlMwlkSrasWrflDbl", 0.02, "AmovPknlMwlkSrasWrflDb", 0.02, "AmovPknlMwlkSrasWrflDbr", 0.02, "AmovPknlMwlkSrasWrflDr", 0.02, "AmovPknlMwlkSrasWrflDfr", 0.02, "AmovPknlMrunSrasWrflDfl", 0.02, "AmovPknlMrunSrasWrflDl", 0.02, "AmovPknlMrunSrasWrflDbl", 0.02, "AmovPknlMrunSrasWrflDb", 0.02, "AmovPknlMrunSrasWrflDbr", 0.02, "AmovPknlMrunSrasWrflDr", 0.02, "AmovPknlMrunSrasWrflDfr", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDl", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDr", 0.02, "AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01, "AidlPknlMstpSrasWrflDnon0S", 0.02, "AidlPknlMstpSrasWrflDnon01", 0.02, "AidlPknlMstpSrasWrflDnon02", 0.02, "AidlPknlMstpSrasWrflDnon03", 0.02, "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2", 0.2};
		};
		
		class AidlPknlMstpSrasWrflDnon_player_0S : AmovPknlMstpSrasWrflDnon {
			variantsPlayer[] = {"AidlPknlMstpSrasWrflDnon_player_idleSteady01", 0.25, "AidlPknlMstpSrasWrflDnon_player_idleSteady02", 0.25, "AidlPknlMstpSrasWrflDnon_player_idleSteady03", 0.25, "AidlPknlMstpSrasWrflDnon_player_idleSteady04", 0.25};
			variantAfter[] = {0, 0, 0};
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon.rtm";
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AidlPknlMstpSrasWrflDnon_player_idleSteady01", 0.1, "AidlPknlMstpSrasWrflDnon_player_idleSteady03", 0.1, "AidlPknlMstpSrasWrflDnon_player_idleSteady02", 0.1, "AidlPknlMstpSrasWrflDnon_player_idleSteady04", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady01 : AidlPknlMstpSrasWrflDnon_player_0S {
			variantAfter[] = {1, 1, 1};
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon_idleSteady01";
			speed = 0.129311;
			interpolationSpeed = 30;
			looped = 1;
			ConnectTo[] = {"AidlPknlMstpSrasWrflDnon_player_0S", 0.1};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady03 : AidlPknlMstpSrasWrflDnon_player_idleSteady01 {
			speed = 0.067415;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon_idleSteady03";
			ConnectTo[] = {"AidlPknlMstpSrasWrflDnon_player_0S", 0.1};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady02 : AidlPknlMstpSrasWrflDnon_player_idleSteady01 {
			speed = 0.057143;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon_idleSteady02";
			ConnectTo[] = {"AidlPknlMstpSrasWrflDnon_player_0S", 0.1};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady04 : AidlPknlMstpSrasWrflDnon_player_idleSteady01 {
			speed = 0.098361;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon_idleSteady04";
			ConnectTo[] = {"AidlPknlMstpSrasWrflDnon_player_0S", 0.1};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf : AmovPknlMstpSrasWrflDnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\run\low\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf";
			speed = 1.2;
			looped = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPknlMrunSrasWrflDf", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMwlkSrasWrflDnon_transition : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\wlk\ras\rfl\AmovPknlMwlkSrasWrflDnon_transition";
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMwlkSrasWrflDf", 0.015, "AmovPknlMwlkSrasWrflDl", 0.015, "AmovPknlMwlkSrasWrflDb", 0.015, "AmovPknlMwlkSrasWrflDr", 0.015};
		};
		
		class AmovPknlMstpSrasWrflDnon_turnL : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWrflDnon_turnR : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPpneMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleProneActions";
			duty = RestDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon.rtm";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			showWeaponAim = 1;
			disableWeapons = 0;
			visibleSize = 0.100123;
			//aimPrecision = 0.3;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			leaning = "leaningDefault";
			legs = "legsDefault";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			limitGunMovement = 1;
			soundOverride = "crawl";
			weaponIK = 1;
			headBobStrength = 0.20398;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1, "AmovPpneMstpSrasWrflDnon_turnL", 0.02, "AmovPpneMstpSrasWrflDnon_turnR", 0.02, "WeaponMagazineReloadProne", 0.1, "AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr", 0.02, "AwopPpneMstpSgthWrflDnon_Start", 0.1, "AwopPpneMstpSgthWrflDnon_End", 0.1, "AidlPpneMstpSrasWrflDnon0S", 0.1, "AidlPpneMstpSrasWrflDnon01", 0.1, "AidlPpneMstpSrasWrflDnon02", 0.1, "AidlPpneMstpSrasWrflDnon03", 0.1, "AmovPpneMstpSrasWrflDnon_healed", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_turnL", 0.02, "AmovPpneMstpSrasWrflDnon_turnR", 0.02, "AmovPpneMrunSlowWrflDf", 0.02, "AmovPpneMrunSlowWrflDfl", 0.02, "AmovPpneMrunSlowWrflDl", 0.02, "AmovPpneMrunSlowWrflDbl", 0.02, "AmovPpneMrunSlowWrflDb", 0.02, "AmovPpneMrunSlowWrflDbr", 0.02, "AmovPpneMrunSlowWrflDr", 0.02, "AmovPpneMrunSlowWrflDfr", 0.02, "AmovPpneMsprSlowWrflDf", 0.02, "AmovPpneMsprSlowWrflDbl", 0.02, "AmovPpneMsprSlowWrflDl", 0.02, "AmovPpneMsprSlowWrflDr", 0.02, "AmovPpneMsprSlowWrflDbr", 0.02, "AmovPpneMsprSlowWrflDb", 0.02, "AmovPpneMsprSlowWrflDfl", 0.02, "AmovPpneMsprSlowWrflDfr", 0.02, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSrasWrflDnon_1", 0.01, "AdthPpneMstpSrasWrflDnon_2", 0.01, "AidlPpneMstpSrasWrflDnon0S", 0.02, "AidlPpneMstpSrasWrflDnon01", 0.02, "AidlPpneMstpSrasWrflDnon02", 0.02, "AidlPpneMstpSrasWrflDnon03", 0.02};
		};
		
		class adthpercmstpsraswlnrdnon_1 : DefaultDie {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\lnr\adthpercmstpsraswlnrdnon_d.rtm";
			speed = 0.7;
			actions = "DeadActions";
			looped = 0;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsraswlnrdnon_2 : adthpercmstpsraswlnrdnon_1 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\lnr\adthpercmstpsraswlnrdnon_h.rtm";
			looped = 0;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSrasWrflDnon_injured : AgonyBaseRfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			showWeaponAim = 1;
			disableWeapons = 0;
			visibleSize = 0.5;
			//aimPrecision = 2;
			aiming = "aimingLying";
			aimingBody = "aimingUpLying";
			leaning = "aimingLying";
			legs = "legsLyingAiming";
			interpolationSpeed = 2;
			disableWeaponsLong = 0;
			soundOverride = "crawl";
			speed = 1e+010;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.5, "AinjPpneMstpSnonWrflDnon_rolltoback", 0.02};
			InterpolateTo[] = {"AmovPpneMsprSlowWrflDf_injured", 0.1};
		};
		
		class AmovPpneMstpSrasWrflDnon_injuredHealed : AmovPpneMstpSrasWrflDnon {
			actions = "RifleProneActions_injured";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_healed";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			showWeaponAim = 0;
			disableWeapons = 1;
			speed = 0.17;
			visibleSize = 0.5;
			aiming = "aimingLying";
			aimingBody = "aimingUpLying";
			leaning = "aimingLying";
			legs = "legsLyingAiming";
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injuredHealed", 0.0};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSrasWrflDnon_turnL : AmovPpneMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AIturn90L";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPpneMstpSrasWrflDnon_turnR : AmovPpneMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AIturn90R";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon : StandBase {
			actions = "PistolStandActions";
			duty = RunDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon.rtm";
			showWeaponAim = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			showHandGun = 1;
			speed = 1e+010;
			relSpeedMin = 0.700001;
			relSpeedMax = 1.1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			weaponIK = 2;
			enableOptics = 2;
			headBobStrength = 0.223881;
			headBobMode = 2;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon_player_0S", 0.02, "AovrPercMstpSrasWpstDf", 0.01, "AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon", 0.01, "AmovPercMstpSrasWpstDnon_turnL", 0.02, "AmovPercMstpSrasWpstDnon_turnR", 0.02, "PistolMagazineReloadStand", 0.1, "AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon", 0.02, "AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon", 0.02, "ActsPercMstpSnonWpstDnon_sceneBardakPistol01", 0.1, "AmovPercMstpSrasWpstDnon_SaluteIn", 0.02, "AwopPercMstpSgthWpstDnon_Part1", 0.1, "AswmPercMstpSnonWnonDnon", 0.3, "AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon", 0.02, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1", 0.01, "amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_turnL", 0.02, "AmovPercMstpSrasWpstDnon_turnR", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMwlkSrasWpstDfl", 0.02, "AmovPercMwlkSrasWpstDl", 0.02, "AmovPercMwlkSrasWpstDbl", 0.02, "AmovPercMwlkSrasWpstDb", 0.02, "AmovPercMwlkSrasWpstDbr", 0.02, "AmovPercMwlkSrasWpstDr", 0.02, "AmovPercMwlkSrasWpstDfr", 0.02, "AmovPercMrunSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDfl", 0.02, "AmovPercMrunSrasWpstDl", 0.02, "AmovPercMrunSrasWpstDbl", 0.02, "AmovPercMrunSrasWpstDb", 0.02, "AmovPercMrunSrasWpstDbr", 0.02, "AmovPercMrunSrasWpstDr", 0.02, "AmovPercMrunSrasWpstDfr", 0.02, "AmovPercMevaSrasWpstDf", 0.02, "AmovPercMevaSrasWpstDfl", 0.02, "AmovPercMevaSrasWpstDfr", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01, "AdthPercMstpSrasWpstDnon_3", 0.01, "AdthPercMstpSrasWpstDnon_5", 0.01, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1", 0.01};
		};
		
		class AidlPercMstpSrasWpstDnon_player_0S : AmovPercMstpSrasWpstDnon {
			variantsPlayer[] = {"AidlPercMstpSrasWpstDnon_player_idleSteady03", 0.333, "AidlPercMstpSrasWpstDnon_player_idleSteady01", 0.333, "AidlPercMstpSrasWpstDnon_player_idleSteady02", 0.334};
			variantAfter[] = {0, 0, 0};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AidlPercMstpSrasWpstDnon_player_idleSteady01", 0.02, "AidlPercMstpSrasWpstDnon_player_idleSteady02", 0.02, "AidlPercMstpSrasWpstDnon_player_idleSteady03", 0.02};
			InterpolateTo[] = {};
		};
		
		class amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\lnr\amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon.rtm";
			speed = 0.3;
			looped = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady01 : AidlPercMstpSrasWpstDnon_player_0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_idleSteady01";
			speed = 0.105263;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady02 : AidlPercMstpSrasWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_idleSteady02";
			speed = 0.082192;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady03 : AidlPercMstpSrasWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_idleSteady03";
			speed = 0.122449;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPercMstpSlowWpstDnon : AmovPercMstpSrasWpstDnon {
			actions = "PistolLowStandActions";
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\pst\amovpercmstpslowwpstdnon.rtm";
			disableWeapons = 1;
			enableMissile = 0;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			headBobStrength = 0.21393;
			ConnectTo[] = {"AidlPercMstpSlowWpstDnon_player_0S", 0.02, "AovrPercMstpSlowWpstDf", 0.01, "AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon", 0.02, "AidlPercMstpSrasWpstDnon0S", 0.03, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1", 0.01};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDf", 0.02, "AmovPercMwlkSlowWpstDfl", 0.02, "AmovPercMwlkSlowWpstDl", 0.02, "AmovPercMwlkSlowWpstDbl", 0.02, "AmovPercMwlkSlowWpstDb", 0.02, "AmovPercMwlkSlowWpstDbr", 0.02, "AmovPercMwlkSlowWpstDr", 0.02, "AmovPercMwlkSlowWpstDfr", 0.02, "AmovPercMrunSlowWpstDf", 0.02, "AmovPercMrunSlowWpstDfl", 0.02, "AmovPercMrunSlowWpstDl", 0.02, "AmovPercMrunSlowWpstDbl", 0.02, "AmovPercMrunSlowWpstDb", 0.02, "AmovPercMrunSlowWpstDbr", 0.02, "AmovPercMrunSlowWpstDr", 0.02, "AmovPercMrunSlowWpstDfr", 0.02, "AmovPercMevaSlowWpstDf", 0.02, "AmovPercMevaSlowWpstDfl", 0.02, "AmovPercMevaSlowWpstDfr", 0.02, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1", 0.01};
		};
		
		class AidlPercMstpSlowWpstDnon_player_0S : AmovPercMstpSlowWpstDnon {
			variantsPlayer[] = {"AidlPercMstpSlowWpstDnon_player_idleSteady01", 0.333, "AidlPercMstpSlowWpstDnon_player_idleSteady02", 0.333, "AidlPercMstpSlowWpstDnon_player_idleSteady03", 0.334};
			variantAfter[] = {0, 0, 0};
			headBobMode = 0;
			headBobStrength = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AidlPercMstpSlowWpstDnon_player_idleSteady01", 0.02, "AidlPercMstpSlowWpstDnon_player_idleSteady02", 0.02, "AidlPercMstpSlowWpstDnon_player_idleSteady03", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady01 : AidlPercMstpSlowWpstDnon_player_0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady01";
			speed = 0.105263;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSlowWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02};
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady02 : AidlPercMstpSlowWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady02";
			speed = 0.082192;
			ConnectTo[] = {"AidlPercMstpSlowWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02};
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady03 : AidlPercMstpSlowWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady03";
			speed = 0.122449;
			ConnectTo[] = {"AidlPercMstpSlowWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02};
		};
		
		class AovrPercMstpSlowWpstDf : AmovPercMstpSlowWpstDnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\low\pst\AovrPercMstpSlowWpstDf";
			speed = 0.517241;
			looped = 0;
			duty = SprintDuty;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSlowWpstDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPercMwlkSlowWpstDnon_transition : AmovPercMstpSlowWpstDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\pst\AmovPercMwlkSlowWpstDnon_transition";
			limitGunMovement = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.015, "AmovPercMwlkSlowWpstDf", 0.015, "AmovPercMwlkSlowWpstDfl", 0.015, "AmovPercMwlkSlowWpstDl", 0.015, "AmovPercMwlkSlowWpstDbl", 0.015, "AmovPercMwlkSlowWpstDb", 0.015, "AmovPercMwlkSlowWpstDbr", 0.015, "AmovPercMwlkSlowWpstDr", 0.015, "AmovPercMwlkSlowWpstDfr", 0.015};
		};
		
		class AovrPercMstpSrasWpstDf : AmovPercMstpSrasWpstDnon {
			looped = 0;
			speed = 0.517241;
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\ras\pst\AovrPercMstpSrasWpstDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			duty = SprintDuty;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon : AmovPercMstpSrasWpstDnon {
			speed = 1.66667;
			looped = 0;
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpslowwpstdnon.rtm";
			enableOptics = 2;
			interpolationRestart = 2;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.01};
			InterpolateTo[] = {"AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\pst\amovpercmstpslowwpstdnon_amovpercmstpsraswpstdnon.rtm";
			speed = 1.76471;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_turnL : AmovPercMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_turnR : AmovPercMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon {
			actions = "PistolKneelActions";
			duty = WalkDuty;
			visibleSize = 0.300122;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon.rtm";
			showWeaponAim = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wpst.p3d";
			weaponIK = 2;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon_player_0S", 0.02, "amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon_gear", 0.02, "AmovPknlMstpSrasWpstDnon_turnL", 0.02, "AmovPknlMstpSrasWpstDnon_turnR", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPknlMrunSrasWpstDf", 0.01, "PistolMagazineReloadKneel", 0.1, "amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon", 0.02, "amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon", 0.02, "AwopPknlMstpSgthWpstDnon_Part1", 0.1, "AidlPknlMstpSrasWpstDnon0S", 0.02, "AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_turnL", 0.02, "AmovPknlMstpSrasWpstDnon_turnR", 0.02, "AmovPknlMwlkSrasWpstDf", 0.02, "AmovPknlMwlkSrasWpstDfl", 0.02, "AmovPknlMwlkSrasWpstDl", 0.02, "AmovPknlMwlkSrasWpstDbl", 0.02, "AmovPknlMwlkSrasWpstDb", 0.02, "AmovPknlMwlkSrasWpstDbr", 0.02, "AmovPknlMwlkSrasWpstDr", 0.02, "AmovPknlMwlkSrasWpstDfr", 0.02, "AmovPknlMrunSrasWpstDf", 0.02, "AmovPknlMrunSrasWpstDfl", 0.02, "AmovPknlMrunSrasWpstDl", 0.02, "AmovPknlMrunSrasWpstDbl", 0.02, "AmovPknlMrunSrasWpstDb", 0.02, "AmovPknlMrunSrasWpstDbr", 0.02, "AmovPknlMrunSrasWpstDr", 0.02, "AmovPknlMrunSrasWpstDfr", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01, "AdthPknlMstpSrasWpstDnon_2", 0.01, "AdthPknlMstpSrasWpstDnon_4", 0.01, "AdthPknlMstpSrasWpstDnon_6", 0.01, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2", 0.2};
		};
		
		class AmovPknlMstpSlowWpstDnon : AmovPknlMstpSrasWpstDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\low\pst\amovpknlmstpslowwpstdnon";
			disableWeaponsLong = 1;
			actions = "PistolLowKneelActions";
			ConnectTo[] = {"amovpknlmstpslowwpstdnon_amovpknlmstpsraswpstdnon", 0.02};
			InterpolateTo[] = {"AmovPknlMwlkSlowWpstDf", 0.02, "AmovPknlMrunSlowWpstDf", 0.02, "AmovPknlMrunSlowWpstDfl", 0.02, "AmovPknlMrunSlowWpstDl", 0.02, "AmovPknlMrunSlowWpstDbl", 0.02, "AmovPknlMrunSlowWpstDb", 0.02, "AmovPknlMrunSlowWpstDbr", 0.02, "AmovPknlMrunSlowWpstDr", 0.02, "AmovPknlMrunSlowWpstDfr", 0.02, "AmovPknlMwlkSlowWpstDfl", 0.02, "AmovPknlMwlkSlowWpstDl", 0.02, "AmovPknlMwlkSlowWpstDbl", 0.02, "AmovPknlMwlkSlowWpstDb", 0.02, "AmovPknlMwlkSlowWpstDbr", 0.02, "AmovPknlMwlkSlowWpstDr", 0.02, "AmovPknlMwlkSlowWpstDfr", 0.02, "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2", 0.2};
		};
		
		class AmovPknlMwlkSlowWpstDf : AmovPknlMstpSlowWpstDnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDf";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDf", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDf : AmovPknlMwlkSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDf";
			speed = 0.666667;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDf", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDfl : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDfl";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDfl", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDl : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDl";
			speed = 0.625;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDl", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDbl : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDbl";
			speed = 0.666667;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDbl", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDb : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDb";
			speed = 0.666667;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDb", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDbr : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDbr";
			speed = 0.666667;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDbr", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDr : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDr";
			speed = 0.714286;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDr", 0.025};
		};
		
		class AmovPknlMrunSlowWpstDfr : AmovPknlMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDfr";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMwlkSlowWpstDfr", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDfl : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDfl";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDfl", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDl : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDl";
			speed = 0.29703;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDl", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDbl : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDbl";
			speed = 0.29703;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDbl", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDb : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDb";
			speed = 0.29703;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDb", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDbr : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDbr";
			speed = 0.29703;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDbr", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDr : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDr";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDr", 0.025};
		};
		
		class AmovPknlMwlkSlowWpstDfr : AmovPknlMwlkSlowWpstDf {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDfr";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02, "AmovPknlMrunSlowWpstDfr", 0.025};
		};
		
		class AidlPknlMstpSrasWpstDnon_player_0S : AmovPknlMstpSrasWpstDnon {
			variantAfter[] = {0, 0, 0};
			variantsPlayer[] = {"AidlPknlMstpSrasWpstDnon_player_idleSteady03", 0.333, "AidlPknlMstpSrasWpstDnon_player_idleSteady02", 0.333, "AidlPknlMstpSrasWpstDnon_player_idleSteady01", 0.334};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AidlPknlMstpSrasWpstDnon_player_idleSteady01", 0.02, "AidlPknlMstpSrasWpstDnon_player_idleSteady02", 0.02, "AidlPknlMstpSrasWpstDnon_player_idleSteady03", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady01 : AidlPknlMstpSrasWpstDnon_player_0S {
			variantAfter[] = {1, 1, 1};
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady01";
			speed = 0.133334;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady02 : AidlPknlMstpSrasWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady02";
			speed = 0.113207;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady03 : AidlPknlMstpSrasWpstDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady03";
			speed = 0.122449;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon : AmovPknlMstpSrasWpstDnon {
			speed = 6;
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\low\pst\amovpknlmstpslowwpstdnon_amovpknlmstpsraswpstdnon.rtm";
			looped = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSrasWpstDnon_gear : AmovPknlMstpSrasWpstDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\low\pst\amovpknlmstpslowwpstdnon.rtm";
			actions = "PistolKneelActions_gear";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {"amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon_gear", 0.05};
		};
		
		class AmovPercMstpSrasWpstDnon_gear : AmovPknlMstpSrasWpstDnon_gear {
			actions = "PistolStandActions_gear";
			ConnectTo[] = {"amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_gear", 0.05};
		};
		
		class amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon_gear : AmovPknlMstpSrasWpstDnon_gear {
			speed = 6;
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\pst\amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon.rtm";
			looped = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_gear", 0.02, "AmovPercMstpSrasWpstDnon_gear", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSlowWpstDnon_transition : AmovPknlMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon.rtm";
			speed = 1e+010;
			showHandGun = 1;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.3;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWpstDf", 0.02, "AmovPknlMrunSrasWpstDfl", 0.02, "AmovPknlMrunSrasWpstDl", 0.02, "AmovPknlMrunSrasWpstDbl", 0.02, "AmovPknlMrunSrasWpstDb", 0.02, "AmovPknlMrunSrasWpstDbr", 0.02, "AmovPknlMrunSrasWpstDr", 0.02, "AmovPknlMrunSrasWpstDfr", 0.02};
		};
		
		class AmovPknlMstpSrasWpstDnon_turnL : AmovPknlMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWpstDnon_turnR : AmovPknlMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPpneMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon {
			actions = "PistolProneActions";
			duty = WalkDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon.rtm";
			showWeaponAim = 1;
			visibleSize = 0.100123;
			onLandBeg = 1;
			onLandEnd = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			legs = "legsDefault";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			leaning = "leaningDefault";
			soundOverride = "crawl";
			weaponIK = 2;
			limitGunMovement = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_turnL", 0.02, "AmovPpneMstpSrasWpstDnon_turnR", 0.02, "PistolMagazineReloadProne", 0.1, "AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr", 0.02, "AwopPpneMstpSgthWpstDnon_Part1", 0.1, "AidlPpneMstpSrasWpstDnon0S", 0.1, "AidlPpneMstpSrasWpstDnon01", 0.1, "AidlPpneMstpSrasWpstDnon02", 0.1, "AidlPpneMstpSrasWpstDnon03", 0.1, "AmovPpneMstpSrasWpstDnon_healed", 0.02, "AmovPpneMstpSnonWpstDnon_injured", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_turnL", 0.02, "AmovPpneMstpSrasWpstDnon_turnR", 0.02, "AmovPpneMrunSlowWpstDf", 0.02, "AmovPpneMrunSlowWpstDfl", 0.02, "AmovPpneMrunSlowWpstDl", 0.02, "AmovPpneMrunSlowWpstDbl", 0.02, "AmovPpneMrunSlowWpstDb", 0.02, "AmovPpneMrunSlowWpstDbr", 0.02, "AmovPpneMrunSlowWpstDr", 0.02, "AmovPpneMrunSlowWpstDfr", 0.02, "AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf", 0.01, "AdthPpneMstpSrasWpstDnon_1", 0.01, "AdthPpneMstpSrasWpstDnon_2", 0.01, "AidlPpneMstpSrasWpstDnon0S", 0.02, "AidlPpneMstpSrasWpstDnon01", 0.02, "AidlPpneMstpSrasWpstDnon02", 0.02, "AidlPpneMstpSrasWpstDnon03", 0.02};
		};
		
		class AmovPpneMstpSrasWpstDnon_turnL : AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AIturn90L";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPpneMstpSrasWpstDnon_turnR : AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AIturn90R";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWlnrDnon : Default {
			actions = "LauncherKneelStpActions";
			duty = WalkDuty;
			visibleSize = 0.300122;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon.rtm";
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			canPullTrigger = 0;
			//aimPrecision = 0.5;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			aiming = "aimingLauncher";
			aimingBody = "aimingUpLauncher";
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			weaponIK = 4;
			enableOptics = 4;
			headBobStrength = 0.20398;
			headBobMode = 2;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon_player_0S", 0.02, "AmovPknlMstpSrasWlnrDnon_turnL", 0.02, "AmovPknlMstpSrasWlnrDnon_turnR", 0.02, "LauncherReloadKneel", 0.1, "amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon", 0.02, "AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon", 0.02, "AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon", 0.03, "AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AidlPknlMstpSrasWlnrDnon0S", 0.02, "amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon", 0.01};
			InterpolateTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02, "AmovPknlMstpSrasWlnrDnon_turnL", 0.02, "AmovPknlMstpSrasWlnrDnon_turnR", 0.02, "AmovPknlMrunSrasWlnrDf", 0.02, "AmovPknlMrunSrasWlnrDfl", 0.02, "AmovPknlMrunSrasWlnrDl", 0.02, "AmovPknlMrunSrasWlnrDbl", 0.02, "AmovPknlMrunSrasWlnrDb", 0.02, "AmovPknlMrunSrasWlnrDbr", 0.02, "AmovPknlMrunSrasWlnrDr", 0.02, "AmovPknlMrunSrasWlnrDfr", 0.02, "AmovPercMevaSlowWlnrDf", 0.02, "AmovPercMevaSlowWlnrDfr", 0.02, "AmovPercMevaSlowWlnrDfl", 0.02, "AmovPknlMwlkSrasWlnrDf", 0.02, "AmovPknlMwlkSrasWlnrDfl", 0.02, "AmovPknlMwlkSrasWlnrDl", 0.02, "AmovPknlMwlkSrasWlnrDbl", 0.02, "AmovPknlMwlkSrasWlnrDb", 0.02, "AmovPknlMwlkSrasWlnrDbr", 0.02, "AmovPknlMwlkSrasWlnrDr", 0.02, "AmovPknlMwlkSrasWlnrDfr", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01, "AdthPknlMstpSrasWlnrDnon_2", 0.01};
		};
		
		class AidlPknlMstpSlowWlnrDnon_S0 : AmovPknlMstpSrasWlnrDnon {
			variantsAI[] = {"AidlPknlMstpSlowWlnrDnon_01", 0.005, "AidlPknlMstpSlowWlnrDnon_02", 0.005, "AidlPknlMstpSlowWlnrDnon_03", 0.005, "AidlPknlMstpSlowWlnrDnon_04", 0.005, "AidlPknlMstpSlowWlnrDnon_05", 0.005, "AidlPknlMstpSlowWlnrDnon_idleSteady01", 0.3, "AidlPknlMstpSlowWlnrDnon_idleSteady02", 0.3, "AidlPknlMstpSlowWlnrDnon_idleSteady03", 0.3, "AidlPknlMstpSlowWlnrDnon_01RozhlizeniSe1", 0.004, "AidlPknlMstpSlowWlnrDnon_02RozhlizeniSe2", 0.004, "AidlPknlMstpSlowWlnrDnon_03N", 0.004, "AidlPknlMstpSlowWlnrDnon_04N", 0.004, "AidlPknlMstpSlowWlnrDnon_05N", 0.004, "AidlPknlMstpSlowWlnrDnon_06RozhlizeniSe3", 0.004, "AidlPknlMstpSlowWlnrDnon_07RozhlizeniSe4", 0.004, "AidlPknlMstpSlowWlnrDnon_08RozhlizeniSe5", 0.004, "AidlPknlMstpSlowWlnrDnon_09RozhlizeniSe6", 0.004, "AidlPknlMstpSlowWlnrDnon_10RozhlizeniSe7", 0.004, "AidlPknlMstpSlowWlnrDnon_11RozhlizeniSe8", 0.005, "AidlPknlMstpSlowWlnrDnon_12checkingLnr1", 0.005, "AidlPknlMstpSlowWlnrDnon_13checkingLnr2", 0.005, "AidlPknlMstpSlowWlnrDnon_14RozhlizeniSe9", 0.005, "AidlPknlMstpSlowWlnrDnon_15RozhlizeniSe10", 0.005, "AidlPknlMstpSlowWlnrDnon_16RozhlizeniSe11", 0.005, "AidlPknlMstpSlowWlnrDnon_17RozhlizeniSe12", 0.005};
			variantAfter[] = {0, 0, 0};
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\low\lnr\AmovPknlMstpSlowWlnrDnon.rtm";
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_01", 0.02, "AidlPknlMstpSlowWlnrDnon_idleSteady01", 0.02, "AidlPknlMstpSlowWlnrDnon_idleSteady02", 0.02, "AidlPknlMstpSlowWlnrDnon_idleSteady03", 0.02, "AidlPknlMstpSlowWlnrDnon_02", 0.02, "AidlPknlMstpSlowWlnrDnon_03", 0.02, "AidlPknlMstpSlowWlnrDnon_04", 0.02, "AidlPknlMstpSlowWlnrDnon_05", 0.02, "AidlPknlMstpSlowWlnrDnon_01RozhlizeniSe1", 0.02, "AidlPknlMstpSlowWlnrDnon_02RozhlizeniSe2", 0.02, "AidlPknlMstpSlowWlnrDnon_03N", 0.02, "AidlPknlMstpSlowWlnrDnon_04N", 0.02, "AidlPknlMstpSlowWlnrDnon_05N", 0.02, "AidlPknlMstpSlowWlnrDnon_06RozhlizeniSe3", 0.02, "AidlPknlMstpSlowWlnrDnon_07RozhlizeniSe4", 0.02, "AidlPknlMstpSlowWlnrDnon_08RozhlizeniSe5", 0.02, "AidlPknlMstpSlowWlnrDnon_09RozhlizeniSe6", 0.02, "AidlPknlMstpSlowWlnrDnon_10RozhlizeniSe7", 0.02, "AidlPknlMstpSlowWlnrDnon_11RozhlizeniSe8", 0.02, "AidlPknlMstpSlowWlnrDnon_12checkingLnr1", 0.02, "AidlPknlMstpSlowWlnrDnon_13checkingLnr2", 0.02, "AidlPknlMstpSlowWlnrDnon_14RozhlizeniSe9", 0.02, "AidlPknlMstpSlowWlnrDnon_15RozhlizeniSe10", 0.02, "AidlPknlMstpSlowWlnrDnon_16RozhlizeniSe11", 0.02, "AidlPknlMstpSlowWlnrDnon_17RozhlizeniSe12", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AidlPknlMstpSrasWlnrDnon0S", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_0S : AmovPknlMstpSrasWlnrDnon {
			variantsAI[] = {"AidlPknlMstpSrasWlnrDnon_player_idleSteady01", 0.333, "AidlPknlMstpSrasWlnrDnon_player_idleSteady02", 0.333, "AidlPknlMstpSrasWlnrDnon_player_idleSteady03", 0.334};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AidlPknlMstpSrasWlnrDnon_player_idleSteady01", 0.02, "AidlPknlMstpSrasWlnrDnon_player_idleSteady02", 0.02, "AidlPknlMstpSrasWlnrDnon_player_idleSteady03", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady01 : AidlPknlMstpSrasWlnrDnon_player_0S {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon_idleSteady01";
			speed = 0.26667;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady02 : AidlPknlMstpSrasWlnrDnon_player_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon_idleSteady02";
			speed = 0.210526;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady03 : AidlPknlMstpSrasWlnrDnon_player_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon_idleSteady03";
			speed = 0.292683;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon_player_0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWlnrDnon_turnL : AmovPknlMstpSrasWlnrDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWlnrDnon_turnR : AmovPknlMstpSrasWlnrDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class ActsPercMstpSnonWpstDnon_suicide1A : AmovPercMstpSnonWnonDnon {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\suicide\ActsPercMstpSnonWpstDnon_sebevrazda1A";
			speed = 1.57895;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_suicide1B", 0.02};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_suicide2A : ActsPercMstpSnonWpstDnon_suicide1A {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\suicide\ActsPercMstpSnonWpstDnon_sebevrazda2A";
			speed = 1.25;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_suicide2B", 0.02};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_suicide1B : ActsPercMstpSnonWpstDnon_suicide1A {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\suicide\ActsPercMstpSnonWpstDnon_sebevrazda1B";
			terminal = 0;
			speed = 0.143541;
			showHandGun = 1;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_suicide2B : ActsPercMstpSnonWpstDnon_suicide1B {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\suicide\ActsPercMstpSnonWpstDnon_sebevrazda2B";
			terminal = 0;
			speed = 0.124481;
			showHandGun = 1;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_sekaniIn : AmovPercMstpSnonWnonDnon {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\axe\ActsPercMstpSnonWaxeDnon_sekaniIn";
			speed = 0.258621;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_sekani1", 0.02, "AmovPercMstpSnonWnonDnon_sekani2", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_sekani1 : AmovPercMstpSnonWnonDnon_sekaniIn {
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\axe\ActsPercMstpSnonWaxeDnon_sekani2";
			looped = 1;
			speed = 0.153846;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_sekaniOut", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_sekani2", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_sekani2 : AmovPercMstpSnonWnonDnon_sekani1 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\axe\ActsPercMstpSnonWaxeDnon_sekani2";
			looped = 1;
			speed = 0.2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_sekaniOut", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_sekani1", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_sekaniOut : AmovPercMstpSnonWnonDnon_sekaniIn {
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\axe\ActsPercMstpSnonWaxeDnon_sekaniOut";
			speed = 0.30303;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSnonWnonDnon_player : AidlPercMstpSnonWnonDnon {
			variantsAI[] = {};
			variantsPlayer[] = {"AidlPercMstpSnonWnonDnon_player_idleSteady04", 0.25, "AidlPercMstpSnonWnonDnon_player_idleSteady03", 0.25, "AidlPercMstpSnonWnonDnon_player_idleSteady02", 0.25, "AidlPercMstpSnonWnonDnon_player_idleSteady01", 0.25};
			variantAfter[] = {0, 0, 0};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSnonWnonDnon_player_0S : AidlPercMstpSnonWnonDnon_player {
			variantAfter[] = {1, 1, 1};
			limitGunMovement = 0.1;
			interpolationSpeed = 30;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_player", 0.01, "AidlPercMstpSnonWnonDnon_player_idleSteady01", 0.01, "AidlPercMstpSnonWnonDnon_player_idleSteady02", 0.01, "AidlPercMstpSnonWnonDnon_player_idleSteady03", 0.01, "AidlPercMstpSnonWnonDnon_player_idleSteady04", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady01 : AidlPercMstpSnonWnonDnon_player_0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_idleSteady01";
			speed = 0.069767;
			looped = 0;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady02 : AidlPercMstpSnonWnonDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_idleSteady02";
			speed = 0.064516;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady03 : AidlPercMstpSnonWnonDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_idleSteady03";
			speed = 0.070588;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady04 : AidlPercMstpSnonWnonDnon_player_idleSteady01 {
			speed = 0.070588;
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01, "AidlPercMstpSnonWnonDnon_player", 0.01};
		};
		
		class AmovPercMwlkSnonWnonDnon_transition : AmovPercMstpSnonWnonDnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDnon_transition";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfr", 0.015, "AmovPercMstpSnonWnonDnon", 0.015, "AmovPercMwlkSnonWnonDf", 0.015, "AmovPercMwlkSnonWnonDfl", 0.015, "AmovPercMwlkSnonWnonDl", 0.015, "AmovPercMwlkSnonWnonDbl", 0.015, "AmovPercMwlkSnonWnonDb", 0.015, "AmovPercMwlkSnonWnonDbr", 0.015, "AmovPercMwlkSnonWnonDr", 0.015};
		};
		
		class AovrPercMstpSnonWnonDf : AmovPercMstpSnonWnonDnon {
			looped = 0;
			speed = 0.576923;
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\non\non\AovrPercMstpSnonWnonDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			duty = SprintDuty;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_turnL : AmovPercMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90L";
			speed = 0.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_turnR : AmovPercMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90R";
			speed = 0.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPknlMstpSnonWnonDnon_gear : AmovPknlMstpSnonWnonDnon {
			actions = "CivilKneelActions_gear";
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMstpSnonWnonDnon_gear_trans", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_gear", 0.02};
		};
		
		class AmovPknlMstpSnonWnonDnon_gear_trans : AmovPknlMstpSnonWnonDnon_gear {
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon_gear", 0.03, "AmovPknlMstpSrasWrflDnon_gear", 0.03, "AmovPercMstpSrasWrflDnon_gear", 0.03, "AmovPercMstpSlowWrflDnon_gear", 0.03};
		};
		
		class AmovPercMstpSnonWnonDnon_gear : AmovPknlMstpSnonWnonDnon_gear {
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMstpSnonWnonDnon_gear_trans", 0.02, "AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_gear", 0.02};
		};
		
		class AmovPknlMstpSnonWnonDnon_turnL : AmovPknlMstpSnonWnonDnon {
			speed = 1.2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPknlMstpSnonWnonDnon_turnR : AmovPknlMstpSnonWnonDnon {
			speed = 1.2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon {
			actions = "CivilProneActions";
			duty = RestDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon.rtm";
			legs = "Wholebody";
			onLandBeg = 1;
			onLandEnd = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			aimingBody = "empty";
			disableWeapons = 0;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_turnL", 0.02, "AmovPpneMstpSnonWnonDnon_turnR", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.05, "AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground", 0.1, "AwopPpneMstpSgthWnonDnon_start", 0.1, "AidlPpneMstpSnonWnonDnon0S", 0.1, "AidlPpneMstpSnonWnonDnon01", 0.1, "AidlPpneMstpSnonWnonDnon02", 0.1, "AidlPpneMstpSnonWnonDnon03", 0.1, "AmovPpneMstpSnonWnonDnon_healed", 0.02, "AmovPpneMstpSnonWnonDnon_injured", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_turnL", 0.02, "AmovPpneMstpSnonWnonDnon_turnR", 0.02, "AmovPpneMrunSnonWnonDf", 0.02, "AmovPpneMrunSnonWnonDfl", 0.02, "AmovPpneMrunSnonWnonDl", 0.02, "AmovPpneMrunSnonWnonDbl", 0.02, "AmovPpneMrunSnonWnonDb", 0.02, "AmovPpneMrunSnonWnonDbr", 0.02, "AmovPpneMrunSnonWnonDr", 0.02, "AmovPpneMrunSnonWnonDfr", 0.02, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_turnL : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AIturn90L";
			speed = 0.5;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon_turnR : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AIturn90R";
			speed = 0.5;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPercMwlkSlowWrflDf : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDf";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			limitGunMovement = 0.6;
			actions = "RifleLowStandActionsWlkF";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			walkcycles = 2;
			headBobStrength = 0.20398;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AidlPercMwlkSrasWrflDf", 0.01, "AmovPercMwlkSlowWrflDfl", 0.025, "AmovPercMwlkSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDf", 0.025, "AmovPknlMwlkSlowWrflDf", 0.03, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AidlPercMwlkSrasWrflDf : AmovPercMwlkSlowWrflDf {
			actions = "RifleStandActions_Idle";
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\erc\wlk\low\rfl\AmovPercMwlkSlowWrflDf_FastVariant";
			speed = 0.588235;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWrflDf", 0.01, "AidlPercMrunSrasWrflDf", 0.025, "AidlPercMevaSrasWrflDf", 0.025, "AidlPercMwlkSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMwlkSlowWrflDfl : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDfl";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDf", 0.025, "AmovPercMwlkSlowWrflDl", 0.025, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPknlMwlkSlowWrflDfl", 0.03, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDl : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDl";
			speed = 0.526316;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDfl", 0.025, "AmovPercMwlkSlowWrflDbl", 0.025, "AmovPercMrunSlowWrflDl", 0.025, "AmovPknlMwlkSlowWrflDl", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDbl : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDbl";
			speed = 0.566038;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDl", 0.025, "AmovPercMwlkSlowWrflDb", 0.025, "AmovPercMrunSlowWrflDbl", 0.025, "AmovPknlMwlkSlowWrflDbl", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDb : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDb";
			speed = 0.566038;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbl", 0.025, "AmovPercMwlkSlowWrflDbr", 0.025, "AmovPercMrunSlowWrflDb", 0.025, "AmovPknlMwlkSlowWrflDb", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDbr : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDbr";
			speed = 0.566038;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDb", 0.025, "AmovPercMwlkSlowWrflDr", 0.025, "AmovPercMrunSlowWrflDbr", 0.025, "AmovPknlMwlkSlowWrflDbr", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDr : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDr";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbr", 0.025, "AmovPercMwlkSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDr", 0.025, "AmovPknlMwlkSlowWrflDr", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class AmovPercMwlkSlowWrflDfr : AmovPercMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDfr";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleLowStandActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDf", 0.025, "AmovPercMwlkSlowWrflDr", 0.025, "AmovPercMrunSlowWrflDfr", 0.025, "AmovPknlMwlkSlowWrflDfr", 0.03, "AmovPercMevaSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AmovPercMrunSlowWrflDf : AmovPercMstpSlowWrflDnon {
			visibleSize = 0.900121;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.821918;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			duty = CrawlDuty;
			showWeaponAim = 1;
			disableWeapons = 1;
			disableWeaponsLong = 0;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "RifleLowStandActionsRunF";
			walkcycles = 2;
			headBobStrength = 0.20398;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_ActsPpneMstpSlowWrflDr_GrenadeEscape", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDf", 0.025, "AidlPercMrunSrasWrflDf", 0.01, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDfr", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPknlMrunSlowWrflDf", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMrunSlowWrflDf_6", 0.01, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1};
		};
		
		class AidlPercMrunSrasWrflDf : AmovPercMrunSlowWrflDf {
			actions = "RifleStandActions_Idle";
			ConnectTo[] = {};
			InterpolateTo[] = {"AidlPercMwlkSrasWrflDf", 0.025, "AmovPercMrunSlowWrflDf", 0.01, "AidlPercMevaSrasWrflDf", 0.025, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMrunSlowWrflDfl : AmovPercMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfl";
			speed = 0.7;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMrunSlowWrflDl", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPknlMrunSlowWrflDfl", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMrunSlowWrflDf_6", 0.01, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1};
		};
		
		class AmovPercMrunSlowWrflDl : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDl";
			speed = 0.769231;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDl", 0.025, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDbl", 0.025, "AmovPercMrunSrasWrflDl", 0.025, "AmovPknlMrunSlowWrflDl", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class AmovPercMrunSlowWrflDbl : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbl";
			speed = 0.882353;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunBL";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbl", 0.025, "AmovPercMrunSlowWrflDl", 0.025, "AmovPercMrunSlowWrflDb", 0.025, "AmovPercMrunSrasWrflDbl", 0.025, "AmovPknlMrunSlowWrflDbl", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMrunSlowWrflDb : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDb";
			speed = 0.882353;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDb", 0.025, "AmovPercMrunSlowWrflDbl", 0.025, "AmovPercMrunSlowWrflDbr", 0.025, "AmovPercMrunSrasWrflDb", 0.025, "AmovPknlMrunSlowWrflDb", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMrunSlowWrflDbr : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbr";
			speed = 0.882353;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunBR";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbr", 0.025, "AmovPercMrunSlowWrflDb", 0.025, "AmovPercMrunSlowWrflDr", 0.025, "AmovPercMrunSrasWrflDbr", 0.025, "AmovPknlMrunSlowWrflDbr", 0.03, "AdthPercMstpSlowWrflDb_8", 0.01};
		};
		
		class AmovPercMrunSlowWrflDr : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDr";
			speed = 0.857143;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDr", 0.025, "AmovPercMrunSlowWrflDbr", 0.025, "AmovPercMrunSlowWrflDfr", 0.025, "AmovPercMrunSrasWrflDr", 0.025, "AmovPknlMrunSlowWrflDr", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon.rtm";
			disableWeapons = 1;
			actions = "CivilStandActions";
			interpolationRestart = 2;
			rightHandIKCurve[] = {0.4, 1, 0.45, 0};
			leftHandIKCurve[] = {0.05, 1, 0.15, 0};
			weaponIK = 4;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AmovPercMrunSlowWrflDfr : AmovPercMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfr";
			speed = 0.7;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleLowStandActionsRunFR";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMrunSlowWrflDr", 0.025, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPknlMrunSlowWrflDfr", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfr", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMrunSlowWrflDf_6", 0.01, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1};
		};
		
		class AmovPercMwlkSrasWrflDf : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			visibleSize = 0.800121;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDf";
			speed = 1.34;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			//aimPrecision = 0.15;
			soundEnabled = 1;
			limitGunMovement = 0.6;
			actions = "RifleStandActionsWlkF";
			headBobStrength = 0.20398;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDfl", 0.025, "AmovPercMwlkSrasWrflDfr", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPknlMwlkSrasWrflDf", 0.03, "AmovPercMevaSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSrasWrflDf_1", 0.01, "AdthPercMstpSrasWrflDf_2", 0.01, "AdthPercMstpSrasWrflDf_4", 0.01, "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1, "AdthPercMstpSrasWrflDf_8", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDfl : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDfl";
			speed = 1.26;
			actions = "RifleStandActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDf", 0.025, "AmovPercMwlkSrasWrflDl", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPknlMwlkSrasWrflDfl", 0.03, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSrasWrflDf_1", 0.01, "AdthPercMstpSrasWrflDf_2", 0.01, "AdthPercMstpSrasWrflDf_4", 0.01, "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1, "AdthPercMstpSrasWrflDf_8", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDl : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDl";
			speed = 1.26;
			actions = "RifleStandActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDfl", 0.025, "AmovPercMwlkSrasWrflDbl", 0.025, "AmovPercMrunSrasWrflDl", 0.025, "AmovPknlMwlkSrasWrflDl", 0.03, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDbl : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDbl";
			speed = 1;
			actions = "RifleStandActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDl", 0.025, "AmovPercMwlkSrasWrflDb", 0.025, "AmovPercMrunSrasWrflDbl", 0.025, "AmovPknlMwlkSrasWrflDbl", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDb : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDb";
			speed = 1.14;
			actions = "RifleStandActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDbl", 0.025, "AmovPercMwlkSrasWrflDbr", 0.025, "AmovPercMrunSrasWrflDb", 0.025, "AmovPknlMwlkSrasWrflDb", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDbr : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDbr";
			speed = 0.9;
			actions = "RifleStandActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDb", 0.025, "AmovPercMwlkSrasWrflDr", 0.025, "AmovPercMrunSrasWrflDbr", 0.025, "AmovPknlMwlkSrasWrflDbr", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDr : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDr";
			speed = 1.34;
			actions = "RifleStandActionsWlkR";
			headBobStrength = 0.20398;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDbr", 0.025, "AmovPercMwlkSrasWrflDfr", 0.025, "AmovPercMrunSrasWrflDr", 0.025, "AmovPknlMwlkSrasWrflDr", 0.03, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDfr : AmovPercMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\ras\Rfl\AmovPercMrunSrasWrflDfr";
			speed = 1.21;
			actions = "RifleStandActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDf", 0.025, "AmovPercMwlkSrasWrflDr", 0.025, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPknlMwlkSrasWrflDfr", 0.03, "AmovPercMevaSrasWrflDfr", 0.025, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSrasWrflDf_1", 0.01, "AdthPercMstpSrasWrflDf_2", 0.01, "AdthPercMstpSrasWrflDf_4", 0.01, "AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1, "AdthPercMstpSrasWrflDf_8", 0.01};
		};
		
		class AmovPercMrunSrasWrflDf : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			visibleSize = 0.900121;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.713771;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			soundOverride = "run";
			duty = CrawlDuty;
			//aimPrecision = 1.5;
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "RifleStandActionsRunF";
			walkcycles = 2;
			headBobStrength = 0.20398;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMwlkSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPknlMrunSrasWrflDf", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AmovPercMrunSrasWrflDfl : AmovPercMrunSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfl";
			speed = 0.7;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			actions = "RifleStandActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPercMwlkSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDl", 0.025, "AmovPknlMrunSrasWrflDfl", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AmovPercMrunSrasWrflDl : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDl";
			speed = 0.769231;
			actions = "RifleStandActionsRunL";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDl", 0.025, "AmovPercMwlkSrasWrflDl", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDbl", 0.025, "AmovPknlMrunSrasWrflDl", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class AmovPercMrunSrasWrflDbl : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbl";
			speed = 0.882353;
			actions = "RifleStandActionsRunBL";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDbl", 0.025, "AmovPercMwlkSrasWrflDbl", 0.025, "AmovPercMrunSrasWrflDl", 0.025, "AmovPercMrunSrasWrflDb", 0.025, "AmovPknlMrunSrasWrflDbl", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMrunSrasWrflDb : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDb";
			speed = 0.882353;
			actions = "RifleStandActionsRunB";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDb", 0.025, "AmovPercMwlkSrasWrflDb", 0.025, "AmovPercMrunSrasWrflDbl", 0.025, "AmovPercMrunSrasWrflDbr", 0.025, "AmovPknlMrunSrasWrflDb", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMrunSrasWrflDbr : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbr";
			speed = 0.882353;
			actions = "RifleStandActionsRunBR";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDbr", 0.025, "AmovPercMwlkSrasWrflDbr", 0.025, "AmovPercMrunSrasWrflDb", 0.025, "AmovPercMrunSrasWrflDr", 0.025, "AmovPknlMrunSrasWrflDbr", 0.03, "AdthPercMstpSrasWrflDb_8", 0.01, "AdthPercMstpSrasWrflDb_16", 0.01};
		};
		
		class AmovPercMrunSrasWrflDr : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDr";
			speed = 0.857143;
			actions = "RifleStandActionsRunR";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDr", 0.025, "AmovPercMwlkSrasWrflDr", 0.025, "AmovPercMrunSrasWrflDbr", 0.025, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPknlMrunSrasWrflDr", 0.03, "AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_2", 0.01, "AdthPercMstpSlowWrflDnon_4", 0.01, "AdthPercMstpSlowWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_16", 0.01, "AdthPercMstpSlowWrflDnon_32", 0.01};
		};
		
		class AmovPercMrunSrasWrflDfr : AmovPercMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfr";
			speed = 0.7;
			actions = "RifleStandActionsRunFR";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDfr", 0.025, "AmovPercMwlkSrasWrflDfr", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDr", 0.025, "AmovPknlMrunSrasWrflDfr", 0.03, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfr", 0.025, "AmovPercMevaSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr", 0.02, "AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDf_1", 0.01, "AdthPercMstpSlowWrflDf_2", 0.01, "AdthPercMstpSlowWrflDf_4", 0.01};
		};
		
		class AmovPercMwlkSnonWnonDfl : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsFL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDfl", 0.025, "AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDf", 0.025, "AmovPercMwlkSnonWnonDl", 0.025, "AmovPknlMwlkSnonWnonDfl", 0.03, "AmovPercMevaSnonWnonDfl", 0.025, "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart", 0.1};
		};
		
		class AmovPercMwlkSnonWnonDl : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDfl", 0.025, "AmovPercMwlkSnonWnonDbl", 0.025, "AmovPercMrunSnonWnonDl", 0.025, "AmovPknlMwlkSnonWnonDl", 0.03};
		};
		
		class AmovPercMwlkSnonWnonDbl : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsBL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDl", 0.025, "AmovPercMwlkSnonWnonDb", 0.025, "AmovPercMrunSnonWnonDbl", 0.025, "AmovPknlMwlkSnonWnonDbl", 0.03};
		};
		
		class AmovPercMwlkSnonWnonDbr : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsBR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDb", 0.025, "AmovPercMwlkSnonWnonDr", 0.025, "AmovPercMrunSnonWnonDbr", 0.025, "AmovPknlMwlkSnonWnonDbr", 0.03};
		};
		
		class AmovPercMwlkSnonWnonDr : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfr", 0.15, "AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDbr", 0.025, "AmovPercMrunSnonWnonDr", 0.025, "AmovPknlMwlkSnonWnonDr", 0.03};
		};
		
		class AmovPercMwlkSnonWnonDfr : AmovPercMwlkSnonWnonDf {
			actions = "CivilWlkActionsFR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition", 0.015, "AmovPercMwlkSnonWnonDf", 0.025, "AmovPercMwlkSnonWnonDr", 0.15, "AmovPercMrunSnonWnonDfr", 0.025, "AmovPknlMwlkSnonWnonDfr", 0.03, "AmovPercMevaSnonWnonDfr", 0.025, "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart", 0.1};
		};
		
		class AmovPercMrunSnonWnonDfl : AmovPercMrunSnonWnonDf {
			actions = "CivilRunActionsFL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfl";
			speed = 0.810811;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDf", 0.025, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDfl", 0.025, "AmovPercMrunSnonWnonDl", 0.025, "AmovPknlMrunSnonWnonDfl", 0.03, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMevaSnonWnonDfl", 0.02, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDl : AmovPercMrunSnonWnonDfl {
			actions = "CivilRunActionsL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDl";
			speed = 0.810811;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDfl", 0.025, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDl", 0.025, "AmovPercMrunSnonWnonDbl", 0.025, "AmovPknlMrunSnonWnonDl", 0.03, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDbl : AmovPercMrunSnonWnonDl {
			actions = "CivilRunActionsBL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbl";
			speed = 0.810811;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDbl", 0.025, "AmovPercMrunSnonWnonDl", 0.025, "AmovPercMrunSnonWnonDb", 0.025, "AmovPknlMrunSnonWnonDbl", 0.03, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDb : AmovPercMrunSnonWnonDl {
			actions = "CivilRunActionsB";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDb";
			speed = 0.857143;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDb", 0.025, "AmovPercMrunSnonWnonDbl", 0.025, "AmovPercMrunSnonWnonDbr", 0.025, "AmovPknlMrunSnonWnonDb", 0.03, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDbr : AmovPercMrunSnonWnonDl {
			actions = "CivilRunActionsBR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbr";
			speed = 0.857143;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDbr", 0.025, "AmovPercMrunSnonWnonDb", 0.025, "AmovPknlMrunSnonWnonDbr", 0.03, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDr : AmovPercMrunSnonWnonDl {
			actions = "CivilRunActionsR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDr";
			speed = 0.882353;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDr", 0.025, "AmovPercMrunSnonWnonDfr", 0.025, "AmovPknlMrunSnonWnonDr", 0.03, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPercMrunSnonWnonDfr : AmovPercMrunSnonWnonDl {
			actions = "CivilRunActionsFR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfr";
			speed = 0.882353;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfr", 0.025, "AmovPercMrunSnonWnonDf", 0.025, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDr", 0.025, "AmovPknlMrunSnonWnonDfr", 0.03, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMevaSnonWnonDfr", 0.02, "CzmbAdthPercMrunSnonWnonDf", 0.01};
		};
		
		class AmovPknlMwlkSlowWrflDf : AmovPknlMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDf";
			speed = 0.84;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			visibleSize = 0.400122;
			actions = "RifleKneelLowActionsWlkF";
			headBobStrength = 0.20398;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDf", 0.03, "AmovPknlMwlkSlowWrflDfl", 0.025, "AmovPknlMwlkSlowWrflDfr", 0.025, "AmovPknlMrunSlowWrflDf", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDfl : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDfl";
			speed = 0.86;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDfl", 0.03, "AmovPknlMwlkSlowWrflDf", 0.025, "AmovPknlMwlkSlowWrflDl", 0.025, "AmovPknlMrunSlowWrflDfl", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDl : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDl";
			speed = 0.92;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDl", 0.03, "AmovPknlMwlkSlowWrflDfl", 0.025, "AmovPknlMwlkSlowWrflDbl", 0.025, "AmovPknlMrunSlowWrflDl", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDbl : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDbl";
			speed = 0.82;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbl", 0.03, "AmovPknlMwlkSlowWrflDl", 0.025, "AmovPknlMwlkSlowWrflDb", 0.025, "AmovPknlMrunSlowWrflDbl", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDb : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDb";
			speed = 0.95;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDb", 0.03, "AmovPknlMwlkSlowWrflDbl", 0.025, "AmovPknlMwlkSlowWrflDbr", 0.025, "AmovPknlMrunSlowWrflDb", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDbr : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDbr";
			speed = 0.86;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDbr", 0.03, "AmovPknlMwlkSlowWrflDb", 0.025, "AmovPknlMwlkSlowWrflDr", 0.025, "AmovPknlMrunSlowWrflDbr", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDr : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDr";
			speed = 0.87;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDr", 0.03, "AmovPknlMwlkSlowWrflDbr", 0.025, "AmovPknlMwlkSlowWrflDfr", 0.025, "AmovPknlMrunSlowWrflDr", 0.025};
		};
		
		class AmovPknlMwlkSlowWrflDfr : AmovPknlMwlkSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\Low\Rfl\AmovPknlMwlkSlowWrflDfr";
			speed = 0.82;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMwlkSlowWrflDfr", 0.03, "AmovPknlMwlkSlowWrflDf", 0.025, "AmovPknlMwlkSlowWrflDr", 0.025, "AmovPknlMrunSlowWrflDfr", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDf : AmovPknlMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.857143;
			visibleSize = 0.600122;
			duty = RunDuty;
			soundOverride = "run";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			actions = "RifleKneelLowActionsRunF";
			headBobStrength = 0.20398;
			limitGunMovement = 0.1;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMrunSlowWrflDf", 0.03, "AmovPknlMwlkSlowWrflDf", 0.025, "AmovPknlMrunSlowWrflDfl", 0.025, "AmovPknlMrunSlowWrflDfr", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025};
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMrunSlowWrflDf : AmovPknlMrunSlowWrflDf {
			speed = 1.2;
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\run\low\rfl\AmovPknlMstpSlowWrflDnon_AmovPknlMrunSlowWrflDf";
			looped = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPknlMrunSlowWrflDf", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMrunSlowWrflDfl : AmovPknlMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDfl";
			speed = 0.857143;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunFL";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMrunSlowWrflDfl", 0.03, "AmovPknlMwlkSlowWrflDfl", 0.025, "AmovPknlMrunSlowWrflDf", 0.025, "AmovPknlMrunSlowWrflDl", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDfl", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDl : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDl";
			speed = 0.833333;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunL";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSlowWrflDl", 0.03, "AmovPknlMwlkSlowWrflDl", 0.025, "AmovPknlMrunSlowWrflDfl", 0.025, "AmovPknlMrunSlowWrflDbl", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDbl : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDbl";
			speed = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunBL";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSlowWrflDbl", 0.03, "AmovPknlMwlkSlowWrflDbl", 0.025, "AmovPknlMrunSlowWrflDl", 0.025, "AmovPknlMrunSlowWrflDb", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDb : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDb";
			speed = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunB";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSlowWrflDb", 0.03, "AmovPknlMwlkSlowWrflDb", 0.025, "AmovPknlMrunSlowWrflDbl", 0.025, "AmovPknlMrunSlowWrflDbr", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDbr : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDbr";
			speed = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunBR";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMrunSlowWrflDbr", 0.03, "AmovPknlMwlkSlowWrflDbr", 0.025, "AmovPknlMrunSlowWrflDb", 0.025, "AmovPknlMrunSlowWrflDr", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDr : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDr";
			speed = 0.857143;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunR";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMrunSlowWrflDr", 0.03, "AmovPknlMwlkSlowWrflDr", 0.025, "AmovPknlMrunSlowWrflDbr", 0.025, "AmovPknlMrunSlowWrflDfr", 0.025};
		};
		
		class AmovPknlMrunSlowWrflDfr : AmovPknlMrunSlowWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDfr";
			speed = 0.857143;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			actions = "RifleKneelLowActionsRunFR";
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMrunSlowWrflDfr", 0.03, "AmovPknlMwlkSlowWrflDfr", 0.025, "AmovPknlMrunSlowWrflDf", 0.025, "AmovPknlMrunSlowWrflDr", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDfr", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDf : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDf";
			speed = 0.9;
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wrfl.p3d";
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			visibleSize = 0.400122;
			actions = "RifleKneelActionsWlkF";
			limitGunMovement = 0.6;
			headBobStrength = 0.20398;
			//aimPrecision = 0.15;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDf", 0.03, "AmovPknlMwlkSrasWrflDfl", 0.025, "AmovPknlMwlkSrasWrflDfr", 0.025, "AmovPknlMrunSrasWrflDf", 0.025, "AdthPknlMwlkSrasWrflDf_1", 0.01, "AdthPknlMwlkSrasWrflDf_2", 0.01};
		};
		
		class AmovPknlMwlkSrasWrflDfl : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDfl";
			speed = 0.9;
			actions = "RifleKneelActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDfl", 0.03, "AmovPknlMwlkSrasWrflDf", 0.025, "AmovPknlMwlkSrasWrflDl", 0.025, "AmovPknlMrunSrasWrflDfl", 0.025, "AdthPknlMwlkSrasWrflDf_1", 0.01, "AdthPknlMwlkSrasWrflDf_2", 0.01};
		};
		
		class AmovPknlMwlkSrasWrflDl : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDl";
			speed = 1.1;
			actions = "RifleKneelActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDl", 0.03, "AmovPknlMwlkSrasWrflDfl", 0.025, "AmovPknlMwlkSrasWrflDbl", 0.025, "AmovPknlMrunSrasWrflDl", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDbl : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDbl";
			speed = 0.7;
			actions = "RifleKneelActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDbl", 0.03, "AmovPknlMwlkSrasWrflDl", 0.025, "AmovPknlMwlkSrasWrflDb", 0.025, "AmovPknlMrunSrasWrflDbl", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDb : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDb";
			speed = 0.85;
			actions = "RifleKneelActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDb", 0.03, "AmovPknlMwlkSrasWrflDbl", 0.025, "AmovPknlMwlkSrasWrflDbr", 0.025, "AmovPknlMrunSrasWrflDb", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDbr : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDbr";
			speed = 0.9;
			actions = "RifleKneelActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDbr", 0.03, "AmovPknlMwlkSrasWrflDb", 0.025, "AmovPknlMwlkSrasWrflDr", 0.025, "AmovPknlMrunSrasWrflDbr", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDr : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDr";
			speed = 1.1;
			actions = "RifleKneelActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMwlkSrasWrflDnon_transition", 0.015, "AmovPercMwlkSrasWrflDr", 0.03, "AmovPknlMwlkSrasWrflDbr", 0.025, "AmovPknlMwlkSrasWrflDfr", 0.025, "AmovPknlMrunSrasWrflDr", 0.025};
		};
		
		class AmovPknlMwlkSrasWrflDfr : AmovPknlMwlkSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\Rfl\AmovPknlMwlkSrasWrflDfr";
			speed = 0.75;
			actions = "RifleKneelActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMwlkSrasWrflDfr", 0.03, "AmovPknlMwlkSrasWrflDf", 0.025, "AmovPknlMwlkSrasWrflDr", 0.025, "AmovPknlMrunSrasWrflDfr", 0.025, "AdthPknlMwlkSrasWrflDf_1", 0.01, "AdthPknlMwlkSrasWrflDf_2", 0.01};
		};
		
		class AmovPknlMrunSrasWrflDf : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.821918;
			soundOverride = "run";
			visibleSize = 0.600122;
			looped = 1;
			duty = RunDuty;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			actions = "RifleKneelActionsRunF";
			limitGunMovement = 0.1;
			headBobStrength = 0.20398;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDf", 0.03, "AmovPknlMwlkSrasWrflDf", 0.025, "AmovPknlMrunSrasWrflDfl", 0.025, "AmovPknlMrunSrasWrflDfr", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPknlMrunSrasWrflDfl : AmovPknlMrunSrasWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDfl";
			speed = 0.821918;
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			actions = "RifleKneelActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDfl", 0.03, "AmovPknlMwlkSrasWrflDfl", 0.025, "AmovPknlMrunSrasWrflDf", 0.025, "AmovPknlMrunSrasWrflDl", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDfl", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPknlMrunSrasWrflDl : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDl";
			speed = 0.769231;
			actions = "RifleKneelActionsRunL";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDl", 0.03, "AmovPknlMwlkSrasWrflDl", 0.025, "AmovPknlMrunSrasWrflDfl", 0.025, "AmovPknlMrunSrasWrflDbl", 0.025};
		};
		
		class AmovPknlMrunSrasWrflDbl : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDbl";
			speed = 0.882353;
			actions = "RifleKneelActionsRunBL";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDbl", 0.03, "AmovPknlMwlkSrasWrflDbl", 0.025, "AmovPknlMrunSrasWrflDl", 0.025, "AmovPknlMrunSrasWrflDb", 0.025};
		};
		
		class AmovPknlMrunSrasWrflDb : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDb";
			speed = 0.882353;
			actions = "RifleKneelActionsRunB";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDb", 0.03, "AmovPknlMwlkSrasWrflDb", 0.025, "AmovPknlMrunSrasWrflDbl", 0.025, "AmovPknlMrunSrasWrflDbr", 0.025};
		};
		
		class AmovPknlMrunSrasWrflDbr : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDbr";
			speed = 0.882353;
			actions = "RifleKneelActionsRunBR";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDbr", 0.03, "AmovPknlMwlkSrasWrflDbr", 0.025, "AmovPknlMrunSrasWrflDb", 0.025, "AmovPknlMrunSrasWrflDr", 0.025};
		};
		
		class AmovPknlMrunSrasWrflDr : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDr";
			speed = 0.857143;
			actions = "RifleKneelActionsRunR";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDr", 0.03, "AmovPknlMwlkSrasWrflDr", 0.025, "AmovPknlMrunSrasWrflDbr", 0.025, "AmovPknlMrunSrasWrflDfr", 0.025};
		};
		
		class AmovPknlMrunSrasWrflDfr : AmovPknlMrunSrasWrflDfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\Rfl\AmovPknlMrunSlowWrflDfr";
			speed = 0.821918;
			actions = "RifleKneelActionsRunFR";
			//collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPercMrunSrasWrflDfr", 0.03, "AmovPknlMwlkSrasWrflDfr", 0.025, "AmovPknlMrunSrasWrflDf", 0.025, "AmovPknlMrunSrasWrflDr", 0.025, "AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf : AmovPercMstpSrasWpstDnon {
			actions = "PistolStandActionsWlkF";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDf";
			speed = 0.612245;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			walkcycles = 2;
			visibleSize = 0.800121;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			limitGunMovement = 0.6;
			//aimPrecision = 0.15;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfl", 0.025, "AmovPercMwlkSrasWpstDfr", 0.025, "AmovPercMrunSrasWpstDf", 0.025, "AmovPknlMwlkSrasWpstDf", 0.03, "AmovPercMevaSrasWpstDf", 0.025, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01, "AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class AmovPercMwlkSrasWpstDfl : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkFL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDfl";
			speed = 0.612245;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.025, "AmovPercMwlkSrasWpstDl", 0.025, "AmovPercMrunSrasWpstDfl", 0.025, "AmovPknlMwlkSrasWpstDfl", 0.03, "AmovPercMevaSrasWpstDfl", 0.025, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01, "AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class AmovPercMwlkSrasWpstDl : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDl";
			speed = 0.526316;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfl", 0.025, "AmovPercMwlkSrasWpstDbl", 0.025, "AmovPercMrunSrasWpstDl", 0.025, "AmovPknlMwlkSrasWpstDl", 0.03};
		};
		
		class AmovPercMwlkSrasWpstDbl : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkBL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDbl";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDl", 0.025, "AmovPercMwlkSrasWpstDb", 0.025, "AmovPercMrunSrasWpstDbl", 0.025, "AmovPknlMwlkSrasWpstDbl", 0.03, "AdthPercMstpSrasWpstDb_8", 0.01, "AdthPercMstpSrasWpstDb_9", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDb : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkB";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDb";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbl", 0.025, "AmovPercMwlkSrasWpstDbr", 0.025, "AmovPercMrunSrasWpstDb", 0.025, "AmovPknlMwlkSrasWpstDb", 0.03, "AdthPercMstpSrasWpstDb_8", 0.01, "AdthPercMstpSrasWpstDb_9", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDbr : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkBR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDbr";
			speed = 0.535714;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			limitGunMovement = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDb", 0.025, "AmovPercMwlkSrasWpstDr", 0.025, "AmovPercMrunSrasWpstDbr", 0.025, "AmovPknlMwlkSrasWpstDbr", 0.03, "AdthPercMstpSrasWpstDb_8", 0.01, "AdthPercMstpSrasWpstDb_9", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDr : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDr";
			speed = 0.526316;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbr", 0.025, "AmovPercMwlkSrasWpstDfr", 0.025, "AmovPercMrunSrasWpstDr", 0.025, "AmovPknlMwlkSrasWpstDr", 0.03};
		};
		
		class AmovPercMwlkSrasWpstDfr : AmovPercMwlkSrasWpstDf {
			actions = "PistolStandActionsWlkFR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDfr";
			speed = 0.612245;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.025, "AmovPercMwlkSrasWpstDr", 0.025, "AmovPercMrunSrasWpstDfr", 0.025, "AmovPknlMwlkSrasWpstDfr", 0.03, "AmovPercMevaSrasWpstDfr", 0.025, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01, "AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class AmovPercMwlkSlowWpstDf : AmovPercMwlkSrasWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDf";
			speed = 0.47619;
			disableWeapons = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			//aimPrecision = 0.15;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDfl", 0.025, "AmovPercMwlkSlowWpstDfr", 0.025, "AmovPercMrunSlowWpstDf", 0.025, "AmovPercMevaSlowWpstDf", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDfl : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDfl";
			speed = 0.47619;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDf", 0.025, "AmovPercMwlkSlowWpstDl", 0.025, "AmovPercMrunSlowWpstDfl", 0.025, "AmovPercMevaSlowWpstDfl", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDl : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDl";
			speed = 0.461538;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDfl", 0.025, "AmovPercMwlkSlowWpstDbl", 0.025, "AmovPercMrunSlowWpstDl", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDbl : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDbl";
			speed = 0.337079;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDl", 0.025, "AmovPercMwlkSlowWpstDb", 0.025, "AmovPercMrunSlowWpstDbl", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDb : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDb";
			speed = 0.337079;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDbl", 0.025, "AmovPercMwlkSlowWpstDbr", 0.025, "AmovPercMrunSlowWpstDb", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDbr : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDbr";
			speed = 0.337079;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDb", 0.025, "AmovPercMwlkSlowWpstDr", 0.025, "AmovPercMrunSlowWpstDbr", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDr : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDr";
			speed = 0.483871;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDbr", 0.025, "AmovPercMwlkSlowWpstDfr", 0.025, "AmovPercMrunSlowWpstDr", 0.025};
		};
		
		class AmovPercMwlkSlowWpstDfr : AmovPercMwlkSlowWpstDf {
			actions = "PistolLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\low\pst\AmovPercMwlkSlowWpstDfr";
			speed = 0.47619;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSlowWpstDnon_transition", 0.015, "AmovPercMwlkSlowWpstDf", 0.025, "AmovPercMwlkSlowWpstDr", 0.025, "AmovPercMrunSlowWpstDfr", 0.025, "AmovPercMevaSlowWpstDfr", 0.025};
		};
		
		class AmovPercMrunSrasWpstDf : AmovPercMstpSrasWpstDnon {
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			actions = "PistolStandActionsRunF";
			visibleSize = 0.900121;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDf";
			speed = 0.8;
			duty = CrawlDuty;
			soundOverride = "run";
			showWeaponAim = 0;
			disableWeapon = 1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			walkcycles = 2;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.025, "AmovPercMrunSrasWpstDfl", 0.025, "AmovPercMrunSrasWpstDfr", 0.025, "AmovPknlMrunSrasWpstDf", 0.03, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDf", 0.02, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class PistolStandActionsWlkF : AmovPercMrunSrasWpstDf {
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSlowWpstDf : AmovPercMrunSrasWpstDf {
			actions = "PistolLowStandActions";
			disableWeapons = 1;
			visibleSize = 0.900121;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDf", 0.025, "AmovPercMrunSlowWpstDfl", 0.025, "AmovPercMrunSlowWpstDfr", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDf", 0.025};
		};
		
		class AmovPercMrunSrasWpstDfl : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunFL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDfl";
			speed = 0.7;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfl", 0.025, "AmovPercMrunSrasWpstDf", 0.025, "AmovPercMrunSrasWpstDl", 0.025, "AmovPknlMrunSrasWpstDfl", 0.03, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDfl", 0.02, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class AmovPercMrunSlowWpstDfl : AmovPercMrunSrasWpstDfl {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDfl", 0.025, "AmovPercMrunSlowWpstDf", 0.025, "AmovPercMrunSlowWpstDl", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDfl", 0.025};
		};
		
		class AmovPercMrunSrasWpstDl : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDl";
			speed = 0.810811;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDl", 0.025, "AmovPercMrunSrasWpstDfl", 0.025, "AmovPercMrunSrasWpstDbl", 0.025, "AmovPknlMrunSrasWpstDl", 0.03};
		};
		
		class AmovPercMrunSlowWpstDl : AmovPercMrunSrasWpstDl {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDl", 0.025, "AmovPercMrunSlowWpstDfl", 0.025, "AmovPercMrunSlowWpstDbl", 0.025};
		};
		
		class AmovPercMrunSrasWpstDbl : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunBL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDbl";
			speed = 0.857143;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbl", 0.025, "AmovPercMrunSrasWpstDl", 0.025, "AmovPercMrunSrasWpstDb", 0.025, "AmovPknlMrunSrasWpstDbl", 0.03};
		};
		
		class AmovPercMrunSlowWpstDbl : AmovPercMrunSrasWpstDbl {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDbl", 0.025, "AmovPercMrunSlowWpstDl", 0.025, "AmovPercMrunSlowWpstDb", 0.025};
		};
		
		class AmovPercMrunSrasWpstDb : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunB";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDb";
			speed = 0.857143;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDb", 0.025, "AmovPercMrunSrasWpstDbl", 0.025, "AmovPercMrunSrasWpstDbr", 0.025, "AmovPknlMrunSrasWpstDb", 0.03};
		};
		
		class AmovPercMrunSlowWpstDb : AmovPercMrunSrasWpstDb {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDb", 0.025, "AmovPercMrunSlowWpstDbl", 0.025, "AmovPercMrunSlowWpstDbr", 0.025};
		};
		
		class AmovPercMrunSrasWpstDbr : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunBR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDbr";
			speed = 0.857143;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbr", 0.025, "AmovPercMrunSrasWpstDb", 0.025, "AmovPercMrunSrasWpstDr", 0.025, "AmovPknlMrunSrasWpstDbr", 0.03};
		};
		
		class AmovPercMrunSlowWpstDbr : AmovPercMrunSrasWpstDbr {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDbr", 0.025, "AmovPercMrunSlowWpstDb", 0.025, "AmovPercMrunSlowWpstDr", 0.025};
		};
		
		class AmovPercMrunSrasWpstDr : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDr";
			speed = 0.882353;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDr", 0.025, "AmovPercMrunSrasWpstDbr", 0.025, "AmovPercMrunSrasWpstDfr", 0.025, "AmovPknlMrunSrasWpstDr", 0.03};
		};
		
		class AmovPercMrunSlowWpstDr : AmovPercMrunSrasWpstDr {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDr", 0.025, "AmovPercMrunSlowWpstDbr", 0.025, "AmovPercMrunSlowWpstDfr", 0.025};
		};
		
		class AmovPercMrunSrasWpstDfr : AmovPercMrunSrasWpstDf {
			actions = "PistolStandActionsRunFR";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\run\low\pst\AmovPercMrunSlowWpstDfr";
			speed = 0.7;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfr", 0.025, "AmovPercMrunSrasWpstDf", 0.025, "AmovPercMrunSrasWpstDr", 0.025, "AmovPknlMrunSrasWpstDfr", 0.03, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDfr", 0.02, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1, "AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
		};
		
		class AmovPercMrunSlowWpstDfr : AmovPercMrunSrasWpstDfr {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDfr", 0.025, "AmovPercMrunSlowWpstDf", 0.025, "AmovPercMrunSlowWpstDr", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDfr", 0.025};
		};
		
		class AmovPknlMwlkSrasWpstDf : AmovPknlMstpSrasWpstDnon {
			visibleSize = 0.461538;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.461538;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			limitGunMovement = 0.6;
			//aimPrecision = 0.15;
			actions = "PistolKneelActionsWlkF";
			walkcycles = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.03, "AmovPknlMwlkSrasWpstDfl", 0.025, "AmovPknlMwlkSrasWpstDfr", 0.025, "AmovPknlMrunSrasWpstDf", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01};
		};
		
		class AmovPknlMwlkSrasWpstDfl : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDfl";
			speed = 0.8;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			limitGunMovement = 0.6;
			//aimPrecision = 0.15;
			actions = "PistolKneelActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfl", 0.03, "AmovPknlMwlkSrasWpstDf", 0.025, "AmovPknlMwlkSrasWpstDl", 0.025, "AmovPknlMrunSrasWpstDfl", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01};
		};
		
		class AmovPknlMwlkSrasWpstDl : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDl";
			speed = 1.25;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDl", 0.03, "AmovPknlMwlkSrasWpstDfl", 0.025, "AmovPknlMwlkSrasWpstDbl", 0.025, "AmovPknlMrunSrasWpstDl", 0.025};
		};
		
		class AmovPknlMwlkSrasWpstDbl : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDbl";
			speed = 0.8;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbl", 0.03, "AmovPknlMwlkSrasWpstDl", 0.025, "AmovPknlMwlkSrasWpstDb", 0.025, "AmovPknlMrunSrasWpstDbl", 0.025, "AdthPknlMstpSrasWpstDb_5", 0.01};
		};
		
		class AmovPknlMwlkSrasWpstDb : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDb";
			speed = 0.8;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDb", 0.03, "AmovPknlMwlkSrasWpstDbl", 0.025, "AmovPknlMwlkSrasWpstDbr", 0.025, "AmovPknlMrunSrasWpstDb", 0.025, "AdthPknlMstpSrasWpstDb_5", 0.01};
		};
		
		class AmovPknlMwlkSrasWpstDbr : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDbr";
			speed = 0.8;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDbr", 0.03, "AmovPknlMwlkSrasWpstDb", 0.025, "AmovPknlMwlkSrasWpstDr", 0.025, "AmovPknlMrunSrasWpstDbr", 0.025, "AdthPknlMstpSrasWpstDb_5", 0.01};
		};
		
		class AmovPknlMwlkSrasWpstDr : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDr";
			speed = 1.3;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDr", 0.03, "AmovPknlMwlkSrasWpstDbr", 0.025, "AmovPknlMwlkSrasWpstDfr", 0.025, "AmovPknlMrunSrasWpstDr", 0.025};
		};
		
		class AmovPknlMwlkSrasWpstDfr : AmovPknlMwlkSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDfr";
			speed = 0.9;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "PistolKneelActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfr", 0.03, "AmovPknlMwlkSrasWpstDf", 0.025, "AmovPknlMwlkSrasWpstDr", 0.025, "AmovPknlMrunSrasWpstDfr", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01};
		};
		
		class AmovPknlMrunSrasWpstDf : AmovPercMrunSlowWpstDnon_transition {
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			visibleSize = 0.600122;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDf";
			speed = 0.666667;
			duty = RunDuty;
			soundOverride = "run";
			showWeaponAim = 0;
			disableWeapon = 1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunF";
			walkcycles = 2;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDf", 0.03, "AmovPknlMwlkSrasWpstDf", 0.025, "AmovPknlMrunSrasWpstDfl", 0.025, "AmovPknlMrunSrasWpstDfr", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMrunSrasWpstDf : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMrunSlowWpstDf";
			speed = 1.5;
			looped = 0;
			ConnectTo[] = {"AmovPknlMrunSrasWpstDf", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01};
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPknlMrunSrasWpstDf : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\low\pst\AmovPknlMstpSlowWpstDnon_AmovPknlMrunSlowWpstDf";
			speed = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01};
		};
		
		class AmovPknlMrunSrasWpstDfl : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDfl";
			speed = 0.666667;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDfl", 0.03, "AmovPknlMwlkSrasWpstDfl", 0.025, "AmovPknlMrunSrasWpstDf", 0.025, "AmovPknlMrunSrasWpstDl", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01};
		};
		
		class AmovPknlMrunSrasWpstDl : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDl";
			speed = 0.625;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDl", 0.03, "AmovPknlMwlkSrasWpstDl", 0.025, "AmovPknlMrunSrasWpstDfl", 0.025, "AmovPknlMrunSrasWpstDbl", 0.025};
		};
		
		class AmovPknlMrunSrasWpstDbl : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDbl";
			speed = 0.666667;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDbl", 0.03, "AmovPknlMwlkSrasWpstDbl", 0.025, "AmovPknlMrunSrasWpstDl", 0.025, "AmovPknlMrunSrasWpstDb", 0.025};
		};
		
		class AmovPknlMrunSrasWpstDb : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDb";
			speed = 0.666667;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDb", 0.03, "AmovPknlMwlkSrasWpstDb", 0.025, "AmovPknlMrunSrasWpstDbl", 0.025, "AmovPknlMrunSrasWpstDbr", 0.025};
		};
		
		class AmovPknlMrunSrasWpstDbr : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDbr";
			speed = 0.666667;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDbr", 0.03, "AmovPknlMwlkSrasWpstDbr", 0.025, "AmovPknlMrunSrasWpstDb", 0.025, "AmovPknlMrunSrasWpstDr", 0.025};
		};
		
		class AmovPknlMrunSrasWpstDr : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDr";
			speed = 0.714286;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDr", 0.03, "AmovPknlMwlkSrasWpstDr", 0.025, "AmovPknlMrunSrasWpstDbr", 0.025, "AmovPknlMrunSrasWpstDfr", 0.025};
		};
		
		class AmovPknlMrunSrasWpstDfr : AmovPknlMrunSrasWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\pst\AmovPknlMrunSlowWpstDfr";
			speed = 0.666667;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			actions = "PistolKneelActionsRunFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AmovPercMrunSlowWpstDnon_transition", 0.02, "AmovPercMrunSrasWpstDfr", 0.03, "AmovPknlMwlkSrasWpstDfr", 0.025, "AmovPknlMrunSrasWpstDf", 0.025, "AmovPknlMrunSrasWpstDr", 0.025, "AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf", 0.01, "AdthPercMstpSrasWpstDf_2", 0.01, "AdthPercMstpSrasWpstDf_6", 0.01, "AdthPercMstpSrasWpstDf_7", 0.01};
		};
		
		class AmovPercMrunSlowWlnrDf : AmovPknlMstpSrasWlnrDnon {
			actions = "LauncherStandRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.810811;
			duty = RunDuty;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			soundOverride = "run";
			enableMissile = 0;
			canPullTrigger = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			walkcycles = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMrunSrasWlnrDf", 0.03, "AmovPercMrunSlowWlnrDfl", 0.025, "AmovPercMrunSlowWlnrDfr", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDf", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDf : AmovPercMrunSlowWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDf";
			speed = 0.857143;
			actions = "LauncherKneelStpActionsRunF";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPercMrunSlowWlnrDf", 0.03, "AmovPknlMrunSrasWlnrDfl", 0.025, "AmovPknlMrunSrasWlnrDfr", 0.025, "AmovPercMevaSlowWlnrDf", 0.025, "AmovPknlMwlkSrasWlnrDf", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "AmovPercMrunSrasWlnrDf", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDfl : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDfl";
			speed = 0.7;
			canPullTrigger = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDf", 0.025, "AmovPknlMrunSrasWlnrDfl", 0.03, "AmovPercMrunSlowWlnrDl", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDfr", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDfl : AmovPercMrunSlowWlnrDf {
			actions = "LauncherKneelStpActionsRunFL";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDfl";
			speed = 0.857143;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDf", 0.025, "AmovPercMrunSlowWlnrDfl", 0.03, "AmovPknlMrunSrasWlnrDl", 0.025, "AmovPercMevaSlowWlnrDfl", 0.025, "AmovPknlMwlkSrasWlnrDfl", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "AmovPercMrunSrasWlnrDfl", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDl : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDl";
			speed = 0.810811;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDfl", 0.025, "AmovPknlMrunSrasWlnrDl", 0.03, "AmovPercMrunSlowWlnrDbl", 0.025, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDr", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDl : AmovPercMrunSlowWlnrDl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDl";
			speed = 0.833333;
			actions = "LauncherKneelStpActionsRunL";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDfl", 0.025, "AmovPercMrunSlowWlnrDl", 0.03, "AmovPknlMrunSrasWlnrDbl", 0.025, "AmovPknlMwlkSrasWlnrDl", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "AmovPercMrunSrasWlnrDl", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDbl : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunBActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDbl";
			speed = 0.882353;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDl", 0.025, "AmovPknlMrunSrasWlnrDbl", 0.03, "AmovPercMrunSlowWlnrDb", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDbr", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDbl : AmovPercMrunSlowWlnrDbl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDbl";
			speed = 1;
			actions = "LauncherKneelStpActionsRunBL";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDl", 0.025, "AmovPercMrunSlowWlnrDbl", 0.03, "AmovPknlMrunSrasWlnrDb", 0.025, "AmovPknlMwlkSrasWlnrDbl", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "AmovPercMrunSrasWlnrDbl", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDb : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunBActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDb";
			speed = 0.882353;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDbl", 0.025, "AmovPknlMrunSrasWlnrDb", 0.03, "AmovPercMrunSlowWlnrDbr", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDb", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDb : AmovPercMrunSlowWlnrDb {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDb";
			speed = 1;
			actions = "LauncherKneelStpActionsRunB";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDbl", 0.025, "AmovPercMrunSlowWlnrDb", 0.03, "AmovPknlMrunSrasWlnrDbr", 0.025, "AmovPknlMwlkSrasWlnrDb", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "AmovPercMrunSrasWlnrDb", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDbr : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunBActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDbr";
			speed = 0.882353;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDb", 0.025, "AmovPknlMrunSrasWlnrDbr", 0.03, "AmovPercMrunSlowWlnrDr", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDbl", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDbr : AmovPercMrunSlowWlnrDbr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDbr";
			speed = 1;
			actions = "LauncherKneelStpActionsRunBR";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDb", 0.025, "AmovPercMrunSlowWlnrDbr", 0.03, "AmovPknlMrunSrasWlnrDr", 0.025, "AmovPknlMwlkSrasWlnrDbr", 0.025, "AdthPercMrunSlowWlnrDb_1", 0.01, "AmovPercMrunSrasWlnrDbr", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDr : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDr";
			speed = 1.5;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDbr", 0.025, "AmovPknlMrunSrasWlnrDr", 0.03, "AmovPercMrunSlowWlnrDfr", 0.025, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDl", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDr : AmovPercMrunSlowWlnrDr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDr";
			speed = 0.857143;
			actions = "LauncherKneelStpActionsRunR";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDbr", 0.025, "AmovPercMrunSlowWlnrDr", 0.03, "AmovPknlMrunSrasWlnrDfr", 0.025, "AmovPknlMwlkSrasWlnrDr", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "AmovPercMrunSrasWlnrDr", 0.03};
		};
		
		class AmovPercMrunSlowWlnrDfr : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDfr";
			speed = 0.7;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.1;
			soundOverride = "run";
			soundEnabled = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDf", 0.025, "AmovPercMrunSlowWlnrDr", 0.025, "AmovPknlMrunSrasWlnrDfr", 0.03, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDfl", 0.025};
		};
		
		class AmovPknlMrunSrasWlnrDfr : AmovPercMrunSlowWlnrDfr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\run\low\lnr\AmovPknlMrunSlowWlnrDfr";
			speed = 0.857143;
			actions = "LauncherKneelStpActionsRunFR";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDf", 0.025, "AmovPknlMrunSrasWlnrDr", 0.025, "AmovPercMrunSlowWlnrDfr", 0.03, "AmovPercMevaSlowWlnrDfr", 0.025, "AmovPknlMwlkSrasWlnrDfr", 0.025, "AdthPercMrunSlowWlnrDf_1", 0.01, "AdthPercMrunSlowWlnrDf_2", 0.01, "AmovPercMrunSrasWlnrDfr", 0.03};
		};
		
		class AmovPercMevaSlowWlnrDf : AmovPercMrunSlowWlnrDf {
			actions = "LauncherKneelEvasiveFActions";
			duty = WalkDuty;
			speed = 1;
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDf", 0.025, "AmovPercMevaSlowWlnrDfr", 0.025, "AmovPercMevaSlowWlnrDfl", 0.025};
		};
		
		class AmovPercMevaSlowWlnrDfr : AmovPercMevaSlowWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDfr";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDfr", 0.025, "AmovPercMevaSlowWlnrDf", 0.025, "AmovPercMevaSlowWlnrDfl", 0.025};
		};
		
		class AmovPercMevaSlowWlnrDfl : AmovPercMevaSlowWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\run\low\lnr\AmovPercMrunSlowWlnrDfl";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDfl", 0.025, "AmovPercMevaSlowWlnrDf", 0.025, "AmovPercMevaSlowWlnrDfr", 0.025};
		};
		
		class AmovPknlMwlkSrasWlnrDf : AmovPknlMstpSrasWlnrDnon {
			visibleSize = 0.400122;
			actions = "LauncherKneelActionsWlkF";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDf";
			speed = 0.95;
			duty = CrawlDuty;
			soundOverride = "walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			canPullTrigger = 1;
			limitGunMovement = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDf", 0.025, "AmovPknlMwlkSrasWlnrDfl", 0.025, "AmovPknlMwlkSrasWlnrDfr", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDf", 0.03, "AmovPercMwlkSrasWlnrDf", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDfl : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDfl";
			speed = 0.9;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDfl", 0.025, "AmovPknlMwlkSrasWlnrDf", 0.025, "AmovPknlMwlkSrasWlnrDl", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDfr", 0.03, "AmovPercMwlkSrasWlnrDfl", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDl : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDl";
			speed = 1.2;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDl", 0.025, "AmovPknlMwlkSrasWlnrDfl", 0.025, "AmovPknlMwlkSrasWlnrDbl", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDr", 0.03, "AmovPercMwlkSrasWlnrDl", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDbl : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDbl";
			speed = 0.9;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDbl", 0.025, "AmovPknlMwlkSrasWlnrDl", 0.025, "AmovPknlMwlkSrasWlnrDb", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDbr", 0.03, "AmovPercMwlkSrasWlnrDbl", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDb : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDb";
			speed = 0.9;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDb", 0.025, "AmovPknlMwlkSrasWlnrDbl", 0.025, "AmovPknlMwlkSrasWlnrDbr", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDb", 0.03, "AmovPercMwlkSrasWlnrDb", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDbr : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDbr";
			speed = 0.8;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDbr", 0.025, "AmovPknlMwlkSrasWlnrDb", 0.025, "AmovPknlMwlkSrasWlnrDr", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDbl", 0.03, "AmovPercMwlkSrasWlnrDbr", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDr : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDr";
			speed = 1.2;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDr", 0.025, "AmovPknlMwlkSrasWlnrDbr", 0.025, "AmovPknlMwlkSrasWlnrDfr", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDl", 0.03, "AmovPercMwlkSrasWlnrDr", 0.03};
		};
		
		class AmovPknlMwlkSrasWlnrDfr : AmovPknlMwlkSrasWlnrDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\Wlk\ras\lnr\AmovPknlMwlkSrasWlnrDfr";
			speed = 0.75;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherKneelActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AmovPknlMrunSrasWlnrDfr", 0.025, "AmovPknlMwlkSrasWlnrDf", 0.025, "AmovPknlMwlkSrasWlnrDr", 0.025, "AdthPknlMwlkSrasWlnrDf_1", 0.01, "AdthPknlMwlkSrasWlnrDf_2", 0.01, "AmovPercMwlkSlowWlnrDfl", 0.03, "AmovPercMwlkSrasWlnrDfr", 0.03};
		};
		
		class AmovPknlMwlkSnonWnonDbr : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondbr";
			speed = 0.29703;
			actions = "CivilKneelActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDbr", 0.03, "AmovPknlMwlkSnonWnonDb", 0.025, "AmovPknlMwlkSnonWnonDr", 0.025, "AmovPknlMrunSnonWnonDbr", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDbl : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondbl";
			speed = 0.29703;
			actions = "CivilKneelActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDbl", 0.03, "AmovPknlMwlkSnonWnonDb", 0.025, "AmovPknlMwlkSnonWnonDl", 0.025, "AmovPknlMrunSnonWnonDbl", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDl : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondl";
			speed = 0.29703;
			actions = "CivilKneelActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDl", 0.03, "AmovPknlMwlkSnonWnonDbl", 0.025, "AmovPknlMwlkSnonWnonDfl", 0.025, "AmovPknlMrunSnonWnonDl", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDr : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondr";
			speed = 0.3;
			actions = "CivilKneelActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDr", 0.03, "AmovPknlMwlkSnonWnonDbr", 0.025, "AmovPknlMwlkSnonWnonDfr", 0.025, "AmovPknlMrunSnonWnonDr", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDfr : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondfr";
			speed = 0.337079;
			actions = "CivilKneelActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfr", 0.03, "AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMwlkSnonWnonDf", 0.025, "AmovPknlMwlkSnonWnonDr", 0.025, "AmovPknlMrunSnonWnonDfr", 0.025};
		};
		
		class AmovPknlMwlkSnonWnonDfl : AmovPknlMwlkSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\wlk\non\non\amovpknlmwlksnonwnondfl";
			speed = 0.337079;
			actions = "CivilKneelActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDfl", 0.03, "AmovPknlMwlkSnonWnonDf", 0.025, "AmovPknlMwlkSnonWnonDl", 0.025, "AmovPknlMrunSnonWnonDfl", 0.025};
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMrunSnonWnonDf : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPknlMrunSnonWnonDf";
			speed = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMrunSnonWnonDfl", 0.025, "AmovPknlMrunSnonWnonDfr", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDfl : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			speed = 0.666667;
			actions = "CivilKneelActionsRunFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDfl", 0.03, "AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01, "AmovPknlMrunSnonWnonDf", 0.025, "AmovPknlMwlkSnonWnonDfl", 0.025, "AmovPknlMrunSnonWnonDl", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDl : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			speed = 0.625;
			actions = "CivilKneelActionsRunL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDl", 0.03, "AmovPknlMwlkSnonWnonDl", 0.025, "AmovPknlMrunSnonWnonDfl", 0.025, "AmovPknlMrunSnonWnonDbl", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDbl : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			speed = 0.666667;
			actions = "CivilKneelActionsRunBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDbl", 0.03, "AmovPknlMwlkSnonWnonDbl", 0.025, "AmovPknlMrunSnonWnonDl", 0.025, "AmovPknlMrunSnonWnonDb", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDbr : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			speed = 0.666667;
			actions = "CivilKneelActionsRunBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDbr", 0.03, "AmovPknlMwlkSnonWnonDbr", 0.025, "AmovPknlMrunSnonWnonDb", 0.025, "AmovPknlMrunSnonWnonDr", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDr : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			speed = 0.714286;
			actions = "CivilKneelActionsRunR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDr", 0.03, "AmovPknlMwlkSnonWnonDr", 0.025, "AmovPknlMrunSnonWnonDbr", 0.025, "AmovPknlMrunSnonWnonDfr", 0.025};
		};
		
		class AmovPknlMrunSnonWnonDfr : AmovPknlMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			speed = 0.666667;
			actions = "CivilKneelActionsRunFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.01, "AmovPercMrunSnonWnonDfr", 0.03, "AmovPknlMrunSnonWnonDf", 0.025, "AmovPknlMwlkSnonWnonDfr", 0.025, "AmovPknlMrunSnonWnonDr", 0.025};
		};
		
		class AmovPpneMrunSlowWrflDf : AmovPpneMstpSrasWrflDnon {
			visibleSize = 0.150123;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDf";
			speed = 0.5;
			soundOverride = "crawl";
			duty = CrawlDuty;
			showWeaponAim = 0;
			disableWeapons = 1;
			soundEnabled = 1;
			limitGunMovement = 0;
			legs = "wholeBody";
			aiming = "empty";
			aimingBody = "empty";
			leaning = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			actions = "RifleProneActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDfl", 0.025, "AmovPpneMrunSlowWrflDfr", 0.025, "AmovPpneMsprSlowWrflDf", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDfl : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDfl";
			speed = 0.6;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDf", 0.025, "AmovPpneMrunSlowWrflDl", 0.025, "AmovPpneMsprSlowWrflDfl", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDl : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDl";
			speed = 0.8;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDfl", 0.025, "AmovPpneMrunSlowWrflDbl", 0.025, "AmovPpneMsprSlowWrflDl", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDbl : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDbl";
			speed = 0.7;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDl", 0.025, "AmovPpneMrunSlowWrflDb", 0.025, "AmovPpneMsprSlowWrflDbl", 0.025, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDb : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDb";
			speed = 0.4;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDbl", 0.025, "AmovPpneMrunSlowWrflDbr", 0.025, "AmovPpneMsprSlowWrflDb", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDbr : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDbr";
			speed = 0.6;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDb", 0.025, "AmovPpneMrunSlowWrflDr", 0.025, "AmovPpneMsprSlowWrflDbr", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDr : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDr";
			speed = 1;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDbr", 0.025, "AmovPpneMrunSlowWrflDfr", 0.025, "AmovPpneMsprSlowWrflDr", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWrflDfr : AmovPpneMrunSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\Rfl\AmovPpneMrunSlowWrflDfr";
			speed = 0.6;
			duty = CrawlDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDf", 0.025, "AmovPpneMrunSlowWrflDr", 0.025, "AmovPpneMsprSlowWrflDfr", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDf : AmovPpneMrunSlowWrflDf {
			visibleSize = 0.200123;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDf.rtm";
			speed = 1.05;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDf", 0.025, "AmovPpneMsprSlowWrflDfl", 0.025, "AmovPpneMsprSlowWrflDfr", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDbl : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDbl.rtm";
			speed = 1.44;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDbl", 0.025, "AmovPpneMsprSlowWrflDl", 0.025, "AmovPpneMsprSlowWrflDb", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDl : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDl.rtm";
			speed = 1.68;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDl", 0.025, "AmovPpneMsprSlowWrflDbl", 0.025, "AmovPpneMsprSlowWrflDfl", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDr : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDr.rtm";
			speed = 1.92;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDr", 0.025, "AmovPpneMsprSlowWrflDbr", 0.025, "AmovPpneMsprSlowWrflDfr", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDbr : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDbr.rtm";
			speed = 1.26;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDbr", 0.025, "AmovPpneMsprSlowWrflDr", 0.025, "AmovPpneMsprSlowWrflDb", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDb : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDb.rtm";
			speed = 0.88;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDb", 0.025, "AmovPpneMsprSlowWrflDbl", 0.025, "AmovPpneMsprSlowWrflDbr", 0.025, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDf_injured : AmovPpneMstpSrasWrflDnon_injured {
			actions = "InjuredManActionsRfl";
			speed = 0.5;
			showWeaponAim = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			limitGunMovement = 0;
			soundOverride = "crawl";
			duty = SprintDuty;
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
		};
		
		class AmovPpneMsprSlowWrflDfl : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDfl.rtm";
			speed = 1.22;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDfl", 0.025, "AmovPpneMsprSlowWrflDf", 0.025, "AmovPpneMsprSlowWrflDl", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMsprSlowWrflDfr : AmovPpneMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\spr\low\Rfl\AmovPpneMsprSlowWrflDfr.rtm";
			speed = 1.16;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02, "AmovPpneMrunSlowWrflDfr", 0.025, "AmovPpneMsprSlowWrflDf", 0.025, "AmovPpneMsprSlowWrflDr", 0.025, "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf", 0.05, "AdthPpneMstpSlowWrflDf_1", 0.01, "AdthPpneMstpSlowWrflDf_2", 0.01};
		};
		
		class AmovPpneMrunSlowWpstDf : AmovPpneMstpSrasWpstDnon {
			visibleSize = 0.150123;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDf";
			speed = 1;
			soundOverride = "crawl";
			duty = WalkDuty;
			showWeaponAim = 0;
			disableWeapons = 1;
			limitGunMovement = 0;
			soundEnabled = 1;
			legs = "wholeBody";
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDl", 0.025, "AmovPpneMrunSlowWpstDfr", 0.025, "AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf", 0.01};
		};
		
		class AmovPpneMrunSlowWpstDfl : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDfl";
			speed = 0.93;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDl", 0.025, "AmovPpneMrunSlowWpstDb", 0.025, "AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf", 0.01};
		};
		
		class AmovPpneMrunSlowWpstDl : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDl";
			speed = 1.4;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDf", 0.025, "AmovPpneMrunSlowWpstDfl", 0.025};
		};
		
		class AmovPpneMrunSlowWpstDbl : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDbl";
			speed = 1;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDb", 0.025, "AmovPpneMrunSlowWpstDbr", 0.025};
		};
		
		class AmovPpneMrunSlowWpstDb : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDb";
			speed = 0.73;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDfl", 0.025, "AmovPpneMrunSlowWpstDbl", 0.025};
		};
		
		class AmovPpneMrunSlowWpstDbr : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDbr";
			speed = 1.05;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDbl", 0.025, "AmovPpneMrunSlowWpstDr", 0.025};
		};
		
		class AmovPpneMrunSlowWpstDr : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDr";
			speed = 1.25;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDbr", 0.025, "AmovPpneMrunSlowWpstDfr", 0.025};
		};
		
		class AmovPpneMrunSlowWpstDfr : AmovPpneMrunSlowWpstDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\low\pst\AmovPpneMrunSlowWpstDfr";
			speed = 1;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02, "AmovPpneMrunSlowWpstDf", 0.025, "AmovPpneMrunSlowWpstDr", 0.025, "AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDf : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDf";
			speed = 0.9;
			duty = RunDuty;
			soundOverride = "crawl";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			legs = "wholeBody";
			aimingBody = "empty";
			leaning = "empty";
			aiming = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDfl", 0.025, "AmovPpneMrunSnonWnonDfr", 0.025, "AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.05, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDfl : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDfl";
			speed = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDf", 0.025, "AmovPpneMrunSnonWnonDl", 0.025, "AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.05, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDl : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDl";
			speed = 1.5;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDfl", 0.025, "AmovPpneMrunSnonWnonDbl", 0.025, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDbl : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDbl";
			speed = 1;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDl", 0.025, "AmovPpneMrunSnonWnonDb", 0.025, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDb : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDb";
			speed = 0.65;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDbl", 0.025, "AmovPpneMrunSnonWnonDbr", 0.025, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDbr : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDbr";
			speed = 0.9;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDb", 0.025, "AmovPpneMrunSnonWnonDr", 0.025, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDr : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDr";
			speed = 1.4;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDbr", 0.025, "AmovPpneMrunSnonWnonDfr", 0.025, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMrunSnonWnonDfr : AmovPpneMrunSnonWnonDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\run\non\non\AmovPpneMrunSnonWnonDfr";
			speed = 1.05;
			duty = RunDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMrunSnonWnonDf", 0.025, "AmovPpneMrunSnonWnonDr", 0.025, "AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf", 0.05, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class WeaponMagazineReloadStand : Default {
			visibleSize = 0.750124;
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\rld\rfl\AwopPercMstpSrldWrflDnon.rtm";
			looped = 0;
			speed = 0.4;
			soundEnabled = 0;
			disableWeapons = 1;
			duty = RestDuty;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class WeaponMagazineReloadKneel : WeaponMagazineReloadStand {
			visibleSize = 0.350124;
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\rld\rfl\AwopPknlMstpSrldWrflDnon.rtm";
			speed = 0.4;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSrasWrflDnon_2", 0.01};
		};
		
		class WeaponMagazineReloadProne : WeaponMagazineReloadStand {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\rld\rfl\AwopPpneMstpSrldWrflDnon.rtm";
			visibleSize = 0.125012;
			//aimPrecision = 0.5;
			speed = 0.27;
			onLandBeg = 1;
			onLandEnd = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			weaponIK = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01, "AdthPpneMstpSrasWrflDnon_2", 0.01};
		};
		
		class PistolMagazineReloadStand : Default {
			visibleSize = 0.750124;
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\rld\pst\AwopPercMstpSrldWpstDnon.rtm";
			looped = 0;
			speed = 0.750124;
			soundEnabled = 0;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			duty = RestDuty;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01, "AdthPercMstpSrasWpstDnon_3", 0.01, "AdthPercMstpSrasWpstDnon_5", 0.01};
		};
		
		class PistolMagazineReloadKneel : PistolMagazineReloadStand {
			visibleSize = 0.350124;
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\rld\pst\AwopPknlMstpSrldWpstDnon.rtm";
			speed = 0.32;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01, "AdthPknlMstpSrasWpstDnon_2", 0.01, "AdthPknlMstpSrasWpstDnon_4", 0.01, "AdthPknlMstpSrasWpstDnon_6", 0.01};
		};
		
		class PistolMagazineReloadProne : PistolMagazineReloadStand {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\rld\pst\AwopPpneMstpSrldWpstDnon.rtm";
			visibleSize = 0.125012;
			//aimPrecision = 0.5;
			speed = 0.6;
			onLandBeg = 1;
			onLandEnd = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01, "AdthPpneMstpSrasWpstDnon_2", 0.01};
		};
		
		class LauncherReloadKneel : Default {
			visibleSize = 0.350124;
			actions = "LauncherKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\rld\lnr\AwopPknlMstpSrldWlnrDnon.rtm";
			looped = 0;
			speed = 0.25;
			soundEnabled = 0;
			disableWeapons = 1;
			aiming = "aimingLauncher";
			aimingBody = "aimingUpLauncher";
			duty = RestDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWlnrDnon_1", 0.01, "AdthPercMstpSlowWlnrDnon_2", 0.01, "AdthPknlMwlkSrasWlnrDf_1", 0.01};
		};
		
		class LauncherReloadStand : LauncherReloadKneel {
			file = "\ca\anims\characters\data\anim\sdr\wop\erc\stp\rld\lnr\awoppercmstpsrldwlnrdnon.rtm";
			actions = "LauncherStandStpActions";
			speed = 0.4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01};
		};
		
		class TransAnimBase_noIK : TransAnimBase {
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\pst\amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon";
			speed = 2;
			actions = "PistolKneelActions";
			visibleSize = 0.3;
			ConnectTo[] = {"AmovPknlMstpSlowWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class amovpknlmstpslowwpstdnon_amovpknlmstpsraswpstdnon : amovpknlmstpsraswpstdnon_amovpknlmstpslowwpstdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\low\pst\amovpknlmstpslowwpstdnon_amovpknlmstpsraswpstdnon";
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\pst\amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon";
			actions = "PistolKneelActions";
			disableWeaponsLong = 1;
			showWeaponAim = 0;
			enableBinocular = 1;
			enableOptics = -1;
			limitGunMovement = 0.1;
			showHandGun = 1;
			speed = 1;
			ConnectTo[] = {"amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon_end", 0.02};
			InterpolateTo[] = {"amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon_end", 0.02};
		};
		
		class amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon : amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon";
			showHandGun = 0;
			ConnectTo[] = {"amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon_end", 0.02};
			InterpolateTo[] = {"amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon_end", 0.02};
		};
		
		class amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon_end : amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon_end";
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon", 0.02};
		};
		
		class amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon_end : amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\pst\amovpknlmstpsraswpstdnon_amovpknlmstpsnonwnondnon_end";
			showHandGun = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"amovpknlmstpsnonwnondnon_amovpknlmstpsraswpstdnon", 0.02};
		};
		
		class AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\erc\stp\low\pst\AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon";
			actions = "PistolStandActions";
			speed = 2;
			showHandGun = 1;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon : TransAnimBase {
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon";
			actions = "PistolLowStandActions";
			speed = 2;
			showHandGun = 1;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSlowWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon", 0.02};
		};
		
		class amovpercmstpslowwlnrdnon_amovpercmstpsraswlnrdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon_amovpercmstpsraswlnrdnon.rtm";
			actions = "LauncherStandStpActions";
			speed = 3;
			interpolationRestart = 2;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.01};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon_amovpercmstpslowwlnrdnon", 0.02};
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpslowwlnrdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpslowwlnrdnon.rtm";
			actions = "LauncherStandStpActions";
			speed = 3;
			interpolationRestart = 2;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpslowwlnrdnon", 0.01};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpslowwlnrdnon_amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon : TransAnimBase_noIK {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon.rtm";
			actions = "RifleStandActions";
			speed = 0.3;
			disableWeapons = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.5;
			rightHandIKCurve[] = {0.2, 1, 0.25, 0};
			leftHandIKCurve[] = {0.1, 1, 0.15, 0};
			weaponIK = 4;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.01};
			InterpolateTo[] = {"amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon", 0.015, "AdthPercMstpSrasWrflDnon_32", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_rS0", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01};
		};
		
		class amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon : TransAnimBase_noIK {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\rfl\amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon.rtm";
			actions = "LauncherStandStpActions";
			speed = 0.4;
			disableWeapons = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0.5;
			rightHandIKCurve[] = {0.76, 0, 0.81, 1};
			leftHandIKCurve[] = {0.85, 0, 0.9, 1};
			weaponIK = 4;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.01};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon", 0.015, "adthpercmstpsraswlnrdnon_2", 0.01};
		};
		
		class amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon : TransAnimBase {
			actions = "LauncherKneelStpActions";
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon.rtm";
			speed = 1.2;
			interpolationRestart = 2;
			soundOverride = "laydown";
			soundEnabled = 1;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			weaponIK = 4;
			duty = CrawlDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\lnr\amovpknlmstpsraswlnrdnon_amovpercmstpsraswlnrdnon.rtm";
			actions = "LauncherStandStpActions";
			speed = 1.2;
			interpolationRestart = 2;
			soundOverride = "standup";
			soundEnabled = 1;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			weaponIK = 4;
			duty = WalkDuty;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.400125;
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon.rtm";
			speed = 1.2;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			enableOptics = 1;
			soundOverride = "laydown";
			soundEnabled = 1;
			weaponIK = 1;
			headBobStrength = 0.512438;
			duty = CrawlDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon : AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon {
			actions = "RifleKneelLowActions";
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\rfl\amovpercmstpslowwrfldnon_amovpknlmstpslowwrfldnon.rtm";
			speed = 1;
			soundOverride = "laydown";
			soundEnabled = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon {
			actions = "RifleStandActions_gear";
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02, "AmovPercMstpSrasWrflDnon_gear", 0.02, "AmovPercMstpSrasWrflDnon_diary", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.300125;
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon.rtm";
			speed = 0.6;
			soundOverride = "laydown";
			onLandBeg = 0;
			onLandEnd = 1;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			duty = WalkDuty;
			enableOptics = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.725, 0, 0.8, 1};
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			soundEnabled = 1;
			headBobStrength = 0.512438;
			weaponIK = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon", 0.02, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon.rtm";
			speed = 0.652174;
			soundOverride = "laydown";
			onLandBeg = 0;
			onLandEnd = 1;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0.05, 1, 0.125, 0, 0.7, 0, 0.775, 1};
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			soundEnabled = 1;
			weaponIK = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon : TransAnimBase {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon.rtm";
			speed = 1.6;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			weaponIK = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon", 0.01, "AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon.rtm";
			speed = 1.5;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			weaponIK = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class amovpknlmstpsraswrfldnon_amovpknlmstpslowwrfldnon : AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon {
			actions = "RifleKneelActions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon";
			soundEnabled = 0;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPknlMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon : amovpknlmstpsraswrfldnon_amovpknlmstpslowwrfldnon {
			actions = "RifleKneelActions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\mov\knl\stp\low\rfl\AmovPknlMstpSlowWrflDnon_AmovPknlMstpSrasWrflDnon";
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"amovpknlmstpsraswrfldnon_amovpknlmstpslowwrfldnon", 0.02};
		};
		
		class AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\low\rfl\AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon.rtm";
			speed = 1.05;
			soundOverride = "laydown";
			enableDirectControl = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			duty = SprintDuty;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon_2", 0.01};
			InterpolateTo[] = {"AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon_2 : AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\low\rfl\AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon_2.rtm";
			speed = 1.1;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			interpolationRestart = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon";
			speed = 0.7;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			enableDirectControl = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			soundEnabled = 1;
			duty = SprintDuty;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.600125;
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon.rtm";
			speed = 1.15;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			enableOptics = 1;
			soundOverride = "standup";
			soundEnabled = 1;
			weaponIK = 1;
			headBobStrength = 0.512438;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon : AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon {
			interpolationRestart = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.150125;
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon.rtm";
			speed = 0.6;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			enableOptics = 1;
			leftHandIKCurve[] = {0.05, 1, 0.125, 0, 0.7, 0, 0.775, 1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			soundEnabled = 1;
			duty = CrawlDuty;
			weaponIK = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMsprSrasWrflDf : TransAnimBase {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPercMsprSlowWrflDf.rtm";
			speed = 2.07;
			enableDirectControl = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			soundOverride = "sprint";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPercMsprSrasWrflDf_2", 0.01};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPercMsprSrasWrflDf_2 : AmovPknlMstpSrasWrflDnon_AmovPknlMsprSrasWrflDf {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2";
			speed = 1.5;
			interpolationSpeed = 0.5;
			interpolationRestart = 1;
			soundOverride = "sprint";
			soundEnabled = 1;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.697171;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDf", 0.02, "AmovPercMrunSlowWrflDfl", 0.02, "AmovPercMrunSlowWrflDfr", 0.02, "AmovPercMwlkSrasWrflDf", 0.02, "AmovPercMwlkSrasWrflDfl", 0.02, "AmovPercMwlkSrasWrflDfr", 0.02, "AmovPercMrunSrasWrflDf", 0.02, "AmovPercMrunSrasWrflDfl", 0.02, "AmovPercMrunSrasWrflDfr", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDfl", 0.02, "AmovPercMevaSrasWrflDfr", 0.02, "AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.600125;
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon.rtm";
			speed = 0.5;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			duty = SprintDuty;
			enableOptics = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0, 1, 0.075, 0, 0.45, 0, 0.55, 1};
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf : TransAnimBase {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf";
			speed = 1;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			enableDirectControl = 0;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			duty = SprintDuty;
			soundEnabled = 1;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2", 0.01};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2 : AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2";
			speed = 0.1;
			onLandBeg = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.025, "AmovPercMstpSrasWrflDnon", 0.025, "AmovPercMrunSlowWrflDf", 0.02, "AmovPercMrunSrasWrflDf", 0.02, "AmovPercMevaSrasWrflDf", 0.02, "AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon : AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\low\rfl\amovpknlmstpslowwrfldnon_amovpercmstpslowwrfldnon.rtm";
			speed = 0.95;
			soundOverride = "standup";
			soundEnabled = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon", 0.005};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.250125;
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon.rtm";
			speed = 0.6;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			enableOptics = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0.05, 1, 0.125, 0, 0.6, 0, 0.675, 1};
			rightHandIKCurve[] = {1};
			weaponIK = 1;
			soundEnabled = 1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon.rtm";
			speed = 1.8;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			enableOptics = 2;
			soundOverride = "laydown";
			soundEnabled = 1;
			duty = CrawlDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\low\pst\AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon.rtm";
			speed = 0.95;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			enableDirectControl = 0;
			soundEnabled = 1;
			interpolationRestart = 1;
			duty = SprintDuty;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon_2", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDf_2", 0.01};
		};
		
		class AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon_2 : AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\low\pst\AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon_2.rtm";
			speed = 1.6;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			soundEnabled = 1;
			soundOverride = "laydown";
			duty = SprintDuty;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon";
			speed = 0.8;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundEnabled = 1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon", 0.02, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.2;
			soundOverride = "standup";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			enableOptics = 2;
			soundEnabled = 1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf : TransAnimBase {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPercMsprSlowWpstDf";
			speed = 3.71;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			enableDirectControl = 0;
			soundOverride = "standup";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf_2", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf_2 : AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf {
			actions = "PistolRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPercMsprSlowWpstDf_2";
			speed = 1.48;
			soundOverride = "standup";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMevaSrasWpstDf", 0.02};
			InterpolateTo[] = {"AmovPercMevaSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDf_2", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon.rtm";
			speed = 0.61;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundEnabled = 1;
			duty = CrawlDuty;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon";
			speed = 0.5;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			soundEnabled = 1;
			duty = SprintDuty;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon";
			speed = 0.61;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			soundEnabled = 1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf : TransAnimBase {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf";
			speed = 1.31;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			enableDirectControl = 0;
			soundEnabled = 1;
			interpolationRestart = 1;
			duty = SprintDuty;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf_2", 0.01};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf_2 : AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf {
			actions = "PistolRunFActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf_2";
			speed = 2.17;
			soundOverride = "standup";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMrunSrasWpstDf", 0.02, "AmovPercMevaSrasWpstDf", 0.02};
			InterpolateTo[] = {"AmovPercMrunSrasWpstDf", 0.02, "AmovPercMevaSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDf_2", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle : TransAnimBase_noIK {
			actions = "BinocKneelRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle";
			speed = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle", 0.02, "AdthPknlMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non : AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle {
			actions = "BinocKneelCivilActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr : TransAnimBase_noIK {
			actions = "BinocKneelLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle : TransAnimBase_noIK {
			actions = "BinocProneRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle";
			speed = 0.75;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle", 0.02, "AdthPpneMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr : AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle {
			actions = "BinocProneLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle : TransAnimBase {
			actions = "BinocStandRflActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AwopPercMstpSoptWbinDnon_rifle";
			speed = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle", 0.02, "AdthPercMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non : AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle {
			actions = "BinocStandCivilActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle {
			actions = "BinocStandLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle : TransAnimBase {
			actions = "BinocProneRflActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AwopPpneMstpSoptWbinDnon_rifle";
			speed = 0.7;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle", 0.02, "AdthPpneMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle {
			actions = "BinocProneLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non : AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle {
			actions = "BinocProneCivilActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle : TransAnimBase_noIK {
			actions = "BinocStandRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle";
			speed = 0.6;
			onLandBeg = 1;
			onLandEnd = 0;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle", 0.02, "AdthPercMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr : AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle {
			actions = "BinocStandLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle : TransAnimBase {
			actions = "BinocKneelRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle";
			speed = 0.6;
			onLandBeg = 1;
			onLandEnd = 0;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle", 0.02, "AdthPknlMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr : AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle {
			actions = "BinocKneelLnrActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non : AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle {
			actions = "BinocKneelCivilActions";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst : TransAnimBase_noIK {
			actions = "BinocKneelPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_una";
			speed = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst", 0.02, "AdthPknlMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst : TransAnimBase_noIK {
			actions = "BinocPronePstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_una";
			speed = 0.65;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst", 0.02, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst : TransAnimBase {
			actions = "BinocStandPstActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AwopPercMstpSoptWbinDnon_una";
			speed = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst", 0.02, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst : TransAnimBase {
			actions = "BinocPronePstActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AwopPpneMstpSoptWbinDnon_una";
			speed = 0.8;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst", 0.02, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst : TransAnimBase {
			actions = "BinocStandPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_una";
			speed = 0.73;
			onLandBeg = 1;
			onLandEnd = 0;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst", 0.02, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst : TransAnimBase {
			actions = "BinocKneelPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_una";
			speed = 0.7;
			onLandBeg = 1;
			onLandEnd = 0;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst", 0.02, "AdthPknlMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non : TransAnimBase_noIK {
			actions = "BinocProneCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_una";
			speed = 0.87;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non", 0.02, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non : TransAnimBase {
			actions = "BinocStandCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_una";
			speed = 0.87;
			onLandBeg = 1;
			onLandEnd = 0;
			canPullTrigger = 0;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non", 0.02, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilKneelActions";
			file = "\dayz_anim\zmb\zmbStand_zmbKneel";
			speed = 0.6;
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpDefault";
			soundOverride = "standup";
			limitGunMovement = 0.1;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02, "AmovPercMstpSnonWnonDnon_gear", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02, "AdthPknlMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon.rtm";
			speed = 0.483871;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon", 0.02, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2 : AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2";
			speed = 1.2;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon.rtm";
			speed = 0.588235;
			onLandBeg = 0;
			onLandEnd = 1;
			soundOverride = "laydown";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			duty = CrawlDuty;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.02, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon.rtm";
			speed = 0.4;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			duty = SprintDuty;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon.rtm";
			speed = 0.447761;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			leaningFactorBeg = 0;
			leaningFactorEnd = 1;
			interpolationRestart = 2;
			duty = WalkDuty;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AdthPknlMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf";
			speed = 1.06;
			onLandBeg = 1;
			onLandEnd = 0;
			soundOverride = "standup";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2", 0.01};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2 : AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2";
			speed = 1.32;
			soundOverride = "sprint";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMevaSnonWnonDf", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon.rtm";
			speed = 0.8;
			disableWeapons = 1;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end", 0.02, "AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.8;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase {
			visibleSize = 0.350125;
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon";
			speed = 0.78;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 1.6;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon";
			speed = 0.65;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end", 0.02, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end : AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end";
			speed = 1.3;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase {
			actions = "LauncherKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon";
			speed = 0.32;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			rightHandIKCurve[] = {0.7, 0, 0.75, 1};
			leftHandIKCurve[] = {0.9, 0, 0.95, 1};
			soundEnabled = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0.5;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AdthPknlMwlkSrasWlnrDf_1", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon : TransAnimBase_noIK {
			actions = "BinocStandRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon";
			speed = 0.7;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end";
			speed = 0.76;
			showItemInHand = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon", 0.01, "AdthPercMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase {
			visibleSize = 0.350125;
			actions = "BinocKneelRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon";
			speed = 0.94;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon_end", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon_end : AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon {
			actions = "BinocKneelRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon_end";
			speed = 1.56;
			showItemInHand = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon", 0.01, "AdthPknlMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "BinocProneRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon";
			speed = 0.66;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon_end", 0.01, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon {
			actions = "BinocProneRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon_end";
			speed = 0.92;
			showItemInHand = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon", 0.01, "AdthPpneMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon";
			speed = 0.39;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.35;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon";
			speed = 1.8;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end : AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end";
			speed = 0.78;
			showHandGun = 0;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			interpolationSpeed = 20;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.350125;
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon";
			speed = 1.7;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon {
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end";
			speed = 0.72;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon";
			speed = 1.3;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end", 0.02, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end";
			speed = 0.65;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			showHandGun = 0;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase {
			actions = "LauncherKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon";
			speed = 1.3;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			showHandgun = 1;
			interpolationRestart = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKCurve[] = {0.9, 1, 0.95, 0};
			leftHandIKCurve[] = {0.5, 1, 0.55, 0};
			soundEnabled = 0;
			weaponIK = 2;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon {
			actions = "LauncherKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end";
			speed = 0.55;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			showHandGun = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.4, 0, 0.5, 1};
			leftHandIKCurve[] = {0.7, 0, 0.8, 1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			soundEnabled = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon : TransAnimBase {
			actions = "BinocStandPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon";
			speed = 1.15;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end", 0.01, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid";
			speed = 0.7;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid", 0.01, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end";
			speed = 1.15;
			showItemInHand = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon", 0.01, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase {
			visibleSize = 0.350125;
			actions = "BinocKneelPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon";
			speed = 0.85;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end", 0.01, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid : AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid";
			speed = 0.86;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid", 0.01, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end : AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end";
			speed = 1.25;
			showItemInHand = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon", 0.01, "AdthPknlMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "BinocPronePstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon";
			speed = 0.75;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_end", 0.01, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid : AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid";
			speed = 0.59;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid", 0.01, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_end";
			speed = 0.83;
			showItemInHand = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon", 0.01, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "PistolSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon";
			speed = 1.09;
			disableWeapons = 1;
			showHandgun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			interpolationSpeed = 2;
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end : AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon {
			actions = "PistolSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end";
			speed = 0.65;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			interpolationSpeed = 2;
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.86;
			disableWeapons = 1;
			showHandGun = 0;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			onLandBeg = 1;
			onLandEnd = 1;
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon_end", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon_end : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon_end";
			speed = 0.87;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			showHandGun = 0;
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon";
			speed = 0.32;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.25, 1, 0.3, 0};
			leftHandIKCurve[] = {0.05, 1, 0.1, 0};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			soundEnabled = 0;
			leaningFactorEnd = 1;
			leaningFactorBeg = 0.5;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon";
			speed = 0.6;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKCurve[] = {0.5, 1, 0.6, 0};
			leftHandIKCurve[] = {0.2, 1, 0.3, 0};
			soundEnabled = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 1.22;
			showHandGun = 1;
			interpolationRestart = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKCurve[] = {0.05, 0, 0.1, 1};
			leftHandIKCurve[] = {0.45, 0, 0.5, 1};
			soundEnabled = 0;
			weaponIK = 2;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase {
			actions = "BinocKneelLnrActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon";
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {0.05, 1, 0.15, 0};
			speed = 0.75;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			canPullTrigger = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon_End", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon_end", 0.01, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon_End : AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon {
			actions = "BinocKneelLnrActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon_end";
			speed = 1.3;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon", 0.01, "AdthPknlMstpSlowWlnrDnon_binocular", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon";
			speed = 0.34;
			rightHandIKCurve[] = {0.45, 1, 0.5, 0};
			leftHandIKCurve[] = {0.05, 1, 0.15, 0};
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			soundOverride = "standup";
			soundEnabled = 1;
			weaponIK = 4;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.03};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.33;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 0;
			onLandEnd = 1;
			interpolationRestart = 2;
			soundOverride = "laydown";
			soundEnabled = 1;
			duty = CrawlDuty;
			leftHandIKCurve[] = {0.1, 1, 0.15, 0};
			rightHandIKCurve[] = {0.1, 1, 0.15, 0};
			weaponIK = 4;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon : AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\lnr\AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.229008;
			duty = WalkDuty;
			leftHandIKCurve[] = {0.95, 1, 1, 0};
			rightHandIKCurve[] = {0.05, 1, 0.1, 0};
			weaponIK = 4;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02, "AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon : TransAnimBase_noIK {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon";
			speed = 0.72;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end", 0.01, "AdthPercMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end";
			speed = 0.9;
			showItemInHand = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.350125;
			actions = "RifleKneelActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWrflDnon";
			speed = 0.92;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon_end", 0.01, "AdthPknlMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon {
			actions = "RifleKneelActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWrflDnon_end";
			speed = 1.1;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon", 0.01, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon";
			speed = 0.92;
			showItemInHand = 1;
			disableWeapon = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon_end", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon_end", 0.01, "AdthPpneMstpSlowWrflDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon_end";
			speed = 0.66;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon", 0.01, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon";
			speed = 0.95;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end", 0.01, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid";
			speed = 0.48;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.71;
			showHandgun = 1;
			disableWeapons = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon", 0.01, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolKneelActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWpstDnon";
			speed = 1.16;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end", 0.01, "AdthPknlMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon {
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWpstDnon_mid";
			speed = 0.89;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid", 0.01, "AdthPknlMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid {
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 0.85;
			showHandgun = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon", 0.01, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			visibleSize = 0.125013;
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon";
			speed = 0.8;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_end", 0.02, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid";
			speed = 0.46;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid", 0.02, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_end";
			speed = 0.86;
			showHandgun = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon", 0.02, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase {
			actions = "LauncherKneelActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWlnrDnon";
			speed = 1.29;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			weaponIK = 4;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon_end", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon_End", 0.01, "AdthPknlMstpSlowWlnrDnon_binocular", 0.01};
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon {
			actions = "LauncherKneelActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_AmovPknlMstpSrasWlnrDnon_end";
			speed = 0.75;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {0.85, 0, 0.95, 1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			canPullTrigger = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon", 0.01, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon";
			speed = 0.82;
			disableWeapons = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end", 0.01, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon {
			speed = 1.1;
			actions = "LauncherStandStpActions";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_mid", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end";
			speed = 2.03;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_mid : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end {
			speed = 2.2;
			actions = "LauncherStandStpActions";
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_mid", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.71;
			disableWeapons = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon_end", 0.01, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end";
			speed = 1.1;
			showItemInHand = 0;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon", 0.01, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon";
			speed = 0.4;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon";
			speed = 0.35;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon";
			speed = 0.6;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			interpolationSpeed = 2;
			canPullTrigger = 0;
			enableOptics = 2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end", 0.02, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.64;
			showHandGun = 1;
			interpolationRestart = 2;
			interpolationSpeed = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon";
			speed = 0.86;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			canPullTrigger = 0;
			enableOptics = 2;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon_end", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon_end : AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon {
			actions = "PistolProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon_end";
			speed = 0.87;
			showHandGun = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase {
			actions = "LauncherKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon";
			speed = 0.34;
			rightHandIKCurve[] = {0.5, 0, 0.55, 1};
			leftHandIKCurve[] = {0.85, 0, 0.95, 1};
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			canPullTrigger = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon : AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon.rtm";
			speed = 0.5;
			leftHandIKCurve[] = {0.7, 0, 0.75, 1};
			rightHandIKCurve[] = {0.45, 0, 0.5, 1};
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.01};
			InterpolateTo[] = {"amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon : AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon {
			actions = "LauncherKneelStpActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon";
			speed = 0.31;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 0;
			leftHandIKCurve[] = {0.85, 0, 0.9, 1};
			rightHandIKCurve[] = {0.85, 0, 0.9, 1};
			interpolationRestart = 2;
			canPullTrigger = 0;
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon : TransAnimBase {
			actions = "BinocStandCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon";
			speed = 2;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon : amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon {
			actions = "BinocStandLnrActions";
			speed = 0.6;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKCurve[] = {0.05, 1, 0.1, 0};
			rightHandIKCurve[] = {0.45, 1, 0.5, 0};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_mid", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end", 0.02};
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_mid : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon {
			actions = "BinocStandLnrActions";
			speed = 2.2;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_mid", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon {
			actions = "BinocStandCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end";
			speed = 0.98;
			showItemInHand = 1;
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon", 0.01, "AdthPercMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end {
			actions = "BinocStandLnrActions";
			speed = 1.1;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase {
			actions = "BinocProneCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon";
			speed = 0.8;
			disableWeapons = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			onLandBeg = 1;
			onLandEnd = 1;
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon_end", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end", 0.01, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon {
			actions = "BinocProneCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon_end";
			speed = 1;
			showItemInHand = 1;
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon", 0.01, "AdthPpneMstpSnonWnonDnon_binocular", 0.01};
		};
		
		class AmovPercMevaSrasWrflDf : SprintBaseDf {
			actions = "RifleStandEvasiveActions";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.797005;
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			duty = WalkDuty;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMwlkSrasWrflDf", 0.025, "AmovPercMrunSrasWrflDf", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMevaSrasWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AmovPknlMevaSrasWrflDf : AmovPercMevaSrasWrflDf {
			actions = "RifleKneelEvasiveActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSlowWrflDf", 0.025, "AmovPknlMrunSrasWrflDf", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPercMevaSlowWrflDf", 0.025, "AmovPknlMevaSrasWrflDfl", 0.025, "AmovPknlMevaSrasWrflDfr", 0.025};
		};
		
		class AmovPercMevaSlowWrflDf : AmovPercMevaSrasWrflDf {
			actions = "RifleStandLowEvasiveActions";
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.025, "AmovPercMwlkSlowWrflDf", 0.025, "AmovPercMrunSlowWrflDf", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPknlMevaSrasWrflDf", 0.025, "AidlPercMevaSrasWrflDf", 0.01, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMevaSlowWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AidlPercMevaSrasWrflDf : AmovPercMevaSlowWrflDf {
			actions = "RifleStandEvasiveActions_Idle";
			ConnectTo[] = {};
			InterpolateTo[] = {"AidlPercMwlkSrasWrflDf", 0.025, "AidlPercMrunSrasWrflDf", 0.025, "AmovPercMevaSlowWrflDf", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AidlPercMwlkSrasWrflDb : AmovPercMwlkSlowWrflDb {
			actions = "RifleStandActions_Idle";
			ConnectTo[] = {};
			InterpolateTo[] = {"AidlPercMwlkSrasWrflDf", 0.02, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMevaSrasWrflDfl : SprintBaseDfl {
			actions = "RifleStandEvasiveActions";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			duty = WalkDuty;
			relSpeedMax = 1.09651;
			relSpeedMin = 0.797005;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPercMwlkSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPercMrunSrasWrflDl", 0.05, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPknlMevaSrasWrflDfl", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMevaSrasWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AmovPknlMevaSrasWrflDfl : AmovPercMevaSrasWrflDfl {
			actions = "RifleKneelEvasiveActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSlowWrflDfl", 0.025, "AmovPknlMrunSrasWrflDfl", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPknlMevaSrasWrflDfr", 0.025};
		};
		
		class AmovPercMevaSlowWrflDfl : AmovPercMevaSrasWrflDfl {
			actions = "RifleStandLowEvasiveActions";
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.025, "AmovPercMwlkSlowWrflDfl", 0.025, "AmovPercMrunSlowWrflDfl", 0.025, "AmovPercMrunSrasWrflDfl", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPknlMevaSrasWrflDfl", 0.025, "AmovPercMevaSlowWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AmovPercMevaSrasWrflDfr : SprintBaseDfr {
			actions = "RifleStandEvasiveActions";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			relSpeedMin = 0.797005;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.02, "AmovPercMrunSlowWrflDfr", 0.025, "AmovPercMwlkSrasWrflDfr", 0.025, "AmovPercMrunSrasWrflDr", 0.05, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSrasWrflDf", 0.025, "AmovPercMevaSrasWrflDfl", 0.025, "AmovPknlMevaSrasWrflDfr", 0.025, "AmovPercMevaSlowWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_6", 0.01, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AmovPknlMevaSrasWrflDfr : AmovPercMevaSrasWrflDfr {
			actions = "RifleKneelEvasiveActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSlowWrflDfr", 0.025, "AmovPknlMrunSrasWrflDfr", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPknlMevaSrasWrflDf", 0.025, "AmovPknlMevaSrasWrflDfl", 0.025, "AmovPercMevaSrasWrflDfr", 0.025, "AmovPercMevaSlowWrflDfr", 0.025};
		};
		
		class AmovPercMevaSlowWrflDfr : AmovPercMevaSrasWrflDfr {
			actions = "RifleStandLowEvasiveActions";
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.025, "AmovPercMwlkSlowWrflDfr", 0.025, "AmovPercMrunSrasWrflDfr", 0.025, "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon", 0.02, "AmovPercMevaSlowWrflDf", 0.025, "AmovPercMevaSlowWrflDfl", 0.025, "AmovPercMevaSrasWrflDfr", 0.025, "AmovPknlMevaSrasWrflDfr", 0.025, "AdthPercMrunSlowWrflDf_A1short", 0.01, "AdthPercMrunSlowWrflDf_A2short", 0.01, "AdthPercMrunSlowWrflDf_A3short", 0.01, "AdthPercMrunSlowWrflDf_A4short", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl";
			speed = 0.55;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDl", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl : AmovPercMstpSlowWrflDnon {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl";
			speed = 0.6;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDl", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl";
			speed = 0.57;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDl", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl : AmovPercMrunSrasWrflDf {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\ras\rfl\AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl";
			speed = 0.57;
			soundOverride = "run";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDl", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr";
			speed = 0.52;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDr", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr : AmovPercMstpSlowWrflDnon {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr";
			speed = 0.54;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDr", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr";
			speed = 0.51;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDr", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr : AmovPercMrunSrasWrflDf {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\ras\rfl\AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr";
			speed = 0.55;
			soundOverride = "run";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDr", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb";
			speed = 0.97;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb : AmovPercMstpSlowWrflDnon {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb";
			speed = 0.92;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb";
			speed = 0.95;
			soundOverride = "run";
			soundEnabled = 1;
			looped = 0;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb : AmovPercMrunSrasWrflDf {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\ras\rfl\AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb";
			speed = 0.92;
			soundOverride = "run";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDl : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDl";
			speed = 0.57;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPknlMwlkSrasWrflDl", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDr : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDr";
			speed = 0.51;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPknlMwlkSrasWrflDr", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb : AmovPknlMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb";
			speed = 0.7;
			soundOverride = "sprint";
			soundEnabled = 1;
			headBobStrength = 0.512438;
			ConnectTo[] = {"AmovPknlMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl : AmovPpneMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl";
			speed = 1.1;
			duty = SprintDuty;
			soundOverride = "";
			enableOptics = 0;
			enableDirectControl = 0;
			relSpeedMin = 0.597338;
			soundEnabled = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr : AmovPpneMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr";
			speed = 1.2;
			duty = SprintDuty;
			soundOverride = "";
			enableOptics = 0;
			enableDirectControl = 0;
			relSpeedMin = 0.597338;
			soundEnabled = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMevaSrasWpstDf : SprintCivilBaseDf {
			actions = "PistolStandEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			showHandGun = 1;
			duty = WalkDuty;
			visibleSize = 1;
			//aimPrecision = 1;
			relSpeedMin = 0.687188;
			relSpeedMax = 1.09651;
			enableOptics = 2;
			speed = 1.71429;
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\spr\low\pst\AmovPercMsprSlowWpstDf";
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.025, "AmovPercMrunSrasWpstDf", 0.02, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDfl", 0.02, "AmovPercMevaSrasWpstDfr", 0.02};
		};
		
		class AmovPercMevaSlowWpstDf : AmovPercMevaSrasWpstDf {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDf", 0.025, "AmovPercMrunSlowWpstDf", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDfl", 0.025, "AmovPercMevaSlowWpstDfr", 0.025};
		};
		
		class AmovPercMevaSrasWpstDfl : SprintCivilBaseDfl {
			actions = "PistolStandEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			showHandGun = 1;
			enableOptics = 2;
			speed = 1.71429;
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\spr\low\pst\AmovPercMsprSlowWpstDfl";
			duty = WalkDuty;
			visibleSize = 1;
			relSpeedMin = 0.687188;
			relSpeedMax = 1.09651;
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfl", 0.025, "AmovPercMrunSrasWpstDfl", 0.02, "AmovPercMrunSrasWpstDl", 0.02, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDf", 0.02, "AmovPercMevaSrasWpstDfr", 0.02};
		};
		
		class AmovPercMevaSlowWpstDfl : AmovPercMevaSrasWpstDfl {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDfl", 0.025, "AmovPercMrunSlowWpstDfl", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDf", 0.025, "AmovPercMevaSlowWpstDfr", 0.025};
		};
		
		class AmovPercMevaSrasWpstDfr : SprintCivilBaseDfr {
			actions = "PistolStandEvasiveActions";
			speed = 1.67;
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			showHandGun = 1;
			enableOptics = 2;
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\spr\low\pst\AmovPercMsprSlowWpstDfr";
			duty = WalkDuty;
			visibleSize = 1;
			relSpeedMin = 0.687188;
			relSpeedMax = 1.09651;
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMwlkSrasWpstDfr", 0.025, "AmovPercMrunSrasWpstDr", 0.02, "AmovPercMrunSrasWpstDfr", 0.02, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSrasWpstDf", 0.02, "AmovPercMevaSrasWpstDfl", 0.02};
		};
		
		class AmovPercMevaSlowWpstDfr : AmovPercMevaSrasWpstDfr {
			disableWeapons = 1;
			actions = "PistolLowStandActions";
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSlowWpstDfr", 0.025, "AmovPercMrunSlowWpstDfr", 0.025, "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0.02, "AmovPercMevaSlowWpstDf", 0.025, "AmovPercMevaSlowWpstDfl", 0.025};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl : AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl";
			speed = 1.02;
			duty = SprintDuty;
			soundOverride = "";
			enableOptics = 0;
			enableDirectControl = 0;
			soundEnabled = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr : AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr";
			speed = 1.02;
			duty = SprintDuty;
			soundOverride = "";
			enableOptics = 0;
			enableDirectControl = 0;
			soundEnabled = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMevaSnonWnonDf : SprintCivilBaseDf {
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			speed = 2;
			canPullTrigger = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.10649;
			walkcycles = 2;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDf", 0.02, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDf", 0.025, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMevaSnonWnonDfl", 0.02, "AmovPercMevaSnonWnonDfr", 0.02};
		};
		
		class AmovPercMevaSnonWnonDfl : SprintCivilBaseDfl {
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			canPullTrigger = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.10649;
			walkcycles = 2;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDfl", 0.02, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMwlkSnonWnonDfl", 0.025, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMevaSnonWnonDf", 0.02, "AmovPercMevaSnonWnonDfr", 0.02};
		};
		
		class AmovPercMevaSnonWnonDfr : SprintCivilBaseDfr {
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			canPullTrigger = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.10649;
			walkcycles = 2;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDfr", 0.025, "AmovPercMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDfr", 0.02, "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMevaSnonWnonDf", 0.02, "AmovPercMevaSnonWnonDfl", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl";
			speed = 0.95;
			duty = SprintDuty;
			soundOverride = "roll";
			enableOptics = 0;
			enableDirectControl = 0;
			canPullTrigger = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr";
			speed = 0.95;
			duty = SprintDuty;
			soundOverride = "roll";
			enableOptics = 0;
			enableDirectControl = 0;
			canPullTrigger = 0;
			headBobStrength = -1;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_1 : DefaultDie {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_1";
			speed = 0.72;
			looped = 0;
			equivalentTo = "AdthPercMstpSlowWrflDnon_1";
			variantsPlayer[] = {"AdthPercMstpSlowWrflDnon_1", 0.166, "AdthPercMstpSlowWrflDnon_2", 0.166, "AdthPercMstpSlowWrflDnon_4", 0.166, "AdthPercMstpSlowWrflDnon_8", 0.166, "AdthPercMstpSlowWrflDnon_16", 0.166, "AdthPercMstpSlowWrflDnon_32"};
			variantsAI[] = {""};
			variantAfter[] = {0, 0, 0};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			terminal = 1;
			soundOverride = "bodyfall";
			canPullTrigger = 1;
			ConnectTo[] = {"DeadState", 1.0, "TestSurrender", 0.9};
			InterpolateTo[] = {"TestSurrender", 0.9};
		};
		
		class AdthPercMstpSlowWrflDnon_2 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_2";
			speed = 0.67;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_4 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_4";
			speed = 0.49;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_8 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_8";
			speed = 0.58;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDb_8 : AdthPercMstpSlowWrflDnon_8 {
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_1";
			speed = 0.72;
			equivalentTo = "AdthPercMstpSlowWrflDf_1";
			variantsPlayer[] = {"AdthPercMstpSlowWrflDf_1", 0.33, "AdthPercMstpSlowWrflDf_2", 0.33, "AdthPercMstpSlowWrflDf_4"};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDf_2 : AdthPercMstpSlowWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_2";
			speed = 0.66;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDf_4 : AdthPercMstpSlowWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDf_4";
			speed = 0.49;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_6 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\run\low\Rfl\AdthPercMrunSlowWrflDf_6";
			speed = 0.61;
			equivalentTo = "";
			variantsPlayer[] = {};
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_1";
			speed = 0.72;
			equivalentTo = "AdthPercMstpSrasWrflDnon_1";
			variantsPlayer[] = {"AdthPercMstpSrasWrflDnon_1", 0.166, "AdthPercMstpSrasWrflDnon_2", 0.166, "AdthPercMstpSrasWrflDnon_4", 0.166, "AdthPercMstpSrasWrflDnon_8", 0.166, "AdthPercMstpSrasWrflDnon_16", 0.166, "AdthPercMstpSrasWrflDnon_32"};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_2 : AdthPercMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_2";
			speed = 0.67;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_4 : AdthPercMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_4";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_8 : AdthPercMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_8";
			speed = 0.58;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_rS0 : AdthPercMstpSrasWrflDnon_1 {
			interpolationSpeed = 200;
			variantsPlayer[] = {"AdthPercMstpSrasWrflDnon_r05", 0.125, "AdthPercMstpSrasWrflDnon_r06", 0.125, "AdthPercMstpSrasWrflDnon_r07", 0.125, "AdthPercMstpSrasWrflDnon_r08", 0.125, "AdthPercMstpSrasWrflDnon_r09", 0.125, "AdthPercMstpSrasWrflDnon_r10", 0.125, "AdthPercMstpSrasWrflDnon_r12", 0.125, "AdthPercMstpSrasWrflDnon_r13"};
			variantAfter[] = {0, 0, 0};
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_trans";
			speed = 1e+010;
			terminal = 0;
			ConnectTo[] = {"AdthPercMstpSrasWrflDnon_r05", 0.5, "AdthPercMstpSrasWrflDnon_r06", 0.5, "AdthPercMstpSrasWrflDnon_r07", 0.5, "AdthPercMstpSrasWrflDnon_r08", 0.5, "AdthPercMstpSrasWrflDnon_r09", 0.5, "AdthPercMstpSrasWrflDnon_r10", 0.5, "AdthPercMstpSrasWrflDnon_r12", 0.5, "AdthPercMstpSrasWrflDnon_r13", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_rS0 : AdthPercMstpSrasWrflDnon_rS0 {
			variantsPlayer[] = {"AdthPercMstpSlowWrflDnon_r05", 0.125, "AdthPercMstpSlowWrflDnon_r06", 0.125, "AdthPercMstpSlowWrflDnon_r07", 0.125, "AdthPercMstpSlowWrflDnon_r08", 0.125, "AdthPercMstpSlowWrflDnon_r09", 0.125, "AdthPercMstpSlowWrflDnon_r10", 0.125, "AdthPercMstpSlowWrflDnon_r12", 0.125, "AdthPercMstpSlowWrflDnon_r13"};
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\rfl\AdthPercMstpSlowWrflDnon_trans";
			ConnectTo[] = {"AdthPercMstpSlowWrflDnon_r05", 0.05, "AdthPercMstpSlowWrflDnon_r06", 0.05, "AdthPercMstpSlowWrflDnon_r07", 0.05, "AdthPercMstpSlowWrflDnon_r08", 0.05, "AdthPercMstpSlowWrflDnon_r09", 0.05, "AdthPercMstpSlowWrflDnon_r10", 0.05, "AdthPercMstpSlowWrflDnon_r12", 0.05, "AdthPercMstpSlowWrflDnon_r13", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r05 : AdthPercMstpSrasWrflDnon_rS0 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r05";
			speed = 0.441176;
			terminal = 1;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r05 : AdthPercMstpSlowWrflDnon_rS0 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r05";
			speed = 0.441176;
			terminal = 1;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r06 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r06";
			speed = 0.6;
			variantsPlayer[] = {};
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r06 : AdthPercMstpSlowWrflDnon_r05 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r06";
			speed = 0.6;
			variantsPlayer[] = {};
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r07 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r07";
			speed = 0.38961;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r07 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r07";
			speed = 0.38961;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r08 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r08";
			speed = 0.394737;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r08 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r08";
			speed = 0.394737;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r09 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r09";
			speed = 0.447761;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r09 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r09";
			speed = 0.447761;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r10 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r10";
			speed = 0.252101;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r10 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r10";
			speed = 0.252101;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r12 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r12";
			speed = 0.453571;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r12 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r12";
			speed = 0.453571;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_r13 : AdthPercMstpSrasWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_r13";
			speed = 0.379747;
			ConnectTo[] = {"DeadState", 0.5};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_r13 : AdthPercMstpSlowWrflDnon_r06 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\low\Rfl\AdthPercMstpSlowWrflDnon_r13";
			speed = 0.379747;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A1short : AdthPercMstpSlowWrflDnon_r13 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A1short";
			speed = 0.697674;
			interpolationSpeed = 5;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A2short : AdthPercMrunSlowWrflDf_A1short {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A2short";
			speed = 0.612245;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A3short : AdthPercMrunSlowWrflDf_A1short {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A3short";
			speed = 0.666667;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A4short : AdthPercMrunSlowWrflDf_A1short {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_4short";
			speed = 0.75;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A1short : AdthPercMrunSlowWrflDf_A1short {
			speed = 0.697674;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_1short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A1short : AdthPercMrunSlowWrflDfl_A1short {
			speed = 0.697674;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_1short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A2short : AdthPercMrunSlowWrflDfr_A1short {
			speed = 0.612245;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_2short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A3short : AdthPercMrunSlowWrflDfr_A1short {
			speed = 0.666667;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_3short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A4short : AdthPercMrunSlowWrflDfr_A1short {
			speed = 0.75;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_4short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A2short : AdthPercMrunSlowWrflDfl_A1short {
			speed = 0.612245;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_2short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A3short : AdthPercMrunSlowWrflDfl_A1short {
			speed = 0.666667;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_3short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A4short : AdthPercMrunSlowWrflDfl_A1short {
			speed = 0.75;
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_4short";
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\RagDoll\adthPercMrunSlowWrflDfl_A1";
			speed = 0.697;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_A2";
			speed = 0.555;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_A3";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfl_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfl_A4";
			speed = 0.68;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_A1";
			speed = 0.697;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_A2";
			speed = 0.555;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_A3";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDfr_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDfr_A4";
			speed = 0.68;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A1";
			speed = 0.69;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A2";
			speed = 0.55;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A3";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWrflDf_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMrunSlowWrflDf_A4";
			speed = 0.68;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWlnrDnon_A1";
			speed = 0.42;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWlnrDnon_A2";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWpstDnon_A1";
			speed = 0.81;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWpstDnon_A2";
			speed = 0.44;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWpstDnon_A3";
			speed = 0.73;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWpstDnon_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWpstDnon_A4";
			speed = 0.88;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWpstDnon_A5 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSlowWpstDnon_A5";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSnonWnonDnon_A1";
			speed = 0.81;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSnonWnonDnon_A2";
			speed = 0.44;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSnonWnonDnon_A3";
			speed = 0.73;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSnonWnonDnon_A4";
			speed = 0.88;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_A5 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSnonWnonDnon_A5";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWbinDnon_A1_patrolRfl : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWbinDnon_A1_patrolRfl";
			speed = 0.6;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWbinDnon_A2_patrolRfl : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWbinDnon_A2_patrolRfl";
			speed = 0.652;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWlnrDnon_A1";
			speed = 0.42;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWlnrDnon_A2";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWpstDnon_A1";
			speed = 0.81;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWpstDnon_A2";
			speed = 0.44;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWpstDnon_A3";
			speed = 0.73;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWpstDnon_A4";
			speed = 0.88;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_A5 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPercMstpSrasWpstDnon_A5";
			speed = 0.49;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWlnrDnon_A1";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWlnrDnon_A2";
			speed = 0.34;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWlnrDnon_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWlnrDnon_A4";
			speed = 0.652;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWpstDnon_A1";
			speed = 0.52;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWpstDnon_A2";
			speed = 0.46;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWpstDnon_A3";
			speed = 0.833;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWrflDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWrflDnon_A1";
			speed = 0.9;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWrflDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSlowWrflDnon_A2";
			speed = 0.65;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSnonWnonDnon_A1";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSnonWnonDnon_A2";
			speed = 0.937;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWlnrDnon_A1";
			speed = 0.625;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWlnrDnon_A2";
			speed = 0.34;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWlnrDnon_A4 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWlnrDnon_A4";
			speed = 0.652;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWpstDnon_A1";
			speed = 0.52;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWpstDnon_A2";
			speed = 0.46;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWpstDnon_A3";
			speed = 0.833;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWrflDnon_A1 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWrflDnon_A1";
			speed = 0.9;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWrflDnon_A2 : AdthPercMstpSrasWrflDnon_r05 {
			file = "\ca\anims\characters\data\anim\sdr\dth\RagDoll\AdthPknlMstpSrasWrflDnon_A2";
			speed = 0.65;
			ConnectTo[] = {"DeadState", 0.05};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDf_1";
			speed = 0.72;
			equivalentTo = "AdthPercMstpSrasWrflDf_1";
			variantsPlayer[] = {"AdthPercMstpSrasWrflDf_1", 0.25, "AdthPercMstpSrasWrflDf_2", 0.25, "AdthPercMstpSrasWrflDf_4", 0.25, "AdthPercMstpSrasWrflDf_8", 0.25};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			headBobStrength = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDf_2 : AdthPercMstpSrasWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDf_2";
			speed = 0.67;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDf_4 : AdthPercMstpSrasWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDf_4";
			speed = 0.49;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDb_8 : AdthPercMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Erc\stp\ras\Rfl\AdthPercMstpSrasWrflDnon_8";
			speed = 0.58;
			equivalentTo = "AdthPercMstpSrasWrflDb_8";
			variantsPlayer[] = {"AdthPercMstpSrasWrflDb_8", 0.5, "AdthPercMstpSrasWrflDb_16"};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Knl\stp\ras\Rfl\AdthPknlMstpSrasWrflDnon_1";
			speed = 0.51;
			equivalentTo = "AdthPknlMstpSrasWrflDnon_1";
			variantsPlayer[] = {"AdthPknlMstpSrasWrflDnon_1", 0.5, "AdthPknlMstpSrasWrflDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWrflDnon_2 : AdthPknlMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Knl\stp\ras\Rfl\AdthPknlMstpSrasWrflDnon_2";
			speed = 0.72;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMwlkSrasWrflDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Knl\wlk\ras\Rfl\AdthPknlMwlkSrasWrflDf_1";
			speed = 0.51;
			equivalentTo = "AdthPknlMwlkSrasWrflDf_1";
			variantsPlayer[] = {"AdthPknlMstpSrasWrflDnon_1", 0.5, "AdthPknlMstpSrasWrflDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMwlkSrasWrflDf_2 : AdthPknlMwlkSrasWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Knl\wlk\ras\Rfl\AdthPknlMwlkSrasWrflDf_2";
			speed = 0.72;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlayWrflDnon_inventory : DefaultDie {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\lay\rfl\AdthPknlMstpSlayWrflDnon_inventory";
			speed = 0.86;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			terminal = 1;
			soundOverride = "bodyfall";
			canPullTrigger = 0;
			onLandEnd = 1;
			limitGunMovement = 0.2;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlayWrflDnon_inventoryAgony : AdthPknlMstpSlayWrflDnon_inventory {
			terminal = 0;
			interpolationSpeed = 0.35;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.0001};
			InterpolateTo[] = {"AinjPpneMstpSnonWrflDnon", 0.0001};
		};
		
		class AdthPpneMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1.67;
			equivalentTo = "AdthPpneMstpSrasWrflDnon_1";
			variantsPlayer[] = {"AdthPpneMstpSrasWrflDnon_1", 0.5, "AdthPpneMstpSrasWrflDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSrasWrflDnon_2 : AdthPpneMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_2";
			speed = 1.22;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSlowWrflDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\low\Rfl\AdthPpneMstpSlowWrflDf_1";
			speed = 1.67;
			equivalentTo = "AdthPpneMstpSlowWrflDf_1";
			variantsPlayer[] = {"AdthPpneMstpSlowWrflDf_1", 0.5, "AdthPpneMstpSlowWrflDf_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSlowWrflDf_2 : AdthPpneMstpSlowWrflDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\Pne\stp\low\Rfl\AdthPpneMstpSlowWrflDf_2";
			speed = 1.22;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDnon_1";
			speed = 0.48;
			equivalentTo = "AdthPercMstpSrasWpstDnon_1";
			variantsPlayer[] = {"AdthPercMstpSrasWpstDnon_1", 0.33, "AdthPercMstpSrasWpstDnon_3", 0.33, "AdthPercMstpSrasWpstDnon_5", 0.33};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_3 : AdthPercMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDnon_3";
			speed = 0.53;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDnon_5 : AdthPercMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDnon_5";
			speed = 0.92;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDf_2 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDf_2";
			speed = 0.73;
			equivalentTo = "AdthPercMstpSrasWpstDf_2";
			variantsPlayer[] = {"AdthPercMstpSrasWpstDf_2", 0.33, "AdthPercMstpSrasWpstDf_6", 0.33, "AdthPercMstpSrasWpstDf_7", 0.33};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDf_6 : AdthPercMstpSrasWpstDf_2 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDf_6";
			speed = 0.53;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDf_7 : AdthPercMstpSrasWpstDf_2 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDf_7";
			speed = 0.52;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDb_8 : AdthPercMstpSrasWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDb_8";
			speed = 0.6;
			equivalentTo = "";
			variantsPlayer[] = {"AdthPercMstpSrasWpstDf_2", 0.33, "AdthPercMstpSrasWpstDf_6", 0.33, "AdthPercMstpSrasWpstDf_7", 0.33};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWpstDb_9 : AdthPercMstpSrasWpstDb_8 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\ras\pst\AdthPercMstpSrasWpstDb_9";
			speed = 0.7;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\pst\AdthPknlMstpSrasWpstDnon_1";
			speed = 0.92;
			equivalentTo = "AdthPknlMstpSrasWpstDnon_1";
			variantsPlayer[] = {"AdthPknlMstpSrasWpstDnon_1", 0.25, "AdthPknlMstpSrasWpstDnon_2", 0.25, "AdthPknlMstpSrasWpstDnon_4", 0.25, "AdthPknlMstpSrasWpstDnon_6", 0.25};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_2 : AdthPknlMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\pst\AdthPknlMstpSrasWpstDnon_2";
			speed = 0.73;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_4 : AdthPknlMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\pst\AdthPknlMstpSrasWpstDnon_4";
			speed = 1.2;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDnon_6 : AdthPknlMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\pst\AdthPknlMstpSrasWpstDnon_6";
			speed = 1.08;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWpstDb_5 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\pst\AdthPknlMstpSrasWpstDb_5";
			speed = 0.92;
			equivalentTo = "";
			variantsPlayer[] = {};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\ras\pst\AdthPpneMstpSrasWpstDnon_1";
			speed = 1.5;
			equivalentTo = "AdthPpneMstpSrasWpstDnon_1";
			variantsPlayer[] = {"AdthPpneMstpSrasWpstDnon_1", 0.5, "AdthPpneMstpSrasWpstDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSrasWpstDnon_2 : AdthPpneMstpSrasWpstDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\ras\pst\AdthPpneMstpSrasWpstDnon_2";
			speed = 1.69;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWlnrDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\low\lnr\AdthPercMstpSlowWlnrDnon_D";
			speed = 0.65;
			equivalentTo = "AdthPercMstpSlowWlnrDnon_1";
			variantsPlayer[] = {"AdthPercMstpSlowWlnrDnon_1", 0.5, "AdthPercMstpSlowWlnrDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWlnrDnon_2 : AdthPercMstpSlowWlnrDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\low\lnr\AdthPercMstpSlowWlnrDnon_F";
			speed = 0.4;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWlnrDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\run\low\lnr\AdthPercMrunSlowWlnrDf_A";
			speed = 0.8;
			equivalentTo = "AdthPercMrunSlowWlnrDf_1";
			variantsPlayer[] = {"AdthPercMrunSlowWlnrDf_1", 0.5, "AdthPercMrunSlowWlnrDf_2", 0.5};
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWlnrDf_2 : AdthPercMrunSlowWlnrDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\run\low\lnr\AdthPercMrunSlowWlnrDf_C";
			speed = 0.6;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMrunSlowWlnrDb_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\run\low\lnr\AdthPercMrunSlowWlnrDb_I";
			speed = 0.62;
			equivalentTo = "";
			variantsPlayer[] = {};
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWlnrDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\ras\lnr\AdthPknlMnonSrasWlnrDnon_1";
			speed = 0.56;
			equivalentTo = "AdthPknlMstpSrasWlnrDnon_1";
			variantsPlayer[] = {"AdthPknlMstpSrasWlnrDnon_1", 0.5, "AdthPknlMstpSrasWlnrDnon_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSrasWlnrDnon_2 : AdthPknlMstpSrasWlnrDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\low\lnr\AdthPknlMnonSlowWlnrDnon_2";
			speed = 0.53;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMwlkSrasWlnrDf_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\run\ras\lnr\AdthPknlMrunSrasWlnrDf_1";
			speed = 0.56;
			equivalentTo = "AdthPknlMwlkSrasWlnrDf_1";
			variantsPlayer[] = {"AdthPknlMwlkSrasWlnrDf_1", 0.5, "AdthPknlMwlkSrasWlnrDf_2", 0.5};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMwlkSrasWlnrDf_2 : AdthPknlMwlkSrasWlnrDf_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\run\ras\lnr\AdthPknlMrunSrasWlnrDf_2";
			speed = 0.53;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_binocular : DefaultDie {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\low\rfl\AdthPercMstpSlowWrflDnon_binocular";
			speed = 0.49;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			terminal = 1;
			soundOverride = "bodyfall";
			canPullTrigger = 0;
			onLandEnd = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_carrier : DefaultDie {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarryrfl-dead-carrier";
			looped = 0;
			terminal = 1;
			canPullTrigger = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			actions = "DeadActions";
			speed = 0.2;
			onLandEnd = 1;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDf_carrier : AdthPercMstpSlowWrflDnon_carrier {
			speed = 0.21;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWrflDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\low\rfl\AdthPknlMstpSlowWrflDnon_binocular";
			speed = 0.72;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSlowWrflDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\low\rfl\AdthPpneMstpSlowWrflDnon_binocular";
			speed = 1.67;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\erc\stp\non\non\AdthPercMstpSnonWnonDnon_binocular";
			speed = 0.46;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\non\non\AdthPknlMstpSnonWnonDnon_binocular";
			speed = 0.67;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\non\non\AdthPpneMstpSnonWnonDnon_binocular";
			speed = 1.5;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSlowWlnrDnon_binocular : AdthPercMstpSlowWrflDnon_binocular {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\low\lnr\AdthPknlMstpSlowWlnrDnon_binocular";
			speed = 0.56;
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_1 : AdthPercMstpSlowWrflDnon_1 {
			file = "\dayz_anim\zmb\zmbStandDeath1";
			speed = 0.6;
			equivalentTo = "AdthPercMstpSnonWnonDnon_1";
			variantsPlayer[] = {"AdthPercMstpSnonWnonDnon_1", 0.33, "AdthPercMstpSnonWnonDnon_2", 0.33, "AdthPercMstpSnonWnonDnon_3", 0.33};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_2 : AdthPercMstpSnonWnonDnon_1 {
			file = "\dayz_anim\zmb\zmbStandDeath2";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDnon_3 : AdthPercMstpSnonWnonDnon_1 {
			file = "\dayz_anim\zmb\zmbStandDeath3";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class ZombieWalkingDeath : AdthPercMstpSlowWrflDnon_1 {
			file = "\dayz_anim\zmb\zombie2_deathFromWalk";
			speed = 0.6;
			equivalentTo = "AdthPercMstpSnonWnonDnon_1";
			variantsPlayer[] = {};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_1 : AdthPknlMstpSrasWrflDnon_1 {
			file = "\dayz_anim\zmb\zmbKneel_deathA";
			speed = 0.6;
			equivalentTo = "AdthPknlMstpSnonWnonDnon_1";
			variantsPlayer[] = {"AdthPknlMstpSnonWnonDnon_1", 0.5, "AdthPknlMstpSnonWnonDnon_2", 0.5};
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_2 : AdthPknlMstpSnonWnonDnon_1 {
			file = "\dayz_anim\zmb\zmbKneel_deathB";
			speed = 0.6;
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_inventory : DefaultDie {
			actions = "DeadActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\knl\stp\non\non\AdthPknlMstpSnonWnonDnon_inventory";
			speed = 0.86;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			terminal = 1;
			soundOverride = "bodyfall";
			canPullTrigger = 0;
			onLandEnd = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPknlMstpSnonWnonDnon_inventoryAgony : AdthPknlMstpSnonWnonDnon_inventory {
			interpolationSpeed = 0.4;
			terminal = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.0001};
			InterpolateTo[] = {"AinjPpneMstpSnonWnonDnon", 0.0001};
		};
		
		class AdthPpneMstpSnonWnonDnon : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\pne\stp\non\non\AdthPpneMstpSnonWnonDnon_1";
			variantsPlayer[] = {};
			equivalentTo = "";
			canPullTrigger = 0;
			terminal = 1;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPswmMstpSnonWnonDnon : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\swm\stp\non\non\AdthPswmMstpSnonWnonDnon";
			speed = 0.3;
			equivalentTo = "";
			variantsPlayer[] = {};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPswmMrunSnonWnonDf : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\swm\run\non\non\AdthPswmMrunSnonWnonDf";
			speed = 0.3;
			equivalentTo = "";
			variantsPlayer[] = {};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPsitMstpSlowWrflDnon : AdthPercMstpSlowWrflDnon_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Dth\sit\stp\low\rfl\AdthPsitMstpSlowWrflDnon";
			speed = 1;
			equivalentTo = "";
			variantsPlayer[] = {};
			terminal = 1;
			canPullTrigger = 0;
			onLandEnd = 1;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class CzmbAdthPercMrunSnonWnonDf : AdthPercMstpSlowWrflDnon_1 {
			file = "\dayz_anim\zmb\zombie_runDeaths6";
			speed = 0.8;
			looped = 0;
			equivalentTo = "";
			ArrayVariable_1194 = "";
			ArrayVariable_1193 = "";
			ArrayVariable_1192 = "";
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class CutSceneAnimationBaseSit : CutSceneAnimationBase {
			boundingSphere = 4;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class CutSceneAnimationBaseZoZo : CutSceneAnimationBase {
			enableOptics = 0;
			enableBinocular = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			boundingSphere = 8;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWrflDnon_varSittingSleeping01 : CutSceneAnimationBase {
			actions = "RifleSittingSleeping01Actions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\sit\ActsPsitMstpSnonWrflDnon_varSittingSleeping01.rtm";
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWnonDnon_varStayLeant : CutSceneAnimationBase {
			actions = "RifleStayLeantActions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\sit\ActsPercMstpSnonWnonDnon_varStayLeant.rtm";
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_varSittingOnTheWall : CutSceneAnimationBase {
			actions = "RifleSittingOnTheWallActions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\sit\ActsPsitMstpSnonWnonDnon_varSittingOnTheWall.rtm";
			equivalentTo = "Mi17_Cargo02";
			variantsAI[] = {"Mi17_Cargo02", 0.4, "Mi17_Cargo02_V1", 0.1, "Mi17_Cargo02_V2", 0.1, "Mi17_Cargo02_V3", 0.1, "Mi17_Cargo02_V4", 0.1, "Mi17_Cargo02_V5", 0.1, "Mi17_Cargo02_V6", 0.1};
			variantAfter[] = {5, 10, 20};
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_JumpFromWall", 0.01};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_varSittingDrinking : CutSceneAnimationBase {
			actions = "RifleSittingDrinkingActions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\sit\ActsPsitMstpSnonWnonDnon_varSittingDrinking.rtm";
			speed = 0.1038;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWrflDnon_varSittingSleeping02 : CutSceneAnimationBase {
			actions = "RifleSittingSleeping02Actions";
			file = "\Ca\Anims\Characters\data\Anim\sdr\cts\sit\ActsPsitMstpSnonWrflDnon_varSittingSleeping02.rtm";
			speed = 0.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_JumpFromWall : CutSceneAnimationBase {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_GetOutMedium";
			speed = 1.666;
			looped = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWrflDnon_varSittingDrinking : CutSceneAnimationBase {
			actions = "RifleSittingDrinking03Actions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon";
			speed = 0.55;
			looped = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon", 10.0};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured01 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\ActsPsitMstpSnonWnonDnon_Tortured01";
			speed = 0.1;
			looped = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPsitMstpSnonWnonDnon_Tortured01", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured02 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\ActsPsitMstpSnonWnonDnon_Tortured02";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPsitMstpSnonWnonDnon_Tortured02", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured03 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\ActsPsitMstpSnonWnonDnon_Tortured03";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPsitMstpSnonWnonDnon_Tortured03", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWrflDnon_Interrogate01 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\ActsPercMstpSnonWrflDnon_Interrogate01";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "ActsPercMstpSnonWrflDnon_Interrogate01", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class ActsPercMstpSnonWrflDnon_Interrogate02 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\ActsPercMstpSnonWrflDnon_Interrogate01";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "ActsPercMstpSnonWrflDnon_Interrogate02", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class ActsPsitMstpSnonWnonDnon_InterrogateLeaves : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\ActsPsitMstpSnonWnonDnon_InterrogateLeaves";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "ActsPsitMstpSnonWnonDnon_InterrogateLeaves", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_Scared : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_Scared";
			speed = 0.1;
			looped = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_Scared", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_Scared2 : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_Scared2";
			speed = 0.1;
			looped = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_Scared2", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_ScaredTalking : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_ScaredTalking.rtm";
			speed = 0.0142;
			enableDirectControl = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 2.0};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckPush : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_carCheckPush.rtm";
			speed = 0.1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_carCheckPush", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckWash : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_carCheckWash.rtm";
			speed = 0.16;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_carCheckWash", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckWheel : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_carCheckWheel.rtm";
			speed = 0.13;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_carCheckWheel", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_exerciseKata : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_exerciseKata.rtm";
			speed = 0.03;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_exerciseKata", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class ActsPercMstpSnonWnonDnon_DancingDuoIvan : AmovPercMstpSnonWnonDnon_exerciseKata {
			speed = 0.025;
			file = "\ca\Anims\Characters\data\Anim\sdr\cts\Dancing\ActsPercMstpSnonWnonDnon_DancingDuoIvan";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class ActsPercMstpSnonWnonDnon_DancingDuoStefan : ActsPercMstpSnonWnonDnon_DancingDuoIvan {
			file = "\ca\Anims\Characters\data\Anim\sdr\cts\Dancing\ActsPercMstpSnonWnonDnon_DancingDuoStefan";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class ActsPercMstpSnonWnonDnon_DancingStefan : ActsPercMstpSnonWnonDnon_DancingDuoIvan {
			speed = 0.0104;
			file = "\ca\Anims\Characters\data\Anim\sdr\cts\Dancing\ActsPercMstpSnonWnonDnon_DancingStefan";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_exercisekneeBendA : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_exercisekneeBendA.rtm";
			speed = 0.172;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_exercisekneeBendA", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_exercisekneeBendB : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_exercisekneeBendB.rtm";
			speed = 0.33;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_exercisekneeBendB", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_exercisePushup : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_exercisePushup.rtm";
			speed = 0.063559;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_exercisePushup", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_seeWatch : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_seeWatch.rtm";
			speed = 0.315;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_seeWatch", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_talking : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_talking.rtm";
			speed = 0.015;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 2.0, "AmovPercMstpSnonWnonDnon_talking", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_talking : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_talking.rtm";
			speed = 0.0142;
			enableDirectControl = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 2.0};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_seeWatch : AmovPercMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_seeWatch.rtm";
			speed = 0.28;
			enableDirectControl = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 2.0};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakPistol02 : CutSceneAnimationBase {
			speed = 0.033482;
			looped = 0;
			showHandGun = 1;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardakpistol02";
			canPullTrigger = 0;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakPistol01 : CutSceneAnimationBase {
			speed = 0.045;
			looped = 0;
			showHandGun = 1;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardakpistol01";
			canPullTrigger = 0;
			disableWeapons = 1;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_sceneBardakPistol02", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardak01 : CutSceneAnimationBase {
			speed = 0.05;
			looped = 0;
			showHandGun = 0;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardak01";
			canPullTrigger = 0;
			disableWeapons = 1;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_sceneBardak02", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardak02 : CutSceneAnimationBase {
			speed = 0.033482;
			looped = 0;
			showHandGun = 1;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardak02";
			canPullTrigger = 0;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_normalizationTest : CutSceneAnimationBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_normalizationTest.rtm";
			speed = 0.075;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_SaluteIn : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowStandSaluteActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_SaluteIn";
			speed = 2.5;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			looped = 0;
			enableDirectControl = 1;
			interpolationRestart = 2;
			leftHandIKBeg = 1;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.1, 1, 0.2, 0};
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKEnd = 0;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_Salute", 0.1};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_SaluteOut", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_SaluteIn : AmovPercMstpSlowWrflDnon_SaluteIn {
			actions = "RifleStandSaluteActions_Idle";
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_Salute", 0.1};
			InterpolateTo[] = {"AidlPercMstpSrasWrflDnon_SaluteOut", 0.02};
		};
		
		class AmovPercMstpSlowWrflDnon_Salute : AmovPercMstpSlowWrflDnon_SaluteIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_Salute";
			speed = 1e+010;
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_SaluteOut", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSrasWrflDnon_Salute : AmovPercMstpSlowWrflDnon_Salute {
			actions = "RifleStandSaluteActions_Idle";
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_SaluteOut", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSlowWrflDnon_SaluteOut : AmovPercMstpSlowWrflDnon_SaluteIn {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_SaluteOut";
			interpolationRestart = 2;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {0.8, 0, 0.9, 1};
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_SaluteIn", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon_SaluteOut : AmovPercMstpSlowWrflDnon_SaluteOut {
			actions = "RifleStandActions_Idle";
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.02, "AidlPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AidlPercMstpSrasWrflDnon_SaluteIn", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon_SaluteIn : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandSaluteActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_SaluteIn";
			speed = 2.5;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			looped = 0;
			enableDirectControl = 1;
			interpolationRestart = 2;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			leftHandIKBeg = 1;
			rightHandIKCurve[] = {0.1, 1, 0.2, 0};
			leftHandIKCurve[] = {1};
			rightHandIKBeg = 0;
			leftHandIKEnd = 1;
			rightHandIKEnd = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon_Salute", 0.1};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_SaluteOut", 0.02};
		};
		
		class AmovPercMstpSrasWrflDnon_Salute : AmovPercMstpSrasWrflDnon_SaluteIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_Salute";
			speed = 1e+010;
			leftHandIKCurve[] = {1};
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon_SaluteOut", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWrflDnon_SaluteOut : AmovPercMstpSrasWrflDnon_SaluteIn {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_SaluteOut";
			interpolationRestart = 2;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {0.8, 0, 0.9, 1};
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.15};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_SaluteIn", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteIn : AmovPercMstpSrasWpstDnon {
			actions = "PistolStandSaluteActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_SaluteIn";
			speed = 1.5;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			showHandGun = 1;
			looped = 0;
			enableDirectControl = 1;
			interpolationRestart = 2;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_SaluteIn_end", 0.1};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_SaluteOut_end", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteIn_end : AmovPercMstpSrasWpstDnon_SaluteIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_SaluteIn_end";
			speed = 1.2;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			showHandGun = 0;
			looped = 0;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_Salute", 0.1};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_SaluteOut", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_Salute : AmovPercMstpSrasWpstDnon_SaluteIn_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_Salute";
			speed = 1e+010;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_SaluteOut", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteOut : AmovPercMstpSrasWpstDnon_SaluteIn_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_SaluteOut";
			speed = 1.2;
			actions = "PistolStandActions";
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_SaluteOut_end", 0.1};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_SaluteIn_end", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteOut_end : AmovPercMstpSrasWpstDnon_SaluteOut {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_SaluteOut_end";
			speed = 1.5;
			showHandGun = 1;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_SaluteIn", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_SaluteIn : AmovPercMstpSnonWnonDnon {
			actions = "CivilStandSaluteActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_SaluteIn";
			speed = 1.3;
			looped = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_Salute", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_SaluteOut", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_Salute : AmovPercMstpSnonWnonDnon_SaluteIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_Salute";
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_SaluteOut", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_SaluteOut : AmovPercMstpSnonWnonDnon_SaluteIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_SaluteOut";
			speed = 1.3;
			actions = "CivilStandActions";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_SaluteIn", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_EaseIn : CutSceneAnimationBase {
			actions = "CivilStandSaluteActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_EaseIn";
			speed = 1.6;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			looped = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_Ease", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "AdthPercMstpSnonWnonDnon_2", 0.01, "AdthPercMstpSnonWnonDnon_3", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_Ease : AmovPercMstpSnonWnonDnon_EaseIn {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_Ease";
			speed = 1e+010;
			looped = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_EaseOut", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "AdthPercMstpSnonWnonDnon_2", 0.01, "AdthPercMstpSnonWnonDnon_3", 0.01};
		};
		
		class AmovPercMstpSnonWnonDnon_EaseOut : AmovPercMstpSnonWnonDnon_EaseIn {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_easeout";
			speed = 1.09;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "AdthPercMstpSnonWnonDnon_2", 0.01, "AdthPercMstpSnonWnonDnon_3", 0.01};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon";
			speed = 0.55;
			looped = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 1;
			interpolationRestart = 2;
			interpolationSpeed = 1.8;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Psit.p3d";
			enableAutoActions = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundOverride = "laydown";
			soundEnabled = 1;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon", 1.0, "AmovPsitMstpSlowWrflDnon_WeaponCheck1", 1.0, "AmovPsitMstpSlowWrflDnon_WeaponCheck2", 1.0, "AmovPsitMstpSlowWrflDnon_Smoking", 1.0};
			InterpolateTo[] = {"AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.1};
		};
		
		class AmovPsitMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon";
			speed = 1e+010;
			looped = 1;
			equivalentTo = "AmovPsitMstpSlowWrflDnon";
			variantsPlayer[] = {"AmovPsitMstpSlowWrflDnon", 0.25, "AmovPsitMstpSlowWrflDnon_WeaponCheck1", 0.25, "AmovPsitMstpSlowWrflDnon_WeaponCheck2", 0.25, "AmovPsitMstpSlowWrflDnon_Smoking", 0.25};
			variantsAI[] = {""};
			variantAfter[] = {10, 15, 25};
			weaponIK = 1;
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon_WeaponCheck1", 0.1, "AmovPsitMstpSlowWrflDnon_WeaponCheck2", 0.1, "AmovPsitMstpSlowWrflDnon_Smoking", 0.1, "AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPsitMstpSlowWrflDnon_trans : AmovPsitMstpSlowWrflDnon {
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.05};
			InterpolateTo[] = {};
		};
		
		class AmovPsitMstpSlowWrflDnon_WeaponCheck1 : AmovPsitMstpSlowWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_WeaponCheck1";
			speed = 0.15;
			looped = 1;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSlowWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSlowWrflDnon_WeaponCheck2 : AmovPsitMstpSlowWrflDnon_WeaponCheck1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_WeaponCheck2";
			speed = 0.13;
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSlowWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSlowWrflDnon_Smoking : AmovPsitMstpSlowWrflDnon_WeaponCheck1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_Smoking";
			speed = 0.04;
			ConnectTo[] = {"AmovPsitMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSlowWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon : AmovPsitMstpSlowWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon";
			speed = 0.55;
			looped = 0;
			interpolationRestart = 2;
			interpolationSpeed = 1.8;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon", 0.1};
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon";
			speed = 0.55;
			looped = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableDirectControl = 1;
			interpolationRestart = 2;
			interpolationSpeed = 1.8;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Psit.p3d";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			soundOverride = "laydown";
			soundEnabled = 1;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon", 1.0, "AmovPsitMstpSrasWrflDnon_WeaponCheck1", 1.0, "AmovPsitMstpSrasWrflDnon_WeaponCheck2", 1.0, "AmovPsitMstpSrasWrflDnon_Smoking", 1.0};
			InterpolateTo[] = {"AmovPsitMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon", 0.1};
		};
		
		class AmovPsitMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon";
			speed = 1e+010;
			looped = 1;
			equivalentTo = "AmovPsitMstpSrasWrflDnon";
			variantsPlayer[] = {"AmovPsitMstpSrasWrflDnon", 0.25, "AmovPsitMstpSrasWrflDnon_WeaponCheck1", 0.25, "AmovPsitMstpSrasWrflDnon_WeaponCheck2", 0.25, "AmovPsitMstpSrasWrflDnon_Smoking", 0.25};
			variantsAI[] = {""};
			variantAfter[] = {10, 15, 25};
			weaponIK = 1;
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon_WeaponCheck1", 0.1, "AmovPsitMstpSrasWrflDnon_WeaponCheck2", 0.1, "AmovPsitMstpSrasWrflDnon_Smoking", 0.1, "AmovPsitMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPsitMstpSrasWrflDnon_trans : AmovPsitMstpSrasWrflDnon {
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon", 0.05};
			InterpolateTo[] = {};
		};
		
		class AmovPsitMstpSrasWrflDnon_WeaponCheck1 : AmovPsitMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_WeaponCheck1";
			speed = 0.15;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSrasWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSrasWrflDnon_WeaponCheck2 : AmovPsitMstpSrasWrflDnon_WeaponCheck1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_WeaponCheck2";
			speed = 0.13;
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSrasWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSrasWrflDnon_Smoking : AmovPsitMstpSrasWrflDnon_WeaponCheck1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_Smoking";
			speed = 0.04;
			ConnectTo[] = {"AmovPsitMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPsitMstpSrasWrflDnon_trans", 0.05};
		};
		
		class AmovPsitMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon : AmovPsitMstpSrasWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon";
			speed = 0.55;
			looped = 0;
			interpolationRestart = 2;
			interpolationSpeed = 1.8;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01, "AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon", 0.1};
		};
		
		class AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground : AmovPercMstpSrasWpstDnon {
			actions = "PistolSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground";
			speed = 0.7;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			looped = 0;
			showHandgun = 0;
			enableDirectControl = 1;
			interpolationRestart = 2;
			interpolationSpeed = 2;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Psit.p3d";
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			soundOverride = "laydown";
			soundEnabled = 1;
			canPullTrigger = 0;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPsitMstpSnonWpstDnon_ground", 0.02, "AmovPsitMstpSnonWpstDnon_smoking", 0.02};
			InterpolateTo[] = {"AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground", 0.02};
		};
		
		class AmovPsitMstpSnonWpstDnon_ground : AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground {
			variantAfter[] = {10, 15, 25};
			variantsPlayer[] = {"AmovPsitMstpSnonWpstDnon_ground", 0.75, "AmovPsitMstpSnonWpstDnon_smoking", 0.25};
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_ground";
			speed = 1e+010;
			looped = 1;
			equivalentTo = "AmovPsitMstpSnonWpstDnon_ground";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPsitMstpSnonWpstDnon_smoking", 0.02, "AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground", 0.02};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPsitMstpSnonWpstDnon_smoking_trans : AmovPsitMstpSnonWpstDnon_ground {
			ConnectTo[] = {"AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPsitMstpSnonWpstDnon_smoking : AmovPsitMstpSnonWpstDnon_ground {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_Smoking";
			speed = 0.04;
			canPullTrigger = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPsitMstpSnonWpstDnon_ground", 0.02};
			InterpolateTo[] = {"AmovPsitMstpSnonWpstDnon_smoking_trans", 0.01};
		};
		
		class AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground : AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground";
			speed = 0.7;
			interpolationRestart = 2;
			interpolationSpeed = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground : CutSceneAnimationBase {
			actions = "CivilSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground";
			speed = 0.7;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			looped = 0;
			interpolationRestart = 2;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Psit.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPsitMstpSnonWnonDnon_ground", 1.0, "AmovPsitMstpSnonWnonDnon_smoking", 0.02};
			InterpolateTo[] = {"AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground", 0.02};
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground : AmovPpneMstpSnonWnonDnon {
			actions = "CivilSitActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground";
			speed = 0.55;
			looped = 0;
			enableDirectControl = 1;
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPsitMstpSnonWnonDnon_ground", 1.0, "AmovPsitMstpSnonWnonDnon_smoking", 0.02};
			InterpolateTo[] = {"AmovPsitMstpSnonWnonDnon_ground_AmovPpneMstpSnonWnonDnon", 0.02};
		};
		
		class AmovPsitMstpSnonWnonDnon_ground : AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground {
			variantsPlayer[] = {"AmovPsitMstpSnonWnonDnon_ground", 0.75, "AmovPsitMstpSnonWnonDnon_smoking", 0.25};
			variantAfter[] = {10, 15, 25};
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_ground";
			speed = 1e+010;
			looped = 1;
			equivalentTo = "AmovPsitMstpSnonWnonDnon_ground";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPsitMstpSnonWnonDnon_smoking", 0.02, "AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground", 0.02, "AmovPsitMstpSnonWnonDnon_ground_AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPsitMstpSlowWrflDnon", 0.01};
		};
		
		class AmovPsitMstpSnonWnonDnon_smoking_trans : AmovPsitMstpSnonWnonDnon_ground {
			ConnectTo[] = {"AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground", 0.01, "AmovPsitMstpSnonWnonDnon_ground_AmovPpneMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class AmovPsitMstpSnonWnonDnon_smoking : AmovPsitMstpSnonWnonDnon_ground {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_Smoking";
			speed = 0.04;
			canPullTrigger = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPsitMstpSnonWnonDnon_ground", 0.02};
			InterpolateTo[] = {"AmovPsitMstpSnonWnonDnon_smoking_trans", 0.01};
		};
		
		class AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground : AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground";
			speed = 0.7;
			interpolationRestart = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground", 0.02};
		};
		
		class AmovPsitMstpSnonWnonDnon_ground_AmovPpneMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_ground_AmovPpneMstpSnonWnonDnon";
			speed = 0.55;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon : CutSceneAnimationBase {
			actions = "CivilStandSurrenderActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon";
			speed = 1.33;
			looped = 0;
			canPullTrigger = 0;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSsurWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon", 0.1};
		};
		
		class AmovPercMstpSsurWnonDnon : AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon";
			speed = 1e+010;
			looped = 1;
			ConnectTo[] = {"AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\sur\non\AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon";
			speed = 1.33;
			interpolationRestart = 2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon", 0.1};
		};
		
		class TestDance : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\non\non\AmovPercMstpSnonWnonDnon_Dancing.rtm";
			speed = 0.015;
			looped = 1;
			duty = WalkDuty;
			showWeaponAim = 1;
			disableWeapons = 0;
			enableAutoActions = 1;
			ConnectTo[] = {"TestDance", 0.9};
			InterpolateTo[] = {"TestDance", 0.9};
		};
		
		class TestROM : TestDance {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\non\non\AmovPercMstpSnonWnonDnon_ROM.rtm";
			speed = 0.015;
			ConnectTo[] = {"TestROM", 0.9};
			InterpolateTo[] = {"TestROM", 0.9};
		};
		
		class TestROMFingers : TestDance {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\non\non\AmovPercMstpSnonWnonDnon_ROMFingers.rtm";
			speed = 0.015;
			ConnectTo[] = {"TestROMFingers", 0.9};
			InterpolateTo[] = {"TestROMFingers", 0.9};
		};
		
		class TestJabbaFun : TestDance {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\non\non\AmovPercMstpSnonWnonDnon_JabbaFun.rtm";
			speed = 0.033;
			ConnectTo[] = {"TestJabbaFun", 0.9};
			InterpolateTo[] = {"TestJabbaFun", 0.9};
		};
		
		class TestFlipflop : TestDance {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\non\non\AmovPercMstpSnonWnonDnon_Flipflop.rtm";
			speed = 0.122;
			ConnectTo[] = {"TestFlipflop", 0.9};
			InterpolateTo[] = {"TestFlipflop", 0.9};
		};
		
		class TestSurrender : TestDance {
			duty = RestDuty;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Knl\Stp\sur\rfl\AmovPknlMstpSsurWrflDnon.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			speed = 1e+010;
			soundEnabled = 0;
			ConnectTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "TestSurrender", 0.9};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "TestSurrender", 0.9};
		};
		
		class AwopPercMstpSgthWrflDnon_Start1 : Default {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\rfl\AwopPercMstpSgthWrflDnon_Start.rtm";
			speed = 0.51;
			looped = 0;
			soundEnabled = 0;
			duty = WalkDuty;
			canPullTrigger = 0;
			headBobMode = 2;
			ConnectTo[] = {"AwopPercMstpSgthWrflDnon_Throw1", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWrflDnon_Throw1 : AwopPercMstpSgthWrflDnon_Start1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\rfl\AwopPercMstpSgthWrflDnon_Throw.rtm";
			speed = 2.31;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSgthWrflDnon_End1", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWrflDnon_End1 : AwopPercMstpSgthWrflDnon_Start1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\rfl\AwopPercMstpSgthWrflDnon_End.rtm";
			speed = 0.53;
			showItemInRightHand = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWrflDnon_Start2 : AwopPercMstpSgthWrflDnon_Start1 {
			actions = "RifleStandActions";
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSgthWrflDnon_Throw2", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWrflDnon_Throw2 : AwopPercMstpSgthWrflDnon_Throw1 {
			actions = "RifleStandActions";
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSgthWrflDnon_End2", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWrflDnon_End2 : AwopPercMstpSgthWrflDnon_End1 {
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart : Default {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart";
			speed = 1.9;
			soundOverride = "run";
			looped = 0;
			soundEnabled = 1;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			canPullTrigger = 0;
			headBobMode = 2;
			weaponIK = 1;
			ConnectTo[] = {"AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow", 0.1};
			InterpolateTo[] = {"AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow : AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
			speed = 0.73;
			soundEnabled = 1;
			soundOverride = "run";
			ConnectTo[] = {"AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthEnd", 0.1};
			InterpolateTo[] = {"AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthEnd : AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\rfl\AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthEnd";
			speed = 0.91;
			soundEnabled = 1;
			soundOverride = "run";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart", 0.1};
			InterpolateTo[] = {"AdthPercMrunSlowWrflDf_6", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart : Default {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart";
			rightHandIKCurve[] = {0.3, 1, 0.4, 0};
			leftHandIKCurve[] = {1};
			speed = 2;
			looped = 0;
			soundOverride = "walk";
			soundEnabled = 1;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			headBobMode = 2;
			weaponIK = 1;
			ConnectTo[] = {"AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDf_1", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow : AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow";
			speed = 0.73;
			soundOverride = "walk";
			soundEnabled = 1;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthEnd", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDf_1", 0.01};
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthEnd : AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthEnd";
			speed = 0.91;
			soundOverride = "walk";
			rightHandIKCurve[] = {0.8, 0, 0.9, 1};
			leftHandIKCurve[] = {1};
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDf_1", 0.01};
		};
		
		class AwopPknlMstpSgthWrflDnon_Start : Default {
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\rfl\AwopPknlMstpSgthWrflDnon_Start.rtm";
			speed = 0.5;
			looped = 0;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wrfl.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AwopPknlMstpSgthWrflDnon_Throw", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWrflDnon_Throw : AwopPknlMstpSgthWrflDnon_Start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\rfl\AwopPknlMstpSgthWrflDnon_Throw.rtm";
			speed = 3.33;
			ConnectTo[] = {"AwopPknlMstpSgthWrflDnon_End", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWrflDnon_End : AwopPknlMstpSgthWrflDnon_Start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\rfl\AwopPknlMstpSgthWrflDnon_End.rtm";
			speed = 0.8;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWrflDnon_Start : Default {
			actions = "RifleProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\rfl\AwopPpneMstpSgthWrflDnon_Start.rtm";
			speed = 0.55;
			looped = 0;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AwopPpneMstpSgthWrflDnon_Throw", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWrflDnon_Throw : AwopPpneMstpSgthWrflDnon_Start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\rfl\AwopPpneMstpSgthWrflDnon_Throw.rtm";
			speed = 3;
			ConnectTo[] = {"AwopPpneMstpSgthWrflDnon_End", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWrflDnon_End : AwopPpneMstpSgthWrflDnon_Start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\rfl\AwopPpneMstpSgthWrflDnon_End.rtm";
			speed = 1.36;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWpstDnon_Part1 : Default {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part1.rtm";
			speed = 1.25;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AwopPercMstpSgthWpstDnon_Part2", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWpstDnon_Part2 : AwopPercMstpSgthWpstDnon_Part1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part2.rtm";
			speed = 0.39;
			showHandGun = 0;
			ConnectTo[] = {"AwopPercMstpSgthWpstDnon_Part3", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWpstDnon_Part3 : AwopPercMstpSgthWpstDnon_Part2 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part3.rtm";
			speed = 1.32;
			ConnectTo[] = {"AwopPercMstpSgthWpstDnon_Part4", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWpstDnon_Part4 : AwopPercMstpSgthWpstDnon_Part3 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part4.rtm";
			speed = 0.43;
			ConnectTo[] = {"AwopPercMstpSgthWpstDnon_Part5", 0.02};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWpstDnon_Part5 : AwopPercMstpSgthWpstDnon_Part4 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part5.rtm";
			speed = 1.46;
			showHandGun = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart : Default {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart";
			speed = 1.69;
			soundOverride = "run";
			looped = 0;
			showHandGun = 0;
			soundEnabled = 1;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			canPullTrigger = 0;
			headBobMode = 2;
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
			speed = 0.73;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm";
			speed = 1.18;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd";
			speed = 1.35;
			showHandGun = 1;
			soundOverride = "run";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1 : Default {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1";
			speed = 1.85;
			soundOverride = "walk";
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart : Default {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart";
			speed = 1.33;
			looped = 0;
			showHandGun = 0;
			soundEnabled = 1;
			duty = WalkDuty;
			soundOverride = "walk";
			headBobMode = 2;
			weaponIK = 2;
			ConnectTo[] = {"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
			speed = 0.68;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm";
			speed = 1.17;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd";
			speed = 1.35;
			showHandGun = 1;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wpst.p3d";
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWpstDnon_Part1 : Default {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part1.rtm";
			speed = 1.25;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wpst.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AwopPknlMstpSgthWpstDnon_Part2", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWpstDnon_Part2 : AwopPknlMstpSgthWpstDnon_Part1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part2.rtm";
			speed = 0.39;
			showHandGun = 0;
			ConnectTo[] = {"AwopPknlMstpSgthWpstDnon_Part3", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWpstDnon_Part3 : AwopPknlMstpSgthWpstDnon_Part2 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part3.rtm";
			speed = 1.32;
			ConnectTo[] = {"AwopPknlMstpSgthWpstDnon_Part4", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWpstDnon_Part4 : AwopPknlMstpSgthWpstDnon_Part3 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part4.rtm";
			speed = 0.43;
			ConnectTo[] = {"AwopPknlMstpSgthWpstDnon_Part5", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPknlMstpSgthWpstDnon_Part5 : AwopPknlMstpSgthWpstDnon_Part4 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part5.rtm";
			speed = 1.46;
			showHandGun = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWpstDnon_Part1 : Default {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\pst\AwopPpneMstpSgthWpstDnon_1.rtm";
			speed = 0.85;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			headBobMode = 2;
			ConnectTo[] = {"AwopPpneMstpSgthWpstDnon_Part2", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWpstDnon_Part2 : AwopPpneMstpSgthWpstDnon_Part1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\pst\AwopPpneMstpSgthWpstDnon_2.rtm";
			speed = 0.44;
			showHandGun = 0;
			ConnectTo[] = {"AwopPpneMstpSgthWpstDnon_Part3", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWpstDnon_Part3 : AwopPpneMstpSgthWpstDnon_Part2 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\pst\AwopPpneMstpSgthWpstDnon_3.rtm";
			speed = 2.67;
			ConnectTo[] = {"AwopPpneMstpSgthWpstDnon_Part4", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWpstDnon_Part4 : AwopPpneMstpSgthWpstDnon_Part3 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\pst\AwopPpneMstpSgthWpstDnon_4.rtm";
			speed = 0.63;
			ConnectTo[] = {"AwopPpneMstpSgthWpstDnon_Part5", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWpstDnon_Part5 : AwopPpneMstpSgthWpstDnon_Part4 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\pst\AwopPpneMstpSgthWpstDnon_5.rtm";
			speed = 0.83;
			showHandGun = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWnonDnon_start : Default {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\non\AwopPercMstpSgthWnonDnon_start";
			speed = 0.8;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			headBobMode = 2;
			ConnectTo[] = {"AwopPercMstpSgthWnonDnon_throw", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWnonDnon_throw : AwopPercMstpSgthWnonDnon_start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\non\AwopPercMstpSgthWnonDnon_throw";
			speed = 2;
			ConnectTo[] = {"AwopPercMstpSgthWnonDnon_end", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPercMstpSgthWnonDnon_end : AwopPercMstpSgthWnonDnon_throw {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\gth\non\AwopPercMstpSgthWnonDnon_end";
			speed = 0.65;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart : Default {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\non\non\AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart";
			speed = 3;
			soundOverride = "run";
			looped = 0;
			soundEnabled = 0;
			duty = WalkDuty;
			canPullTrigger = 0;
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow : AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\non\non\AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow";
			speed = 1.3;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd : AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\run\non\non\AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd";
			speed = 0.9;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class AwopPpneMstpSgthWnonDnon_start : Default {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\non\AwopPpneMstpSgthWnonDnon_start";
			speed = 0.67;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = WalkDuty;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Ppne.p3d";
			aimingBody = "empty";
			legs = "Wholebody";
			headBobMode = 2;
			ConnectTo[] = {"AwopPpneMstpSgthWnonDnon_throw", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AwopPpneMstpSgthWnonDnon_throw : AwopPpneMstpSgthWnonDnon_start {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\non\AwopPpneMstpSgthWnonDnon_throw";
			speed = 2;
			ConnectTo[] = {"AwopPpneMstpSgthWnonDnon_end", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AwopPpneMstpSgthWnonDnon_end : AwopPpneMstpSgthWnonDnon_throw {
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\gth\non\AwopPpneMstpSgthWnonDnon_end";
			speed = 0.45;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class LadderCivilStatic : StandBase {
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\stp\non\non\AldrPercMstpSnonWnonDnon.rtm";
			looped = 1;
			soundEnabled = 1;
			speed = 1e+010;
			duty = WalkDuty;
			onLadder = 1;
			actions = "LadderCivilActions";
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			legs = "legsNo";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "ladder";
			headBobMode = 2;
			ConnectTo[] = {"LadderCivilTopOff", 0.1, "LadderCivilDownOff", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "LadderCivilUpLoop", 0.1, "LadderCivilDownLoop", 0.1};
		};
		
		class LadderCivilOn : LadderCivilStatic {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AldrPercMstpSnonWnonDnon.rtm";
			speed = 1.5;
			looped = 0;
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"LadderCivilStatic", 1.0};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class LadderCivilUpLoop : LadderCivilStatic {
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\wlk\non\non\AldrPercMwlkSnonWnonDu.rtm";
			speed = 2.5;
			duty = WalkDuty;
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "LadderCivilStatic", 0.1, "LadderCivilTopOff", 0.1, "LadderCivilDownLoop", 0.1};
		};
		
		class LadderCivilTopOff : LadderCivilUpLoop {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\stp\non\non\AldrPercMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon.rtm";
			speed = 1.5;
			looped = 0;
			onLadder = 0;
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 1.0};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class LadderCivilDownOff : LadderCivilTopOff {
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 1.0};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01};
		};
		
		class LadderCivilDownLoop : LadderCivilUpLoop {
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\wlk\non\non\AldrPercMwlkSnonWnonDd.rtm";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1", 0.01, "LadderCivilStatic", 0.1, "LadderCivilUpLoop", 0.1, "LadderCivilDownOff", 0.1};
		};
		
		class LadderRifleStatic : LadderCivilStatic {
			actions = "LadderRifleActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\stp\low\rfl\AldrPercMstpSlowWrflDnon.rtm";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"LadderRifleTopOff", 0.1, "LadderRifleDownOff", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "LadderRifleUpLoop", 0.1, "LadderRifleDownLoop", 0.1};
		};
		
		class LadderRifleOn : LadderCivilOn {
			actions = "LadderRifleActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\low\rfl\AmovPercMstpSlowWrflDnon_AldrPercMstpSlowWrflDnon.rtm";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"LadderRifleStatic", 1.0};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class LadderRifleTopOff : LadderCivilTopOff {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\stp\low\rfl\AldrPercMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon.rtm";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 1.0};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class LadderRifleDownOff : LadderRifleTopOff {
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 1.0};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01};
		};
		
		class LadderRifleUpLoop : LadderCivilUpLoop {
			actions = "LadderRifleActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\wlk\low\rfl\AldrPercMwlkSlowWrflDu.rtm";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "LadderRifleStatic", 0.1, "LadderRifleTopOff", 0.1, "LadderRifleDownLoop", 0.1};
		};
		
		class LadderRifleDownLoop : LadderCivilDownLoop {
			file = "\ca\Anims\Characters\data\Anim\Sdr\ldr\erc\wlk\low\rfl\AldrPercMwlkSlowWrflDd.rtm";
			actions = "LadderRifleActions";
			soundOverride = "ladder";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "LadderRifleStatic", 0.1, "LadderRifleDownOff", 0.1, "LadderRifleUpLoop", 0.1};
		};
		
		class AswmPercMstpSnonWnonDnon : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "SwimmingActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\swm\erc\stp\non\non\AswmPercMstpSnonWnonDnon.rtm";
			speed = 0.42;
			relSpeedMin = 0.9;
			relSpeedMax = 1.1;
			looped = 1;
			soundEdge[] = {0.5};
			duty = WalkDuty;
			showWeaponAim = 0;
			disableWeapons = 1;
			limitGunMovement = 0;
			soundOverride = "swim";
			soundEnabled = 1;
			enableAutoActions = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pswm_Mnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.3};
			InterpolateTo[] = {"AdthPswmMstpSnonWnonDnon", 0.01, "AswmPercMstpSnonWnonDnon_AswmPercMrunSnonWnonDf", 0.1};
		};
		
		class AswmPercMrunSnonWnonDf : AswmPercMstpSnonWnonDnon {
			actions = "SwimmForwardActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\swm\erc\run\non\non\AswmPercMrunSnonWnonDf.rtm";
			speed = 0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pswm_Mrun.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.3};
			InterpolateTo[] = {"AdthPswmMrunSnonWnonDf", 0.01, "AswmPercMwlkSnonWnonDf", 0.1, "AswmPercMsprSnonWnonDf", 0.1, "AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon", 0.1};
		};
		
		class AswmPercMwlkSnonWnonDf : AswmPercMrunSnonWnonDf {
			relSpeedMin = 0.5;
			relSpeedMax = 0.6;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPswmMrunSnonWnonDf", 0.01, "AswmPercMrunSnonWnonDf", 0.1, "AswmPercMsprSnonWnonDf", 0.1, "AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon", 0.1};
		};
		
		class AswmPercMsprSnonWnonDf : AswmPercMrunSnonWnonDf {
			actions = "SwimmingFastActions";
			relSpeedMin = 0.8;
			relSpeedMax = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPswmMrunSnonWnonDf", 0.01, "AswmPercMrunSnonWnonDf", 0.1, "AswmPercMwlkSnonWnonDf", 0.1, "AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon", 0.1};
		};
		
		class AswmPercMstpSnonWnonDnon_AswmPercMrunSnonWnonDf : AswmPercMstpSnonWnonDnon {
			actions = "SwimmForwardActions";
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\swm\erc\stp\non\non\AswmPercMstpSnonWnonDnon_AswmPercMrunSnonWnonDf.rtm";
			speed = 0.545455;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pswm_Mrun.p3d";
			canPullTrigger = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AswmPercMrunSnonWnonDf", 0.1};
			InterpolateTo[] = {};
		};
		
		class AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon : AswmPercMstpSnonWnonDnon {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\swm\erc\run\non\non\AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon.rtm";
			speed = 0.91;
			canPullTrigger = 0;
			interpolationRestart = 1;
			ConnectTo[] = {"AswmPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AwopPercMstpSoptWbinDnon_rfl : AmovPercMstpSlowWrflDnon {
			actions = "BinocStandRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_rfl";
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle", 0.02, "AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle", 0.02, "AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon", 0.02, "AwopPercMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPercMstpSoptWbinDnon_rfl_turnR", 0.02};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_1", 0.01, "AdthPercMstpSlowWrflDnon_binocular", 0.01, "AmovPercMwlkSoptWbinDf_rfl", 0.02, "AmovPercMwlkSoptWbinDfr_rfl", 0.02, "AmovPercMwlkSoptWbinDr_rfl", 0.02, "AmovPercMwlkSoptWbinDbr_rfl", 0.02, "AmovPercMwlkSoptWbinDb_rfl", 0.02, "AmovPercMwlkSoptWbinDbl_rfl", 0.02, "AmovPercMwlkSoptWbinDl_rfl", 0.02, "AmovPercMwlkSoptWbinDfl_rfl", 0.02, "AmovPercMrunSnonWbinDf_rfl", 0.02, "AmovPercMrunSnonWbinDfr_rfl", 0.02, "AmovPercMrunSnonWbinDr_rfl", 0.02, "AmovPercMrunSnonWbinDbr_rfl", 0.02, "AmovPercMrunSnonWbinDb_rfl", 0.02, "AmovPercMrunSnonWbinDbl_rfl", 0.02, "AmovPercMrunSnonWbinDl_rfl", 0.02, "AmovPercMrunSnonWbinDfl_rfl", 0.02, "AwopPercMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPercMstpSoptWbinDnon_rfl_turnR", 0.02};
		};
		
		class AmovPercMwlkSoptWbinDf_rfl : AwopPercMstpSoptWbinDnon_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDfr_rfl", 0.025, "AmovPercMwlkSoptWbinDfl_rfl", 0.025, "AmovPercMrunSnonWbinDf_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfr_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDfr";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDf_rfl", 0.025, "AmovPercMwlkSoptWbinDr_rfl", 0.025, "AmovPercMrunSnonWbinDfr_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDr_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDr";
			speed = 0.483871;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDfr_rfl", 0.025, "AmovPercMwlkSoptWbinDbr_rfl", 0.025, "AmovPercMrunSnonWbinDr_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbr_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDbr";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDr_rfl", 0.025, "AmovPercMwlkSoptWbinDb_rfl", 0.025, "AmovPercMrunSnonWbinDbr_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDb_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDb";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDbr_rfl", 0.025, "AmovPercMwlkSoptWbinDbl_rfl", 0.025, "AmovPercMrunSnonWbinDb_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbl_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDb_rfl", 0.025, "AmovPercMwlkSoptWbinDl_rfl", 0.025, "AmovPercMrunSnonWbinDbl_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDl_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDbl_rfl", 0.025, "AmovPercMwlkSoptWbinDfl_rfl", 0.025, "AmovPercMrunSnonWbinDl_rfl", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfl_rfl : AmovPercMwlkSoptWbinDf_rfl {
			file = "\Ca\Anims\Characters\data\Anim\sdr\wop\erc\wlk\opt\bin\AwopPercMwlkSoptWbinDfl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDf_rfl", 0.025, "AmovPercMwlkSoptWbinDl_rfl", 0.025, "AmovPercMrunSnonWbinDfl_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDf_rfl : AmovPercMwlkSoptWbinDf_rfl {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDf";
			looped = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDf_rfl", 0.025, "AmovPercMrunSnonWbinDfr_rfl", 0.025, "AmovPercMrunSnonWbinDfl_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfr_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDfr_rfl", 0.025, "AmovPercMrunSnonWbinDf_rfl", 0.025, "AmovPercMrunSnonWbinDr_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDr_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDr_rfl", 0.025, "AmovPercMrunSnonWbinDfr_rfl", 0.025, "AmovPercMrunSnonWbinDbr_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbr_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDbr_rfl", 0.025, "AmovPercMrunSnonWbinDr_rfl", 0.025, "AmovPercMrunSnonWbinDb_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDb_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDb_rfl", 0.025, "AmovPercMrunSnonWbinDbr_rfl", 0.025, "AmovPercMrunSnonWbinDbl_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbl_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDbl_rfl", 0.025, "AmovPercMrunSnonWbinDb_rfl", 0.025, "AmovPercMrunSnonWbinDl_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDl_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDl_rfl", 0.025, "AmovPercMrunSnonWbinDbl_rfl", 0.025, "AmovPercMrunSnonWbinDfl_rfl", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfl_rfl : AmovPercMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02, "AmovPercMwlkSoptWbinDfl_rfl", 0.025, "AmovPercMrunSnonWbinDf_rfl", 0.025, "AmovPercMrunSnonWbinDl_rfl", 0.025};
		};
		
		class AwopPercMstpSoptWbinDnon_rfl_turnL : AwopPercMstpSoptWbinDnon_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90L";
			speed = 0.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_rfl_turnR : AwopPercMstpSoptWbinDnon_rfl_turnL {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90R";
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl : AmovPknlMstpSrasWrflDnon {
			actions = "BinocKneelRflActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_rfl";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle", 0.02, "AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle", 0.02, "AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon", 0.02, "AwopPknlMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_rfl_turnR", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWrflDnon_1", 0.01, "AdthPknlMstpSlowWrflDnon_binocular", 0.01, "AmovPknlMwlkSoptWbinDf_rfl", 0.02, "AmovPknlMwlkSoptWbinDfr_rfl", 0.02, "AmovPknlMwlkSoptWbinDr_rfl", 0.02, "AmovPknlMwlkSoptWbinDbr_rfl", 0.02, "AmovPknlMwlkSoptWbinDb_rfl", 0.02, "AmovPknlMwlkSoptWbinDbl_rfl", 0.02, "AmovPknlMwlkSoptWbinDl_rfl", 0.02, "AmovPknlMwlkSoptWbinDfl_rfl", 0.02, "AwopPknlMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_rfl_turnR", 0.02};
		};
		
		class AmovPknlMrunSnonWbinDf_rfl : AwopPknlMstpSoptWbinDnon_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			speed = 0.666667;
			enableOptics = 0;
			enableBinocular = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDfr_rfl", 0.025, "AmovPknlMrunSnonWbinDfl_rfl", 0.025, "AmovPknlMwlkSoptWbinDf_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfr_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			speed = 0.666667;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDf_rfl", 0.025, "AmovPknlMrunSnonWbinDr_rfl", 0.025, "AmovPknlMwlkSoptWbinDfr_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDr_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			speed = 0.714286;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDfr_rfl", 0.025, "AmovPknlMrunSnonWbinDbr_rfl", 0.025, "AmovPknlMwlkSoptWbinDr_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbr_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			speed = 0.666667;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDr_rfl", 0.025, "AmovPknlMrunSnonWbinDb_rfl", 0.025, "AmovPknlMwlkSoptWbinDbr_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDb_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			speed = 0.666667;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDbr_rfl", 0.025, "AmovPknlMrunSnonWbinDbl_rfl", 0.025, "AmovPknlMwlkSoptWbinDb_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbl_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			speed = 0.666667;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDb_rfl", 0.025, "AmovPknlMrunSnonWbinDl_rfl", 0.025, "AmovPknlMwlkSoptWbinDbl_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDl_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			speed = 0.625;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDbl_rfl", 0.025, "AmovPknlMrunSnonWbinDfl_rfl", 0.025, "AmovPknlMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfl_rfl : AmovPknlMrunSnonWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			speed = 0.666667;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSnonWbinDf_rfl", 0.025, "AmovPknlMrunSnonWbinDl_rfl", 0.025, "AmovPknlMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDf_rfl : AwopPknlMstpSoptWbinDnon_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			speed = 0.666667;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDf_rfl", 0.025, "AmovPknlMwlkSoptWbinDfr_rfl", 0.025, "AmovPknlMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfr_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			speed = 0.666667;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDfr_rfl", 0.025, "AmovPknlMwlkSoptWbinDf_rfl", 0.025, "AmovPknlMwlkSoptWbinDr_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDr_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			speed = 0.714286;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDr_rfl", 0.025, "AmovPknlMwlkSoptWbinDfr_rfl", 0.025, "AmovPknlMwlkSoptWbinDbr_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbr_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			speed = 0.666667;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDbr_rfl", 0.025, "AmovPknlMwlkSoptWbinDr_rfl", 0.025, "AmovPknlMwlkSoptWbinDb_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDb_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			speed = 0.666667;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDb_rfl", 0.025, "AmovPknlMwlkSoptWbinDbr_rfl", 0.025, "AmovPknlMwlkSoptWbinDbl_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbl_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			speed = 0.666667;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDbl_rfl", 0.025, "AmovPknlMwlkSoptWbinDb_rfl", 0.025, "AmovPknlMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDl_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			speed = 0.625;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDl_rfl", 0.025, "AmovPknlMwlkSoptWbinDbl_rfl", 0.025, "AmovPknlMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfl_rfl : AmovPknlMwlkSoptWbinDf_rfl {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			speed = 0.666667;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02, "AmovPknlMrunSnonWbinDfl_rfl", 0.025, "AmovPknlMwlkSoptWbinDf_rfl", 0.025, "AmovPknlMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl_turnL : AwopPknlMstpSoptWbinDnon_rfl {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl_turnR : AwopPknlMstpSoptWbinDnon_rfl_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl : AmovPpneMstpSrasWrflDnon {
			actions = "BinocProneRflActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_rfl";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle", 0.02, "AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle", 0.02, "AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon", 0.02, "AwopPpneMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_rfl_turnR", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWrflDnon_1", 0.01, "AdthPpneMstpSlowWrflDnon_binocular", 0.01, "AmovPpneMwlkSoptWbinDf_rfl", 0.02, "AmovPpneMwlkSoptWbinDfr_rfl", 0.02, "AmovPpneMwlkSoptWbinDr_rfl", 0.02, "AmovPpneMwlkSoptWbinDbr_rfl", 0.02, "AmovPpneMwlkSoptWbinDb_rfl", 0.02, "AmovPpneMwlkSoptWbinDbl_rfl", 0.02, "AmovPpneMwlkSoptWbinDl_rfl", 0.02, "AmovPpneMwlkSoptWbinDfl_rfl", 0.02, "AwopPpneMstpSoptWbinDnon_rfl_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_rfl_turnR", 0.02};
		};
		
		class AmovPpneMrunSnonWbinDf_rfl : AwopPpneMstpSoptWbinDnon_rfl {
			speed = 0.99;
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDf";
			enableOptics = 0;
			enableBinocular = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDfr_rfl", 0.025, "AmovPpneMrunSnonWbinDfl_rfl", 0.025, "AmovPpneMwlkSoptWbinDf_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfr_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDf_rfl", 0.025, "AmovPpneMrunSnonWbinDr_rfl", 0.025, "AmovPpneMwlkSoptWbinDfr_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDr_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDfr_rfl", 0.025, "AmovPpneMrunSnonWbinDbr_rfl", 0.025, "AmovPpneMwlkSoptWbinDr_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbr_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDr_rfl", 0.025, "AmovPpneMrunSnonWbinDb_rfl", 0.025, "AmovPpneMwlkSoptWbinDbr_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDb_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDbr_rfl", 0.025, "AmovPpneMrunSnonWbinDbl_rfl", 0.025, "AmovPpneMwlkSoptWbinDb_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbl_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDb_rfl", 0.025, "AmovPpneMrunSnonWbinDl_rfl", 0.025, "AmovPpneMwlkSoptWbinDbl_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDl_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDbl_rfl", 0.025, "AmovPpneMrunSnonWbinDfl_rfl", 0.025, "AmovPpneMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfl_rfl : AmovPpneMrunSnonWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMrunSnonWbinDf_rfl", 0.025, "AmovPpneMrunSnonWbinDl_rfl", 0.025, "AmovPpneMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDf_rfl : AwopPpneMstpSoptWbinDnon_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDf";
			speed = 1;
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDf_rfl", 0.025, "AmovPpneMwlkSoptWbinDfr_rfl", 0.025, "AmovPpneMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfr_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDfr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDfr_rfl", 0.025, "AmovPpneMwlkSoptWbinDf_rfl", 0.025, "AmovPpneMwlkSoptWbinDr_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDr_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDr_rfl", 0.025, "AmovPpneMwlkSoptWbinDfr_rfl", 0.025, "AmovPpneMwlkSoptWbinDbr_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbr_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDbr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDbr_rfl", 0.025, "AmovPpneMwlkSoptWbinDr_rfl", 0.025, "AmovPpneMwlkSoptWbinDb_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDb_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDb";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDb_rfl", 0.025, "AmovPpneMwlkSoptWbinDbr_rfl", 0.025, "AmovPpneMwlkSoptWbinDbl_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbl_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDbl_rfl", 0.025, "AmovPpneMwlkSoptWbinDb_rfl", 0.025, "AmovPpneMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDl_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDl_rfl", 0.025, "AmovPpneMwlkSoptWbinDbl_rfl", 0.025, "AmovPpneMwlkSoptWbinDfl_rfl", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfl_rfl : AmovPpneMwlkSoptWbinDf_rfl {
			speed = 0.99;
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\run\non\non\AmovPpneMrunSnonWnonDfl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02, "AmovPpneMrunSnonWbinDfl_rfl", 0.025, "AmovPpneMwlkSoptWbinDf_rfl", 0.025, "AmovPpneMwlkSoptWbinDl_rfl", 0.025};
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl_turnL : AwopPpneMstpSoptWbinDnon_rfl {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl_turnR : AwopPpneMstpSoptWbinDnon_rfl_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_rfl", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_pst : AmovPercMstpSrasWpstDnon {
			actions = "BinocStandPstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_non";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			showHandgun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst", 0.02, "AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst", 0.02, "AwopPercMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPercMstpSoptWbinDnon_pst_turnR", 0.02, "AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPercMstpSoptWbinDnon_pst_turnR", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01, "AdthPercMstpSnonWnonDnon_binocular", 0.01, "AmovPercMwlkSoptWbinDf_pst", 0.02, "AmovPercMwlkSoptWbinDfr_pst", 0.02, "AmovPercMwlkSoptWbinDr_pst", 0.02, "AmovPercMwlkSoptWbinDbr_pst", 0.02, "AmovPercMwlkSoptWbinDb_pst", 0.02, "AmovPercMwlkSoptWbinDbl_pst", 0.02, "AmovPercMwlkSoptWbinDl_pst", 0.02, "AmovPercMwlkSoptWbinDfl_pst", 0.02};
		};
		
		class AmovPercMwlkSoptWbinDf_pst : AwopPercMstpSoptWbinDnon_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDf";
			speed = 0.47619;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDfr_pst", 0.025, "AmovPercMwlkSoptWbinDfl_pst", 0.025, "AmovPercMrunSnonWbinDf_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfr_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDfr_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDf_pst", 0.025, "AmovPercMwlkSoptWbinDr_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDr_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDfr_pst", 0.025, "AmovPercMwlkSoptWbinDbr_pst", 0.025, "AmovPercMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbr_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDr_pst", 0.025, "AmovPercMwlkSoptWbinDb_pst", 0.025, "AmovPercMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDb_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDbr_pst", 0.025, "AmovPercMwlkSoptWbinDbl_pst", 0.025, "AmovPercMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbl_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDb_pst", 0.025, "AmovPercMwlkSoptWbinDl_pst", 0.025, "AmovPercMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDl_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDbl_pst", 0.025, "AmovPercMwlkSoptWbinDfl_pst", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfl_pst : AmovPercMwlkSoptWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDfl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDf_pst", 0.025, "AmovPercMwlkSoptWbinDl_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDf_pst : AmovPercMwlkSoptWbinDf_pst {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDfr_pst", 0.025, "AmovPercMrunSnonWbinDfl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDf_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfr_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDfr_pst", 0.025, "AmovPercMrunSnonWbinDf_pst", 0.025, "AmovPercMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDr_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDfr_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDr_pst", 0.025, "AmovPercMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbr_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDbr_pst", 0.025, "AmovPercMrunSnonWbinDr_pst", 0.025, "AmovPercMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDb_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDb_pst", 0.025, "AmovPercMrunSnonWbinDbr_pst", 0.025, "AmovPercMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbl_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDbl_pst", 0.025, "AmovPercMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDl_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDfl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDl_pst", 0.025, "AmovPercMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfl_pst : AmovPercMrunSnonWbinDf_pst {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSnonWbinDl_pst", 0.025, "AwopPercMstpSoptWbinDnon_pst", 0.02, "AmovPercMwlkSoptWbinDfl_pst", 0.025, "AmovPercMrunSnonWbinDf_pst", 0.025};
		};
		
		class AwopPercMstpSoptWbinDnon_pst_turnL : AwopPercMstpSoptWbinDnon_pst {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_pst_turnR : AwopPercMstpSoptWbinDnon_pst_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_pst : AmovPknlMstpSrasWpstDnon {
			actions = "BinocKneelPstActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_non";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			showHandgun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wnon.p3d";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst", 0.02, "AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst", 0.02, "AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon", 0.02, "AwopPknlMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_pst_turnR", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01, "AdthPknlMstpSnonWnonDnon_binocular", 0.01, "AmovPknlMwlkSoptWbinDf_pst", 0.02, "AmovPknlMwlkSoptWbinDfr_pst", 0.02, "AmovPknlMwlkSoptWbinDr_pst", 0.02, "AmovPknlMwlkSoptWbinDbr_pst", 0.02, "AmovPknlMwlkSoptWbinDb_pst", 0.02, "AmovPknlMwlkSoptWbinDbl_pst", 0.02, "AmovPknlMwlkSoptWbinDl_pst", 0.02, "AmovPknlMwlkSoptWbinDfl_pst", 0.02, "AwopPknlMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_pst_turnR", 0.02};
		};
		
		class AmovPknlMwlkSoptWbinDf_pst : AwopPknlMstpSoptWbinDnon_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDfr_pst", 0.025, "AmovPknlMwlkSoptWbinDfl_pst", 0.025, "AmovPknlMrunSnonWbinDf_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfr_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDf_pst", 0.025, "AmovPknlMwlkSoptWbinDr_pst", 0.025, "AmovPknlMrunSnonWbinDfr_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDr_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDfr_pst", 0.025, "AmovPknlMwlkSoptWbinDbr_pst", 0.025, "AmovPknlMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbr_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDr_pst", 0.025, "AmovPknlMwlkSoptWbinDb_pst", 0.025, "AmovPknlMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDb_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDbr_pst", 0.025, "AmovPknlMwlkSoptWbinDbl_pst", 0.025, "AmovPknlMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbl_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDb_pst", 0.025, "AmovPknlMwlkSoptWbinDl_pst", 0.025, "AmovPknlMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDl_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDbl_pst", 0.025, "AmovPknlMwlkSoptWbinDfl_pst", 0.025, "AmovPknlMrunSnonWbinDl_pst", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfl_pst : AmovPknlMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDf_pst", 0.025, "AmovPknlMwlkSoptWbinDl_pst", 0.025, "AmovPknlMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDf_pst : AmovPknlMwlkSoptWbinDf_pst {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			limitGunMovement = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDf_pst", 0.025, "AmovPknlMrunSnonWbinDfr_pst", 0.025, "AmovPknlMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfr_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDfr_pst", 0.025, "AmovPknlMrunSnonWbinDf_pst", 0.025, "AmovPknlMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDr_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDr_pst", 0.025, "AmovPknlMrunSnonWbinDfr_pst", 0.025, "AmovPknlMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbr_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDbr_pst", 0.025, "AmovPknlMrunSnonWbinDr_pst", 0.025, "AmovPknlMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDb_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDb_pst", 0.025, "AmovPknlMrunSnonWbinDbr_pst", 0.025, "AmovPknlMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbl_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDbl_pst", 0.025, "AmovPknlMrunSnonWbinDb_pst", 0.025, "AmovPknlMrunSnonWbinDl_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDl_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDl_pst", 0.025, "AmovPknlMrunSnonWbinDbl_pst", 0.025, "AmovPknlMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfl_pst : AmovPknlMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02, "AmovPknlMwlkSoptWbinDfl_pst", 0.025, "AmovPknlMrunSnonWbinDf_pst", 0.025, "AmovPknlMrunSnonWbinDl_pst", 0.025};
		};
		
		class AwopPknlMstpSoptWbinDnon_pst_turnL : AwopPknlMstpSoptWbinDnon_pst {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_pst_turnR : AwopPknlMstpSoptWbinDnon_pst_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_pst : AmovPpneMstpSrasWpstDnon {
			actions = "BinocPronePstActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_non";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			showHandgun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst", 0.02, "AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst", 0.02, "AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon", 0.02, "AwopPpneMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_pst_turnR", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSrasWpstDnon_1", 0.01, "AdthPpneMstpSnonWnonDnon_binocular", 0.01, "AmovPpneMwlkSoptWbinDf_pst", 0.02, "AmovPpneMwlkSoptWbinDfr_pst", 0.02, "AmovPpneMwlkSoptWbinDr_pst", 0.02, "AmovPpneMwlkSoptWbinDbr_pst", 0.02, "AmovPpneMwlkSoptWbinDb_pst", 0.02, "AmovPpneMwlkSoptWbinDbl_pst", 0.02, "AmovPpneMwlkSoptWbinDl_pst", 0.02, "AmovPpneMwlkSoptWbinDfl_pst", 0.02, "AwopPpneMstpSoptWbinDnon_pst_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_pst_turnR", 0.02};
		};
		
		class AmovPpneMwlkSoptWbinDf_pst : AwopPpneMstpSoptWbinDnon_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDfr_pst", 0.025, "AmovPpneMwlkSoptWbinDfl_pst", 0.025, "AmovPpneMrunSnonWbinDf_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfr_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDf_pst", 0.025, "AmovPpneMwlkSoptWbinDr_pst", 0.025, "AmovPpneMrunSnonWbinDfr_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDr_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDfr_pst", 0.025, "AmovPpneMwlkSoptWbinDbr_pst", 0.025, "AmovPpneMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbr_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDr_pst", 0.025, "AmovPpneMwlkSoptWbinDb_pst", 0.025, "AmovPpneMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDb_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDbr_pst", 0.025, "AmovPpneMwlkSoptWbinDbl_pst", 0.025, "AmovPpneMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbl_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDb_pst", 0.025, "AmovPpneMwlkSoptWbinDl_pst", 0.025, "AmovPpneMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDl_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDbl_pst", 0.025, "AmovPpneMwlkSoptWbinDfl_pst", 0.025, "AmovPpneMrunSnonWbinDl_pst", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfl_pst : AmovPpneMwlkSoptWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDf_pst", 0.025, "AmovPpneMwlkSoptWbinDl_pst", 0.025, "AmovPpneMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDf_pst : AmovPpneMwlkSoptWbinDf_pst {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDf_pst", 0.025, "AmovPpneMrunSnonWbinDfr_pst", 0.025, "AmovPpneMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfr_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDfr_pst", 0.025, "AmovPpneMrunSnonWbinDf_pst", 0.025, "AmovPpneMrunSnonWbinDr_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDr_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDr_pst", 0.025, "AmovPpneMrunSnonWbinDfr_pst", 0.025, "AmovPpneMrunSnonWbinDbr_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbr_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDbr_pst", 0.025, "AmovPpneMrunSnonWbinDr_pst", 0.025, "AmovPpneMrunSnonWbinDb_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDb_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDb_pst", 0.025, "AmovPpneMrunSnonWbinDbr_pst", 0.025, "AmovPpneMrunSnonWbinDbl_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbl_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDbl_pst", 0.025, "AmovPpneMrunSnonWbinDb_pst", 0.025, "AmovPpneMrunSnonWbinDl_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDl_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDl_pst", 0.025, "AmovPpneMrunSnonWbinDbl_pst", 0.025, "AmovPpneMrunSnonWbinDfl_pst", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfl_pst : AmovPpneMrunSnonWbinDf_pst {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02, "AmovPpneMwlkSoptWbinDfl_pst", 0.025, "AmovPpneMrunSnonWbinDf_pst", 0.025, "AmovPpneMrunSnonWbinDl_pst", 0.025};
		};
		
		class AwopPpneMstpSoptWbinDnon_pst_turnL : AwopPpneMstpSoptWbinDnon_pst {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_pst_turnR : AwopPpneMstpSoptWbinDnon_pst_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_pst", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr : AmovPknlMstpSrasWlnrDnon {
			actions = "BinocKneelLnrActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_lnr";
			showWeaponAim = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			showHandgun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Pknl_Wnon.p3d";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr", 0.02, "AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon", 0.02, "AwopPknlMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_lnr_turnR", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01, "AdthPknlMstpSlowWlnrDnon_binocular", 0.01, "AmovPknlMwlkSoptWbinDf_lnr", 0.02, "AmovPknlMwlkSoptWbinDfr_lnr", 0.02, "AmovPknlMwlkSoptWbinDr_lnr", 0.02, "AmovPknlMwlkSoptWbinDbr_lnr", 0.02, "AmovPknlMwlkSoptWbinDb_lnr", 0.02, "AmovPknlMwlkSoptWbinDbl_lnr", 0.02, "AmovPknlMwlkSoptWbinDl_lnr", 0.02, "AmovPknlMwlkSoptWbinDfl_lnr", 0.02, "AwopPknlMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_lnr_turnR", 0.02};
		};
		
		class AmovPknlMwlkSoptWbinDf_lnr : AwopPknlMstpSoptWbinDnon_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDfr_lnr", 0.025, "AmovPknlMwlkSoptWbinDfl_lnr", 0.025, "AmovPknlMrunSnonWbinDf_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfr_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDf_lnr", 0.025, "AmovPknlMwlkSoptWbinDr_lnr", 0.025, "AmovPknlMrunSnonWbinDfr_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDr_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDfr_lnr", 0.025, "AmovPknlMwlkSoptWbinDbr_lnr", 0.025, "AmovPknlMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbr_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDr_lnr", 0.025, "AmovPknlMwlkSoptWbinDb_lnr", 0.025, "AmovPknlMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDb_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDbr_lnr", 0.025, "AmovPknlMwlkSoptWbinDbl_lnr", 0.025, "AmovPknlMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbl_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDb_lnr", 0.025, "AmovPknlMwlkSoptWbinDl_lnr", 0.025, "AmovPknlMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDl_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDbl_lnr", 0.025, "AmovPknlMwlkSoptWbinDfl_lnr", 0.025, "AmovPknlMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfl_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDf_lnr", 0.025, "AmovPknlMwlkSoptWbinDl_lnr", 0.025, "AmovPknlMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDf_lnr : AmovPknlMwlkSoptWbinDf_lnr {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDf_lnr", 0.025, "AmovPknlMrunSnonWbinDfr_lnr", 0.025, "AmovPknlMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfr_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDfr_lnr", 0.025, "AmovPknlMrunSnonWbinDf_lnr", 0.025, "AmovPknlMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDr_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDr_lnr", 0.025, "AmovPknlMrunSnonWbinDfr_lnr", 0.025, "AmovPknlMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbr_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDbr_lnr", 0.025, "AmovPknlMrunSnonWbinDr_lnr", 0.025, "AmovPknlMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDb_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDb_lnr", 0.025, "AmovPknlMrunSnonWbinDbr_lnr", 0.025, "AmovPknlMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbl_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDbl_lnr", 0.025, "AmovPknlMrunSnonWbinDb_lnr", 0.025, "AmovPknlMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDl_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDl_lnr", 0.025, "AmovPknlMrunSnonWbinDbl_lnr", 0.025, "AmovPknlMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfl_lnr : AmovPknlMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AmovPknlMwlkSoptWbinDfl_lnr", 0.025, "AmovPknlMrunSnonWbinDf_lnr", 0.025, "AmovPknlMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_lnr {
			actions = "BinocProneLnrActions";
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr", 0.02, "AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AwopPpneMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_lnr_turnR", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_lnr_turnR", 0.02, "AmovPpneMwlkSoptWbinDf_lnr", 0.02, "AmovPpneMwlkSoptWbinDfr_lnr", 0.02, "AmovPpneMwlkSoptWbinDr_lnr", 0.02, "AmovPpneMwlkSoptWbinDbr_lnr", 0.02, "AmovPpneMwlkSoptWbinDb_lnr", 0.02, "AmovPpneMwlkSoptWbinDbl_lnr", 0.02, "AmovPpneMwlkSoptWbinDl_lnr", 0.02, "AmovPpneMwlkSoptWbinDfl_lnr", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr_turnL : AwopPpneMstpSoptWbinDnon_lnr {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr_turnR : AwopPpneMstpSoptWbinDnon_lnr_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AmovPpneMwlkSoptWbinDf_lnr : AwopPpneMstpSoptWbinDnon_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDfr_lnr", 0.025, "AmovPpneMwlkSoptWbinDfl_lnr", 0.025, "AmovPpneMrunSnonWbinDf_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfr_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDf_lnr", 0.025, "AmovPpneMwlkSoptWbinDr_lnr", 0.025, "AmovPpneMrunSnonWbinDfr_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDr_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDfr_lnr", 0.025, "AmovPpneMwlkSoptWbinDbr_lnr", 0.025, "AmovPpneMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbr_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDr_lnr", 0.025, "AmovPpneMwlkSoptWbinDb_lnr", 0.025, "AmovPpneMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDb_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDbr_lnr", 0.025, "AmovPpneMwlkSoptWbinDbl_lnr", 0.025, "AmovPpneMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbl_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDb_lnr", 0.025, "AmovPpneMwlkSoptWbinDl_lnr", 0.025, "AmovPpneMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDl_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDbl_lnr", 0.025, "AmovPpneMwlkSoptWbinDfl_lnr", 0.025, "AmovPpneMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfl_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDf_lnr", 0.025, "AmovPpneMwlkSoptWbinDl_lnr", 0.025, "AmovPpneMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDf_lnr : AmovPpneMwlkSoptWbinDf_lnr {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDf_lnr", 0.025, "AmovPpneMrunSnonWbinDfr_lnr", 0.025, "AmovPpneMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfr_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDfr_lnr", 0.025, "AmovPpneMrunSnonWbinDf_lnr", 0.025, "AmovPpneMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDr_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDr_lnr", 0.025, "AmovPpneMrunSnonWbinDfr_lnr", 0.025, "AmovPpneMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbr_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDbr_lnr", 0.025, "AmovPpneMrunSnonWbinDr_lnr", 0.025, "AmovPpneMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDb_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDb_lnr", 0.025, "AmovPpneMrunSnonWbinDbr_lnr", 0.025, "AmovPpneMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbl_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDbl_lnr", 0.025, "AmovPpneMrunSnonWbinDb_lnr", 0.025, "AmovPpneMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDl_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDl_lnr", 0.025, "AmovPpneMrunSnonWbinDbl_lnr", 0.025, "AmovPpneMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfl_lnr : AmovPpneMrunSnonWbinDf_lnr {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AmovPpneMwlkSoptWbinDfl_lnr", 0.025, "AmovPpneMrunSnonWbinDf_lnr", 0.025, "AmovPpneMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr_turnL : AwopPknlMstpSoptWbinDnon_lnr {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr_turnR : AwopPknlMstpSoptWbinDnon_lnr_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_non : AmovPercMstpSnonWnonDnon {
			actions = "BinocStandCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_non";
			showWeaponAim = 0;
			disableWeapons = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			limitGunMovement = 1;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non", 0.02, "AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non", 0.02, "AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon", 0.02, "AwopPercMstpSoptWbinDnon_non_turnL", 0.02, "AwopPercMstpSoptWbinDnon_non_turnR", 0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_binocular", 0.01, "AdthPercMstpSnonWnonDnon_1", 0.01, "AmovPercMwlkSoptWbinDf_non", 0.02, "AmovPercMwlkSoptWbinDfr_non", 0.02, "AmovPercMwlkSoptWbinDr_non", 0.02, "AmovPercMwlkSoptWbinDbr_non", 0.02, "AmovPercMwlkSoptWbinDb_non", 0.02, "AmovPercMwlkSoptWbinDbl_non", 0.02, "AmovPercMwlkSoptWbinDl_non", 0.02, "AmovPercMwlkSoptWbinDfl_non", 0.02, "AwopPercMstpSoptWbinDnon_non_turnL", 0.02, "AwopPercMstpSoptWbinDnon_non_turnR", 0.02};
		};
		
		class AmovPercMwlkSoptWbinDf_non : AwopPercMstpSoptWbinDnon_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDf";
			speed = 0.47619;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDfr_non", 0.025, "AmovPercMwlkSoptWbinDfl_non", 0.025, "AmovPercMrunSnonWbinDf_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfr_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDf_non", 0.025, "AmovPercMwlkSoptWbinDr_non", 0.025, "AmovPercMrunSnonWbinDfr_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDr_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDfr_non", 0.025, "AmovPercMwlkSoptWbinDbr_non", 0.025, "AmovPercMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbr_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDr_non", 0.025, "AmovPercMwlkSoptWbinDb_non", 0.025, "AmovPercMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDb_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDbr_non", 0.025, "AmovPercMwlkSoptWbinDbl_non", 0.025, "AmovPercMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbl_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDb_non", 0.025, "AmovPercMwlkSoptWbinDl_non", 0.025, "AmovPercMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDl_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDbl_non", 0.025, "AmovPercMwlkSoptWbinDfl_non", 0.025, "AmovPercMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfl_non : AmovPercMwlkSoptWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDf_non", 0.025, "AmovPercMwlkSoptWbinDl_non", 0.025, "AmovPercMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDf_non : AmovPercMwlkSoptWbinDf_non {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDf_non", 0.025, "AmovPercMrunSnonWbinDfr_non", 0.025, "AmovPercMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfr_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDfr_non", 0.025, "AmovPercMrunSnonWbinDf_non", 0.025, "AmovPercMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDr_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDr_non", 0.025, "AmovPercMrunSnonWbinDfr_non", 0.025, "AmovPercMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbr_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDbr_non", 0.025, "AmovPercMrunSnonWbinDr_non", 0.025, "AmovPercMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDb_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDb_non", 0.025, "AmovPercMrunSnonWbinDbr_non", 0.025, "AmovPercMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbl_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDbl_non", 0.025, "AmovPercMrunSnonWbinDb_non", 0.025, "AmovPercMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDl_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDl_non", 0.025, "AmovPercMrunSnonWbinDbl_non", 0.025, "AmovPercMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfl_non : AmovPercMrunSnonWbinDf_non {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02, "AmovPercMwlkSoptWbinDfl_non", 0.025, "AmovPercMrunSnonWbinDf_non", 0.025, "AmovPercMrunSnonWbinDl_non", 0.025};
		};
		
		class AwopPknlMstpSoptWbinDnon_non : AwopPercMstpSoptWbinDnon_non {
			actions = "BinocKneelCivilActions";
			file = "\ca\anims\characters\data\anim\sdr\wop\knl\stp\opt\bin\awoppknlmstpsoptwbindnon_rfl";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non", 0.02, "AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non", 0.02, "AwopPknlMstpSoptWbinDnon_non_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_non_turnR", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non_turnL", 0.02, "AwopPknlMstpSoptWbinDnon_non_turnR", 0.02, "AmovPknlMwlkSoptWbinDf_non", 0.02, "AmovPknlMwlkSoptWbinDfr_non", 0.02, "AmovPknlMwlkSoptWbinDr_non", 0.02, "AmovPknlMwlkSoptWbinDbr_non", 0.02, "AmovPknlMwlkSoptWbinDb_non", 0.02, "AmovPknlMwlkSoptWbinDbl_non", 0.02, "AmovPknlMwlkSoptWbinDl_non", 0.02, "AmovPknlMwlkSoptWbinDfl_non", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_non_turnL : AwopPknlMstpSoptWbinDnon_non {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPknlMstpSoptWbinDnon_non_turnR : AwopPknlMstpSoptWbinDnon_non_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02};
		};
		
		class AmovPknlMwlkSoptWbinDf_non : AwopPknlMstpSoptWbinDnon_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDfr_non", 0.025, "AmovPknlMwlkSoptWbinDfl_non", 0.025, "AmovPknlMrunSnonWbinDf_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfr_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDf_non", 0.025, "AmovPknlMwlkSoptWbinDr_non", 0.025, "AmovPknlMrunSnonWbinDfr_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDr_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDfr_non", 0.025, "AmovPknlMwlkSoptWbinDbr_non", 0.025, "AmovPknlMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbr_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDr_non", 0.025, "AmovPknlMwlkSoptWbinDb_non", 0.025, "AmovPknlMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDb_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDbr_non", 0.025, "AmovPknlMwlkSoptWbinDbl_non", 0.025, "AmovPknlMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDbl_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDb_non", 0.025, "AmovPknlMwlkSoptWbinDl_non", 0.025, "AmovPknlMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDl_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDbl_non", 0.025, "AmovPknlMwlkSoptWbinDfl_non", 0.025, "AmovPknlMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPknlMwlkSoptWbinDfl_non : AmovPknlMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDf_non", 0.025, "AmovPknlMwlkSoptWbinDl_non", 0.025, "AmovPknlMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDf_non : AmovPknlMwlkSoptWbinDf_non {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDf_non", 0.025, "AmovPknlMrunSnonWbinDfr_non", 0.025, "AmovPknlMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfr_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDfr_non", 0.025, "AmovPknlMrunSnonWbinDf_non", 0.025, "AmovPknlMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDr_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDr_non", 0.025, "AmovPknlMrunSnonWbinDfr_non", 0.025, "AmovPknlMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbr_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDbr_non", 0.025, "AmovPknlMrunSnonWbinDr_non", 0.025, "AmovPknlMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDb_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDb_non", 0.025, "AmovPknlMrunSnonWbinDbr_non", 0.025, "AmovPknlMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDbl_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDbl_non", 0.025, "AmovPknlMrunSnonWbinDb_non", 0.025, "AmovPknlMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDl_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDl_non", 0.025, "AmovPknlMrunSnonWbinDbl_non", 0.025, "AmovPknlMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPknlMrunSnonWbinDfl_non : AmovPknlMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\run\non\non\amovpknlmrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPknlMstpSoptWbinDnon_non", 0.02, "AmovPknlMwlkSoptWbinDfl_non", 0.025, "AmovPknlMrunSnonWbinDf_non", 0.025, "AmovPknlMrunSnonWbinDl_non", 0.025};
		};
		
		class AwopPercMstpSoptWbinDnon_non_turnL : AwopPercMstpSoptWbinDnon_non {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_non_turnR : AwopPercMstpSoptWbinDnon_non_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_lnr : AwopPercMstpSoptWbinDnon_non {
			actions = "BinocStandLnrActions";
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr", 0.02, "AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr", 0.02, "AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon", 0.02, "AwopPercMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPercMstpSoptWbinDnon_lnr_turnR", 0.02};
			InterpolateTo[] = {"AmovPercMwlkSoptWbinDf_lnr", 0.02, "AmovPercMwlkSoptWbinDfr_lnr", 0.02, "AmovPercMwlkSoptWbinDr_lnr", 0.02, "AmovPercMwlkSoptWbinDbr_lnr", 0.02, "AmovPercMwlkSoptWbinDb_lnr", 0.02, "AmovPercMwlkSoptWbinDbl_lnr", 0.02, "AmovPercMwlkSoptWbinDl_lnr", 0.02, "AmovPercMwlkSoptWbinDfl_lnr", 0.02, "AwopPercMstpSoptWbinDnon_lnr_turnL", 0.02, "AwopPercMstpSoptWbinDnon_lnr_turnR", 0.02};
		};
		
		class AmovPercMwlkSoptWbinDf_lnr : AwopPercMstpSoptWbinDnon_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDf";
			speed = 0.47619;
			soundEdge[] = {0.25, 0.5, 0.75, 1};
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDfr_lnr", 0.025, "AmovPercMwlkSoptWbinDfl_lnr", 0.025, "AmovPercMrunSnonWbinDf_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfr_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDf_lnr", 0.025, "AmovPercMwlkSoptWbinDr_lnr", 0.025, "AmovPercMrunSnonWbinDfr_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDr_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDfr_lnr", 0.025, "AmovPercMwlkSoptWbinDbr_lnr", 0.025, "AmovPercMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbr_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDr_lnr", 0.025, "AmovPercMwlkSoptWbinDb_lnr", 0.025, "AmovPercMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDb_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDbr_lnr", 0.025, "AmovPercMwlkSoptWbinDbl_lnr", 0.025, "AmovPercMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDbl_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDb_lnr", 0.025, "AmovPercMwlkSoptWbinDl_lnr", 0.025, "AmovPercMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDl_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDbl_lnr", 0.025, "AmovPercMwlkSoptWbinDfl_lnr", 0.025, "AmovPercMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPercMwlkSoptWbinDfl_lnr : AmovPercMwlkSoptWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDf_lnr", 0.025, "AmovPercMwlkSoptWbinDl_lnr", 0.025, "AmovPercMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDf_lnr : AmovPercMwlkSoptWbinDf_lnr {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDf_lnr", 0.025, "AmovPercMrunSnonWbinDfr_lnr", 0.025, "AmovPercMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfr_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDfr_lnr", 0.025, "AmovPercMrunSnonWbinDf_lnr", 0.025, "AmovPercMrunSnonWbinDr_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDr_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.483871;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDr_lnr", 0.025, "AmovPercMrunSnonWbinDfr_lnr", 0.025, "AmovPercMrunSnonWbinDbr_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbr_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDbr_lnr", 0.025, "AmovPercMrunSnonWbinDr_lnr", 0.025, "AmovPercMrunSnonWbinDb_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDb_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDb_lnr", 0.025, "AmovPercMrunSnonWbinDbr_lnr", 0.025, "AmovPercMrunSnonWbinDbl_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDbl_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDbl_lnr", 0.025, "AmovPercMrunSnonWbinDb_lnr", 0.025, "AmovPercMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDl_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDl_lnr", 0.025, "AmovPercMrunSnonWbinDbl_lnr", 0.025, "AmovPercMrunSnonWbinDfl_lnr", 0.025};
		};
		
		class AmovPercMrunSnonWbinDfl_lnr : AmovPercMrunSnonWbinDf_lnr {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			speed = 0.47619;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			limitGunMovement = 0.3;
			soundOverride = "run";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02, "AmovPercMwlkSoptWbinDfl_lnr", 0.025, "AmovPercMrunSnonWbinDf_lnr", 0.025, "AmovPercMrunSnonWbinDl_lnr", 0.025};
		};
		
		class AwopPercMstpSoptWbinDnon_lnr_turnL : AwopPercMstpSoptWbinDnon_lnr {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPercMstpSoptWbinDnon_lnr_turnR : AwopPercMstpSoptWbinDnon_lnr_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
			InterpolateTo[] = {"AwopPercMstpSoptWbinDnon_lnr", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_non : AmovPpneMstpSnonWnonDnon {
			actions = "BinocProneCivilActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\wop\pne\stp\opt\bin\AwopPpneMstpSoptWbinDnon_non";
			showWeaponAim = 0;
			disableWeapons = 0;
			enableBinocular = 1;
			showItemInHand = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			enableOptics = 4096;
			canPullTrigger = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non", 0.02, "AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non", 0.02, "AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AwopPpneMstpSoptWbinDnon_non_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_non_turnR", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon_binocular", 0.01, "AdthPpneMstpSnonWnonDnon", 0.01, "AmovPpneMwlkSoptWbinDf_non", 0.02, "AmovPpneMwlkSoptWbinDfr_non", 0.02, "AmovPpneMwlkSoptWbinDr_non", 0.02, "AmovPpneMwlkSoptWbinDbr_non", 0.02, "AmovPpneMwlkSoptWbinDb_non", 0.02, "AmovPpneMwlkSoptWbinDbl_non", 0.02, "AmovPpneMwlkSoptWbinDl_non", 0.02, "AmovPpneMwlkSoptWbinDfl_non", 0.02, "AwopPpneMstpSoptWbinDnon_non_turnL", 0.02, "AwopPpneMstpSoptWbinDnon_non_turnR", 0.02};
		};
		
		class AmovPpneMwlkSoptWbinDf_non : AwopPpneMstpSoptWbinDnon_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondf";
			speed = 0.99;
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDfr_non", 0.025, "AmovPpneMwlkSoptWbinDfl_non", 0.025, "AmovPpneMrunSnonWbinDf_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfr_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDf_non", 0.025, "AmovPpneMwlkSoptWbinDr_non", 0.025, "AmovPpneMrunSnonWbinDfr_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDr_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDfr_non", 0.025, "AmovPpneMwlkSoptWbinDbr_non", 0.025, "AmovPpneMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbr_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDr_non", 0.025, "AmovPpneMwlkSoptWbinDb_non", 0.025, "AmovPpneMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDb_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDbr_non", 0.025, "AmovPpneMwlkSoptWbinDbl_non", 0.025, "AmovPpneMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDbl_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDb_non", 0.025, "AmovPpneMwlkSoptWbinDl_non", 0.025, "AmovPpneMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDl_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDbl_non", 0.025, "AmovPpneMwlkSoptWbinDfl_non", 0.025, "AmovPpneMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPpneMwlkSoptWbinDfl_non : AmovPpneMwlkSoptWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = CrawlDuty;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDf_non", 0.025, "AmovPpneMwlkSoptWbinDl_non", 0.025, "AmovPpneMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDf_non : AmovPpneMwlkSoptWbinDf_non {
			enableBinocular = 0;
			enableOptics = 0;
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDf_non", 0.025, "AmovPpneMrunSnonWbinDfr_non", 0.025, "AmovPpneMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfr_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDfr_non", 0.025, "AmovPpneMrunSnonWbinDf_non", 0.025, "AmovPpneMrunSnonWbinDr_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDr_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDr_non", 0.025, "AmovPpneMrunSnonWbinDfr_non", 0.025, "AmovPpneMrunSnonWbinDbr_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbr_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbr";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDbr_non", 0.025, "AmovPpneMrunSnonWbinDr_non", 0.025, "AmovPpneMrunSnonWbinDb_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDb_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondb";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDb_non", 0.025, "AmovPpneMrunSnonWbinDbr_non", 0.025, "AmovPpneMrunSnonWbinDbl_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDbl_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondbl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDbl_non", 0.025, "AmovPpneMrunSnonWbinDb_non", 0.025, "AmovPpneMrunSnonWbinDl_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDl_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDl_non", 0.025, "AmovPpneMrunSnonWbinDbl_non", 0.025, "AmovPpneMrunSnonWbinDfl_non", 0.025};
		};
		
		class AmovPpneMrunSnonWbinDfl_non : AmovPpneMrunSnonWbinDf_non {
			file = "\ca\anims\characters\data\anim\sdr\mov\pne\run\non\non\amovppnemrunsnonwnondfl";
			duty = WalkDuty;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.09651;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02, "AmovPpneMwlkSoptWbinDfl_non", 0.025, "AmovPpneMrunSnonWbinDf_non", 0.025, "AmovPpneMrunSnonWbinDl_non", 0.025};
		};
		
		class AwopPpneMstpSoptWbinDnon_non_turnL : AwopPpneMstpSoptWbinDnon_non {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
		};
		
		class AwopPpneMstpSoptWbinDnon_non_turnR : AwopPpneMstpSoptWbinDnon_non_turnL {
			canPullTrigger = 0;
			ConnectTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
			InterpolateTo[] = {"AwopPpneMstpSoptWbinDnon_non", 0.02};
		};
		
		class AidlPercMstpSrasWrflDnon0S : AmovPercMstpSrasWrflDnon {
			actions = "RifleStandActions_Idle";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\low\rfl\AmovPercMstpSlowWrflDnon.rtm";
			equivalentTo = "AidlPercMstpSrasWrflDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPercMstpSrasWrflDnon0S", 0.01, "AidlPercMstpSrasWrflDnon01", 0.01, "AidlPercMstpSrasWrflDnon02", 0.01, "AidlPercMstpSrasWrflDnon03", 0.01, "AidlPercMstpSrasWrflDnon04", 0.01, "AidlPercMstpSrasWrflDnon05", 0.001, "AidlPercMstpSrasWrflDnon06", 0.001, "AidlPercMstpSrasWrflDnon_i01", 0.001, "AidlPercMstpSrasWrflDnon_i02", 0.001, "AidlPercMstpSrasWrflDnon_i03", 0.001, "AidlPercMstpSrasWrflDnon_i04", 0.001, "AidlPercMstpSrasWrflDnon_i05", 0.005, "AidlPercMstpSrasWrflDnon_i07", 0.01, "AidlPercMstpSrasWrflDnon_i08", 0.001, "AidlPercMstpSrasWrflDnon_i09", 0.01, "AidlPercMstpSrasWrflDnon_i10", 0.01, "AidlPercMstpSrasWrflDnon_i11", 0.01, "AidlPercMstpSrasWrflDnon_i12", 0.001, "AidlPercMstpSrasWrflDnon_i13", 0.001, "AidlPercMstpSrasWrflDnon_idleSteady01N", 0.22, "AidlPercMstpSrasWrflDnon_idleSteady02N", 0.22, "AidlPercMstpSrasWrflDnon_idleSteady03N", 0.22, "AidlPercMstpSrasWrflDnon_idleSteady04N"};
			variantAfter[] = {0, 0, 0};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon", 0.02, "AidlPercMstpSrasWrflDnon01", 0.01, "AidlPercMstpSrasWrflDnon02", 0.01, "AidlPercMstpSrasWrflDnon03", 0.01, "AidlPercMstpSrasWrflDnon04", 0.01, "AidlPercMstpSrasWrflDnon_i01", 0.01, "AidlPercMstpSrasWrflDnon_i02", 0.01, "AidlPercMstpSrasWrflDnon_i03", 0.01, "AidlPercMstpSrasWrflDnon_i04", 0.01, "AidlPercMstpSrasWrflDnon_i05", 0.01, "AidlPercMstpSrasWrflDnon_i06", 0.01, "AidlPercMstpSrasWrflDnon_i07", 0.01, "AidlPercMstpSrasWrflDnon_i08", 0.01, "AidlPercMstpSrasWrflDnon_i09", 0.01, "AidlPercMstpSrasWrflDnon_i10", 0.01, "AidlPercMstpSrasWrflDnon_i11", 0.01, "AidlPercMstpSrasWrflDnon_i12", 0.01, "AidlPercMstpSrasWrflDnon_i13", 0.01, "AidlPercMstpSrasWrflDnon_idleSteady01N", 0.01, "AidlPercMstpSrasWrflDnon_idleSteady02N", 0.01, "AidlPercMstpSrasWrflDnon_idleSteady03N", 0.01, "AidlPercMstpSrasWrflDnon_idleSteady04N", 0.01, "AidlPercMstpSrasWrflDnon05", 0.01, "AidlPercMstpSrasWrflDnon06", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSrasWrflDnon : AidlPercMstpSrasWrflDnon0S {
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AidlPercMstpSrasWrflDnon_SaluteIn", 0.02, "AidlPercMstpSrasWrflDnon0S", 0.01, "AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon", 0.01, "AidlPercMstpSrasWrflDnon_turnR", 0.02, "AidlPercMstpSrasWrflDnon_turnL", 0.02, "AidlPercMwlkSrasWrflDf", 0.02, "AidlPercMrunSrasWrflDf", 0.02, "AidlPercMevaSrasWrflDf", 0.02, "AidlPercMwlkSrasWrflDb", 0.02, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon01 : AidlPercMstpSrasWrflDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon01";
			speed = 0.18;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon02 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon02";
			speed = 0.2;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon03 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon03";
			speed = 0.24;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon04 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon04";
			speed = 0.37;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i01 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle01ZavrteniSe1";
			speed = 0.088757;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i02 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle02ohlednutiSe1";
			speed = 0.196078;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i03 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle03checkRifle1";
			speed = 0.285714;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i04 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle04checkRifle2";
			speed = 0.056818;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i05 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle05";
			speed = 0.073892;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i06 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle06Protahovani";
			speed = 0.120968;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i07 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle07";
			speed = 0.144928;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i08 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle08";
			speed = 0.215827;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i09 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle09";
			speed = 0.12766;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i10 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle10";
			speed = 0.087977;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i11 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle11";
			speed = 0.12;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i12 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle12ZavrteniSe2";
			speed = 0.153061;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_i13 : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle13ZavrteniSe3";
			speed = 0.108303;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady01N : AidlPercMstpSrasWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady01";
			speed = 0.134831;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady02N : AidlPercMstpSrasWrflDnon_idleSteady01N {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady02";
			speed = 0.085106;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady03N : AidlPercMstpSrasWrflDnon_idleSteady01N {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady03";
			speed = 0.114286;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady04N : AidlPercMstpSrasWrflDnon_idleSteady01N {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idleSteady04";
			speed = 0.151899;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper : CutSceneAnimationBase {
			speed = 0.0139;
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c4_scenecrashsite\ctshelicrashcooper.rtm";
			disableWeapons = 0;
			boundingSphere = 10;
			looped = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			canPullTrigger = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSrasWrflDnon05 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon06";
			speed = 0.91;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon0S : AmovPercMstpSlowWrflDnon {
			actions = "RifleLowStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\Erc\stp\low\rfl\AmovPercMstpSlowWrflDnon.rtm";
			equivalentTo = "AidlPercMstpSlowWrflDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPercMstpSlowWrflDnon0S", 0.09, "AidlPercMstpSlowWrflDnon01", 0.09, "AidlPercMstpSlowWrflDnon02", 0.085, "AidlPercMstpSlowWrflDnon03", 0.085, "AidlPercMstpSlowWrflDnon04", 0.09, "AidlPercMstpSlowWrflDnon05", 0.01, "AidlPercMstpSlowWrflDnon06", 0.01, "AidlPercMstpSlowWrflDnon_i01", 0.01, "AidlPercMstpSlowWrflDnon_i02", 0.01, "AidlPercMstpSlowWrflDnon_i03", 0.01, "AidlPercMstpSlowWrflDnon_i04", 0.01, "AidlPercMstpSlowWrflDnon_i05", 0.1, "AidlPercMstpSlowWrflDnon_i06", 0.005, "AidlPercMstpSlowWrflDnon_i07", 0.1, "AidlPercMstpSlowWrflDnon_i08", 0.01, "AidlPercMstpSlowWrflDnon_i09", 0.09, "AidlPercMstpSlowWrflDnon_i10", 0.09, "AidlPercMstpSlowWrflDnon_i11", 0.09, "AidlPercMstpSlowWrflDnon_i12", 0.005, "AidlPercMstpSlowWrflDnon_i13", 0.01};
			variantAfter[] = {1, 5, 10};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AidlPercMstpSrasWrflDnon0S", 0.01, "AidlPercMstpSrasWrflDnon", 0.01, "AidlPercMstpSlowWrflDnon01", 0.01, "AidlPercMstpSlowWrflDnon02", 0.01, "AidlPercMstpSlowWrflDnon03", 0.01, "AidlPercMstpSlowWrflDnon04", 0.01, "AidlPercMstpSlowWrflDnon_i01", 0.01, "AidlPercMstpSlowWrflDnon_i02", 0.01, "AidlPercMstpSlowWrflDnon_i03", 0.01, "AidlPercMstpSlowWrflDnon_i04", 0.01, "AidlPercMstpSlowWrflDnon_i05", 0.01, "AidlPercMstpSlowWrflDnon_i06", 0.01, "AidlPercMstpSlowWrflDnon_i07", 0.01, "AidlPercMstpSlowWrflDnon_i08", 0.01, "AidlPercMstpSlowWrflDnon_i09", 0.01, "AidlPercMstpSlowWrflDnon_i10", 0.01, "AidlPercMstpSlowWrflDnon_i11", 0.01, "AidlPercMstpSlowWrflDnon_i12", 0.01, "AidlPercMstpSlowWrflDnon_i13", 0.01, "AidlPercMstpSlowWrflDnon05", 0.01, "AidlPercMstpSlowWrflDnon06", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon01 : AidlPercMstpSlowWrflDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon01";
			speed = 0.18;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon02 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon02";
			speed = 0.2;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon03 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon03";
			speed = 0.24;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon04 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon04";
			speed = 0.37;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i01 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle01ZavrteniSe1";
			speed = 0.088757;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i02 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle02ohlednutiSe1";
			speed = 0.196078;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i03 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle03checkRifle1";
			speed = 0.285714;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i04 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle04checkRifle2";
			speed = 0.056818;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i05 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle05";
			speed = 0.073892;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i06 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle06Protahovani";
			speed = 0.120968;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i07 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle07";
			speed = 0.144928;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i08 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle08";
			speed = 0.215827;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i09 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle09";
			speed = 0.12766;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i10 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle10";
			speed = 0.087977;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i11 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle11";
			speed = 0.12;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i12 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle12ZavrteniSe2";
			speed = 0.153061;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon_i13 : AidlPercMstpSlowWrflDnon_i01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon_idle13ZavrteniSe3";
			speed = 0.108303;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSlowWrflDnon05 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon06";
			speed = 0.91;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class ActsPpneMstpWrflSlowDnon_sceneCrashSite_Ohara : ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper {
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c4_scenecrashsite\ctshelicrashohara.rtm";
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSlowWrflDnon06 : AidlPercMstpSlowWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon05";
			speed = 0.48;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon", 0.01, "AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class AidlPercMstpSrasWrflDnon06 : AidlPercMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\rfl\AidlPercMstpSlowWrflDnon05";
			speed = 0.48;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AdthPercMstpSrasWrflDnon_1", 0.01, "AdthPercMstpSrasWrflDnon_2", 0.01, "AdthPercMstpSrasWrflDnon_4", 0.01, "AdthPercMstpSrasWrflDnon_8", 0.01, "AdthPercMstpSlowWrflDnon_rS0", 0.01, "AdthPercMstpSlowWrflDnon_r05", 0.01, "AdthPercMstpSlowWrflDnon_r06", 0.01, "AdthPercMstpSlowWrflDnon_r07", 0.01, "AdthPercMstpSlowWrflDnon_r08", 0.01, "AdthPercMstpSlowWrflDnon_r09", 0.01, "AdthPercMstpSlowWrflDnon_r10", 0.01, "AdthPercMstpSlowWrflDnon_r12", 0.01, "AdthPercMstpSlowWrflDnon_r13", 0.01, "AidlPercMstpSrasWrflDnon", 0.02, "AdthPercMstpSrasWrflDnon_16", 0.01, "AdthPercMstpSrasWrflDnon_32", 0.01};
		};
		
		class ActsPpneMstpWrflSlowDnon_sceneCrashSite_Sykes : ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper {
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c4_scenecrashsite\ctshelicrashsykes.rtm";
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSrasWrflDnon0S : AmovPknlMstpSrasWrflDnon {
			equivalentTo = "AidlPknlMstpSrasWrflDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPknlMstpSrasWrflDnon0S", 0.7, "AidlPknlMstpSrasWrflDnon01", 0.1, "AidlPknlMstpSrasWrflDnon02", 0.1, "AidlPknlMstpSrasWrflDnon03", 0.1};
			variantAfter[] = {20, 40, 100};
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AidlPknlMstpSrasWrflDnon01", 0.01, "AidlPknlMstpSrasWrflDnon02", 0.01, "AidlPknlMstpSrasWrflDnon03", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class ActsPpneMstpWrflSlowDnon_sceneCrashSite_Rodriguez : ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper {
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c4_scenecrashsite\ctshelicrashrodriguez.rtm";
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSrasWrflDnon01 : AidlPknlMstpSrasWrflDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon01";
			speed = 0.28;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AidlPknlMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class ActsPknlMstpWunaSnonDnon_sceneCrashSite_Villager : ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper {
			speed = 0.0143;
			disableWeapons = 1;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c4_scenecrashsite\ctshelicrashvillager.rtm";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSrasWrflDnon02 : AidlPknlMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon02";
			speed = 0.25;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AidlPknlMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWrflDnon03 : AidlPknlMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\rfl\AidlPknlMstpSrasWrflDnon03";
			speed = 0.3;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AidlPknlMstpSrasWrflDnon0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1, "AdthPknlMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWrflDnon0S : AmovPpneMstpSrasWrflDnon {
			equivalentTo = "AidlPpneMstpSrasWrflDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPpneMstpSrasWrflDnon0S", 0.7, "AidlPpneMstpSrasWrflDnon01", 0.1, "AidlPpneMstpSrasWrflDnon02", 0.1, "AidlPpneMstpSrasWrflDnon03", 0.1};
			variantAfter[] = {20, 40, 100};
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWrflDnon01 : AidlPpneMstpSrasWrflDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\rfl\AidlPpneMstpSrasWrflDnon01";
			speed = 0.19;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWrflDnon02 : AidlPpneMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\rfl\AidlPpneMstpSrasWrflDnon02";
			speed = 0.27;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWrflDnon03 : AidlPpneMstpSrasWrflDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\rfl\AidlPpneMstpSrasWrflDnon03";
			speed = 0.19;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1, "AdthPpneMstpSrasWrflDnon_1", 0.01};
		};
		
		class AidlPercMstpSrasWpstDnon0S : AmovPercMstpSrasWpstDnon {
			equivalentTo = "AidlPercMstpSrasWpstDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPercMstpSrasWpstDnon0S", 0.0175, "AidlPercMstpSrasWpstDnon01", 0.01752, "AidlPercMstpSrasWpstDnon02", 0.0175, "AidlPercMstpSrasWpstDnon03", 0.0175, "AidlPercMstpSrasWpstDnon_idleSteady01", 0.31, "AidlPercMstpSrasWpstDnon_idleSteady02", 0.31, "AidlPercMstpSrasWpstDnon_idleSteady03", 0.31};
			variantAfter[] = {0, 0, 0};
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\pst\amovpercmstpslowwpstdnon.rtm";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.03, "AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon", 0.01, "AidlPercMstpSrasWpstDnon01", 0.02, "AidlPercMstpSrasWpstDnon_idleSteady01", 0.02, "AidlPercMstpSrasWpstDnon_idleSteady02", 0.02, "AidlPercMstpSrasWpstDnon_idleSteady03", 0.02, "AidlPercMstpSrasWpstDnon02", 0.02, "AidlPercMstpSrasWpstDnon03", 0.02};
			InterpolateTo[] = {"AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPercMstpSrasWpstDnon01 : AidlPercMstpSrasWpstDnon0S {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\pst\aidlpercmstpslowwpstdnon01.rtm";
			speed = 0.26;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady01 : AidlPercMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady01";
			speed = 0.105263;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02};
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady02 : AidlPercMstpSrasWpstDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady02";
			speed = 0.082192;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02};
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady03 : AidlPercMstpSrasWpstDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_idleSteady03";
			speed = 0.122449;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02};
		};
		
		class AidlPercMstpSrasWpstDnon02 : AidlPercMstpSrasWpstDnon01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\pst\aidlpercmstpslowwpstdnon02.rtm";
			speed = 0.16;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPercMstpSrasWpstDnon03 : AidlPercMstpSrasWpstDnon01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\pst\aidlpercmstpslowwpstdnon03.rtm";
			speed = 0.16;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon", 0.02, "AmovPercMstpSlowWpstDnon", 0.02, "AmovPercMwlkSrasWpstDf", 0.02, "AmovPercMrunSrasWpstDf", 0.02, "AdthPercMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWpstDnon0S : AmovPknlMstpSrasWpstDnon {
			equivalentTo = "AidlPknlMstpSrasWpstDnon01";
			variantsAI[] = {"AidlPknlMstpSrasWpstDnon0S", 0.0175, "AidlPknlMstpSrasWpstDnon01", 0.0175, "AidlPknlMstpSrasWpstDnon02", 0.0175, "AidlPknlMstpSrasWpstDnon03", 0.0175, "AidlPknlMstpSrasWpstDnon_idleSteady01", 0.31, "AidlPknlMstpSrasWpstDnon_idleSteady03", 0.31, "AidlPknlMstpSrasWpstDnon_idleSteady02", 0.31};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AidlPknlMstpSrasWpstDnon01", 0.02, "AidlPknlMstpSrasWpstDnon_idleSteady01", 0.02, "AidlPknlMstpSrasWpstDnon_idleSteady03", 0.02, "AidlPknlMstpSrasWpstDnon_idleSteady02", 0.02, "AidlPknlMstpSrasWpstDnon02", 0.02, "AidlPknlMstpSrasWpstDnon03", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWpstDnon01 : AidlPknlMstpSrasWpstDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon01";
			speed = 0.25;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady01 : AidlPknlMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady01";
			speed = 0.266667;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady03 : AidlPknlMstpSrasWpstDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady03";
			speed = 0.226415;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady02 : AidlPknlMstpSrasWpstDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_idleSteady02";
			speed = 0.244898;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWpstDnon02 : AidlPknlMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon02";
			speed = 0.3;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWpstDnon03 : AidlPknlMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon03";
			speed = 0.25;
			ConnectTo[] = {"AidlPknlMstpSrasWpstDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02, "AdthPknlMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWpstDnon0S : AmovPpneMstpSrasWpstDnon {
			equivalentTo = "AidlPpneMstpSrasWpstDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPpneMstpSrasWpstDnon0S", 0.7, "AidlPpneMstpSrasWpstDnon01", 0.1, "AidlPpneMstpSrasWpstDnon02", 0.1, "AidlPpneMstpSrasWpstDnon03", 0.1};
			variantAfter[] = {20, 40, 100};
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWpstDnon01 : AidlPpneMstpSrasWpstDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\pst\AidlPpneMstpSrasWpstDnon01";
			speed = 0.21;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWpstDnon02 : AidlPpneMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\pst\AidlPpneMstpSrasWpstDnon02";
			speed = 0.23;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPpneMstpSrasWpstDnon03 : AidlPpneMstpSrasWpstDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\ras\pst\AidlPpneMstpSrasWpstDnon03";
			speed = 0.21;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1, "AdthPpneMstpSrasWpstDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWlnrDnon0S : AmovPknlMstpSrasWlnrDnon {
			equivalentTo = "AidlPknlMstpSrasWlnrDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPknlMstpSrasWlnrDnon01", 0.0233, "AidlPknlMstpSrasWlnrDnon02", 0.0233, "AidlPknlMstpSrasWlnrDnon03", 0.0234, "AidlPknlMstpSrasWlnrDnon_idleSteady01", 0.31, "AidlPknlMstpSrasWlnrDnon_idleSteady02", 0.31, "AidlPknlMstpSrasWlnrDnon_idleSteady03", 0.31};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AidlPknlMstpSrasWlnrDnon01", 0.02, "AidlPknlMstpSrasWlnrDnon_idleSteady01", 0.02, "AidlPknlMstpSrasWlnrDnon_idleSteady02", 0.02, "AidlPknlMstpSrasWlnrDnon_idleSteady03", 0.02, "AidlPknlMstpSrasWlnrDnon02", 0.02, "AidlPknlMstpSrasWlnrDnon03", 0.02};
			InterpolateTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWlnrDnon01 : AidlPknlMstpSrasWlnrDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon01";
			speed = 0.31;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady01 : AidlPknlMstpSrasWlnrDnon01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon_idleSteady01";
			speed = 0.26667;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady02 : AidlPknlMstpSrasWlnrDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon_idleSteady02";
			speed = 0.210526;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady03 : AidlPknlMstpSrasWlnrDnon_idleSteady01 {
			speed = 0.292683;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSrasWlnrDnon02 : AidlPknlMstpSrasWlnrDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon02";
			speed = 0.39;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AidlPknlMstpSrasWlnrDnon03 : AidlPknlMstpSrasWlnrDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\ras\lnr\AidlPknlMstpSrasWlnrDnon03";
			speed = 0.16;
			ConnectTo[] = {"AidlPknlMstpSrasWlnrDnon0S", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02, "AdthPknlMstpSrasWlnrDnon_1", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_player : AidlPknlMstpSnonWnonDnon {
			variantsAI[] = {};
			variantsPlayer[] = {"AidlPknlMstpSnonWnonDnon_player_idleSteady03", 0.333, "AidlPknlMstpSnonWnonDnon_player_idleSteady02", 0.333, "AidlPknlMstpSnonWnonDnon_player_idleSteady01"};
			variantAfter[] = {0, 0, 0};
			headBobMode = 0;
			headBobStrength = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSnonWnonDnon_player_0S : AidlPknlMstpSnonWnonDnon_player {
			variantAfter[] = {1, 1, 1};
			limitGunMovement = 0.1;
			interpolationSpeed = 30;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon_player", 0.01, "AidlPknlMstpSnonWnonDnon_player_idleSteady01", 0.01, "AidlPknlMstpSnonWnonDnon_player_idleSteady02", 0.01, "AidlPknlMstpSnonWnonDnon_player_idleSteady03", 0.01};
			InterpolateTo[] = {};
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady01 : AidlPknlMstpSnonWnonDnon_player_0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady01";
			speed = 0.139535;
			looped = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady02 : AidlPknlMstpSnonWnonDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady02";
			speed = 0.064516;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady03 : AidlPknlMstpSnonWnonDnon_player_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady03";
			speed = 0.070588;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon_player_0S", 0.01};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01, "AidlPknlMstpSnonWnonDnon_player", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady01 : AidlPknlMstpSnonWnonDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady01";
			speed = 0.139535;
			interpolationSpeed = 30;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady02 : AidlPknlMstpSnonWnonDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady02";
			speed = 0.064516;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady03 : AidlPknlMstpSnonWnonDnon_idleSteady01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\knl\stp\non\non\AidlPknlMstpSnonWnonDnon_idleSteady03";
			speed = 0.070588;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon0S", 0.01};
			InterpolateTo[] = {"AidlPknlMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPpneMstpSnonWnonDnon0S : AmovPpneMstpSrasWpstDnon {
			equivalentTo = "AidlPpneMstpSnonWnonDnon01";
			variantsPlayer[] = {};
			variantsAI[] = {"AidlPpneMstpSnonWnonDnon0S", 0.7, "AidlPpneMstpSnonWnonDnon01", 0.1, "AidlPpneMstpSnonWnonDnon02", 0.1, "AidlPpneMstpSnonWnonDnon03", 0.1};
			variantAfter[] = {5, 10, 20};
			canPullTrigger = 0;
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon.rtm";
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AidlPpneMstpSnonWnonDnon01", 0.1, "AidlPpneMstpSnonWnonDnon02", 0.1, "AidlPpneMstpSnonWnonDnon03", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPpneMstpSnonWnonDnon01 : AidlPpneMstpSnonWnonDnon0S {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\non\non\AidlPpneMstpSnonWnonDnon01";
			speed = 0.34;
			looped = 0;
			variantAfter[] = {1, 1, 1};
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AidlPpneMstpSnonWnonDnon0S", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPpneMstpSnonWnonDnon02 : AidlPpneMstpSnonWnonDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\non\non\AidlPpneMstpSnonWnonDnon02";
			speed = 0.36;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AidlPpneMstpSnonWnonDnon0S", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AidlPpneMstpSnonWnonDnon03 : AidlPpneMstpSnonWnonDnon01 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\Idl\pne\stp\non\non\AidlPpneMstpSnonWnonDnon03";
			speed = 0.22;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AidlPpneMstpSnonWnonDnon0S", 0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1, "AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon";
			speed = 1.06;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			interpolationRestart = 2;
			leftHandIKCurve[] = {0.8, 1, 0.9, 0};
			rightHandIKCurve[] = {0.37, 1, 0.43, 0};
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon", 0.02};
		};
		
		class AinvPknlMstpSlayWrflDnon : AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			variantsAI[] = {};
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon";
			speed = 1e+010;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			limitGunMovement = 0.3;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon";
			speed = 1.06;
			looped = 0;
			interpolationRestart = 2;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			leftHandIKCurve[] = {0.1, 0, 0.2, 1};
			rightHandIKCurve[] = {0.57, 0, 0.63, 1};
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon", 0.02};
		};
		
		class AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon : AmovPknlMstpSrasWrflDnon {
			actions = "RifleKneelTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon";
			speed = 1.3;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			interpolationRestart = 2;
			leftHandIKCurve[] = {0.8, 1, 0.9, 0};
			rightHandIKCurve[] = {0.37, 1, 0.43, 0};
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSlayWrflDnon_medic", 0.1, "AinvPknlMstpSlayWrflDnon_healed", 0.1, "AinvPknlMstpSlayWrflDnon_healed2", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02};
		};
		
		class AinvPknlMstpSlayWrflDnon_1 : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon";
			speed = 1e+010;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSlayWrflDnon_medic : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			aiming = "empty";
			aimingBody = "empty";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_medic";
			speed = 0.17;
			limitGunMovement = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSlayWrflDnon_healed : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_healed1";
			speed = 0.17;
			variantsPlayer[] = {"AinvPknlMstpSlayWrflDnon_healed", 0.5, "AinvPknlMstpSlayWrflDnon_healed2", 0.5};
			equivalentTo = "AinvPknlMstpSlayWrflDnon_healed";
			variantsAI[] = {""};
			variantAfter[] = {0, 0, 0};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSlayWrflDnon_healed2 : AinvPknlMstpSlayWrflDnon_healed {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_healed2";
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon {
			actions = "RifleKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon";
			speed = 1.3;
			looped = 0;
			interpolationRestart = 2;
			leftHandIKCurve[] = {0.1, 0, 0.2, 1};
			rightHandIKCurve[] = {0.57, 0, 0.63, 1};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSlayWrflDnon_inventory", 0.01, "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon", 0.02};
		};
		
		class AmovPpneMstpSrasWrflDnon_healed : AmovPpneMstpSrasWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\rfl\AmovPpneMstpSrasWrflDnon_healed";
			speed = 0.17;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon", 0.02};
		};
		
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon : AmovPercMstpSrasWpstDnon {
			actions = "PistolStandTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.8;
			disableWeapons = 1;
			enableOptics = 2;
			looped = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon.rtm";
			disableWeapons = 1;
			actions = "PistolStandActions";
			speed = 0.5;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			rightHandIKCurve[] = {0.6, 1, 0.65, 0};
			leftHandIKCurve[] = {0.1, 1, 0.15, 0};
			weaponIK = 4;
			enableOptics = 2;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end", 0.02};
		};
		
		class AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic : HealBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic";
			speed = 0.5;
			actions = "HealActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			forceAim = 1;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end";
			speed = 1.15;
			disableWeapons = 1;
			enableOptics = 2;
			showHandGun = 0;
			looped = 0;
			limitGunMovement = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_1", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_1 : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon";
			speed = 1e+010;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon", 0.01};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic", 0.02, "AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AdthPknlMstpSnonWnonDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon", 0.02, "AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.01, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.04;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			enableOptics = 2;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.97;
			showHandgun = 1;
			looped = 0;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon : AmovPknlMstpSrasWpstDnon {
			actions = "PistolKneelTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.57;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end";
			speed = 1.15;
			showHandGun = 0;
			looped = 0;
			limitGunMovement = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_2", 0.01, "AinvPknlMstpSnonWnonDnon_medic_1", 0.02, "AinvPknlMstpSnonWnonDnon_healed_1", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_2 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon";
			speed = 1e+010;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon", 0.01};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic", 0.02, "AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AdthPknlMstpSnonWnonDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon", 0.02, "AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic_1 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_medic";
			speed = 0.17;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_healed_1 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_healed1";
			speed = 0.17;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon";
			speed = 1.15;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			enableOptics = 2;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end", 0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end {
			actions = "PistolKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 1.97;
			showHandgun = 1;
			looped = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AmovPpneMstpSrasWpstDnon_healed : AmovPpneMstpSrasWpstDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\ras\pst\AmovPpneMstpSrasWpstDnon_healed";
			speed = 0.17;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon", 0.02};
		};
		
		class AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon {
			actions = "CivilStandTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.54;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			limitGunMovement = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPsitMstpSnonWrflDnon_varSittingSleeping01", 0.01, "ActsPsitMstpSnonWnonDnon_varSittingDrinking", 0.01, "ActsPsitMstpSnonWrflDnon_varSittingSleeping02", 0.01, "AinvPknlMstpSnonWnonDnon_3", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_3 : AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon";
			speed = 1e+010;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic", 0.02, "AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AdthPknlMstpSnonWnonDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon", 0.02, "AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon";
			speed = 1.54;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon {
			actions = "CivilKneelTakeActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.75;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			limitGunMovement = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_4", 0.02, "AinvPknlMstpSnonWnonDnon_medic_2", 0.1, "AinvPknlMstpSnonWnonDnon_healed_2", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_4 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon";
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic", 0.02, "AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic", 0.02, "AdthPknlMstpSnonWnonDnon_inventory", 0.01, "AinvPknlMstpSlayWrflDnon", 0.02, "AinvPknlMstpSlayWrflDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_1", 0.02, "AinvPknlMstpSnonWnonDnon_2", 0.02, "AinvPknlMstpSnonWnonDnon_3", 0.02, "AinvPknlMstpSnonWnonDnon_4", 0.02};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic_2 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_medic";
			speed = 0.17;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic : HealBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medicS0";
			speed = 1000000;
			limitGunMovement = 0;
			looped = 1;
			actions = "HealActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			forceAim = 1;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medicEnd", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AinvPknlMstpSnonWnonDnon_medic0", 0.1, "AinvPknlMstpSnonWnonDnon_medic1", 0.1, "AinvPknlMstpSnonWnonDnon_medic2", 0.1, "AinvPknlMstpSnonWnonDnon_medic3", 0.1, "AinvPknlMstpSnonWnonDr_medic3", 0.1, "AinvPknlMstpSnonWnonDr_medic4", 0.1, "AinvPknlMstpSnonWnonDr_medic5", 0.1, "AinvPknlMstpSnonWnonDnon_medic4", 0.1, "AinvPknlMstpSnonWnonDnon_medic5", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AinvPknlMstpSnonWnonDr_medic0", 0.1, "AinvPknlMstpSnonWnonDr_medic1", 0.1, "AinvPknlMstpSnonWnonDr_medic2", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_healed_2 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_healed2";
			speed = 0.17;
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSlayWrflDnon_AmovPknlMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon {
			actions = "CivilKneelActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon";
			speed = 1.75;
			looped = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_inventory", 0.01};
		};
		
		class AmovPpneMstpSnonWnonDnon_healed : AmovPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon_healed";
			speed = 0.17;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow : AmovPercMstpSrasWrflDnon {
			variantsAI[] = {};
			actions = "RifleStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_GetOutLow";
			speed = 1.9;
			looped = 0;
			soundOverride = "walk";
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_GetOutMedium";
			speed = 1.333;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_GetOutHigh";
			speed = 0.915;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow : AmovPercMstpSrasWpstDnon {
			actions = "PistolStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutLow";
			speed = 1.9;
			looped = 0;
			soundOverride = "walk";
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutMedium";
			speed = 1.333;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutHigh";
			speed = 0.915;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow : AmovPercMstpSnonWnonDnon {
			actions = "CivilStandActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_GetInLow";
			speed = 2;
			looped = 0;
			soundOverride = "walk";
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			leaningFactorBeg = 1;
			leaningFactorEnd = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_GetInMedium";
			speed = 0.8333;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_GetInHigh";
			speed = 0.8333;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_GetOutLow";
			speed = 1.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_GetOutMedium";
			speed = 1.666;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow {
			file = "\ca\Anims\Characters\data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_GetOutHigh";
			speed = 0.915;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWrflDnon : AmovPpneMstpSrasWrflDnon_injured {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon";
			speed = 1e+010;
			disableWeapons = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			actions = "InjuredManActionsRfl_norot";
			showWeaponAim = 0;
			aiming = "empty";
			aimingBody = "empty";
			interpolationSpeed = 2;
			canPullTrigger = 0;
			headBobMode = 1;
			headBobStrength = -1;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon_injuredHealed", 0.2, "AinjPpneMstpSnonWrflDnon_rolltofront", 0.1, "AdthPpneMstpSnonWnonDnonB", 0.01, "AinjPfalMstpSnonWrflDnon_carried_Up", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnonB", 0.01, "AinjPpneMstpSnonWrflDb_grab", 0.1};
		};
		
		class AinjPpneMstpSnonWrflDnon_injuredHealed : AinjPpneMstpSnonWrflDnon {
			actions = "InjuredManActionsRfl_healed";
			duty = CrawlDuty;
			speed = 1e+010;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.2};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWrflDnon_rolltoback : AinjPpneMstpSnonWrflDnon {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWrflDnon_rolltoback";
			speed = 0.3;
			disableWeapons = 1;
			interpolationRestart = 2;
			duty = SprintDuty;
			canPullTrigger = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWrflDnon_rolltofront", 0.1, "AinjPpneMstpSnonWrflDb_grab", 0.1};
		};
		
		class AinjPpneMstpSnonWrflDnon_rolltofront : AinjPpneMstpSnonWrflDnon_rolltoback {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWrflDnon_rolltofront";
			actions = "InjuredManActionsRfl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWrflDnon_rolltoback", 0.1};
		};
		
		class AinjPpneMstpSnonWnonDnon_kneel : AinjPpneMstpSnonWrflDnon {
			actions = "RifleKneelActions";
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon_kneel";
			speed = 0.4;
			disableWeapons = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSrasWrflDnon", 0.02, "AmovPknlMstpSnonWnonDnon", 0.02};
		};
		
		class AdthPpneMstpSnonWnonDnonB : AinjPpneMstpSnonWrflDnon {
			canPullTrigger = 0;
			looped = 0;
			terminal = 1;
			onLandEnd = 1;
			onLandBeg = 0;
			enableDirectControl = 0;
			soundOverride = "bodyfall";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon_death";
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPpneMstpSnonWrflDbB_dragged : AdthPpneMstpSnonWnonDnonB {
			actions = "InjuredManDraggedDeadActions";
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\AinjPpneMstpSnonWnonDb_dragged";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWrflDb : AinjPpneMstpSnonWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb";
			speed = 1;
			actions = "InjuredManDraggedActionsRfl";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			headBobMode = 1;
			headBobStrength = -1;
			ConnectTo[] = {"AdthPpneMstpSnonWrflDbB_dragged", 0.5, "AinjPpneMstpSnonWrflDb_release", 0.1, "AinjPpneMstpSnonWrflDb_still", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSnonWrflDbB_dragged", 0.5, "AinjPpneMstpSnonWrflDb_release", 0.1, "AinjPpneMstpSnonWrflDb_still", 0.1};
		};
		class AinvPknlMstpSnonWnonDnon_medicEnd : AinvPknlMstpSnonWnonDnon_medic {
			actions = "HealActionsNon";
			speed = 0.5;
			file = "\ca\anims\characters\data\anim\sdr\inj\healing\ainvpknlmstpsnonwnondnon_medic_ainvpknlmstpsnonwnondnon";
			looped = 0;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon", 0.1, "AdthPknlMstpSnonWnonDnon_1", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.01, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};

		class AinvPknlMstpSnonWnonDnon_medic0S : AinvPknlMstpSnonWnonDnon_medic {
			VariantAfter[] = {5, 5, 5};
			variantsPlayer[] = {"AinvPknlMstpSnonWnonDnon_medic0", 0.15, "AinvPknlMstpSnonWnonDnon_medic1", 0.15, "AinvPknlMstpSnonWnonDnon_medic2", 0.15, "AinvPknlMstpSnonWnonDnon_medic3", 0.15, "AinvPknlMstpSnonWnonDnon_medic4", 0.15, "AinvPknlMstpSnonWnonDnon_medic5", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.15};
			equivalentTo = "AinvPknlMstpSnonWnonDnon_medic0";
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.01, "AinvPknlMstpSnonWnonDnon_medic0", 0.01, "AinvPknlMstpSnonWnonDnon_medic1", 0.01, "AinvPknlMstpSnonWnonDnon_medic2", 0.01, "AinvPknlMstpSnonWnonDnon_medic3", 0.01, "AinvPknlMstpSnonWnonDnon_medic4", 0.01, "AinvPknlMstpSnonWnonDnon_medic5", 0.01};
			InterpolateTo[] = {};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic0 : HealBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic0";
			speed = 0.4;
			aiming = "empty";
			aimingBody = "empty";
			enableDirectControl = 0;
			variantsPlayer[] = {"AinvPknlMstpSnonWnonDnon_medic0", 0.166666, "AinvPknlMstpSnonWnonDnon_medic1", 0.166666, "AinvPknlMstpSnonWnonDnon_medic2", 0.166666, "AinvPknlMstpSnonWnonDnon_medic3", 0.166666, "AinvPknlMstpSnonWnonDnon_medic4", 0.166666, "AinvPknlMstpSnonWnonDnon_medic5", 0.166666};
			equivalentTo = "AinvPknlMstpSnonWnonDnon_medic0";
			actions = "HealActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic1 : AinvPknlMstpSnonWnonDnon_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic1";
			speed = 0.26;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic2 : AinvPknlMstpSnonWnonDnon_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic2";
			speed = 0.19;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic3 : AinvPknlMstpSnonWnonDnon_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic3";
			speed = 0.2;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic3 : AinvPknlMstpSnonWnonDnon_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic3";
			speed = 0.13;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic4 : HealBase {
			actions = "HealActionsNon";
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic4";
			speed = 0.22;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic5 : HealBase {
			actions = "HealActionsNon";
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic5";
			speed = 0.11;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic4 : HealBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic4";
			speed = 0.13;
			actions = "HealActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDnon_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDnon_medic5 : HealBase {
			actions = "HealActionsNon";
			speed = 0.43;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDnon_medic5";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic0S : AinvPknlMstpSnonWnonDnon_medic {
			variantsPlayer[] = {"AinvPknlMstpSnonWnonDnon_medic0", 0.075, "AinvPknlMstpSnonWnonDnon_medic1", 0.075, "AinvPknlMstpSnonWnonDnon_medic2", 0.075, "AinvPknlMstpSnonWnonDnon_medic3", 0.075, "AinvPknlMstpSnonWnonDnon_medic4", 0.075, "AinvPknlMstpSnonWnonDnon_medic5", 0.075, "AinvPknlMstpSnonWnonDr_medic0", 0.075, "AinvPknlMstpSnonWnonDr_medic1", 0.075, "AinvPknlMstpSnonWnonDr_medic2", 0.075, "AinvPknlMstpSnonWnonDr_medic3", 0.075, "AinvPknlMstpSnonWnonDr_medic4", 0.075, "AinvPknlMstpSnonWnonDr_medic5", 0.075, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			VariantAfter[] = {5, 5, 5};
			actions = "HealActionsNonDr";
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.01, "AinvPknlMstpSnonWnonDr_medic3", 0.01, "AinvPknlMstpSnonWnonDr_medic4", 0.01, "AinvPknlMstpSnonWnonDr_medic5", 0.01, "AinvPknlMstpSnonWnonDr_medic0", 0.01, "AinvPknlMstpSnonWnonDr_medic1", 0.01, "AinvPknlMstpSnonWnonDr_medic2", 0.01};
			InterpolateTo[] = {};
		};
		
		class AinvPknlMstpSnonWnonDr_medic0 : HealBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic0";
			speed = 0.11;
			equivalentTo = "AinvPknlMstpSnonWnonDr_medic0";
			actions = "HealActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic1 : AinvPknlMstpSnonWnonDr_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic1";
			speed = 0.21;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWnonDr_medic2 : AinvPknlMstpSnonWnonDr_medic0 {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWnonDr_medic2";
			speed = 0.13;
			actions = "HealActionsNon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.1, "AinvPknlMstpSnonWnonDr_medic0S", 0.1, "AdthPknlMstpSnonWnonDnon_inventory", 0.1, "AdthPknlMstpSnonWnonDnon_inventoryAgony", 0.1};
		};
		class AinjPpneMstpSnonWrflDb_grab : AinjPpneMstpSnonWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_grab";
			speed = 1;
			looped = 0;
			actions = "InjuredManDraggedActionsRfl";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			interpolationSpeed = 0.85;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDb_still", 0.1, "AinjPfalMstpSnonWrflDnon_carried_Up", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWrflDb_release", 0.02, "AinjPpneMstpSnonWrflDb_still", 0.1, "AinjPfalMstpSnonWrflDnon_carried_Up", 0.1};
		};
		
		class AinjPpneMstpSnonWrflDb_release : AinjPpneMstpSnonWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_release";
			speed = 1;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWrflDb_death : AinjPpneMstpSnonWrflDb_release {
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWrflDb_still : AinjPpneMstpSnonWrflDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_still";
			speed = 1e+010;
			actions = "InjuredManDraggedActionsRfl";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AdthPpneMstpSnonWrflDbB_dragged", 0.5, "AinjPpneMstpSnonWrflDb", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWrflDbB_dragged", 0.5, "AinjPpneMstpSnonWrflDb_release", 0.1};
		};
		
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 : Default {
			actions = "MoveWithInjuredManDraggerRfl";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1";
			speed = 1;
			looped = 0;
			disableWeapons = 1;
			aiming = "empty";
			aimingBody = "empty";
			duty = CrawlDuty;
			interpolationSpeed = 10.05;
			showWeaponAim = 0;
			canPullTrigger = 0;
			limitGunMovement = 0;
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2", 0.02};
			InterpolateTo[] = {"AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon", 0.2, "AcinPknlMwlkSlowWrflDb_death", 0.2, "AcinPknlMwlkSlowWrflDb_agony", 0.1};
		};
		
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2 : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
			speed = 1;
			looped = 0;
			actions = "MoveWithInjuredManDraggerRfl";
			ConnectTo[] = {"AcinPknlMstpSrasWrflDnon", 0.02, "AcinPknlMwlkSrasWrflDb", 0.02};
			InterpolateTo[] = {"AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon", 0.2, "AcinPknlMwlkSlowWrflDb_agony", 0.1, "AcinPknlMwlkSlowWrflDb_death2", 0.2};
		};
		
		class AcinPknlMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSlowWrflDb_still";
			speed = 1e+010;
			looped = 1;
			duty = WalkDuty;
			interpolationSpeed = 6.05;
			canPullTrigger = 1;
			disableWeapons = 0;
			enableOptics = 0;
			ConnectTo[] = {"AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon", 0.15, "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1, "AcinPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.1, "AcinPknlMwlkSrasWrflDb", 0.1};
			InterpolateTo[] = {"AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon", 0.15, "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1, "AcinPknlMwlkSrasWrflDb", 0.1, "AcinPknlMwlkSlowWrflDb_death", 0.2, "AcinPknlMwlkSlowWrflDb_agony", 0.1, "Helper_SwitchToCarryRfl", 0.1, "AcinPknlMwlkSlowWrflDb_death2", 0.2};
		};
		
		class DraggerBase : Default {
			actions = "MoveWithInjuredManDragger";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1";
			speed = 1;
			looped = 0;
			disableWeapons = 1;
			aiming = "empty";
			aimingBody = "empty";
			duty = CrawlDuty;
			interpolationSpeed = 1;
			showWeaponAim = 0;
			canPullTrigger = 0;
			limitGunMovement = 0;
			headBobMode = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class DraggerBaseRfl : DraggerBase {
			actions = "MoveWithInjuredManDraggerRfl";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
			actions = "MoveWithInjuredManDraggerRfl";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon";
			speed = 1;
			looped = 0;
			duty = RunDuty;
			interpolationSpeed = 1;
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.15};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.15, "AmovPercMstpSlowWrflDnon", 0.1};
		};
		
		class AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : DraggerBaseRfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			speed = 0.55;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPknlMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.15};
		};
		
		class AcinPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : DraggerBaseRfl {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon";
			speed = 0.38;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.15};
		};
		
		class AcinPknlMwlkSrasWrflDb : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
			actions = "MoveWithInjuredManDraggerRfl";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSlowWrflDb";
			speed = 1;
			looped = 1;
			duty = WalkDuty;
			interpolationSpeed = 4.1;
			disableWeapons = 0;
			canPullTrigger = 1;
			enableOptics = 0;
			ConnectTo[] = {"AcinPknlMstpSrasWrflDnon", 0.1, "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1, "AcinPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AcinPknlMstpSrasWrflDnon", 0.1, "AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon", 0.1, "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon", 0.1, "AcinPknlMwlkSlowWrflDb_death", 0.2, "AcinPknlMwlkSlowWrflDb_agony", 0.1, "AcinPknlMwlkSlowWrflDb_death2", 0.2};
		};
		
		class AcinPknlMwlkSlowWrflDb_death : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSlowWrflDb_death";
			speed = 1;
			looped = 0;
			terminal = 1;
			interpolationSpeed = 1;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSlowWrflDb_agony : AmovPpneMstpSrasWrflDnon_injured {
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
		};
		
		class AcinPercMrunSrasWrflDf : InjuredMovedBase {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-carrier";
			actions = "MoveWithInjuredManCarrierRflWc";
			limitGunMovement = 0;
			//aimPrecision = 5;
			enableOptics = 0;
			visibleSize = 0.750126;
			relSpeedMin = 1;
			duty = WalkDuty;
			onLadder = 0;
			speed = 0.9;
			ConnectTo[] = {"AcinPercMrunSrasWrflDf_death", 0.1, "AcinPercMrunSrasWrflDf_agony", 0.1, "AcinPercMstpSrasWrflDnon", 0.1, "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_carrier", 0.01, "AcinPercMstpSrasWrflDnon", 0.1};
		};
		
		class AcinPercMrunSrasWrflDf_death : AcinPercMrunSrasWrflDf {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-dead-carrier";
			terminal = 1;
			speed = 0.22;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AcinPercMrunSrasWrflDf_agony : AcinPercMrunSrasWrflDf_death {
			looped = 0;
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-dead-carrier";
			duty = SprintDuty;
			speed = 0.22;
			terminal = 0;
			onLandBeg = 0;
			onLandEnd = 1;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon : InjuredMovedBase {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon";
			speed = 0.1;
			actions = "MoveWithInjuredManCarrierRfl";
			limitGunMovement = 0;
			enableOptics = 0;
			duty = SprintDuty;
			canPullTrigger = 0;
			showWeaponAim = 0;
			interpolationSpeed = 6.05;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			forceAim = 1;
			ConnectTo[] = {"AcinPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_carrier", 0.01};
		};
		
		class Helper_SwitchToCarryRfl : AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon {
			speed = 1e+010;
			looped = 1;
			actions = "MoveWithInjuredMan_helperRfl";
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\AcinPknlMstpSrasWrflDnon_Helper";
			forceAim = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon", 0.1};
		};
		
		class AcinPercMstpSrasWrflDnon : AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon {
			looped = 1;
			speed = 1e+010;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarryrfl-wc-carrier";
			limitGunMovement = 0;
			//aimPrecision = 5;
			visibleSize = 0;
			duty = RunDuty;
			actions = "MoveWithInjuredManCarrierRfl";
			canPullTrigger = 1;
			forceAim = 0;
			ConnectTo[] = {"AcinPercMrunSrasWrflDf", 0.2, "AcinPercMstpSrasWrflDnon_agony", 0.1, "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_carrier", 0.01, "AdthPercMstpSlowWrflDf_carrier", 0.01, "AcinPercMrunSrasWrflDf", 0.2};
		};
		
		class AcinPercMstpSrasWrflDnon_agony : AcinPercMstpSrasWrflDnon {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-dead-carrier";
			speed = 0.21;
			looped = 0;
			onLandEnd = 1;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon : InjuredMovedBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarryrfl_down-carrier";
			speed = 0.3;
			actions = "RifleLowStandActions";
			looped = 0;
			canPullTrigger = 0;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSlowWrflDb_death2 : AcinPknlMwlkSlowWrflDb_death {
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_Up : AgonyBaseRfl {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\AinjPfalMstpSnonWunaDnon_carried_Up";
			speed = 0.1;
			actions = "InjuredManCarriedActionsRfl";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			interpolationSpeed = 0.1;
			canPullTrigger = 0;
			disableWeapons = 1;
			onLandBeg = 1;
			collisionShapeSafe = "";
			ConnectTo[] = {"AinjPfalMstpSnonWrflDnon_carried_still", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDnon_AmovPpneMstpSrasWrflDnon_injured : AinjPfalMstpSnonWrflDnon_carried_Up {
			speed = 0.2;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarryrfl-dead-carried";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_still : AinjPfalMstpSnonWrflDnon_carried_Up {
			soundEdge[] = {};
			speed = 100;
			looped = 1;
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-carried";
			duty = CrawlDuty;
			onLandBeg = 0;
			limitGunMovement = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPfalMstpSnonWrflDf_carried", 0.1, "AinjPfalMstpSnonWrflDnon_carried_Down", 0.2};
			InterpolateTo[] = {"AinjPfalMstpSnonWrflDf_carried", 0.1, "AinjPfalMstpSnonWrflDf_carried_fallwc", 0.1, "AinjPfalMstpSnonWrflDf_carried_fall", 0.1};
		};
		
		class AinjPfalMstpSnonWrflDf_carried : AinjPfalMstpSnonWrflDnon_carried_Up {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-carried";
			looped = 1;
			speed = 1.36;
			onLandBeg = 0;
			limitGunMovement = 0;
			actions = "InjuredManCarriedActionsRflWc";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPfalMstpSnonWrflDnon_carried_still", 0.1, "AinjPfalMstpSnonWrflDf_carried_dead", 0.1};
			InterpolateTo[] = {"AinjPfalMstpSnonWrflDnon_carried_still", 0.1, "AinjPfalMstpSnonWrflDf_carried_fallwc", 0.1, "AinjPfalMstpSnonWrflDf_carried_fall", 0.1, "AinjPfalMstpSnonWrflDf_carried_dead", 0.1};
		};
		
		class AinjPfalMstpSnonWrflDf_carried_fallwc : AinjPfalMstpSnonWrflDf_carried {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-wc-dead-carried";
			speed = 0.22;
			looped = 0;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDf_carried_fall : AinjPfalMstpSnonWrflDf_carried_fallwc {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarryrfl-dead-carried";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDf_carried_dead : AinjPfalMstpSnonWrflDf_carried {
			speed = 0.21;
			terminal = 1;
			actions = "InjuredManCarriedActionsRfl";
			canPullTrigger = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_Down : AgonyBase {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarryrfl_down-carried";
			speed = 0.3;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			onLandEnd = 1;
			collisionShapeSafe = "";
			actions = "InjuredManActionsRfl";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMstpSnonWnonDnon_injured : AgonyBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			collisionShapeSafe = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			showWeaponAim = 1;
			disableWeapons = 0;
			visibleSize = 0.100126;
			//aimPrecision = 2;
			aiming = "aimingLying";
			aimingBody = "aimingUpLying";
			leaning = "aimingLying";
			legs = "legsLyingAiming";
			interpolationSpeed = 2;
			soundOverride = "crawl";
			canPullTrigger = 0;
			speed = 1e+010;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.5, "AinjPpneMstpSnonWnonDnon_rolltoback", 0.02};
			InterpolateTo[] = {"AmovPpneMsprSnonWnonDf_injured", 0.1};
		};
		
		class AmovPpneMstpSnonWpstDnon_injured : AmovPpneMstpSnonWnonDnon_injured {
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.5};
			InterpolateTo[] = {};
		};
		
		class AmovPpneMsprSnonWnonDf_injured : AmovPpneMstpSnonWnonDnon_injured {
			actions = "InjuredManActionsnon";
			speed = 0.2;
			showWeaponAim = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\mov\pne\spr\non\non\AmovPpneMsprSnonWnonDf";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			limitGunMovement = 0;
			soundOverride = "crawl";
			duty = SprintDuty;
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
		};
		
		class AdthPercMstpSnonWnonDnon_carrier : DefaultDie {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarrynon-dead-carrier";
			looped = 0;
			terminal = 1;
			canPullTrigger = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			actions = "DeadActions";
			speed = 0.2;
			disableWeaponsLong = 1;
			onLandEnd = 1;
			soundOverride = "bodyfall";
			headBobMode = 2;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWpstDnon_carrier : AdthPercMstpSnonWnonDnon_carrier {
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWnonDf_carrier : AdthPercMstpSnonWnonDnon_carrier {
			speed = 0.21;
			terminal = 1;
			onLandEnd = 1;
			canPullTrigger = 0;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSnonWpstDf_carrier : AdthPercMstpSnonWnonDf_carrier {
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWnonDnon : AmovPpneMstpSnonWnonDnon_injured {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon";
			speed = 1e+010;
			disableWeapons = 1;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			actions = "InjuredManActionsnon_norot";
			showWeaponAim = 0;
			aiming = "empty";
			aimingBody = "empty";
			interpolationSpeed = 0.5;
			canPullTrigger = 0;
			ConnectTo[] = {"AdthPpneMstpSnonWnonDnonB", 0.01, "AinjPpneMstpSnonWnonDnon_injuredHealed", 0.2, "AinjPpneMstpSnonWnonDnon_rolltofront", 0.1, "AinjPfalMstpSnonWnonDnon_carried_Up", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnonB", 0.01, "AinjPpneMstpSnonWnonDb_grab", 0.1};
		};
		
		class AinjPpneMstpSnonWnonDnon_injuredHealed : AinjPpneMstpSnonWnonDnon {
			actions = "InjuredManActionsnon_healed";
			duty = CrawlDuty;
			speed = 10000000;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.2};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWnonDnon_rolltoback : AinjPpneMstpSnonWnonDnon {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon_rolltoback";
			speed = 0.3;
			disableWeapons = 1;
			interpolationRestart = 2;
			duty = SprintDuty;
			canPullTrigger = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Ppne.p3d";
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWnonDnon_rolltofront", 0.1, "AinjPpneMstpSnonWnonDb_grab", 0.1};
		};
		
		class AinjPpneMstpSnonWnonDnon_rolltofront : AinjPpneMstpSnonWnonDnon_rolltoback {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDnon_rolltofront";
			actions = "InjuredManActionsnon";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWnonDnon_rolltoback", 0.1};
		};
		
		class AdthPpneMstpSnonWnonDbB_dragged : AdthPpneMstpSnonWnonDnonB {
			actions = "InjuredManDraggedDeadActions";
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\AinjPpneMstpSnonWnonDb_dragged";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWnonDb : AinjPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb";
			speed = 1;
			actions = "InjuredManDraggedActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AdthPpneMstpSnonWnonDbB_dragged", 0.51, "AinjPpneMstpSnonWnonDb_release", 0.1, "AinjPpneMstpSnonWnonDb_still", 0.1};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDbB_dragged", 0.5, "AinjPpneMstpSnonWnonDb_release", 0.1, "AinjPpneMstpSnonWnonDb_still", 0.1};
		};
		
		class AinjPpneMstpSnonWnonDb_grab : AinjPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_grab";
			speed = 1;
			looped = 0;
			actions = "InjuredManDraggedActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			interpolationSpeed = 0.85;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDb_still", 0.1, "AinjPfalMstpSnonWnonDnon_carried_Up", 0.1};
			InterpolateTo[] = {"AinjPpneMstpSnonWnonDb_release", 0.02, "AinjPpneMstpSnonWnonDb_still", 0.1, "AinjPfalMstpSnonWnonDnon_carried_Up", 0.1};
		};
		
		class AinjPpneMstpSnonWnonDb_release : AinjPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_release";
			speed = 1;
			looped = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWnonDb_death : AinjPpneMstpSnonWnonDb_release {
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_Adth.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AinjPpneMstpSnonWnonDb_still : AinjPpneMstpSnonWnonDnon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AinjPpneMstpSnonWnonDb_still";
			speed = 1e+010;
			actions = "InjuredManDraggedActionsNon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AdthPpneMstpSnonWnonDbB_dragged", 0.01, "AinjPpneMstpSnonWnonDb", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDbB_dragged", 0.01, "AinjPpneMstpSnonWnonDb_release", 0.1};
		};
		
		class AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 : Default {
			actions = "MoveWithInjuredManDraggerNon";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1";
			speed = 1;
			looped = 0;
			disableWeapons = 1;
			aiming = "empty";
			aimingBody = "empty";
			duty = CrawlDuty;
			interpolationSpeed = 10.05;
			showWeaponAim = 0;
			canPullTrigger = 0;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			enableOptics = 0;
			enableDirectControl = 0;
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2", 0.02};
			InterpolateTo[] = {"AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon", 0.2, "AcinPknlMwlkSnonWnonDb_death", 0.2, "AcinPknlMwlkSnonWnonDb_agony", 0.2};
		};
		
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 {
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2", 0.02};
			InterpolateTo[] = {"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon", 0.2, "AcinPknlMwlkSnonWpstDb_death", 0.2, "AcinPknlMwlkSnonWpstDb_agony", 0.2};
		};
		
		class AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			speed = 1;
			looped = 0;
			enableDirectControl = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AcinPknlMstpSnonWnonDnon", 0.01, "AcinPknlMwlkSnonWnonDb", 0.01};
			InterpolateTo[] = {"AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon", 0.2, "AcinPknlMwlkSnonWnonDb_death", 0.2, "AcinPknlMwlkSnonWnonDb_agony", 0.2};
		};
		
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2 {
			ConnectTo[] = {"AcinPknlMstpSnonWpstDnon", 0.01, "AcinPknlMwlkSnonWpstDb", 0.01};
			InterpolateTo[] = {"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon", 0.2, "AcinPknlMwlkSnonWpstDb_death", 0.2, "AcinPknlMwlkSnonWpstDb_agony", 0.2};
		};
		
		class AcinPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSnonWnonDb_still";
			speed = 1e+010;
			looped = 1;
			duty = WalkDuty;
			interpolationSpeed = 6.05;
			enableOptics = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon", 0.15, "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.1, "AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.1, "AcinPknlMwlkSnonWnonDb", 0.1};
			InterpolateTo[] = {"AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon", 0.15, "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.1, "AcinPknlMwlkSnonWnonDb", 0.1, "AcinPknlMwlkSnonWnonDb_death", 0.2, "AcinPknlMwlkSnonWnonDb_agony", 0.2, "Helper_SwitchToCarrynon", 0.1};
		};
		
		class AcinPknlMstpSnonWpstDnon : AcinPknlMstpSnonWnonDnon {
			actions = "MoveWithInjuredManDraggerPst";
			ConnectTo[] = {"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon", 0.15, "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon", 0.1, "AcinPknlMstpSnonWpstDnon_AmovPpneMstpSrasWpstDnon", 0.1, "AcinPknlMwlkSnonWpstDb", 0.1};
			InterpolateTo[] = {"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon", 0.15, "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon", 0.1, "AcinPknlMwlkSnonWpstDb", 0.1, "AcinPknlMwlkSnonWpstDb_death", 0.2, "AcinPknlMwlkSnonWpstDb_agony", 0.2, "Helper_SwitchToCarrynon_pst", 0.1};
		};
		
		class DraggerBasenon : DraggerBase {
			actions = "MoveWithInjuredManDraggernon";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1";
			enableOptics = 0;
			disableWeaponsLong = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 {
			actions = "MoveWithInjuredManDraggernon";
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon";
			speed = 1;
			looped = 0;
			duty = RunDuty;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.15};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
		};
		
		class AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon : AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon {
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AmovPercMstpSlowWpstDnon", 0.1};
		};
		
		class AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : DraggerBasenon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon";
			speed = 0.55;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.15};
		};
		
		class AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon : AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon {
			ConnectTo[] = {"AmovPknlMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : DraggerBasenon {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon";
			speed = 0.4;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_medic", 0.15};
		};
		
		class AcinPknlMstpSnonWpstDnon_AmovPpneMstpSrasWpstDnon : AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon {
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSnonWnonDb : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSnonWnonDb";
			speed = 1;
			looped = 1;
			duty = SprintDuty;
			interpolationSpeed = 4.1;
			disableWeapons = 1;
			canPullTrigger = 0;
			enableOptics = 0;
			ConnectTo[] = {"AcinPknlMstpSnonWnonDnon", 0.1, "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.1, "AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AcinPknlMstpSnonWnonDnon", 0.1, "AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon", 0.1, "AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon", 0.1, "AcinPknlMwlkSnonWnonDb_death", 0.2, "AcinPknlMwlkSnonWnonDb_agony", 0.2};
		};
		
		class AcinPknlMwlkSnonWpstDb : AcinPknlMwlkSnonWnonDb {
			ConnectTo[] = {"AcinPknlMstpSnonWpstDnon", 0.1, "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon", 0.1, "AcinPknlMstpSnonWpstDnon_AmovPpneMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AcinPknlMstpSnonWpstDnon", 0.1, "AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon", 0.1, "AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon", 0.1, "AcinPknlMwlkSnonWpstDb_death", 0.2, "AcinPknlMwlkSnonWpstDb_agony", 0.2};
		};
		
		class AcinPknlMwlkSnonWnonDb_death : AcinPknlMwlkSnonWnonDb {
			file = "\ca\Anims\Characters\data\Anim\Sdr\inj\AcinPknlMwlkSnonWnonDb_death";
			terminal = 1;
			interpolationSpeed = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSnonWpstDb_death : AcinPknlMwlkSnonWnonDb_death {
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMwlkSnonWnonDb_agony : AmovPpneMstpSnonWnonDnon_injured {
			actions = "InjuredManActionsnon_norot";
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
		};
		
		class AcinPknlMwlkSnonWpstDb_agony : AcinPknlMwlkSnonWnonDb_agony {
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWpstDnon_injured", 0.1};
		};
		
		class AcinPercMrunSnonWnonDf : InjuredMovedBase {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-carrier";
			actions = "MoveWithInjuredManCarrierNonWc";
			limitGunMovement = 0;
			//aimPrecision = 5;
			enableOptics = 0;
			visibleSize = 0.750126;
			relSpeedMin = 1;
			duty = WalkDuty;
			onLadder = 0;
			speed = 0.9;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AcinPercMrunSnonWnonDf_death", 0.1, "AcinPercMrunSnonWnonDf_agony", 0.1, "AcinPercMstpSnonWnonDnon", 0.1, "AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_carrier", 0.01, "AcinPercMstpSnonWnonDnon", 0.1};
		};
		
		class AcinPercMrunSnonWpstDf : AcinPercMrunSnonWnonDf {
			ConnectTo[] = {"AcinPercMstpSnonWpstDnon", 0.1, "AcinPercMrunSnonWpstDf_AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWpstDnon_carrier", 0.01, "AcinPercMstpSnonWpstDnon", 0.1};
		};
		
		class AcinPercMrunSnonWnonDf_death : AcinPercMrunSnonWnonDf {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-dead-carrier";
			terminal = 1;
			speed = 0.22;
			looped = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AcinPercMrunSnonWnonDf_agony : AcinPercMrunSnonWnonDf_death {
			looped = 0;
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-dead-carrier";
			duty = SprintDuty;
			speed = 0.22;
			terminal = 0;
			onLandBeg = 0;
			onLandEnd = 1;
			showWeaponAim = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon : InjuredMovedBase {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon";
			speed = 0.1;
			actions = "MoveWithInjuredManCarrierNon";
			limitGunMovement = 0;
			enableOptics = 0;
			duty = SprintDuty;
			canPullTrigger = 0;
			showWeaponAim = 0;
			interpolationSpeed = 6.05;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			forceAim = 1;
			ConnectTo[] = {"AcinPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_carrier", 0.01};
		};
		
		class AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon : AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon {
			ConnectTo[] = {"AcinPercMstpSnonWpstDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWpstDnon_carrier", 0.01};
		};
		
		class Helper_SwitchToCarrynon : AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon {
			speed = 1e+010;
			looped = 1;
			actions = "MoveWithInjuredMan_helpernon";
			disableWeapons = 1;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\Helper_SwitchToCarrynon";
			ConnectTo[] = {};
			InterpolateTo[] = {"AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon", 0.1};
		};
		
		class Helper_SwitchToCarrynon_pst : Helper_SwitchToCarrynon {
			ConnectTo[] = {};
			InterpolateTo[] = {"AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon", 0.1};
		};
		
		class AcinPercMstpSnonWnonDnon : AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon {
			looped = 1;
			speed = 1e+010;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarrynon-wc-carrier";
			limitGunMovement = 0;
			//aimPrecision = 5;
			visibleSize = 0;
			duty = RunDuty;
			actions = "MoveWithInjuredManCarrierNon";
			canPullTrigger = 0;
			disableWeaponsLong = 1;
			forceAim = 0;
			ConnectTo[] = {"AcinPercMrunSnonWnonDf", 0.2, "AcinPercMstpSnonWnonDnon_agony", 0.1, "AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_carrier", 0.01, "AdthPercMstpSnonWnonDf_carrier", 0.01, "AcinPercMrunSnonWnonDf", 0.2, "AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon", 0.1};
		};
		
		class AcinPercMstpSnonWpstDnon : AcinPercMstpSnonWnonDnon {
			ConnectTo[] = {"AcinPercMrunSnonWpstDf", 0.2, "AcinPercMstpSnonWpstDnon_agony", 0.1};
			InterpolateTo[] = {"AdthPercMstpSnonWpstDnon_carrier", 0.01, "AdthPercMstpSnonWpstDf_carrier", 0.01, "AcinPercMrunSnonWpstDf", 0.2};
		};
		
		class AcinPercMstpSnonWnonDnon_agony : AcinPercMstpSnonWnonDnon {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-dead-carrier";
			speed = 0.21;
			looped = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPercMstpSnonWpstDnon_agony : AcinPercMstpSnonWnonDnon_agony {
			ConnectTo[] = {"AmovPpneMstpSnonWpstDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon : InjuredMovedBase {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarrynon_down-carrier";
			speed = 0.3;
			actions = "MoveWithInjuredManCarrierNon";
			looped = 0;
			canPullTrigger = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			forceAim = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AcinPercMrunSnonWpstDf_AmovPercMstpSrasWpstDnon : AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon {
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_Up : AgonyBase {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\AinjPfalMstpSnonWnonDnon_carried_Up";
			speed = 0.1;
			actions = "InjuredManCarriedActionsnon";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			interpolationSpeed = 0.1;
			canPullTrigger = 0;
			disableWeapons = 1;
			onLandBeg = 1;
			collisionShapeSafe = "";
			ConnectTo[] = {"AinjPfalMstpSnonWnonDnon_carried_still", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon_injured : AinjPfalMstpSnonWnonDnon_carried_Up {
			speed = 0.2;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarrynon-dead-carried";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_still : AinjPfalMstpSnonWnonDnon_carried_Up {
			speed = 1e+010;
			looped = 1;
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-carried";
			duty = CrawlDuty;
			onLandBeg = 0;
			limitGunMovement = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPfalMstpSnonWnonDf_carried", 0.1, "AinjPfalMstpSnonWnonDnon_carried_Down", 0.2};
			InterpolateTo[] = {"AinjPfalMstpSnonWnonDf_carried", 0.1, "AinjPfalMstpSnonWnonDf_carried_fallwc", 0.1, "AinjPfalMstpSnonWnonDf_carried_fall", 0.1};
		};
		
		class AinjPfalMstpSnonWnonDf_carried : AinjPfalMstpSnonWnonDnon_carried_Up {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-carried";
			looped = 1;
			speed = 1.36;
			onLandBeg = 0;
			limitGunMovement = 0;
			actions = "InjuredManCarriedActionsNonWc";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPfalMstpSnonWnonDnon_carried_still", 0.1, "AinjPfalMstpSnonWnonDf_carried_dead", 0.1};
			InterpolateTo[] = {"AinjPfalMstpSnonWnonDnon_carried_still", 0.1, "AinjPfalMstpSnonWnonDf_carried_fallwc", 0.1, "AinjPfalMstpSnonWnonDf_carried_fall", 0.1, "AinjPfalMstpSnonWnonDf_carried_dead", 0.1};
		};
		
		class AinjPfalMstpSnonWnonDf_carried_fallwc : AinjPfalMstpSnonWnonDf_carried {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-wc-dead-carried";
			speed = 0.22;
			looped = 0;
			onLandBeg = 0;
			onLandEnd = 1;
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDf_carried_fall : AinjPfalMstpSnonWnonDf_carried_fallwc {
			file = "\ca\anims\characters\data\anim\sdr\inj\carrying\firemancarrynon-dead-carried";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_injured", 0.1};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDf_carried_dead : AinjPfalMstpSnonWnonDf_carried {
			speed = 0.21;
			terminal = 1;
			actions = "InjuredManCarriedActionsnon";
			canPullTrigger = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_Down : AgonyBase {
			looped = 0;
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\carrying\firemancarrynon_down-carried";
			speed = 0.3;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			onLandEnd = 1;
			collisionShapeSafe = "";
			actions = "InjuredManActionsnon";
			canPullTrigger = 0;
			ConnectTo[] = {"AinjPpneMstpSnonWnonDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakRifle01 : CutSceneAnimationBase {
			speed = 0.05;
			looped = 0;
			disableWeapons = 0;
			enableBinocular = 0;
			showHandGun = 1;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardakrifle01";
			enableOptics = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_sceneBardakRifle02", 0.1};
			InterpolateTo[] = {};
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakRifle02 : ActsPercMstpSnonWpstDnon_sceneBardakRifle01 {
			speed = 0.032787;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\c2_scenebardakcaptured\actspercmstpsnonwpstdnon_scenebardakrifle02";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPercMstpSrasWrflDnon", 0.1};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_5tdrcodr_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_5tdrcodr.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_5ttruckbed_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_5ttruckbed.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carcodr_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carcodr.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_cardr_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_cardr.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carhigh_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carhigh.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carlow_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_carlow.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_5t_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_5t.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_5t_end_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_5t_end.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carhigh_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carhigh.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carhigh_end_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carhigh_end.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carlow_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carlow.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carlow_end_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswpstdnon_carlow_end.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_5t_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_5t.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_carhigh_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_carhigh.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_carlow_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\crg\knl\stp\non\non\acrgpknlmstpsnonwnondnon_amovpercmstpsraswrfldnon_carlow.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdb_i_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdb_i.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_a_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_a.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_b_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_b.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_c_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_c.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_e_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_e.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_f_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_f.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmrunsraswlnrdf_g_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\run\ras\lnr\adthpercmrunsraswlnrdf_g.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpslowwpstdb_10_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\pst\adthpercmstpslowwpstdb_10.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpslowwpstdb_11_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\pst\adthpercmstpslowwpstdb_11.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpslowwpstdnon_4_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\pst\adthpercmstpslowwpstdnon_4.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon : AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\knl\stp\ras\lnr\amovpknlmstpsraswlnrdnon_amovpknlmstpsnonwnondnon.rtm";
			actions = "CivilKneelActions";
			speed = 0.5;
			leftHandIKCurve[] = {0.25, 1, 0.3, 0};
			rightHandIKCurve[] = {0.5, 1, 0.55, 0};
			weaponIK = 4;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon", 0.01};
			InterpolateTo[] = {"amovpknlmstpsnonwnondnon_amovpknlmstpsraswlnrdnon", 0.02};
		};
		
		class AdthPercMstpSlowWrflDnon_16 : AdthPercMstpSlowWrflDnon_8 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\rfl\adthpercmstpslowwrfldf_1.rtm";
			speed = 0.8;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSlowWrflDnon_32 : AdthPercMstpSlowWrflDnon_8 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\low\rfl\adthpercmstpslowwrfldf_2.rtm";
			speed = 0.8;
			looped = 0;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsnonwnondf_1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\non\non\adthpercmstpsnonwnondf_1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsnonwnondnon_bianm_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\non\non\adthpercmstpsnonwnondnon.bianm.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\non\non\adthpercmstpsnonwnondnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsraswrfldb_8_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldb_8.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpercmstpsraswrfldnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDb_16 : AdthPercMstpSrasWrflDb_8 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldnon_v1.rtm";
			speed = 0.8;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_16 : AdthPercMstpSrasWrflDnon_8 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldnon_v2.rtm";
			speed = 0.8;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDf_8 : AdthPercMstpSrasWrflDf_4 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldnon_v3.rtm";
			speed = 0.8;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class AdthPercMstpSrasWrflDnon_32 : AdthPercMstpSrasWrflDnon_16 {
			file = "\ca\anims\characters\data\anim\sdr\dth\erc\stp\ras\rfl\adthpercmstpsraswrfldnon_v4.rtm";
			speed = 0.8;
			ConnectTo[] = {"DeadState", 1.0};
			InterpolateTo[] = {};
		};
		
		class adthpknlmrunslowwlnrdf_1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\run\low\lnr\adthpknlmrunslowwlnrdf_1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmrunslowwlnrdf_2_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\run\low\lnr\adthpknlmrunslowwlnrdf_2.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmnonslowwlnrdnon_1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\lnr\adthpknlmnonslowwlnrdnon_1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpslowwpstdnon_3_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\pst\adthpknlmstpslowwpstdnon_3.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpslowwrfldf_3_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\rfl\adthpknlmstpslowwrfldf_3.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpslowwrfldnon_1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\rfl\adthpknlmstpslowwrfldnon_1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpslowwrfldnon_2_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\rfl\adthpknlmstpslowwrfldnon_2.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpslowwrfldnon_3_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\low\rfl\adthpknlmstpslowwrfldnon_3.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\non\non\adthpknlmstpsnonwnondnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmnonsraswlnrdnon_2_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\lnr\adthpknlmnonsraswlnrdnon_2.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsraswrfldnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\rfl\adthpknlmstpsraswrfldnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsraswrfldnon_v1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\rfl\adthpknlmstpsraswrfldnon_v1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsraswrfldnon_v2_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\rfl\adthpknlmstpsraswrfldnon_v2.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsraswrfldnon_v3_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\rfl\adthpknlmstpsraswrfldnon_v3.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpknlmstpsraswrfldnon_v4_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\knl\stp\ras\rfl\adthpknlmstpsraswrfldnon_v4.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthppnemstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\pne\stp\non\non\adthppnemstpsnonwnondnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthppnemstpsraswrfldnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\pne\stp\ras\rfl\adthppnemstpsraswrfldnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthppnemstpsraswrfldnon_v1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\pne\stp\ras\rfl\adthppnemstpsraswrfldnon_v1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class adthpsitmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\dth\sit\stp\non\non\adthpsitmstpsnonwnondnon.rtm";
			speed = 0.3;
			looped = 0;
			terminal = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwlnrdnon01_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\lnr\aidlpercmstpslowwlnrdnon01.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwlnrdnon02_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\lnr\aidlpercmstpslowwlnrdnon02.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwlnrdnon03_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\lnr\aidlpercmstpslowwlnrdnon03.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwrfldnon_changinglegs_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\rfl\aidlpercmstpslowwrfldnon_changinglegs.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwrfldnon_checkingweapons_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\rfl\aidlpercmstpslowwrfldnon_checkingweapons.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpslowwrfldnon_shruggingshoulders_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\low\rfl\aidlpercmstpslowwrfldnon_shruggingshoulders.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpsraswrfldnon01_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\rfl\aidlpercmstpsraswrfldnon01.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpsraswrfldnon02_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\rfl\aidlpercmstpsraswrfldnon02.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpsraswrfldnon03_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\rfl\aidlpercmstpsraswrfldnon03.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwlnrdnon01_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon01.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwlnrdnon02_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon02.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwlnrdnon03_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon03.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwlnrdnon04_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon04.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwlnrdnon05_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon05.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwpstdnon01_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\pst\aidlpknlmstpslowwpstdnon01.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwpstdnon02_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\pst\aidlpknlmstpslowwpstdnon02.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpknlmstpslowwpstdnon03_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\pst\aidlpknlmstpslowwpstdnon03.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpsitmstpsnonwnondnon_ground00 : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\sit\stp\non\non\aidlpsitmstpsnonwnondnon_ground00.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpsitmstpsnonwnondnon_ground01_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\sit\stp\non\non\aidlpsitmstpsnonwnondnon_ground01.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpsitmstpsnonwnondnon_ground02_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\sit\stp\non\non\aidlpsitmstpsnonwnondnon_ground02.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aidlpsitmstpsnonwnondnon_ground03_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\idl\sit\stp\non\non\aidlpsitmstpsnonwnondnon_ground03.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class acinpknlmwlkslowwrfldb_deathstepinserted_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inj\acinpknlmwlkslowwrfldb_deathstepinserted.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ainvpknlmstpslaywrfldnon_amovpercmstpslowwrfldnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inv\knl\stp\lay\rfl\ainvpknlmstpslaywrfldnon_amovpercmstpslowwrfldnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ainvpknlmstpslaywrfldnon_amovpknlmstpslowwrfldnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inv\knl\stp\lay\rfl\ainvpknlmstpslaywrfldnon_amovpknlmstpslowwrfldnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ainvpknlmstpslaywrfldnon_healed_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inv\knl\stp\lay\rfl\ainvpknlmstpslaywrfldnon_healed.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ainvpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_bag_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inv\knl\stp\non\non\ainvpknlmstpsnonwnondnon_amovpercmstpsnonwnondnon_bag.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class ainvpknlmstpsnonwnondnon_healed_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\inv\knl\stp\non\non\ainvpknlmstpsnonwnondnon_healed.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aldrpercmstpsnonwnondnon_slide_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\ldr\erc\stp\non\non\aldrpercmstpsnonwnondnon_slide.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aldrpercmwlksnonwnondd_amovpercmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\ldr\erc\wlk\non\non\aldrpercmwlksnonwnondd_amovpercmstpsnonwnondnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class aldrpercmwlksnonwnondu_amovpercmstpsnonwnondnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\ldr\erc\wlk\non\non\aldrpercmwlksnonwnondu_amovpercmstpsnonwnondnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmrunslowwpstdf_awoppercmrunsgthwnondf_1_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\run\low\pst\amovpercmrunslowwpstdf_awoppercmrunsgthwnondf_1.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmrunslowwpstdf_awoppercmrunsgthwnondf_2_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\run\low\pst\amovpercmrunslowwpstdf_awoppercmrunsgthwnondf_2.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmrunslowwrfldf_awoppercmrunsgthwrfldf_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\run\low\rfl\amovpercmrunslowwrfldf_awoppercmrunsgthwrfldf.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmrunsnonwnondf_awoppercmrunsgthwnondf_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\run\non\non\amovpercmrunsnonwnondf_awoppercmrunsgthwnondf.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmrunssurwnondf_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\run\sur\non\amovpercmrunssurwnondf.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpslowwlnrdnon_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpslowwlnrdnon_aiturn180l_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon_aiturn180l.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpslowwlnrdnon_aiturn180r_forgoten : StandBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon_aiturn180r.rtm";
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpsraswlnrdnon : AmovPknlMstpSrasWlnrDnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon.rtm";
			duty = RunDuty;
			speed = 1e+010;
			actions = "LauncherStandStpActions";
			canPullTrigger = 0;
			showWeaponAim = 0;
			enableMissile = 1;
			leaningFactorBeg = 0.5;
			leaningFactorEnd = 0.5;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wrfl.p3d";
			weaponIK = 4;
			aiming = "aimingDefault";
			ConnectTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "LauncherReloadStand", 0.02, "amovpercmstpsraswlnrdnon_amovpercmstpslowwlnrdnon", 0.01, "amovpercmstpsraswlnrdnon_amovpercmstpsraswrfldnon", 0.01, "amovpercmstpsraswlnrdnon_amovpknlmstpsraswlnrdnon", 0.02, "AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon", 0.02, "AswmPercMstpSnonWnonDnon", 0.3, "AidlPercMstpSrasWlnrDnon_player_S0", 0.02, "AovrPercMstpSrasWlnrDf", 0.01, "aidlpercmstpsraswlnrdnon_S", 0.02, "amovpercmstpsraswlnrdnon_turnl", 0.02, "amovpercmstpSraswlnrdnon_turnr", 0.02, "amovpercmstpsraswlnrdnon_amovpercmstpsnonwnondnon", 0.02, "AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon", 0.02, "amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon", 0.02};
			InterpolateTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.01, "AmovPercMwlkSrasWlnrDf", 0.02, "AmovPercMwlkSrasWlnrDfl", 0.02, "AmovPercMwlkSrasWlnrDl", 0.02, "AmovPercMwlkSrasWlnrDbl", 0.02, "AmovPercMwlkSrasWlnrDb", 0.02, "AmovPercMwlkSrasWlnrDbr", 0.02, "AmovPercMwlkSrasWlnrDr", 0.02, "AmovPercMwlkSrasWlnrDfr", 0.02, "AmovPercMrunSrasWlnrDf", 0.02, "AmovPercMrunSrasWlnrDfl", 0.02, "AmovPercMrunSrasWlnrDl", 0.02, "AmovPercMrunSrasWlnrDbl", 0.02, "AmovPercMrunSrasWlnrDb", 0.02, "AmovPercMrunSrasWlnrDbr", 0.02, "AmovPercMrunSrasWlnrDr", 0.02, "AmovPercMrunSrasWlnrDfr", 0.02, "amovpercmstpsraswlnrdnon_turnl", 0.02, "amovpercmstpSraswlnrdnon_turnr", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_player_S0 : amovpercmstpsraswlnrdnon {
			variantsPlayer[] = {"AidlPercMstpSrasWlnrDnon_player_idleSteady01", 0.333, "AidlPercMstpSrasWlnrDnon_player_idleSteady02", 0.333, "AidlPercMstpSrasWlnrDnon_player_idleSteady03", 0.334};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02, "AidlPercMstpSrasWlnrDnon_player_idleSteady01", 0.02, "AidlPercMstpSrasWlnrDnon_player_idleSteady02", 0.02, "AidlPercMstpSrasWlnrDnon_player_idleSteady03", 0.02};
			InterpolateTo[] = {};
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady01 : AidlPercMstpSrasWlnrDnon_player_S0 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\lnr\AidlPercMstpSrasWlnrDnon_idleSteady01";
			speed = 0.074074;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_player_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady02 : AidlPercMstpSrasWlnrDnon_player_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\lnr\AidlPercMstpSrasWlnrDnon_idleSteady02";
			speed = 0.049587;
			variantAfter[] = {1, 1, 1};
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_player_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady03 : AidlPercMstpSrasWlnrDnon_player_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\ras\lnr\AidlPercMstpSrasWlnrDnon_idleSteady03";
			speed = 0.090226;
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_player_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_S0 : amovpercmstpsraswlnrdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon.rtm";
			variantsAI[] = {"AidlPercMstpSrasWlnrDnon_idleSteady01", 0.31, "AidlPercMstpSrasWlnrDnon_idleSteady02", 0.31, "AidlPercMstpSrasWlnrDnon_idleSteady03", 0.31, "AidlPercMstpSrasWlnrDnon_01", 0.0234, "AidlPercMstpSrasWlnrDnon_02", 0.0233, "AidlPercMstpSrasWlnrDnon_03", 0.0233};
			variantAfter[] = {0, 0, 0};
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Idle.p3d";
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_01", 0.02, "AidlPercMstpSrasWlnrDnon_02", 0.02, "AidlPercMstpSrasWlnrDnon_03", 0.02, "AidlPercMstpSrasWlnrDnon_idleSteady01", 0.02, "AidlPercMstpSrasWlnrDnon_idleSteady02", 0.02, "AidlPercMstpSrasWlnrDnon_idleSteady03", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.01};
		};
		
		class AidlPercMstpSrasWlnrDnon_01 : AidlPercMstpSrasWlnrDnon_S0 {
			variantAfter[] = {1, 1, 1};
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon01";
			speed = 0.25;
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_02 : AidlPercMstpSrasWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon02";
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_03 : AidlPercMstpSrasWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon03";
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_01 : AidlPknlMstpSlowWlnrDnon_S0 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon01.rtm";
			variantAfter[] = {1, 1, 1};
			speed = 0.5;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady01 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_idleSteady01";
			speed = 0.26667;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady02 : AidlPknlMstpSlowWlnrDnon_idleSteady01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_idleSteady02";
			speed = 0.210526;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady03 : AidlPknlMstpSlowWlnrDnon_idleSteady01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_idleSteady03";
			speed = 0.292683;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady01 : AidlPercMstpSrasWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon_idleSteady01";
			speed = 0.148148;
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady02 : AidlPercMstpSrasWlnrDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon_idleSteady02";
			speed = 0.099174;
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady03 : AidlPercMstpSrasWlnrDnon_idleSteady01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\erc\stp\low\lnr\AidlPercMstpSlowWlnrDnon_idleSteady03";
			speed = 0.090226;
			ConnectTo[] = {"AidlPercMstpSrasWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_02 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon02.rtm";
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_03 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon03.rtm";
			speed = 0.25;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_04 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon04.rtm";
			speed = 0.25;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_05 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\ca\anims\characters\data\anim\sdr\idl\knl\stp\low\lnr\aidlpknlmstpslowwlnrdnon05.rtm";
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_01RozhlizeniSe1 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_01RozhlizeniSe1";
			speed = 0.140187;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_02RozhlizeniSe2 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_02RozhlizeniSe2";
			speed = 0.44;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_03N : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_03";
			speed = 0.23;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_04N : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_04";
			speed = 0.198347;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_05N : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_05";
			speed = 0.21;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_06RozhlizeniSe3 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_06RozhlizeniSe3";
			speed = 0.27;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_07RozhlizeniSe4 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_07RozhlizeniSe4";
			speed = 0.27;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_08RozhlizeniSe5 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_08RozhlizeniSe5";
			speed = 0.41;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_09RozhlizeniSe6 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_09RozhlizeniSe6";
			speed = 0.44;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_10RozhlizeniSe7 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_10RozhlizeniSe7";
			speed = 0.193548;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_11RozhlizeniSe8 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_11RozhlizeniSe8";
			speed = 0.186047;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_12checkingLnr1 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_12checkingLnr1";
			speed = 0.15625;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_13checkingLnr2 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_13checkingLnr2";
			speed = 0.093168;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_14RozhlizeniSe9 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_14RozhlizeniSe9";
			speed = 0.07109;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_15RozhlizeniSe10 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_15RozhlizeniSe10";
			speed = 0.3;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_16RozhlizeniSe11 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_16RozhlizeniSe11";
			speed = 0.094488;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AidlPknlMstpSlowWlnrDnon_17RozhlizeniSe12 : AidlPknlMstpSlowWlnrDnon_01 {
			file = "\Ca\Anims\Characters\data\Anim\sdr\idl\knl\stp\low\lnr\AidlPknlMstpSlowWlnrDnon_17RozhlizeniSe12";
			speed = 0.44;
			ConnectTo[] = {"AidlPknlMstpSlowWlnrDnon_S0", 0.02};
			InterpolateTo[] = {"AmovPknlMstpSrasWlnrDnon", 0.02};
		};
		
		class AovrPercMstpSrasWlnrDf : amovpercmstpsraswlnrdnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\ras\lnr\AovrPercMstpSrasWlnrDf";
			speed = 0.5;
			looped = 0;
			duty = SprintDuty;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			enableMissile = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpsraswlnrdnon_S : amovpercmstpsraswlnrdnon {
			variantsAI[] = {"aidlpercmstpsraswlnrdnon_1", 0.333, "aidlpercmstpsraswlnrdnon_2", 0.333, "aidlpercmstpsraswlnrdnon_3", 0.334};
			variantAfter[] = {0, 0, 0};
			ConnectTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02, "aidlpercmstpsraswlnrdnon_3", 0.02, "aidlpercmstpsraswlnrdnon_1", 0.02, "aidlpercmstpsraswlnrdnon_2", 0.02};
			InterpolateTo[] = {};
		};
		
		class aidlpercmstpsraswlnrdnon_3 : aidlpercmstpsraswlnrdnon_S {
			variantAfter[] = {1, 1, 1};
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\lnr\aidlpercmstpsraswlnrdnon01.rtm";
			speed = 0.3;
			looped = 0;
			ConnectTo[] = {"aidlpercmstpsraswlnrdnon_S", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class aidlpercmstpsraswlnrdnon_1 : aidlpercmstpsraswlnrdnon_3 {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\lnr\aidlpercmstpsraswlnrdnon02.rtm";
			speed = 0.3;
			looped = 0;
			ConnectTo[] = {"aidlpercmstpsraswlnrdnon_S", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class aidlpercmstpsraswlnrdnon_2 : aidlpercmstpsraswlnrdnon_3 {
			file = "\ca\anims\characters\data\anim\sdr\idl\erc\stp\ras\lnr\aidlpercmstpsraswlnrdnon03.rtm";
			speed = 0.3;
			looped = 0;
			ConnectTo[] = {"aidlpercmstpsraswlnrdnon_S", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class amovpercmstpslowwlnrdnon : amovpercmstpsraswlnrdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableMissile = 0;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			weaponIK = 4;
			actions = "LauncherStandLowStpActions";
			ConnectTo[] = {"amovpercmstpslowwlnrdnon_amovpercmstpsraswlnrdnon", 0.01, "AswmPercMstpSnonWnonDnon", 0.3, "AovrPercMstpSlowWlnrDf", 0.01, "amovpercmstpslowwlnrdnon_turnl", 0.01, "amovpercmstpslowwlnrdnon_turnR", 0.01};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDf", 0.02, "AmovPercMrunSlowWlnrDfl", 0.02, "AmovPercMrunSlowWlnrDl", 0.02, "AmovPercMrunSlowWlnrDbl", 0.02, "AmovPercMrunSlowWlnrDb", 0.02, "AmovPercMrunSlowWlnrDbr", 0.02, "AmovPercMrunSlowWlnrDr", 0.02, "AmovPercMrunSlowWlnrDfr", 0.02, "amovpercmstpslowwlnrdnon_turnl", 0.01, "amovpercmstpslowwlnrdnon_turnR", 0.01, "AmovPercMwlkSlowWlnrDf", 0.02, "AmovPercMwlkSlowWlnrDfr", 0.02, "AmovPercMwlkSlowWlnrDr", 0.02, "AmovPercMwlkSlowWlnrDbr", 0.02, "AmovPercMwlkSlowWlnrDb", 0.02, "AmovPercMwlkSlowWlnrDbl", 0.02, "AmovPercMwlkSlowWlnrDl", 0.02, "AmovPercMwlkSlowWlnrDfl", 0.02};
		};
		
		class AovrPercMstpSlowWlnrDf : amovpercmstpslowwlnrdnon {
			file = "\Ca\Anims\Characters\data\Anim\sdr\ovr\erc\stp\low\lnr\AovrPercMstpSlowWlnrDf";
			speed = 0.5;
			looped = 0;
			duty = SprintDuty;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wovr.p3d";
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			limitGunMovement = 0.3;
			headBobStrength = 0.512438;
			forceAim = 1;
			ConnectTo[] = {"amovpercmstpslowwlnrdnon", 0.01};
			InterpolateTo[] = {};
		};
		
		class amovpercmstpslowwlnrdnon_turnl : amovpercmstpslowwlnrdnon {
			speed = 0.3;
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon_aiturn90l.rtm";
			ConnectTo[] = {"amovpercmstpslowwlnrdnon", 0.01};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpslowwlnrdnon", 0.01};
		};
		
		class amovpercmstpslowwlnrdnon_turnR : amovpercmstpslowwlnrdnon_turnl {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\low\lnr\amovpercmstpslowwlnrdnon_aiturn90r.rtm";
			ConnectTo[] = {"amovpercmstpslowwlnrdnon", 0.01};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpslowwlnrdnon", 0.01};
		};
		
		class AmovPercMwlkSlowWlnrDf : amovpercmstpslowwlnrdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdf.rtm";
			speed = 0.555556;
			canPullTrigger = 1;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			limitGunMovement = 0.6;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDf", 0.025, "AmovPknlMwlkSrasWlnrDf", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDfr", 0.025, "AmovPercMwlkSlowWlnrDfl", 0.025};
		};
		
		class AmovPercMwlkSlowWlnrDfr : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdfr.rtm";
			speed = 0.555556;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDfl", 0.025, "AmovPknlMwlkSrasWlnrDfl", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDf", 0.025, "AmovPercMwlkSlowWlnrDr", 0.025};
		};
		
		class AmovPercMwlkSlowWlnrDr : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdr.rtm";
			speed = 0.588235;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDl", 0.025, "AmovPknlMwlkSrasWlnrDl", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDfr", 0.025, "AmovPercMwlkSlowWlnrDbr", 0.025};
		};
		
		class AmovPercMwlkSlowWlnrDbr : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdbr.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDbl", 0.025, "AmovPknlMwlkSrasWlnrDbl", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDr", 0.025, "AmovPercMwlkSlowWlnrDb", 0.025};
		};
		
		class AmovPercMwlkSlowWlnrDb : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdb.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDb", 0.025, "AmovPknlMwlkSrasWlnrDb", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDbr", 0.025, "AmovPercMwlkSlowWlnrDbl", 0.025};
		};
		
		class AmovPercMwlkSlowWlnrDbl : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdbl.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDbr", 0.025, "AmovPknlMwlkSrasWlnrDbr", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDb", 0.025, "AmovPercMwlkSlowWlnrDl", 0.025};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic0S : AinvPknlMstpSnonWrflDnon_medic {
			VariantsPlayer[] = {"AinvPknlMstpSnonWrflDnon_medic0", 0.15, "AinvPknlMstpSnonWrflDnon_medic1", 0.15, "AinvPknlMstpSnonWrflDnon_medic2", 0.15, "AinvPknlMstpSnonWrflDnon_medic3", 0.15, "AinvPknlMstpSnonWrflDnon_medic4", 0.15, "AinvPknlMstpSnonWrflDnon_medic5", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.15};
			VariantAfter[] = {5, 5, 5};
			equivalentTo = "AinvPknlMstpSnonWrflDnon_medic0";
			actions = "HealActionBase";
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0", 0.1, "AinvPknlMstpSnonWrflDnon_medic1", 0.1, "AinvPknlMstpSnonWrflDnon_medic2", 0.1, "AinvPknlMstpSnonWrflDnon_medic3", 0.1, "AinvPknlMstpSnonWrflDnon_medic4", 0.1, "AinvPknlMstpSnonWrflDnon_medic5", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0", 0.1, "AinvPknlMstpSnonWrflDnon_medic1", 0.1, "AinvPknlMstpSnonWrflDnon_medic2", 0.1, "AinvPknlMstpSnonWrflDnon_medic3", 0.1, "AinvPknlMstpSnonWrflDnon_medic4", 0.1, "AinvPknlMstpSnonWrflDnon_medic5", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic0 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic0";
			speed = 0.31;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic1 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic1";
			speed = 0.26;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic2 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic2";
			speed = 0.19;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic3 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic3";
			speed = 0.2;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic4 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic4";
			speed = 0.13;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AinvPknlMstpSnonWrflDnon_medic5 : AinvPknlMstpSnonWrflDnon_medic0S {
			file = "\ca\Anims\Characters\data\Anim\sdr\inj\HEALING\AinvPknlMstpSnonWrflDnon_medic5";
			speed = 0.43;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1};
			InterpolateTo[] = {"AinvPknlMstpSnonWrflDnon_medic", 0.1, "AinvPknlMstpSnonWrflDnon_medic0S", 0.1, "AdthPknlMstpSlayWrflDnon_inventory", 0.1, "AdthPknlMstpSlayWrflDnon_inventoryAgony", 0.1};
		};
		
		class AmovPercMwlkSlowWlnrDl : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdl.rtm";
			speed = 0.526316;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDr", 0.025, "AmovPknlMwlkSrasWlnrDr", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDbl", 0.025, "AmovPercMwlkSlowWlnrDfl", 0.025};
		};
		
		class AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon_2 : AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon {
			actions = "CivilProneActions";
			file = "\ca\Anims\Characters\data\Anim\Sdr\Mov\erc\spr\non\non\AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon_2.rtm";
			speed = 1.5;
			soundOverride = "laydown";
			canPullTrigger = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			duty = SprintDuty;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon", 0.02};
			InterpolateTo[] = {"AdthPpneMstpSnonWnonDnon", 0.01};
		};
		
		class amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon : TransAnimBase {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\pst\amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon.rtm";
			disableWeapons = 1;
			actions = "LauncherStandStpActions";
			showHandGun = 1;
			speed = 1.4;
			interpolationRestart = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			enableOptics = 2;
			ConnectTo[] = {"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon_end", 0.02};
			InterpolateTo[] = {"amovpercmstpsraswlnrdnon_amovpercmstpsraswpstdnon_end", 0.02};
		};
		
		class AmovPercMwlkSlowWlnrDfl : AmovPercMwlkSlowWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\low\lnr\amovpercmwlkslowwlnrdfl.rtm";
			speed = 0.555556;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPercMrunSlowWlnrDfr", 0.025, "AmovPknlMwlkSrasWlnrDfr", 0.03, "amovpercmstpslowwlnrdnon", 0.02, "AmovPercMwlkSlowWlnrDf", 0.025, "AmovPercMwlkSlowWlnrDl", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDf : amovpercmstpsraswlnrdnon {
			speed = 0.555556;
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdf.rtm";
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			limitGunMovement = 0.6;
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			actions = "LauncherStandStpActionsWlkF";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDf", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDfl", 0.025, "AmovPercMwlkSrasWlnrDfr", 0.025, "AmovPercMrunSrasWlnrDf", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDfl : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdfl.rtm";
			speed = 0.555556;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkFL";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDfl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDf", 0.025, "AmovPercMwlkSrasWlnrDl", 0.025, "AmovPercMrunSrasWlnrDfl", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDl : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdl.rtm";
			speed = 0.526316;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkL";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDfl", 0.025, "AmovPercMwlkSrasWlnrDbl", 0.025, "AmovPercMrunSrasWlnrDl", 0.025};
		};
		
		class AmovPercMstpSlowWrflDnon_ActsPpneMstpSlowWrflDr_GrenadeEscape : AmovPercMstpSlowWrflDnon {
			speed = 0.18;
			looped = 0;
			file = "\ca\Anims\Characters\data\anim\sdr\cts\evasive\AmovPercMstpSlowWrflDnon_ActsPpneMstpSlowWrflDr_GrenadeEscape";
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSlowWrflDnon_r05", 0.01};
		};
		
		class AmovPercMwlkSrasWlnrDbl : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdbl.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkBL";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDbl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDl", 0.025, "AmovPercMwlkSrasWlnrDb", 0.025, "AmovPercMrunSrasWlnrDbl", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDb : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdb.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkB";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDb", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDbl", 0.025, "AmovPercMwlkSrasWlnrDbr", 0.025, "AmovPercMrunSrasWlnrDb", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDbr : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdbr.rtm";
			speed = 0.545455;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkBR";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDbr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDb", 0.025, "AmovPercMwlkSrasWlnrDr", 0.025, "AmovPercMrunSrasWlnrDbr", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDr : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdr.rtm";
			speed = 0.588235;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkR";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDbr", 0.025, "AmovPercMwlkSrasWlnrDfr", 0.025, "AmovPercMrunSrasWlnrDr", 0.025};
		};
		
		class AmovPercMwlkSrasWlnrDfr : AmovPercMwlkSrasWlnrDf {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\wlk\ras\lnr\amovpercmwlksraswlnrdfr.rtm";
			speed = 0.555556;
			duty = CrawlDuty;
			soundOverride = "walk";
			soundEnabled = 1;
			actions = "LauncherStandStpActionsWlkFR";
			ConnectTo[] = {};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "AmovPknlMwlkSrasWlnrDfr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDf", 0.025, "AmovPercMwlkSrasWlnrDr", 0.025, "AmovPercMrunSrasWlnrDfr", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDf : AmovPercMrunSlowWlnrDf {
			actions = "LauncherStandStpActionsRunF";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDf", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDf", 0.025, "AmovPercMrunSrasWlnrDfl", 0.025, "AmovPercMrunSrasWlnrDfr", 0.025};
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end : amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon {
			speed = 0.6;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKCurve[] = {0.9, 0, 0.95, 1};
			rightHandIKCurve[] = {0.5, 0, 0.55, 1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			canPullTrigger = 0;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon", 0.02};
		};
		
		class AmovPercMrunSrasWlnrDfl : AmovPercMrunSlowWlnrDfl {
			actions = "LauncherStandStpActionsRunFL";
			disableWeaponsLong = 0;
			speed = 0.7;
			duty = WalkDuty;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDfl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDfl", 0.025, "AmovPercMrunSrasWlnrDf", 0.025, "AmovPercMrunSrasWlnrDl", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDl : AmovPercMrunSlowWlnrDl {
			actions = "LauncherStandStpActionsRunL";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDl", 0.025, "AmovPercMrunSrasWlnrDfl", 0.025, "AmovPercMrunSrasWlnrDbl", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDbl : AmovPercMrunSlowWlnrDbl {
			actions = "LauncherStandStpActionsRunBL";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDbl", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDbl", 0.025, "AmovPercMrunSrasWlnrDl", 0.025, "AmovPercMrunSrasWlnrDb", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDb : AmovPercMrunSlowWlnrDb {
			actions = "LauncherStandStpActionsRunB";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDb", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDb", 0.025, "AmovPercMrunSrasWlnrDbl", 0.025, "AmovPercMrunSrasWlnrDbr", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDbr : AmovPercMrunSlowWlnrDbr {
			actions = "LauncherStandStpActionsRunBR";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDbr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDbr", 0.025, "AmovPercMrunSrasWlnrDb", 0.025, "AmovPercMrunSrasWlnrDr", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDr : AmovPercMrunSlowWlnrDr {
			actions = "LauncherStandStpActionsRunR";
			disableWeaponsLong = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDr", 0.025, "AmovPercMrunSrasWlnrDbr", 0.025, "AmovPercMrunSrasWlnrDfr", 0.025};
		};
		
		class AmovPercMrunSrasWlnrDfr : AmovPercMrunSlowWlnrDfr {
			actions = "LauncherStandStpActionsRunFR";
			disableWeaponsLong = 0;
			speed = 0.7;
			duty = WalkDuty;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSrasWlnrDfr", 0.03, "amovpercmstpsraswlnrdnon", 0.02, "AmovPercMwlkSrasWlnrDfr", 0.025, "AmovPercMrunSrasWlnrDf", 0.025, "AmovPercMrunSrasWlnrDr", 0.025};
		};
		
		class amovpercmstpsraswlnrdnon_turnl : amovpercmstpsraswlnrdnon {
			speed = 0.3;
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_aiturn90l.rtm";
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class amovpercmstpSraswlnrdnon_turnr : amovpercmstpsraswlnrdnon {
			file = "\ca\anims\characters\data\anim\sdr\mov\erc\stp\ras\lnr\amovpercmstpsraswlnrdnon_aiturn90r.rtm";
			speed = 0.3;
			ConnectTo[] = {"amovpercmstpsraswlnrdnon", 0.02};
			InterpolateTo[] = {"adthpercmstpsraswlnrdnon_2", 0.01, "amovpercmstpsraswlnrdnon", 0.02};
		};
		
		class AnimViewControl : CutSceneAnimationBase {
			speed = 0.16;
			file = "\CA\Anims\CHARACTERS\data\Anim\sdr\cts\C4_commingToCDF\animviewcontrol";
			actions = "Action_AnimViewControl";
			ConnectTo[] = {"AnimViewControl", 0.01};
			InterpolateTo[] = {};
		};
	};
	
	class BlendAnims : BlendAnims {
		wholeBody[] = {"Pelvis", 1, "Spine", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1, "Camera", 1, "weapon", 1, "launcher", 1, "neck", 1, "neck1", 1, "head", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "LeftUpLeg", 1, "LeftUpLegRoll", 1, "LeftLeg", 1, "LeftLegRoll", 1, "LeftFoot", 1, "LeftToeBase", 1, "RightUpLeg", 1, "RightUpLegRoll", 1, "RightLeg", 1, "RightLegRoll", 1, "RightFoot", 1, "RightToeBase", 1};
		aimingDefault[] = {"head", 0.6, "neck1", 0.6, "neck", 0.6, "weapon", 1, "launcher", 1, "LeftShoulder", 0.8, "LeftArm", 0.8, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 0.8, "RightArm", 0.8, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.3, "Spine1", 0.4, "Spine2", 0.5, "Spine3", 0.6};
		aimingPistol[] = {"head", 0.6, "neck1", 0.6, "neck", 0.6, "LeftShoulder", 0.8, "launcher", 1, "weapon", 1, "LeftArm", 0.8, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 0.8, "RightArm", 0.8, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.3, "Spine1", 0.4, "Spine2", 0.5, "Spine3", 0.6};
		aimingLauncher[] = {"head", 0.6, "neck1", 0.6, "neck", 0.6, "launcher", 1, "weapon", 1, "LeftShoulder", 0.8, "LeftArm", 0.8, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 0.8, "RightArm", 0.8, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.3, "Spine1", 0.4, "Spine2", 0.5, "Spine3", 0.6};
		aimingCivil[] = {"neck1", 0.25, "neck", 0.25, "Spine", 0.3, "Spine1", 0.4, "Spine2", 0.5, "Spine3", 0.5};
		aimingLying[] = {"weapon", 1, "LeftShoulder", 0.8, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 0.8, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine2", 0.2, "Spine3", 0.6};
		aimingLyingPistol[] = {"LeftShoulder", 0.8, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 0.8, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine2", 0.2, "Spine3", 0.6};
		legsLyingAiming[] = {"weapon", 0, "LeftShoulder", 0.2, "LeftArm", 0, "LeftArmRoll", 0, "LeftForeArm", 0, "LeftForeArmRoll", 0, "LeftHand", 0, "LeftHandRing", 0, "LeftHandPinky1", 0, "LeftHandPinky2", 0, "LeftHandPinky3", 0, "LeftHandRing1", 0, "LeftHandRing2", 0, "LeftHandRing3", 0, "LeftHandMiddle1", 0, "LeftHandMiddle2", 0, "LeftHandMiddle3", 0, "LeftHandIndex1", 0, "LeftHandIndex2", 0, "LeftHandIndex3", 0, "LeftHandThumb1", 0, "LeftHandThumb2", 0, "LeftHandThumb3", 0, "RightShoulder", 0.2, "RightArm", 0, "RightArmRoll", 0, "RightForeArm", 0, "RightForeArmRoll", 0, "RightHand", 0, "RightHandRing", 0, "RightHandPinky1", 0, "RightHandPinky2", 0, "RightHandPinky3", 0, "RightHandRing1", 0, "RightHandRing2", 0, "RightHandRing3", 0, "RightHandMiddle1", 0, "RightHandMiddle2", 0, "RightHandMiddle3", 0, "RightHandIndex1", 0, "RightHandIndex2", 0, "RightHandIndex3", 0, "RightHandThumb1", 0, "RightHandThumb2", 0, "RightHandThumb3", 0, "Spine2", 0.8, "Spine3", 0.4, "spine1", 1, "pelvis", 1, "leftupleg", 1, "leftuplegroll", 1, "leftleg", 1, "leftlegroll", 1, "leftfoot", 1, "LeftToeBase", 1, "rightupleg", 1, "rightuplegroll", 1, "rightleg", 1, "rightlegroll", 1, "rightfoot", 1, "RightToeBase", 1};
		legsLyingAimingPistol[] = {"LeftShoulder", 0.2, "LeftArm", 0, "LeftArmRoll", 0, "LeftForeArm", 0, "LeftForeArmRoll", 0, "LeftHand", 0, "LeftHandRing", 0, "LeftHandPinky1", 0, "LeftHandPinky2", 0, "LeftHandPinky3", 0, "LeftHandRing1", 0, "LeftHandRing2", 0, "LeftHandRing3", 0, "LeftHandMiddle1", 0, "LeftHandMiddle2", 0, "LeftHandMiddle3", 0, "LeftHandIndex1", 0, "LeftHandIndex2", 0, "LeftHandIndex3", 0, "LeftHandThumb1", 0, "LeftHandThumb2", 0, "LeftHandThumb3", 0, "RightShoulder", 0.2, "RightArm", 0, "RightArmRoll", 0, "RightForeArm", 0, "RightForeArmRoll", 0, "RightHand", 0, "RightHandRing", 0, "RightHandPinky1", 0, "RightHandPinky2", 0, "RightHandPinky3", 0, "RightHandRing1", 0, "RightHandRing2", 0, "RightHandRing3", 0, "RightHandMiddle1", 0, "RightHandMiddle2", 0, "RightHandMiddle3", 0, "RightHandIndex1", 0, "RightHandIndex2", 0, "RightHandIndex3", 0, "RightHandThumb1", 0, "RightHandThumb2", 0, "RightHandThumb3", 0, "Spine2", 0.8, "Spine3", 0.4, "spine1", 1, "pelvis", 1, "leftupleg", 1, "leftuplegroll", 1, "leftleg", 1, "leftlegroll", 1, "leftfoot", 1, "LeftToeBase", 1, "rightupleg", 1, "rightuplegroll", 1, "rightleg", 1, "rightlegroll", 1, "rightfoot", 1, "RightToeBase", 1};
		headDefault[] = {"head", 1, "neck1", 0.5, "neck", 0.5};
		leaningDefault[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.95, "spine2", 0.9, "spine1", 0.8, "spine", 0.7, "pelvis", 0.4};
		aimingUpDefault[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.95, "spine2", 0.9, "spine1", 0.8, "spine", 0.7};
		aimingUpLying[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.9, "spine2", 0.7, "spine1", 0.5};
		aimingUpPistol[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.95, "spine2", 0.9, "spine1", 0.8, "spine", 0.7};
		aimingUpCivil[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.95, "spine2", 0.9, "spine1", 0.8, "spine", 0.7};
		aimingUpLauncher[] = {"weapon", 1, "Camera", 1, "launcher", 1, "Head", 1, "Neck", 1, "Neck1", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "spine3", 0.95, "spine2", 0.9, "spine1", 0.8, "spine", 0.7};
		legsDefault[] = {"LeftUpLeg", 0.9, "LeftUpLegRoll", 0.9, "LeftLeg", 0.95, "LeftLegRoll", 0.95, "LeftFoot", 1, "LeftToeBase", 1, "RightUpLeg", 0.9, "RightUpLegRoll", 0.9, "RightLeg", 0.95, "RightLegRoll", 0.95, "RightFoot", 1, "RightToeBase", 1};
		empty[] = {};
	};
};