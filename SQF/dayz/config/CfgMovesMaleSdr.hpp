//	//\tspeed = (\d+(?:\.\d+)?(?: \* \d+(?:\.\d+)?)?);\r?\n\t\t\tspeed = (\d+(?:\.\d+)?);
// 	//\tspeed = $1; //OA 1.63\r\n\t\t//\tspeed = $2; //Dayz original

//	A(mov|idl|ldr|rop|par|obs|crg|inj|cin|dth|inv|cts|swm|sig|wop|ddg)P(erc|knl|pne|sit|fal)M(stp|wlk|run|spr|len|trn|jmp|wtl|uwt|mnt|dnt|crg|eva)S(non|ras|low|opt|sur|sig|pat|lay|car|obk|rld|gth|grl)W(non|pst|rfl|lnr)D(non|f|b|l|r|fl|fr|bl|br|up|dn)
//	A$1P$2M$3S$4W$5D$6

//	\.([1-9]+)0+([^0-9\.])
//	\.$1$2

//	\.0+([^0-9])
//	$1

class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class TransAnimBase;
		class TransAnimBase_noIK;
		class SprintBaseDf;
		class SprintBaseDfl;
		class SprintBaseDfr;
		class SprintCivilBaseDf;
		class SprintCivilBaseDfl;
		class SprintCivilBaseDfr;
		class CutSceneAnimationBase;
		class CutSceneAnimationBaseSit;
		class CutSceneAnimationBaseZoZo;
		class DraggerBaseNon;
		class DraggerBaseRfl;
		class ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead;
		
		class AinvPknlMstpSnonWnonDnon_medic : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medicEnd : AinvPknlMstpSnonWnonDnon_medic
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medicEnd : HealBaseRfl
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic0S : AinvPknlMstpSnonWnonDnon_medic
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic0 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic1 : AinvPknlMstpSnonWnonDnon_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic2 : AinvPknlMstpSnonWnonDnon_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic3 : AinvPknlMstpSnonWnonDnon_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic3 : AinvPknlMstpSnonWnonDnon_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic4 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic5 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic4 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic5 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic0S : AinvPknlMstpSnonWnonDnon_medic
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic0 : HealBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic1 : AinvPknlMstpSnonWnonDr_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDr_medic2 : AinvPknlMstpSnonWnonDr_medic0
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic : HealBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_AinvPknlMstpSnonWrflDnon_medic : HealBaseRfl
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic : HealBaseRfl
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic0S : AinvPknlMstpSnonWrflDnon_medic
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic0 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic1 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic2 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic3 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic4 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDr_medic5 : AinvPknlMstpSnonWrflDr_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic0S : AinvPknlMstpSnonWrflDnon_medic
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic0 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic1 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic2 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic3 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic4 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWrflDnon_medic5 : AinvPknlMstpSnonWrflDnon_medic0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_player_0S : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady01 : AidlPercMstpSlowWrflDnon_player_0S
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady02 : AmovPercMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_player_idleSteady03 : AmovPercMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_player_idleSteady04 : AmovPercMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AovrPercMstpSlowWrflDf : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_turnL : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_turnR : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_aiming0S : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_aiming01 : AidlPercMstpSrasWrflDnon_aiming0S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady01 : AidlPercMstpSrasWrflDnon_aiming01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady02 : AidlPercMstpSrasWrflDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady03 : AidlPercMstpSrasWrflDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady04 : AidlPercMstpSrasWrflDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_aiming02 : AidlPercMstpSrasWrflDnon_aiming01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AovrPercMstpSrasWrflDf : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_player_0S : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady01 : AidlPknlMstpSlowWrflDnon_player_0S
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady02 : AidlPknlMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady03 : AidlPknlMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_player_idleSteady04 : AidlPknlMstpSlowWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_gear : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_diary : AmovPknlMstpSlowWrflDnon_gear
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_gear : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_diary : AmovPknlMstpSrasWrflDnon_gear
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_gear : AmovPknlMstpSrasWrflDnon_gear
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_diary : AmovPercMstpSrasWrflDnon_gear
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_gear : AmovPercMstpSrasWrflDnon_gear
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_diary : AmovPercMstpSlowWrflDnon_gear
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon0S : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon01 : AidlPknlMstpSlowWrflDnon0S
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon03 : AidlPknlMstpSlowWrflDnon01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon02 : AidlPknlMstpSlowWrflDnon01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i01 : AidlPknlMstpSlowWrflDnon01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i02 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i03 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i04 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i05 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i06 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i07 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i08 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i09 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i10 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i11 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i12 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i13 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i14 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady01 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady02 : AidlPknlMstpSlowWrflDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady03 : AidlPknlMstpSlowWrflDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_idleSteady04 : AidlPknlMstpSlowWrflDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWrflDnon_i15 : AidlPknlMstpSlowWrflDnon_i01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDnon_transition : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_turnL : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_turnR : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_turnR : AmovPercMstpSrasWrflDnon_turnR
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_turnL : AmovPercMstpSrasWrflDnon_turnL
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_turnL : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_turnR : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon_player_0S : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady01 : AidlPknlMstpSrasWrflDnon_player_0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady03 : AidlPknlMstpSrasWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady02 : AidlPknlMstpSrasWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon_player_idleSteady04 : AidlPknlMstpSrasWrflDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMrunSlowWrflDf : AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDnon_transition : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_turnL : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_turnR : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWlnrDnon_1 : DefaultDie
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMstpSrasWlnrDnon_2 : AdthPercMstpSrasWlnrDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_injured : AgonyBaseRfl
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_injuredHealed : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_turnL : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_turnR : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWpstDnon : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_player_0S : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady01 : AidlPercMstpSrasWpstDnon_player_0S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady02 : AidlPercMstpSrasWpstDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_player_idleSteady03 : AidlPercMstpSrasWpstDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPercMstpSlowWpstDnon_player_0S : AmovPercMstpSlowWpstDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady01 : AidlPercMstpSlowWpstDnon_player_0S
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady02 : AidlPercMstpSlowWpstDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPercMstpSlowWpstDnon_player_idleSteady03 : AidlPercMstpSlowWpstDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AovrPercMstpSlowWpstDf : AmovPercMstpSlowWpstDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDnon_transition : AmovPercMstpSlowWpstDnon
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AovrPercMstpSrasWpstDf : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon : AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_turnL : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_turnR : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDf : AmovPknlMstpSlowWpstDnon
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDf : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDfl : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDl : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDbl : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDb : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDbr : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDr : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMrunSlowWpstDfr : AmovPknlMrunSlowWpstDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDfl : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDl : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDbl : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDb : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDbr : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDr : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSlowWpstDfr : AmovPknlMwlkSlowWpstDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_player_0S : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady01 : AidlPknlMstpSrasWpstDnon_player_0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady02 : AidlPknlMstpSrasWpstDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_player_idleSteady03 : AidlPknlMstpSrasWpstDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_gear : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_gear : AmovPknlMstpSrasWpstDnon_gear
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon_gear : AmovPknlMstpSrasWpstDnon_gear
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDnon_transition : AmovPknlMstpSrasWpstDnon
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_turnL : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_turnR : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_turnL : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_turnR : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon : Default
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_S0 : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_0S : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady01 : AidlPknlMstpSrasWlnrDnon_player_0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady02 : AidlPknlMstpSrasWlnrDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_player_idleSteady03 : AidlPknlMstpSrasWlnrDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_turnL : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_turnR : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSnonWnonDnon : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_suicide1A : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_suicide2A : ActsPercMstpSnonWpstDnon_suicide1A
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_suicide1B : ActsPercMstpSnonWpstDnon_suicide1A
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_suicide2B : ActsPercMstpSnonWpstDnon_suicide1B
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_sekaniIn : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_sekani1 : AmovPercMstpSnonWnonDnon_sekaniIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_sekani2 : AmovPercMstpSnonWnonDnon_sekani1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_sekaniOut : AmovPercMstpSnonWnonDnon_sekaniIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player : AidlPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player_0S : AidlPercMstpSnonWnonDnon_player
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady01 : AidlPercMstpSnonWnonDnon_player_0S
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady02 : AidlPercMstpSnonWnonDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady03 : AidlPercMstpSnonWnonDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_player_idleSteady04 : AidlPercMstpSnonWnonDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDnon_transition : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AovrPercMstpSnonWnonDf : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_turnL : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_turnR : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_gear : AmovPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_gear_trans : AmovPknlMstpSnonWnonDnon_gear
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_gear : AmovPknlMstpSnonWnonDnon_gear
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_turnL : AmovPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_turnR : AmovPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_turnL : AmovPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_turnR : AmovPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSlowWrflDf : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMwlkSrasWrflDf : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDfl : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDl : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDbl : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDb : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDbr : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDr : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMwlkSlowWrflDfr : AmovPercMwlkSlowWrflDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.821918 * 0.8;
			speed = 0.821918;
		};
		
		class AidlPercMrunSrasWrflDf : AmovPercMrunSlowWrflDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDfl : AmovPercMrunSlowWrflDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.7 * 0.8;
			speed = 0.7;
		};
		
		class AmovPercMrunSlowWrflDl : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.769231 * 0.8;
			speed = 0.769231;
		};
		
		class AmovPercMrunSlowWrflDbl : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.882353 * 0.8;
			speed = 0.882353;
		};
		
		class AmovPercMrunSlowWrflDb : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.882353 * 0.8;
			speed = 0.882353;
		};
		
		class AmovPercMrunSlowWrflDbr : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.882353 * 0.8;
			speed = 0.882353;
		};
		
		class AmovPercMrunSlowWrflDr : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.857143 * 0.8;
			speed = 0.857143;
		};
		
		class AmovPercMrunSlowWrflDfr : AmovPercMrunSlowWrflDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.7 * 0.8;
			speed = 0.7;
		};
		
		class AmovPercMwlkSrasWrflDf : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDfl : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDl : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDbl : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDb : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDbr : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDr : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDfr : AmovPercMwlkSrasWrflDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDf : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.713771 * 0.9;
			speed = 0.713771;
		};
		
		class AmovPercMrunSrasWrflDfl : AmovPercMrunSrasWrflDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDl : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDbl : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.9;
			speed = 0.882353;
		};
		
		class AmovPercMrunSrasWrflDb : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.9;
			speed = 0.882353;
		};
		
		class AmovPercMrunSrasWrflDbr : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.9;
			speed = 0.882353;
		};
		
		class AmovPercMrunSrasWrflDr : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDfr : AmovPercMrunSrasWrflDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSnonWnonDf : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDfl : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDl : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDbl : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDb : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDbr : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDr : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMwlkSnonWnonDfr : AmovPercMwlkSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDf : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDfl : AmovPercMrunSnonWnonDf
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDl : AmovPercMrunSnonWnonDfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDbl : AmovPercMrunSnonWnonDl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDb : AmovPercMrunSnonWnonDl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDbr : AmovPercMrunSnonWnonDl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDr : AmovPercMrunSnonWnonDl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDfr : AmovPercMrunSnonWnonDl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSlowWrflDf : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDfl : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDl : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDbl : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDb : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDbr : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDr : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSlowWrflDfr : AmovPknlMwlkSlowWrflDf
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMrunSlowWrflDf : AmovPknlMstpSlowWrflDnon
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.857143 * 0.88;
			speed = 0.857143;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMrunSlowWrflDf : AmovPknlMrunSlowWrflDf
		{
			duty = transDuty + PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMrunSlowWrflDfl : AmovPknlMrunSlowWrflDf
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.857143 * 0.88;
			speed = 0.857143;
		};
		
		class AmovPknlMrunSlowWrflDl : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.833333 * 0.88;
			speed = 0.833333;
		};
		
		class AmovPknlMrunSlowWrflDbl : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 1 * 0.88;
			speed = 1;
		};
		
		class AmovPknlMrunSlowWrflDb : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 1 * 0.88;
			speed = 1;
		};
		
		class AmovPknlMrunSlowWrflDbr : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 1 * 0.88;
			speed = 1;
		};
		
		class AmovPknlMrunSlowWrflDr : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.857143 * 0.88;
			speed = 0.857143;
		};
		
		class AmovPknlMrunSlowWrflDfr : AmovPknlMrunSlowWrflDfl
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WrflDuty;
		//	speed = 0.857143 * 0.88;
			speed = 0.857143;
		};
		
		class AmovPknlMwlkSrasWrflDf : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDfl : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDl : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDbl : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDb : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDbr : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDr : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMwlkSrasWrflDfr : AmovPknlMwlkSrasWrflDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDf : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDfl : AmovPknlMrunSrasWrflDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.821918 * 0.88;
			speed = 0.821918;
		};
		
		class AmovPknlMrunSrasWrflDl : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDbl : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.88;
			speed = 0.882353;
		};
		
		class AmovPknlMrunSrasWrflDb : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.88;
			speed = 0.882353;
		};
		
		class AmovPknlMrunSrasWrflDbr : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.882353 * 0.88;
			speed = 0.882353;
		};
		
		class AmovPknlMrunSrasWrflDr : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDfr : AmovPknlMrunSrasWrflDfl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		//	speed = 0.821918 * 0.88;
			speed = 0.821918;
		};
		
		class AmovPercMwlkSrasWpstDf : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDfl : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDl : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDbl : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDb : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDbr : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDr : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDfr : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDf : AmovPercMwlkSrasWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDfl : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDl : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDbl : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDb : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDbr : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDr : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMwlkSlowWpstDfr : AmovPercMwlkSlowWpstDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDf : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDf : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDfl : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDfl : AmovPercMrunSrasWpstDfl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDl : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDl : AmovPercMrunSrasWpstDl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDbl : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDbl : AmovPercMrunSrasWpstDbl
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDb : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDb : AmovPercMrunSrasWpstDb
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDbr : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDbr : AmovPercMrunSrasWpstDbr
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDr : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDr : AmovPercMrunSrasWpstDr
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMrunSrasWpstDfr : AmovPercMrunSrasWpstDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDfr : AmovPercMrunSrasWpstDfr
		{
			duty = PercDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDf : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDfl : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDl : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDbl : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDb : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDbr : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDr : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMwlkSrasWpstDfr : AmovPknlMwlkSrasWpstDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDf : AmovPercMrunSlowWpstDnon_transition
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMrunSrasWpstDf : AmovPknlMrunSrasWpstDf
		{
			duty = transDuty + PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPknlMrunSrasWpstDf : AmovPknlMrunSrasWpstDf
		{
			duty = transDuty + PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDfl : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDl : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDbl : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDb : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDbr : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDr : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMrunSrasWpstDfr : AmovPknlMrunSrasWpstDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWlnrDf : AmovPknlMstpSrasWlnrDnon
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDf : AmovPercMrunSlowWlnrDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 0.857143 * 0.75;
			speed = 0.857143;
		};
		
		class AmovPercMrunSlowWlnrDfl : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDfl : AmovPercMrunSlowWlnrDf
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSlowWlnrDl : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDl : AmovPercMrunSlowWlnrDl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSlowWlnrDbl : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDbl : AmovPercMrunSlowWlnrDbl
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 1 * 0.75;
			speed = 1;
		};
		
		class AmovPercMrunSlowWlnrDb : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDb : AmovPercMrunSlowWlnrDb
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 1 * 0.75;
			speed = 1;
		};
		
		class AmovPercMrunSlowWlnrDbr : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDbr : AmovPercMrunSlowWlnrDbr
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 1 * 0.75;
			speed = 1;
		};
		
		class AmovPercMrunSlowWlnrDr : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDr : AmovPercMrunSlowWlnrDr
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 0.857143 * 0.75;
			speed = 0.857143;
		};
		
		class AmovPercMrunSlowWlnrDfr : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSrasWlnrDfr : AmovPercMrunSlowWlnrDfr
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WlnrDuty;
		//	speed = 0.857143 * 0.75;
			speed = 0.857143;
		};
		
		class AmovPercMevaSlowWlnrDf : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MevaDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMevaSlowWlnrDfr : AmovPercMevaSlowWlnrDf
		{
			duty = PercDuty + MevaDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMevaSlowWlnrDfl : AmovPercMevaSlowWlnrDf
		{
			duty = PercDuty + MevaDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDf : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDfl : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDl : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDbl : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDb : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDbr : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDr : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDfr : AmovPknlMwlkSrasWlnrDf
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMrunSnonWnonDf : AmovPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDf : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDbr : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDbl : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDb : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDl : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDr : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDfr : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSnonWnonDfl : AmovPknlMwlkSnonWnonDf
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMrunSnonWnonDf : AmovPknlMrunSnonWnonDf
		{
			duty = transDuty + PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDfl : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDl : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDbl : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDb : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDbr : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDr : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSnonWnonDfr : AmovPknlMrunSnonWnonDf
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSlowWrflDf : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDfl : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDl : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDbl : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDb : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDbr : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDr : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWrflDfr : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDf : AmovPpneMrunSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDbl : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDl : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDr : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDbr : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDb : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDf_injured : AmovPpneMstpSrasWrflDnon_injured
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDfl : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDfr : AmovPpneMsprSlowWrflDf
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMrunSlowWpstDf : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDfl : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDl : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDbl : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDb : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDbr : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDr : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSlowWpstDfr : AmovPpneMrunSlowWpstDf
		{
			duty = PpneDuty + MrunDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMrunSnonWnonDf : AmovPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDfl : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDl : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDbl : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDb : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDbr : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDr : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMrunSnonWnonDfr : AmovPpneMrunSnonWnonDf
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		class AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 2;
			speed = 1;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon_end : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 4;
			speed = 2;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WpstDuty;
		//	speed = 4;
			speed = 2;
		};
		
		class AmovPercMstpSlowWlnrDnon_AmovPercMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSlowWlnrDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWrflDnon : TransAnimBase_noIK
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.4;
			speed = 0.3;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon : TransAnimBase_noIK
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		//	soundOverride = "walk";
			soundOverride = "laydown";
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.5;
			speed = 1.2;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon : AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		//	speed = 1.5;
			speed = 1;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.75;
			speed = 0.6;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		//	speed = 2.5;
			speed = 1.6;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 2.4;
			speed = 1.5;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMstpSrasWrflDnon : AmovPknlMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon_2 : AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.6;
			speed = 1.15;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon : AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.75;
			speed = 0.6;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMsprSrasWrflDf : TransAnimBase
		{
			duty = transDuty + PknlDuty + MsprDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPercMsprSrasWrflDf_2 : AmovPknlMstpSrasWrflDnon_AmovPknlMsprSrasWrflDf
		{
			duty = transDuty + PercDuty + MsprDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.625;
			speed = 0.5;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf : TransAnimBase
		{
			duty = transDuty + PercDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf_2 : AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf
		{
			duty = transDuty + PercDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon : AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		//	speed = 1.35;
			speed = 0.95;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.75;
			speed = 0.6;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 2.2;
			speed = 1.8;
		};
		
		class AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon_2 : AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.6664;
			speed = 0.8;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.75;
			speed = 1.2;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf : TransAnimBase
		{
			duty = transDuty + PercDuty + MsprDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf_2 : AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf
		{
			duty = transDuty + PercDuty + MsprDuty + SrasDuty + WpstDuty;
		//	actions = "PistolKneelActions";
			actions = "PistolRunFActions";
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.7625;
			speed = 0.61;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.625;
			speed = 0.5;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.8113;
			speed = 0.61;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf : TransAnimBase
		{
			duty = transDuty + PercDuty + MsprDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf_2 : AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf
		{
			duty = transDuty + PercDuty + MsprDuty + SlowDuty + WpstDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle : TransAnimBase_noIK
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non : AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr : TransAnimBase_noIK
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle : TransAnimBase_noIK
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr : AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non : AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non : AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle : TransAnimBase_noIK
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_lnr : AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_lnr : AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_non : AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_rifle
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst : TransAnimBase_noIK
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst : TransAnimBase_noIK
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_pst : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_pst : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPknlMstpSoptWbinDnon_pst : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AwopPpneMstpSoptWbinDnon_non : TransAnimBase_noIK
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AwopPercMstpSoptWbinDnon_non : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 1; //OA 1.63
		//	speed = 0.769231; //Dayz original
			speed = 1.1;
		};
		
		class AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon_2 : AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.65; //OA 1.63
		//	speed = 0.483871; //Dayz original
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.75; //OA 1.63
		//	speed = 0.652174; //Dayz original
			speed = 0.85;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf : TransAnimBase
		{
			duty = transDuty + PercDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2 : AmovPknlMstpSnonWnonDnon_AmovPercMsprSnonWnonDf
		{
			duty = transDuty + PercDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.85; //OA 1.63
		//	speed = 0.588235; //Dayz original
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.6;
			speed = 0.4;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.6;
			speed = 0.447761;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf : TransAnimBase
		{
			duty = transDuty + PercDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf_2 : AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf
		{
			duty = transDuty + PercDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1;
			speed = 0.8;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 2.4;
			speed = 1.8;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1;
			speed = 0.78;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 2.4;
			speed = 1.6;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.75;
			speed = 0.65;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end : AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.6;
			speed = 1.3;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		//	speed = 0.4;
			speed = 0.32;
		};
		
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon : TransAnimBase_noIK
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1;
			speed = 0.7;
		};
		
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1;
			speed = 0.76;
		};
		
		class AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.1;
			speed = 0.94;
		};
		
		class AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon_end : AmovPknlMstpSrasWrflDnon_AwopPknlMstpSoptWbinDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 2;
			speed = 1.56;
		};
		
		class AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 0.825;
			speed = 0.66;
		};
		
		class AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.2;
			speed = 0.92;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.6;
			speed = 0.39;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.5;
			speed = 0.35;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 2.4;
			speed = 1.8;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end : AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1;
			speed = 0.78;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 2.4;
			speed = 1.7;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.8;
			speed = 0.72;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.7;
			speed = 1.3;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.8;
			speed = 0.65;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end : AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.5;
			speed = 1.15;
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1;
			speed = 0.7;
		};
		
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_mid
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.5;
			speed = 1.15;
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.2;
			speed = 0.85;
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid : AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.2;
			speed = 0.86;
		};
		
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end : AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_mid
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1.5;
			speed = 1.25;
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1;
			speed = 0.75;
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid : AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 0.8;
			speed = 0.59;
		};
		
		class AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon_mid
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		//	speed = 1;
			speed = 0.83;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		//	actions = "CivilStandActions";
			actions = "PistolSitActions";
		//	speed = 1.27;
			speed = 1.09;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end : AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		//	actions = "CivilStandActions";
			actions = "PistolSitActions";
		//	speed = 1;
			speed = 0.65;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 1.1;
			speed = 0.86;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon_end : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 1.1;
			speed = 0.87;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.4;
			speed = 0.32;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon_End : AmovPknlMstpSrasWlnrDnon_AwopPknlMstpSoptWbinDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.4;
			speed = 0.33;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon : AmovPknlMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		//	speed = 0.38;
			speed = 0.229008;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon : TransAnimBase_noIK
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1;
			speed = 0.72;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.125;
			speed = 0.9;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.15;
			speed = 0.92;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.375;
			speed = 1.1;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 1.15;
			speed = 0.92;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWrflDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.825;
			speed = 0.66;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.15;
			speed = 0.95;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.75;
			speed = 0.48;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_mid
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 2.2;
			speed = 1.71;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.4;
			speed = 1.16;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.1;
			speed = 0.89;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_mid
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.1;
			speed = 0.85;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1;
			speed = 0.8;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 0.75;
			speed = 0.46;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSrasWpstDnon_mid
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1;
			speed = 0.86;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon_end : AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWlnrDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_mid : AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end : AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.6;
			speed = 0.4;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		//	speed = 0.5;
			speed = 0.35;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	soundEnabled = "true";
			soundEnabled = 1;
			walkcycles = 2;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 2;
			speed = 1.64;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.1;
			speed = 0.86;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon_end : AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		//	speed = 1.1;
			speed = 0.87;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		//	speed = 0.5;
			speed = 0.34;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon : AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon : AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		//	speed = 0.4;
			speed = 0.31;
		};
		
		class AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_mid : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end : AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon_end
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon : TransAnimBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon_end : AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMevaSrasWrflDf : SprintBaseDf
		{
			duty = PercDuty + MevaDuty + SrasDuty + WrflDuty;
			
			InterpolateTo[] =
			{
				"BunnyhopRifle",0.02,
				"AmovPercMstpSrasWrflDnon",0.02,
				"AmovPercMrunSlowWrflDf",0.025,
				"AmovPercMwlkSrasWrflDf",0.025,
				"AmovPercMrunSrasWrflDf",0.025,
				"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,
				"AmovPknlMevaSrasWrflDf",0.025,
				"AmovPercMevaSlowWrflDf",0.025,
				"AmovPercMevaSrasWrflDfl",0.025,
				"AmovPercMevaSrasWrflDfr",0.025,
				"AdthPercMrunSlowWrflDf_6",0.01,
				"AdthPercMrunSlowWrflDf_A1short",0.01,
				"AdthPercMrunSlowWrflDf_A2short",0.01,
				"AdthPercMrunSlowWrflDf_A3short",0.01,
				"AdthPercMrunSlowWrflDf_A4short",0.01
			};
		};
		
		class AmovPknlMevaSrasWrflDf : AmovPercMevaSrasWrflDf
		{
			duty = PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMevaSlowWrflDf : AmovPercMevaSrasWrflDf
		{
			duty = PercDuty + MevaDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMevaSrasWrflDf : AmovPercMevaSlowWrflDf
		{
			duty = PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMwlkSrasWrflDb : AmovPercMwlkSlowWrflDb
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMevaSrasWrflDfl : SprintBaseDfl
		{
			duty = PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMevaSrasWrflDfl : AmovPercMevaSrasWrflDfl
		{
			duty = PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMevaSlowWrflDfl : AmovPercMevaSrasWrflDfl
		{
			duty = PercDuty + MevaDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMevaSrasWrflDfr : SprintBaseDfr
		{
			duty = PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMevaSrasWrflDfr : AmovPercMevaSrasWrflDfr
		{
			duty = PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMevaSlowWrflDfr : AmovPercMevaSrasWrflDfr
		{
			duty = PercDuty + MevaDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDl : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDl : AmovPercMrunSrasWrflDf
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDr : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDr : AmovPercMrunSrasWrflDf
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMevaSrasWrflDb : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb : AmovPercMrunSrasWrflDf
		{
			duty = transDuty + PercDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDl : AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDr : AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMevaSrasWrflDb : AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl : AmovPpneMstpSrasWrflDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr : AmovPpneMstpSrasWrflDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMevaSrasWpstDf : SprintCivilBaseDf
		{
			duty = PercDuty + MevaDuty + SrasDuty + WpstDuty;
			
			InterpolateTo[] =
			{
				"BunnyhopPistol",0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",0.02,
				"AmovPercMstpSrasWpstDnon",0.02,
				"AmovPercMwlkSrasWpstDf",0.025,
				"AmovPercMrunSrasWpstDf",0.02,
				"AmovPercMevaSrasWpstDfl",0.02,
				"AmovPercMevaSrasWpstDfr",0.02
			};
		};
		
		class AmovPercMevaSlowWpstDf : AmovPercMevaSrasWpstDf
		{
			duty = PercDuty + MevaDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMevaSrasWpstDfl : SprintCivilBaseDfl
		{
			duty = PercDuty + MevaDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMevaSlowWpstDfl : AmovPercMevaSrasWpstDfl
		{
			duty = PercDuty + MevaDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMevaSrasWpstDfr : SprintCivilBaseDfr
		{
			duty = PercDuty + MevaDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMevaSlowWpstDfr : AmovPercMevaSrasWpstDfr
		{
			duty = PercDuty + MevaDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl : AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr : AmovPpneMstpSrasWpstDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMevaSnonWnonDf : SprintCivilBaseDf
		{
			duty = PercDuty + MevaDuty + SnonDuty + WnonDuty;
			
			InterpolateTo[] =
			{
				"BunnyhopUnarmed",0.02,
				"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,
				"AmovPercMrunSnonWnonDf",0.02,
				"AmovPercMstpSnonWnonDnon",0.02,
				"AmovPercMwlkSnonWnonDf",0.025,
				"AmovPercMevaSnonWnonDfl",0.02,
				"AmovPercMevaSnonWnonDfr",0.02
			};
		};
		
		class AmovPercMevaSnonWnonDfl : SprintCivilBaseDfl
		{
			duty = PercDuty + MevaDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMevaSnonWnonDfr : SprintCivilBaseDfr
		{
			duty = PercDuty + MevaDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl : AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr : AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MevaDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_1 : DefaultDie
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_2 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_4 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_8 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDb_8 : AdthPercMstpSlowWrflDnon_8
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDf_2 : AdthPercMstpSlowWrflDf_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDf_4 : AdthPercMstpSlowWrflDf_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_6 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_2 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_4 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_8 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_rS0 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_rS0 : AdthPercMstpSrasWrflDnon_rS0
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r05 : AdthPercMstpSrasWrflDnon_rS0
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r05 : AdthPercMstpSlowWrflDnon_rS0
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r06 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r06 : AdthPercMstpSlowWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r07 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r07 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r08 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r08 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r09 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r09 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r10 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r10 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r12 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r12 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_r13 : AdthPercMstpSrasWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_r13 : AdthPercMstpSlowWrflDnon_r06
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A1short : AdthPercMstpSlowWrflDnon_r13
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A2short : AdthPercMrunSlowWrflDf_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A3short : AdthPercMrunSlowWrflDf_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A4short : AdthPercMrunSlowWrflDf_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A1short : AdthPercMrunSlowWrflDf_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A1short : AdthPercMrunSlowWrflDfl_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A2short : AdthPercMrunSlowWrflDfr_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A3short : AdthPercMrunSlowWrflDfr_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A4short : AdthPercMrunSlowWrflDfr_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A2short : AdthPercMrunSlowWrflDfl_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A3short : AdthPercMrunSlowWrflDfl_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A4short : AdthPercMrunSlowWrflDfl_A1short
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfl_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDfr_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMrunSlowWrflDf_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMstpSlowWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_A5 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_A5 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSrasWbinDnon_A1_patrolRfl : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WbinDuty;
		};
		
		class AdthPercMstpSrasWbinDnon_A2_patrolRfl : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WbinDuty;
		};
		
		class AdthPercMstpSrasWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMstpSrasWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_A5 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSlowWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSlowWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSlowWlnrDnon_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSlowWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPknlMstpSlowWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPknlMstpSlowWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSrasWlnrDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWlnrDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWlnrDnon_A4 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_A3 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_A1 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_A2 : AdthPercMstpSrasWrflDnon_r05
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDf_2 : AdthPercMstpSrasWrflDf_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDf_4 : AdthPercMstpSrasWrflDf_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDb_8 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_2 : AdthPknlMstpSrasWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMwlkSrasWrflDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMwlkSrasWrflDf_2 : AdthPknlMwlkSrasWrflDf_1
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlayWrflDnon_inventory : DefaultDie
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlayWrflDnon_inventoryAgony : AdthPknlMstpSlayWrflDnon_inventory
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AdthPpneMstpSrasWrflDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPpneMstpSrasWrflDnon_2 : AdthPpneMstpSrasWrflDnon_1
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPpneMstpSlowWrflDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PpneDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPpneMstpSlowWrflDf_2 : AdthPpneMstpSlowWrflDf_1
		{
			duty = PpneDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_3 : AdthPercMstpSrasWpstDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDnon_5 : AdthPercMstpSrasWpstDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDf_2 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDf_6 : AdthPercMstpSrasWpstDf_2
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDf_7 : AdthPercMstpSrasWpstDf_2
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDb_8 : AdthPercMstpSrasWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSrasWpstDb_9 : AdthPercMstpSrasWpstDb_8
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_2 : AdthPknlMstpSrasWpstDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_4 : AdthPknlMstpSrasWpstDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDnon_6 : AdthPknlMstpSrasWpstDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPknlMstpSrasWpstDb_5 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPpneMstpSrasWpstDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPpneMstpSrasWpstDnon_2 : AdthPpneMstpSrasWpstDnon_1
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWlnrDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMstpSlowWlnrDnon_2 : AdthPercMstpSlowWlnrDnon_1
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMrunSlowWlnrDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMrunSlowWlnrDf_2 : AdthPercMrunSlowWlnrDf_1
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMrunSlowWlnrDb_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWlnrDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWlnrDnon_2 : AdthPknlMstpSrasWlnrDnon_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMwlkSrasWlnrDf_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMwlkSrasWlnrDf_2 : AdthPknlMwlkSrasWlnrDf_1
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_binocular : DefaultDie
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_carrier : DefaultDie
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDf_carrier : AdthPercMstpSlowWrflDnon_carrier
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPpneMstpSlowWrflDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PpneDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSnonWnonDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSlowWlnrDnon_binocular : AdthPercMstpSlowWrflDnon_binocular
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_1 : AdthPercMstpSlowWrflDnon_1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_2 : AdthPercMstpSnonWnonDnon_1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_3 : AdthPercMstpSnonWnonDnon_1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_1 : AdthPknlMstpSrasWrflDnon_1
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_2 : AdthPknlMstpSnonWnonDnon_1
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_inventory : DefaultDie
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_inventoryAgony : AdthPknlMstpSnonWnonDnon_inventory
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSnonWnonDnon : AdthPercMstpSlowWrflDnon_1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPswmMstpSnonWnonDnon : AdthPercMstpSlowWrflDnon_1
		{
			duty = PswmDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPswmMrunSnonWnonDf : AdthPercMstpSlowWrflDnon_1
		{
			duty = PswmDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPsitMstpSlowWrflDnon : AdthPercMstpSlowWrflDnon_1
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_varStayLeant : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_varSittingOnTheWall : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_varSittingDrinking : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_JumpFromWall : CutSceneAnimationBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWrflDnon_varSittingDrinking : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured01 : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured02 : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_Tortured03 : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWrflDnon_Interrogate01 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class ActsPercMstpSnonWrflDnon_Interrogate02 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class ActsPsitMstpSnonWnonDnon_InterrogateLeaves : CutSceneAnimationBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_Scared : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_Scared2 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_ScaredTalking : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckPush : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckWash : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_carCheckWheel : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_exerciseKata : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_DancingDuoIvan : AmovPercMstpSnonWnonDnon_exerciseKata
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_DancingDuoStefan : ActsPercMstpSnonWnonDnon_DancingDuoIvan
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_DancingStefan : ActsPercMstpSnonWnonDnon_DancingDuoIvan
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_exercisekneeBendA : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_exercisekneeBendB : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_exercisePushup : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_seeWatch : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_talking : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_talking : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_seeWatch : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakPistol02 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakPistol01 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardak01 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardak02 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_normalizationTest : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_SaluteIn : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_SaluteIn : AmovPercMstpSlowWrflDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_Salute : AmovPercMstpSlowWrflDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_Salute : AmovPercMstpSlowWrflDnon_Salute
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_SaluteOut : AmovPercMstpSlowWrflDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_SaluteOut : AmovPercMstpSlowWrflDnon_SaluteOut
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_SaluteIn : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_Salute : AmovPercMstpSrasWrflDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_SaluteOut : AmovPercMstpSrasWrflDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteIn : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteIn_end : AmovPercMstpSrasWpstDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_Salute : AmovPercMstpSrasWpstDnon_SaluteIn_end
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteOut : AmovPercMstpSrasWpstDnon_SaluteIn_end
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_SaluteOut_end : AmovPercMstpSrasWpstDnon_SaluteOut
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_SaluteIn : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_Salute : AmovPercMstpSnonWnonDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_SaluteOut : AmovPercMstpSnonWnonDnon_SaluteIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_EaseIn : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_Ease : AmovPercMstpSnonWnonDnon_EaseIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_EaseOut : AmovPercMstpSnonWnonDnon_EaseIn
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon_trans : AmovPsitMstpSlowWrflDnon
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon_WeaponCheck1 : AmovPsitMstpSlowWrflDnon
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon_WeaponCheck2 : AmovPsitMstpSlowWrflDnon_WeaponCheck1
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon_Smoking : AmovPsitMstpSlowWrflDnon_WeaponCheck1
		{
			duty = PsitDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon : AmovPsitMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon
		{
			duty = PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon_trans : AmovPsitMstpSrasWrflDnon
		{
			duty = PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon_WeaponCheck1 : AmovPsitMstpSrasWrflDnon
		{
			duty = PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon_WeaponCheck2 : AmovPsitMstpSrasWrflDnon_WeaponCheck1
		{
			duty = PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon_Smoking : AmovPsitMstpSrasWrflDnon_WeaponCheck1
		{
			duty = PsitDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPsitMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon : AmovPsitMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground : AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PsitDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPsitMstpSnonWpstDnon_ground : AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPsitMstpSnonWpstDnon_smoking_trans : AmovPsitMstpSnonWpstDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPsitMstpSnonWpstDnon_smoking : AmovPsitMstpSnonWpstDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground : AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground : CutSceneAnimationBase
		{
			duty = transDuty + PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground : AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPsitMstpSnonWnonDnon_ground : AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPsitMstpSnonWnonDnon_smoking_trans : AmovPsitMstpSnonWnonDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPsitMstpSnonWnonDnon_smoking : AmovPsitMstpSnonWnonDnon_ground
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground : AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon : CutSceneAnimationBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSsurWnonDnon : AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
		{
			duty = PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMstpSgthWrflDnon_Start1 : Default
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 0.6;
			speed = 0.51;
		};
		
		class AwopPercMstpSgthWrflDnon_Throw1 : AwopPercMstpSgthWrflDnon_Start1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 2.7;
			speed = 2.31;
		};
		
		class AwopPercMstpSgthWrflDnon_End1 : AwopPercMstpSgthWrflDnon_Start1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 0.6;
			speed = 0.53;
		};
		
		class AwopPercMstpSgthWrflDnon_Start2 : AwopPercMstpSgthWrflDnon_Start1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		};
		
		class AwopPercMstpSgthWrflDnon_Throw2 : AwopPercMstpSgthWrflDnon_Throw1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		};
		
		class AwopPercMstpSgthWrflDnon_End2 : AwopPercMstpSgthWrflDnon_End1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart : Default
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	actions = "RifleLowStandActionsRunF";
			actions = "RifleLowStandActions";
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow : AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthEnd : AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthThrow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart : Default
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		//	actions = "RifleStandActionsWlkF";
			actions = "RifleStandActions";
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow : AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthStart
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthEnd : AmovPercMwlkSrasWrflDf_AmovPercMstpSrasWrflDnon_gthThrow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AwopPknlMstpSgthWrflDnon_Start : Default
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 0.6;
			speed = 0.5;
		};
		
		class AwopPknlMstpSgthWrflDnon_Throw : AwopPknlMstpSgthWrflDnon_Start
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 3.6;
			speed = 3.33;
		};
		
		class AwopPknlMstpSgthWrflDnon_End : AwopPknlMstpSgthWrflDnon_Start
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 1;
			speed = 0.8;
		};
		
		class AwopPpneMstpSgthWrflDnon_Start : Default
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 0.7;
			speed = 0.55;
		};
		
		class AwopPpneMstpSgthWrflDnon_Throw : AwopPpneMstpSgthWrflDnon_Start
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 3.75;
			speed = 3;
		};
		
		class AwopPpneMstpSgthWrflDnon_End : AwopPpneMstpSgthWrflDnon_Start
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WrflDuty;
		//	speed = 1.75;
			speed = 1.36;
		};
		
		class AwopPercMstpSgthWpstDnon_Part1 : Default
		{
			duty = PercDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPercMstpSgthWpstDnon_Part2 : AwopPercMstpSgthWpstDnon_Part1
		{
			duty = PercDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPercMstpSgthWpstDnon_Part3 : AwopPercMstpSgthWpstDnon_Part2
		{
			duty = PercDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 1.5;
			speed = 1.32;
		};
		
		class AwopPercMstpSgthWpstDnon_Part4 : AwopPercMstpSgthWpstDnon_Part3
		{
			duty = PercDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPercMstpSgthWpstDnon_Part5 : AwopPercMstpSgthWpstDnon_Part4
		{
			duty = PercDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 1.75;
			speed = 1.46;
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart : Default
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd : AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1 : Default
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart : Default
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd : AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AwopPknlMstpSgthWpstDnon_Part1 : Default
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPknlMstpSgthWpstDnon_Part2 : AwopPknlMstpSgthWpstDnon_Part1
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPknlMstpSgthWpstDnon_Part3 : AwopPknlMstpSgthWpstDnon_Part2
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 1.5;
			speed = 1.32;
		};
		
		class AwopPknlMstpSgthWpstDnon_Part4 : AwopPknlMstpSgthWpstDnon_Part3
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 0.645;
			speed = 0.43;
		};
		
		class AwopPknlMstpSgthWpstDnon_Part5 : AwopPknlMstpSgthWpstDnon_Part4
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 1.75;
			speed = 1.46;
		};
		
		class AwopPpneMstpSgthWpstDnon_Part1 : Default
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WpstDuty;
		//	actions = "PistolProneActions";
			actions = "PistolKneelActions";
		};
		
		class AwopPpneMstpSgthWpstDnon_Part2 : AwopPpneMstpSgthWpstDnon_Part1
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPpneMstpSgthWpstDnon_Part3 : AwopPpneMstpSgthWpstDnon_Part2
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 3.3;
			speed = 2.67;
		};
		
		class AwopPpneMstpSgthWpstDnon_Part4 : AwopPpneMstpSgthWpstDnon_Part3
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WpstDuty;
		};
		
		class AwopPpneMstpSgthWpstDnon_Part5 : AwopPpneMstpSgthWpstDnon_Part4
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WpstDuty;
		//	speed = 1;
			speed = 0.83;
		};
		
		class AwopPercMstpSgthWnonDnon_start : Default
		{
			duty = PercDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 1;
			speed = 0.8;
		};
		
		class AwopPercMstpSgthWnonDnon_throw : AwopPercMstpSgthWnonDnon_start
		{
			duty = PercDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 2.5;
			speed = 2;
		};
		
		class AwopPercMstpSgthWnonDnon_end : AwopPercMstpSgthWnonDnon_throw
		{
			duty = PercDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.75;
			speed = 0.65;
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart : Default
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow : AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd : AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthThrow
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPpneMstpSgthWnonDnon_start : Default
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.8;
			speed = 0.67;
		};
		
		class AwopPpneMstpSgthWnonDnon_throw : AwopPpneMstpSgthWnonDnon_start
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 2.5;
			speed = 2;
		};
		
		class AwopPpneMstpSgthWnonDnon_end : AwopPpneMstpSgthWnonDnon_throw
		{
			duty = PpneDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.6;
			speed = 0.45;
		};
		
		class LadderCivilStatic : StandBase
		{
			duty = MstpDuty + PknlDuty;
		};
		
		class LadderCivilOn : LadderCivilStatic
		{
		//	speed = 2;
			speed = 1.5;
		};
		
		class LadderCivilUpLoop : LadderCivilStatic
		{
		//	speed = 1.5;
			speed = 2.5;
			duty = MrunDuty + PknlDuty;
		};
		
		class LadderCivilTopOff : LadderCivilUpLoop
		{
		//	speed = 2;
			speed = 1.5;
		};
		
		class LadderCivilDownOff : LadderCivilTopOff
		{
			duty = MwlkDuty + PknlDuty;
		};
		
		class LadderCivilDownLoop : LadderCivilUpLoop
		{
			duty = MwlkDuty + PknlDuty;
		};
		
		class LadderRifleTopOff : LadderCivilTopOff
		{
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",1};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.010000};
		};
		
		class LadderRifleDownOff: LadderRifleTopOff
		{
			ConnectTo[] = {"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",1};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.010000};
		};
		
		class AswmPercMstpSnonWnonDnon : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AswmPercMrunSnonWnonDf : AswmPercMstpSnonWnonDnon
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		//	relSpeedMin = 0.8;
			relSpeedMin = 0.7;
		//	relSpeedMax = 1.25;
			relSpeedMax = 1.1;
		};
		
		class AswmPercMwlkSnonWnonDf : AswmPercMrunSnonWnonDf
		{
			duty = PercDuty + MwlkDuty + SnonDuty + WnonDuty;
		//	relSpeedMin = 0.6;
			relSpeedMin = 0.5;
		//	relSpeedMax = 0.7;
			relSpeedMax = 0.6;
		};
		
		class AswmPercMsprSnonWnonDf : AswmPercMrunSnonWnonDf
		{
			duty = PercDuty + MsprDuty + SnonDuty + WnonDuty;
		//	relSpeedMin = 0.9;
			relSpeedMin = 0.8;
		//	relSpeedMax = 1.2;
			relSpeedMax = 1;
		};
		
		class AswmPercMstpSnonWnonDnon_AswmPercMrunSnonWnonDf : AswmPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AswmPercMrunSnonWnonDf_AswmPercMstpSnonWnonDnon : AswmPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_rfl : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDf_rfl : AwopPercMstpSoptWbinDnon_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfr_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDr_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbr_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDb_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbl_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDl_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfl_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDf_rfl : AmovPercMwlkSoptWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfr_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDr_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbr_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDb_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbl_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDl_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfl_rfl : AmovPercMrunSnonWbinDf_rfl
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_rfl_turnL : AwopPercMstpSoptWbinDnon_rfl
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_rfl_turnR : AwopPercMstpSoptWbinDnon_rfl_turnL
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDf_rfl : AwopPknlMstpSoptWbinDnon_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfr_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDr_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbr_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDb_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbl_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDl_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfl_rfl : AmovPknlMrunSnonWbinDf_rfl
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDf_rfl : AwopPknlMstpSoptWbinDnon_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfr_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDr_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbr_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDb_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbl_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDl_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfl_rfl : AmovPknlMwlkSoptWbinDf_rfl
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl_turnL : AwopPknlMstpSoptWbinDnon_rfl
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_rfl_turnR : AwopPknlMstpSoptWbinDnon_rfl_turnL
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDf_rfl : AwopPpneMstpSoptWbinDnon_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfr_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDr_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbr_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDb_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbl_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDl_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfl_rfl : AmovPpneMrunSnonWbinDf_rfl
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDf_rfl : AwopPpneMstpSoptWbinDnon_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfr_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDr_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbr_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDb_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbl_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDl_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfl_rfl : AmovPpneMwlkSoptWbinDf_rfl
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl_turnL : AwopPpneMstpSoptWbinDnon_rfl
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_rfl_turnR : AwopPpneMstpSoptWbinDnon_rfl_turnL
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_pst : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDf_pst : AwopPercMstpSoptWbinDnon_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfr_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDr_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbr_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDb_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbl_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDl_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfl_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDf_pst : AmovPercMwlkSoptWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfr_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDr_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbr_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDb_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbl_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDl_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfl_pst : AmovPercMrunSnonWbinDf_pst
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_pst_turnL : AwopPercMstpSoptWbinDnon_pst
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_pst_turnR : AwopPercMstpSoptWbinDnon_pst_turnL
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_pst : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDf_pst : AwopPknlMstpSoptWbinDnon_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfr_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDr_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbr_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDb_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbl_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDl_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfl_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDf_pst : AmovPknlMwlkSoptWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfr_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDr_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbr_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDb_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbl_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDl_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfl_pst : AmovPknlMrunSnonWbinDf_pst
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_pst_turnL : AwopPknlMstpSoptWbinDnon_pst
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_pst_turnR : AwopPknlMstpSoptWbinDnon_pst_turnL
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_pst : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDf_pst : AwopPpneMstpSoptWbinDnon_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfr_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDr_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbr_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDb_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbl_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDl_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfl_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDf_pst : AmovPpneMwlkSoptWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfr_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDr_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbr_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDb_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbl_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDl_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfl_pst : AmovPpneMrunSnonWbinDf_pst
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_pst_turnL : AwopPpneMstpSoptWbinDnon_pst
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_pst_turnR : AwopPpneMstpSoptWbinDnon_pst_turnL
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDf_lnr : AwopPknlMstpSoptWbinDnon_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfr_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDr_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbr_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDb_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbl_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDl_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfl_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDf_lnr : AmovPknlMwlkSoptWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfr_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDr_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbr_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDb_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbl_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDl_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfl_lnr : AmovPknlMrunSnonWbinDf_lnr
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr : AwopPknlMstpSoptWbinDnon_lnr
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr_turnL : AwopPpneMstpSoptWbinDnon_lnr
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_lnr_turnR : AwopPpneMstpSoptWbinDnon_lnr_turnL
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDf_lnr : AwopPpneMstpSoptWbinDnon_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfr_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDr_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbr_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDb_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbl_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDl_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfl_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDf_lnr : AmovPpneMwlkSoptWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfr_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDr_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbr_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDb_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbl_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDl_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfl_lnr : AmovPpneMrunSnonWbinDf_lnr
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr_turnL : AwopPknlMstpSoptWbinDnon_lnr
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_lnr_turnR : AwopPknlMstpSoptWbinDnon_lnr_turnL
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_non : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDf_non : AwopPercMstpSoptWbinDnon_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfr_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDr_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbr_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDb_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbl_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDl_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfl_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDf_non : AmovPercMwlkSoptWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfr_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDr_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbr_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDb_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbl_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDl_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfl_non : AmovPercMrunSnonWbinDf_non
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_non : AwopPercMstpSoptWbinDnon_non
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_non_turnL : AwopPknlMstpSoptWbinDnon_non
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPknlMstpSoptWbinDnon_non_turnR : AwopPknlMstpSoptWbinDnon_non_turnL
		{
			duty = PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDf_non : AwopPknlMstpSoptWbinDnon_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfr_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDr_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbr_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDb_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDbl_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDl_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMwlkSoptWbinDfl_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDf_non : AmovPknlMwlkSoptWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfr_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDr_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbr_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDb_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDbl_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDl_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPknlMrunSnonWbinDfl_non : AmovPknlMrunSnonWbinDf_non
		{
			duty = PknlDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_non_turnL : AwopPercMstpSoptWbinDnon_non
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_non_turnR : AwopPercMstpSoptWbinDnon_non_turnL
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_lnr : AwopPercMstpSoptWbinDnon_non
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDf_lnr : AwopPercMstpSoptWbinDnon_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfr_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDr_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbr_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDb_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDbl_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDl_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMwlkSoptWbinDfl_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDf_lnr : AmovPercMwlkSoptWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfr_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDr_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbr_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDb_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDbl_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDl_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPercMrunSnonWbinDfl_lnr : AmovPercMrunSnonWbinDf_lnr
		{
			duty = PercDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_lnr_turnL : AwopPercMstpSoptWbinDnon_lnr
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_lnr_turnR : AwopPercMstpSoptWbinDnon_lnr_turnL
		{
			duty = PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_non : AmovPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDf_non : AwopPpneMstpSoptWbinDnon_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfr_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDr_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbr_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDb_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDbl_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDl_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMwlkSoptWbinDfl_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MwlkDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDf_non : AmovPpneMwlkSoptWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfr_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDr_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbr_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDb_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDbl_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDl_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AmovPpneMrunSnonWbinDfl_non : AmovPpneMrunSnonWbinDf_non
		{
			duty = PpneDuty + MrunDuty + SnonDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_non_turnL : AwopPpneMstpSoptWbinDnon_non
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AwopPpneMstpSoptWbinDnon_non_turnR : AwopPpneMstpSoptWbinDnon_non_turnL
		{
			duty = PpneDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AidlPercMstpSrasWrflDnon0S : AmovPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon : AidlPercMstpSrasWrflDnon0S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon01 : AidlPercMstpSrasWrflDnon0S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon02 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon03 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon04 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i01 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i02 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i03 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i04 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i05 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i06 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i07 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i08 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i09 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i10 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i11 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i12 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_i13 : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady01N : AidlPercMstpSrasWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady02N : AidlPercMstpSrasWrflDnon_idleSteady01N
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady03N : AidlPercMstpSrasWrflDnon_idleSteady01N
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon_idleSteady04N : AidlPercMstpSrasWrflDnon_idleSteady01N
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon05 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon0S : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon01 : AidlPercMstpSlowWrflDnon0S
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon02 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon03 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon04 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i01 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i02 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i03 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i04 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i05 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i06 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i07 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i08 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i09 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i10 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i11 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i12 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon_i13 : AidlPercMstpSlowWrflDnon_i01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon05 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSlowWrflDnon06 : AidlPercMstpSlowWrflDnon01
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon06 : AidlPercMstpSrasWrflDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon0S : AmovPknlMstpSrasWrflDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon01 : AidlPknlMstpSrasWrflDnon0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon02 : AidlPknlMstpSrasWrflDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSrasWrflDnon03 : AidlPknlMstpSrasWrflDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPpneMstpSrasWrflDnon0S : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPpneMstpSrasWrflDnon01 : AidlPpneMstpSrasWrflDnon0S
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPpneMstpSrasWrflDnon02 : AidlPpneMstpSrasWrflDnon01
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPpneMstpSrasWrflDnon03 : AidlPpneMstpSrasWrflDnon01
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWpstDnon0S : AmovPercMstpSrasWpstDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon01 : AidlPercMstpSrasWpstDnon0S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady01 : AidlPercMstpSrasWpstDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady02 : AidlPercMstpSrasWpstDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon_idleSteady03 : AidlPercMstpSrasWpstDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon02 : AidlPercMstpSrasWpstDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPercMstpSrasWpstDnon03 : AidlPercMstpSrasWpstDnon01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon0S : AmovPknlMstpSrasWpstDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon01 : AidlPknlMstpSrasWpstDnon0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady01 : AidlPknlMstpSrasWpstDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady03 : AidlPknlMstpSrasWpstDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon_idleSteady02 : AidlPknlMstpSrasWpstDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon02 : AidlPknlMstpSrasWpstDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWpstDnon03 : AidlPknlMstpSrasWpstDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPpneMstpSrasWpstDnon0S : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPpneMstpSrasWpstDnon01 : AidlPpneMstpSrasWpstDnon0S
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPpneMstpSrasWpstDnon02 : AidlPpneMstpSrasWpstDnon01
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPpneMstpSrasWpstDnon03 : AidlPpneMstpSrasWpstDnon01
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon0S : AmovPknlMstpSrasWlnrDnon
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon01 : AidlPknlMstpSrasWlnrDnon0S
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady01 : AidlPknlMstpSrasWlnrDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady02 : AidlPknlMstpSrasWlnrDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon_idleSteady03 : AidlPknlMstpSrasWlnrDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon02 : AidlPknlMstpSrasWlnrDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSrasWlnrDnon03 : AidlPknlMstpSrasWlnrDnon01
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSnonWnonDnon0S : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon01 : AidlPercMstpSnonWnonDnon0S
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon02 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon03 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon04 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon05 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon06 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon07 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon08 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_idleSteady01 : AidlPercMstpSnonWnonDnon01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_idleSteady02 : AidlPercMstpSnonWnonDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_idleSteady03 : AidlPercMstpSnonWnonDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSnonWnonDnon_idleSteady04 : AidlPercMstpSnonWnonDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon0S : AidlPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon01 : AidlPknlMstpSnonWnonDnon0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon02 : AidlPknlMstpSnonWnonDnon01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon03 : AidlPknlMstpSnonWnonDnon01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_player : AidlPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_player_0S : AidlPknlMstpSnonWnonDnon_player
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady01 : AidlPknlMstpSnonWnonDnon_player_0S
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady02 : AidlPknlMstpSnonWnonDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_player_idleSteady03 : AidlPknlMstpSnonWnonDnon_player_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady01 : AidlPknlMstpSnonWnonDnon01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady02 : AidlPknlMstpSnonWnonDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPknlMstpSnonWnonDnon_idleSteady03 : AidlPknlMstpSnonWnonDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon0S : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon01 : AidlPpneMstpSnonWnonDnon0S
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon02 : AidlPpneMstpSnonWnonDnon01
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon03 : AidlPpneMstpSnonWnonDnon01
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon : AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPercMstpSrasWrflDnon : AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon : AmovPknlMstpSrasWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_1 : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_medic : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_healed : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_healed2 : AinvPknlMstpSlayWrflDnon_healed
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPknlMstpSrasWrflDnon : AmovPknlMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_healed : AmovPpneMstpSrasWrflDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon : AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_1 : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end : AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon : AmovPknlMstpSrasWpstDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_2 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic_1 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_healed_1 : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end : AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPpneMstpSrasWpstDnon_healed : AmovPpneMstpSrasWpstDnon
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_3 : AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_4 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_medic_2 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_healed_2 : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPknlMstpSnonWnonDnon : AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_healed : AmovPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow : AmovPercMstpSrasWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow : AmovPercMstpSrasWpstDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow : AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow : AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh : AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWrflDnon : AmovPpneMstpSrasWrflDnon_injured
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDnon_injuredHealed : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDnon_rolltoback : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDnon_rolltofront : AinjPpneMstpSnonWrflDnon_rolltoback
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWnonDnon_kneel : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSnonWnonDnonB : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSnonWrflDbB_dragged : AdthPpneMstpSnonWnonDnonB
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDb : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDb_grab : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDb_release : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDb_death : AinjPpneMstpSnonWrflDb_release
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPpneMstpSnonWrflDb_still : AinjPpneMstpSnonWrflDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 : Default
		{
			duty = transDuty + PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2 : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			duty = transDuty + PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AcinPknlMstpSrasWrflDnon : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPknlMwlkSlowWrflDb_AmovPercMstpSlowWrflDnon : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon : DraggerBaseRfl
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPknlMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon : DraggerBaseRfl
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPknlMwlkSrasWrflDb : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPknlMwlkSlowWrflDb_death : AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AcinPknlMwlkSlowWrflDb_agony : AmovPpneMstpSrasWrflDnon_injured
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AcinPercMrunSrasWrflDf : InjuredMovedBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPercMrunSrasWrflDf_death : AcinPercMrunSrasWrflDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPercMrunSrasWrflDf_agony : AcinPercMrunSrasWrflDf_death
		{
			duty = PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon : InjuredMovedBase
		{
			duty = transDuty + PercDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPercMstpSrasWrflDnon : AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPercMstpSrasWrflDnon_agony : AcinPercMstpSrasWrflDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon : InjuredMovedBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AcinPknlMwlkSlowWrflDb_death2 : AcinPknlMwlkSlowWrflDb_death
		{
			duty = PknlDuty + MwlkDuty + SlowDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_Up : AgonyBaseRfl
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDnon_AmovPpneMstpSrasWrflDnon_injured : AinjPfalMstpSnonWrflDnon_carried_Up
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_still : AinjPfalMstpSnonWrflDnon_carried_Up
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDf_carried : AinjPfalMstpSnonWrflDnon_carried_Up
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDf_carried_fallwc : AinjPfalMstpSnonWrflDf_carried
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDf_carried_fall : AinjPfalMstpSnonWrflDf_carried_fallwc
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDf_carried_dead : AinjPfalMstpSnonWrflDf_carried
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AinjPfalMstpSnonWrflDnon_carried_Down : AgonyBase
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WrflDuty;
		};
		
		class AmovPpneMstpSnonWnonDnon_injured : AgonyBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSnonWpstDnon_injured : AmovPpneMstpSnonWnonDnon_injured
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPpneMsprSnonWnonDf_injured : AmovPpneMstpSnonWnonDnon_injured
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_carrier : DefaultDie
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWpstDnon_carrier : AdthPercMstpSnonWnonDnon_carrier
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AdthPercMstpSnonWnonDf_carrier : AdthPercMstpSnonWnonDnon_carrier
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWpstDf_carrier : AdthPercMstpSnonWnonDf_carrier
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AinjPpneMstpSnonWnonDnon : AmovPpneMstpSnonWnonDnon_injured
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDnon_injuredHealed : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDnon_rolltoback : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDnon_rolltofront : AinjPpneMstpSnonWnonDnon_rolltoback
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSnonWnonDbB_dragged : AdthPpneMstpSnonWnonDnonB
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDb : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDb_grab : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDb_release : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDb_death : AinjPpneMstpSnonWnonDb_release
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPpneMstpSnonWnonDb_still : AinjPpneMstpSnonWnonDnon
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1 : Default
		{
			duty = transDuty + PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			duty = transDuty + PknlDuty + MwlkDuty + SnonDuty + WpstDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			duty = transDuty + PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2 : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2
		{
			duty = transDuty + PknlDuty + MwlkDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPknlMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMstpSnonWpstDnon : AcinPknlMstpSnonWnonDnon
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon : AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon : DraggerBaseNon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon : AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon : DraggerBaseNon
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMstpSnonWpstDnon_AmovPpneMstpSrasWpstDnon : AcinPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcinPknlMwlkSnonWnonDb : AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMwlkSnonWpstDb : AcinPknlMwlkSnonWnonDb
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPknlMwlkSnonWnonDb_death : AcinPknlMwlkSnonWnonDb
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMwlkSnonWpstDb_death : AcinPknlMwlkSnonWnonDb_death
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPknlMwlkSnonWnonDb_agony : AmovPpneMstpSnonWnonDnon_injured
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMwlkSnonWpstDb_agony : AcinPknlMwlkSnonWnonDb_agony
		{
			duty = PknlDuty + MwlkDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPercMrunSnonWnonDf : InjuredMovedBase
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPercMrunSnonWpstDf : AcinPercMrunSnonWnonDf
		{
			duty = PercDuty + MrunDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPercMrunSnonWnonDf_death : AcinPercMrunSnonWnonDf
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPercMrunSnonWnonDf_agony : AcinPercMrunSnonWnonDf_death
		{
			duty = PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon : InjuredMovedBase
		{
			duty = transDuty + PercDuty + MrunDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon : AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon
		{
			duty = transDuty + PercDuty + MrunDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPercMstpSnonWnonDnon : AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPercMstpSnonWpstDnon : AcinPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPercMstpSnonWnonDnon_agony : AcinPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPercMstpSnonWpstDnon_agony : AcinPercMstpSnonWnonDnon_agony
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon : InjuredMovedBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcinPercMrunSnonWpstDf_AmovPercMstpSrasWpstDnon : AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_Up : AgonyBase
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon_injured : AinjPfalMstpSnonWnonDnon_carried_Up
		{
			duty = transDuty + PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_still : AinjPfalMstpSnonWnonDnon_carried_Up
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDf_carried : AinjPfalMstpSnonWnonDnon_carried_Up
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDf_carried_fallwc : AinjPfalMstpSnonWnonDf_carried
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDf_carried_fall : AinjPfalMstpSnonWnonDf_carried_fallwc
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDf_carried_dead : AinjPfalMstpSnonWnonDf_carried
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinjPfalMstpSnonWnonDnon_carried_Down : AgonyBase
		{
			duty = PfalDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakRifle01 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class ActsPercMstpSnonWpstDnon_sceneBardakRifle02 : ActsPercMstpSnonWpstDnon_sceneBardakRifle01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_5tdrcodr_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_5ttruckbed_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_carcodr_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_cardr_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_carhigh_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_carlow_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_5t_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_5t_end_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_carhigh_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_carlow_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_carlow_end_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_5t_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_carhigh_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_carlow_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMrunSrasWlnrDb_i_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_a_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_b_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_c_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_e_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_f_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMrunSrasWlnrDf_g_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPercMstpSlowWpstDb_10_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDb_11_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWpstDnon_4_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_16 : AdthPercMstpSlowWrflDnon_8
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSlowWrflDnon_32 : AdthPercMstpSlowWrflDnon_8
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPercMstpSnonWnonDf_1_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_bianm_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSrasWrflDb_8_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDb_16 : AdthPercMstpSrasWrflDb_8
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_16 : AdthPercMstpSrasWrflDnon_8
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDf_8 : AdthPercMstpSrasWrflDf_4
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_32 : AdthPercMstpSrasWrflDnon_16
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMrunSlowWlnrDf_1_forgoten : StandBase
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMrunSlowWlnrDf_2_forgoten : StandBase
		{
			duty = PknlDuty + MrunDuty + SlowDuty + WlnrDuty;
		};
		
		class adthpknlmnonslowwlnrdnon_1_forgoten : StandBase
		{
			duty = PknlDuty + MnonDuty + SlowDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSlowWpstDnon_3_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AdthPknlMstpSlowWrflDf_3_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_1_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_2_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSlowWrflDnon_3_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AdthPknlMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class adthpknlmnonsraswlnrdnon_2_forgoten : StandBase
		{
			duty = PknlDuty + MnonDuty + SrasDuty + WlnrDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_v1_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_v2_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_v3_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPknlMstpSrasWrflDnon_v4_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPpneMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPpneMstpSrasWrflDnon_forgoten : StandBase
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPpneMstpSrasWrflDnon_v1_forgoten : StandBase
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AdthPsitMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPercMstpSlowWlnrDnon01_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPercMstpSlowWlnrDnon02_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPercMstpSlowWlnrDnon03_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWrflDnon01_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon02_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPercMstpSrasWrflDnon03_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon01_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon02_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon03_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon04_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon05_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWpstDnon01_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPknlMstpSlowWpstDnon02_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPknlMstpSlowWpstDnon03_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AidlPsitMstpSnonWnonDnon_ground00 : StandBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPsitMstpSnonWnonDnon_ground01_forgoten : StandBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPsitMstpSnonWnonDnon_ground02_forgoten : StandBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPsitMstpSnonWnonDnon_ground03_forgoten : StandBase
		{
			duty = PsitDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPercMstpSlowWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_AmovPknlMstpSlowWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AinvPknlMstpSlayWrflDnon_healed_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_bag_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AinvPknlMstpSnonWnonDnon_healed_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AldrPercMstpSnonWnonDnon_slide_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class aldrpercmwlksnonwnondd_AmovPercMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class aldrpercmwlksnonwnondu_AmovPercMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMrunSlowWpstDf_AwopPercMrunSgthWnonDf_1_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMrunSlowWpstDf_AwopPercMrunSgthWnonDf_2_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMrunSlowWrflDf_AwopPercMrunSgthWrflDf_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WrflDuty;
		};
		
		class AmovPercMrunSnonWnonDf_AwopPercMrunSgthWnonDf_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMrunSsurWnonDf_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon : AmovPknlMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_player_S0 : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady01 : AidlPercMstpSrasWlnrDnon_player_S0
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady02 : AidlPercMstpSrasWlnrDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_player_idleSteady03 : AidlPercMstpSrasWlnrDnon_player_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_S0 : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_01 : AidlPercMstpSrasWlnrDnon_S0
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_02 : AidlPercMstpSrasWlnrDnon_01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_03 : AidlPercMstpSrasWlnrDnon_01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_01 : AidlPknlMstpSlowWlnrDnon_S0
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady01 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady02 : AidlPknlMstpSlowWlnrDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_idleSteady03 : AidlPknlMstpSlowWlnrDnon_idleSteady01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady01 : AidlPercMstpSrasWlnrDnon_01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady02 : AidlPercMstpSrasWlnrDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_idleSteady03 : AidlPercMstpSrasWlnrDnon_idleSteady01
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_02 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_03 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_04 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_05 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_01RozhlizeniSe1 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_02RozhlizeniSe2 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_03N : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_04N : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_05N : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_06RozhlizeniSe3 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_07RozhlizeniSe4 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_08RozhlizeniSe5 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_09RozhlizeniSe6 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_10RozhlizeniSe7 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_11RozhlizeniSe8 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_12checkingLnr1 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_13checkingLnr2 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_14RozhlizeniSe9 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_15RozhlizeniSe10 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_16RozhlizeniSe11 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AidlPknlMstpSlowWlnrDnon_17RozhlizeniSe12 : AidlPknlMstpSlowWlnrDnon_01
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AovrPercMstpSrasWlnrDf : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_S : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_3 : AidlPercMstpSrasWlnrDnon_S
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_1 : AidlPercMstpSrasWlnrDnon_3
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AidlPercMstpSrasWlnrDnon_2 : AidlPercMstpSrasWlnrDnon_3
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AovrPercMstpSlowWlnrDf : AmovPercMstpSlowWlnrDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_turnl : AmovPercMstpSlowWlnrDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_turnR : AmovPercMstpSlowWlnrDnon_turnl
		{
			duty = PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDf : AmovPercMstpSlowWlnrDnon
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDfr : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDr : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDbr : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDb : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDbl : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDl : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSlowWlnrDfl : AmovPercMwlkSlowWlnrDf
		{
			duty = PercDuty + MwlkDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSrasWlnrDf : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSrasWlnrDfl : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSrasWlnrDl : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMwlkSrasWlnrDbl : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		//	speed = 0.572728;
			speed = 0.545455;
		};
		
		class AmovPercMwlkSrasWlnrDb : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		//	speed = 0.572728;
			speed = 0.545455;
		};
		
		class AmovPercMwlkSrasWlnrDbr : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		//	speed = 0.572728;
			speed = 0.545455;
		};
		
		class AmovPercMwlkSrasWlnrDr : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		//	speed = 0.617647;
			speed = 0.588235;
		};
		
		class AmovPercMwlkSrasWlnrDfr : AmovPercMwlkSrasWlnrDf
		{
			duty = PercDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDf : AmovPercMrunSlowWlnrDf
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDfl : AmovPercMrunSlowWlnrDfl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDl : AmovPercMrunSlowWlnrDl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDbl : AmovPercMrunSlowWlnrDbl
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDb : AmovPercMrunSlowWlnrDb
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDbr : AmovPercMrunSlowWlnrDbr
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDr : AmovPercMrunSlowWlnrDr
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMrunSrasWlnrDfr : AmovPercMrunSlowWlnrDfr
		{
			duty = PercDuty + MrunDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_turnl : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_turnr : AmovPercMstpSrasWlnrDnon
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWlnrDnon_AmovPknlMstpSlowWlnrDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_aiturn90l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_aiturn90r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AinvPknlMstpSlayWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_awoppercmstpsoptwbindnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_awoppercmstpsoptwbindnon_end_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_5tdrcodr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_5ttruckbed_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_carcodr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_cardr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_carhigh_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_carlow_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_bag_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end : AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWlnrDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_opendoor01_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_opendoor02_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_opendoor03_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_smoking : StandBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSpatWrflDnon_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SpatDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_aiturn90l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_aiturn90r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon : AmovPercMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_aiturn180l_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_aiturn180r_forgoten : StandBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMstpSsurWnonDnon_AmovPknlMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPercMwlkSlowWrflDf_AwopPercMrunSgthWrflDf_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WrflDuty;
		};
		
		class AmovPercMwlkSnonWnonDf_AwopPercMrunSgthWnonDf_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_2_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AmovPercMwlkSrasWrflDf_AwopPercMrunSgthWrflDf_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MrunDuty + SgthDuty + WrflDuty;
		};
		
		class AmovPercMwlkSsurWnonDf_forgoten : StandBase
		{
			duty = PercDuty + MwlkDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPknlMrunSlowWrflDf_AmovPknlMevaSrasWrflDb_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSlowWrflDf_AmovPknlMevaSrasWrflDl_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSlowWrflDf_AmovPknlMevaSrasWrflDr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_talking01a : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_NikitinDead : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_talking01 : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_talking02 : ActsPercMstpSnonWnonDnon_talking01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_talking03 : ActsPercMstpSnonWnonDnon_talking01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMstpSnonWnonDnon_talking04 : ActsPercMstpSnonWnonDnon_talking01
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMrunSrasWrflDf_AmovPknlMevaSrasWrflDb_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDf_AmovPknlMevaSrasWrflDl_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDf_AmovPknlMevaSrasWrflDr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMrunSrasWrflDnon_transition_forgoten : StandBase
		{
			duty = PknlDuty + MrunDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWlnrDnon_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSlowWlnrDnon_aiturn90l_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSlowWlnrDnon_aiturn90r_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSlowWlnrDnon_AmovPercMstpSlowWlnrDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSlowWlnrDnon_AmovPknlMstpSrasWlnrDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_aiturn90l_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_aiturn90r_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPknlMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AdthPercMstpSrasWrflDnon_NikitinDead2 : ActsPknlMstpSnonWnonDnon_TreatingInjured_NikitinDead
		{
			duty = PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AinvPknlMstpSlayWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlayDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMevaSrasWrflDb_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMevaSrasWrflDl_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMevaSrasWrflDr_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MevaDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPknlMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_awoppknlmstpsoptwbindnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSlowWrflDnon_awoppknlmstpsoptwbindnon_end_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_awoppknlmstpsoptwbindnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSnonWnonDnon_awoppknlmstpsoptwbindnon_end_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SoptDuty + WbinDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSlowWlnrDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WlnrDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSnonWnonDnon : AmovPknlMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WpstDuty;
		};
		
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPercMstpSsurWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SsurDuty + WnonDuty;
		};
		
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPknlMwlkSrasWlnrDnon_transition_forgoten : StandBase
		{
			duty = PknlDuty + MwlkDuty + SrasDuty + WlnrDuty;
		};
		
		class AmovPpneMsprSlowWrflDb_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDbl_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDbr_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDl_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSlowWrflDr_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMsprSnonWnonDb_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDbl_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDbr_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDf_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDfl_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDfr_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDl_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMsprSnonWnonDr_forgoten : StandBase
		{
			duty = PpneDuty + MsprDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPpneMstpSlowWrflDnon_forgoten : StandBase
		{
			duty = PpneDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPpneMstpSrasWrflDnon_tst_forgoten : StandBase
		{
			duty = PpneDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AswmPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMrunSgthWnonDf_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SgthDuty + WnonDuty;
		};
		
		class AwopPercMrunSgthWnonDf_AmovPercMstpSnonWnonDnon_1_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMrunSgthWnonDf_AmovPercMstpSnonWnonDnon_2_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPercMrunSgthWnonDf_AmovPercMstpSrasWpstDnon_1_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AwopPercMrunSgthWnonDf_AmovPercMstpSrasWpstDnon_2_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AwopPercMrunSgthWnonDf_AmovPercMstpSrasWpstDnon_3_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		class AwopPercMrunSgthWrflDf_forgoten : StandBase
		{
			duty = PercDuty + MrunDuty + SgthDuty + WrflDuty;
		};
		
		class AwopPercMrunSgthWrflDf_AmovPercMstpSrasWrflDnon_1_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class AwopPercMrunSgthWrflDf_AmovPercMstpSrasWrflDnon_2_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WrflDuty;
		};
		
		class awoppercmstpsoptwbindnon_AmovPercMstpSlowWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class awoppercmstpsoptwbindnon_AmovPercMstpSlowWrflDnon_end_forgoten : StandBase
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AwopPknlMstpSgthWnonDnon_end_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.4;
			speed = 0.3;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_death : CutSceneAnimationBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPknlMstpSgthWnonDnon_start_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.4;
			speed = 0.3;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_layDown : CutSceneAnimationBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_layDown : AidlPpneMstpSnonWnonDnon_SleepA_layDown
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_sleep1 : CutSceneAnimationBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_death : AidlPpneMstpSnonWnonDnon_SleepA_death
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_sleep2 : AidlPpneMstpSnonWnonDnon_SleepB_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AwopPknlMstpSgthWnonDnon_throw_forgoten : StandBase
		{
			duty = PknlDuty + MstpDuty + SgthDuty + WnonDuty;
		//	speed = 0.4;
			speed = 0.3;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_sleep0 : CutSceneAnimationBaseZoZo
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_sleep : AidlPpneMstpSnonWnonDnon_SleepC_sleep0
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_scratch : AidlPpneMstpSnonWnonDnon_SleepC_sleep0
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_sleep3 : AidlPpneMstpSnonWnonDnon_SleepB_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_standUp : CutSceneAnimationBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_sleepS : CutSceneAnimationBase
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_lookAround : AidlPpneMstpSnonWnonDnon_SleepC_sleep0
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_layDown : AidlPpneMstpSnonWnonDnon_SleepA_layDown
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_sleep4 : AidlPpneMstpSnonWnonDnon_SleepB_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_killFly : AidlPpneMstpSnonWnonDnon_SleepC_sleep0
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class awoppknlmstpsoptwbindnon_AmovPknlMstpSlowWrflDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_standUp : AidlPpneMstpSnonWnonDnon_SleepA_standUp
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_sleep5 : AidlPpneMstpSnonWnonDnon_SleepB_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepB_standUp : AidlPpneMstpSnonWnonDnon_SleepA_standUp
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_death : AidlPpneMstpSnonWnonDnon_SleepA_death
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepC_talk : AidlPpneMstpSnonWnonDnon_SleepC_sleep0
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_sleep1 : AidlPpneMstpSnonWnonDnon_SleepA_sleepS
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_sleep2 : AidlPpneMstpSnonWnonDnon_SleepA_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AidlPpneMstpSnonWnonDnon_SleepA_sleep3 : AidlPpneMstpSnonWnonDnon_SleepA_sleep1
		{
			duty = PpneDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class awoppknlmstpsoptwbindnon_AmovPknlMstpSlowWrflDnon_end_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class awoppknlmstpsoptwbindnon_AmovPknlMstpSnonWnonDnon_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class awoppknlmstpsoptwbindnon_AmovPknlMstpSnonWnonDnon_end_forgoten : StandBase
		{
			duty = transDuty + PknlDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSlowWrflDnon_StrokeGun : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_amaterUder1 : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_amaterUder2 : AmelPercMstpSnonWnonDnon_amaterUder1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_amaterUder3 : AmelPercMstpSnonWnonDnon_amaterUder1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah1 : AmelPercMstpSnonWnonDnon_amaterUder1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah2 : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah3hard : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah4 : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah5hard : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah6hlava : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmelPercMstpSnonWnonDnon_zasah7bricho : AmelPercMstpSnonWnonDnon_zasah1
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class ActsPercMrunSlowWrflDf_FlipFlopPara : AmovPercMrunSlowWrflDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class ActsPercMrunSlowWrflDf_TumbleOver : AmovPercMrunSlowWrflDf
		{
			duty = PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_ActsPercMstpSlowWrflDr_HideFromFire : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSlowWrflDnon_ActsPpneMstpSlowWrflDr_GrenadeEscape : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PpneDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AsigPercMstpSlowWrflDnon_GoGo : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AsigPercMstpSlowWrflDnon_AmovPercMrunSlowWrflDnon_GoGo : AmovPercMstpSlowWrflDnon
		{
			duty = transDuty + PercDuty + MrunDuty + SlowDuty + WrflDuty;
		};
		
		class AsigPercMstpSlowWrflDnon_SendMenInAction : AmovPercMstpSlowWrflDnon
		{
			duty = PercDuty + MstpDuty + SlowDuty + WrflDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_nocollision : CutSceneAnimationBaseSit
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_initLoop : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_idle72lehSedy : AmovPercMstpSnonWnonDnon_initLoop
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_idle71kliky : AmovPercMstpSnonWnonDnon_initLoop
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_idle69drepy : AmovPercMstpSnonWnonDnon_initLoop
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_idle68boxing : CutSceneAnimationBase
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_idle56kliky : AmovPercMstpSnonWnonDnon_initLoop
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_zevl : AmovPercMstpSnonWnonDnon
		{
			duty = PercDuty + MstpDuty + SnonDuty + WnonDuty;
		};
		
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_1 : TransAnimBase
		{
			duty = transDuty + PercDuty + MstpDuty + SrasDuty + WpstDuty;
		};
		
		#include "Bunnyhop.hpp"
	};
};