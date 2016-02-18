class CfgMovesBasic
{
	class Default
	{
		duty = StandDuty;
	};
	
	class HealBase : Default
	{
		duty = WalkDuty;
	};
	
	class HealBaseRfl;
	class StandBase;
	class DefaultDie;
	class AgonyBase;
	class AgonyBaseRfl;
	class InjuredMovedBase;
	class BlendAnims;
	
	class Actions
	{
		class NoActions;
		class RifleBaseStandActions;
		class RifleStandActions;
		class RifleLowStandActions;
		class CivilStandActions;
		class LadderCivilActions;
		class PistolStandActions;
		
		class RifleKneelActions : RifleBaseStandActions
		{
			turnSpeed = 6;
			Civil = "AmovPknlMstpSnonWnonDnon";
		};
		
		class RifleProneActions : RifleBaseStandActions
		{
			turnSpeed = 4;
		};
		
		/*class PistolStandActions : NoActions
		{
			//Stand = "AmovPercMstpSrasWpstDnon";
			Stand = "AmovPercMstpSlowWpstDnon";
		};*/
		
		class PistolKneelActions : PistolStandActions
		{
			//fastF = "AmovPknlMrunSrasWpstDf";
			//fastLF = "AmovPknlMrunSrasWpstDfl";
			//fastRF = "AmovPknlMrunSrasWpstDfr";
			fastF = "AmovPercMevaSrasWpstDf";
			fastLF = "AmovPercMevaSrasWpstDfl";
			fastRF = "AmovPercMevaSrasWpstDfr";
			
			turnSpeed = 6;
		};
		
		class PistolProneActions : PistolStandActions
		{
			turnSpeed = 4;
			Gear = "";
			Civil = "AmovPpneMstpSnonWnonDnon";
		};
		
		class CivilEvasiveActions : CivilStandActions
		{
			getOver = "BunnyhopUnarmed";
		};
		
		class CivilRunActions : CivilStandActions
		{
			Die = "CzmbAdthPercMrunSnonWnonDf";
		};
		
		class CivilRunActionsF : CivilRunActions
		{
			getOver = "BunnyhopUnarmed";
		};
		
		class CivilWlkActionsF : CivilRunActionsF
		{
			Die = "ZombieWalkingDeath";
		};
		
		class CivilKneelActions : CivilStandActions
		{
			turnSpeed = 6;
			weaponOn = "AmovPknlMstpSrasWrflDnon";
		};
		
		class CivilProneActions : CivilStandActions
		{
			turnSpeed = 4;
		};
		
		class LauncherKneelActions : NoActions
		{
			turnSpeed = 6;
		};
		
		class LadderRifleActions : LadderCivilActions
		{
			//ladderOff = "AmovPercMstpSrasWrflDnon";
			ladderOff = "AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon";
		};
		
		class RifleStandEvasiveActions : RifleStandActions
		{
			getOver = "BunnyhopRifle";
		};
		
		class RifleStandActionsRunF : RifleStandActions
		{
			getOver = "BunnyhopRifle";
		};
		
		class RifleLowStandActionsRunF : RifleLowStandActions
		{
			getOver = "BunnyhopRifle";
		};
		
		/*class PistolStandEvasiveActions : PistolStandActions
		{
			getOver = "BunnyhopPistol";
		};
		
		class PistolStandActionsRunF : PistolStandActions
		{
			getOver = "BunnyhopPistol";
		};*/
		
		/*class PistolStandActionsWlkF : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkFL : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkL : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkBL : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkB : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkBR : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkR : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};
		
		class PistolStandActionsWlkFR : PistolStandActionsRunF
		{
			getOver = "AovrPercMstpSrasWpstDf";
		};*/
	};
};