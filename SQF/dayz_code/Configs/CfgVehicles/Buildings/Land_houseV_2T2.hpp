class Land_houseV_2T2 : Land_HouseV_1I2
{
	model="z\addons\dayz_buildings\a2_HouseV_2t2\d_HouseV_2t2.p3d";
	class AnimationSources
	{
		class dvere_1_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
		};
		class dvere_2_source : dvere_1_source {};	
		class dvere_3_source : dvere_1_source {};
		class dvere_4_source : dvere_1_source {};
		class dvere_5_source : dvere_1_source {};
		class dvere_6_source : dvere_1_source {};
		class dvere_7_source : dvere_1_source {};
		class dvere_8_source : dvere_1_source {};
		class dvere_9_source : dvere_1_source {};
		class dvere_10_source: dvere_1_source {};
	};
	class UserActions
	{
		class OpenDoors1
		{
			displayName=$STR_DN_OUT_o_DOOR;
			position=akce_dvere1;
			radius=1.5;
			onlyForPlayer=false;
			condition="this animationPhase ""dvere1"" < 0.5";
			statement="this animate [""dvere1"", 1]";
		};
		class CloseDoors1
		{
			displayName=$STR_DN_OUT_C_DOOR;
			position=akce_dvere1;
			radius=1.5;
			onlyForPlayer=false;
			condition="this animationPhase ""dvere1"" >= 0.5";
			statement="this animate [""dvere1"", 0]";
		};
		class OpenDoors2 : OpenDoors1
		{
			position=akce_dvere2;
			condition="this animationPhase ""dvere2"" < 0.5";
			statement="this animate [""dvere2"", 1]";
		};
		class CloseDoors2 : CloseDoors1
		{
			position=akce_dvere2;
			condition="this animationPhase ""dvere2"" >= 0.5";
			statement="this animate [""dvere2"", 0]";
		};
		class OpenDoors3 : OpenDoors1
		{
			position=akce_dvere3;
			condition="this animationPhase ""dvere3"" < 0.5";
			statement="this animate [""dvere3"", 1]";
		};
		class CloseDoors3 : CloseDoors1
		{
			position=akce_dvere3;
			condition="this animationPhase ""dvere3"" >= 0.5";
			statement="this animate [""dvere3"", 0]";
		};
		class OpenDoors4 : OpenDoors1
		{
			position=akce_dvere4;
			condition="this animationPhase ""dvere4"" < 0.5";
			statement="this animate [""dvere4"", 1]";
		};
		class CloseDoors4 : CloseDoors1
		{
			position=akce_dvere4;
			condition="this animationPhase ""dvere4"" >= 0.5";
			statement="this animate [""dvere4"", 0]";
		};
		class OpenDoors5 : OpenDoors1
		{
			position=akce_dvere5;
			condition="this animationPhase ""dvere5"" < 0.5";
			statement="this animate [""dvere5"", 1]";
		};
		class CloseDoors5 : CloseDoors1
		{	
			position=akce_dvere5;
			condition="this animationPhase ""dvere5"" >= 0.5";
			statement="this animate [""dvere5"", 0]";
		};
		class OpenDoors6 : OpenDoors1
		{
			position=akce_dvere6;
			condition="this animationPhase ""dvere6"" < 0.5";
			statement="this animate [""dvere6"", 1]";
		};
		class CloseDoors6 : CloseDoors1
		{	
			position=akce_dvere6;
			condition="this animationPhase ""dvere6"" >= 0.5";
			statement="this animate [""dvere6"", 0]";
		};
		class OpenDoors7 : OpenDoors1
		{
			position=akce_dvere7;
			condition="this animationPhase ""dvere7"" < 0.5";
			statement="this animate [""dvere7"", 1]";
		};
		class CloseDoors7 : CloseDoors1
		{
			position=akce_dvere7;
			condition="this animationPhase ""dvere7"" >= 0.5";
			statement="this animate [""dvere7"", 0]";
		};
		class OpenDoors8 : OpenDoors1
		{
			position=akce_dvere8;
			condition="this animationPhase ""dvere8"" < 0.5";
			statement="this animate [""dvere8"", 1]";
		};
		class CloseDoors8 : CloseDoors1
		{	
			position=akce_dvere8;
			condition="this animationPhase ""dvere8"" >= 0.5";
			statement="this animate [""dvere8"", 0]";
		};
		class OpenDoors9 : OpenDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere9"" < 0.5 or this animationPhase ""dvere10"" < 0.5";
			statement="this animate [""dvere9"", 1];this animate [""dvere10"", 1]";
		};
		class CloseDoors9 : CloseDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere9"" >= 0.5 or this animationPhase ""dvere10"" >= 0.5";
			statement="this animate [""dvere9"", 0];this animate [""dvere10"", 0]";
		};
	/*	class OpenDoors10 : OpenDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere10"" < 0.5";
			statement="this animate [""dvere10"", 1]";
		};
		class CloseDoors10 : CloseDoors1
		{
			position=akce_dvere910;
			condition="this animationPhase ""dvere10"" >= 0.5";
			statement="this animate [""dvere10"", 0]";
		};
	*/	
	};
	actionBegin1 = "OpenDoors1";
	actionEnd1   = "OpenDoors1";
	actionBegin2 = "OpenDoors2";
	actionEnd2   = "OpenDoors2";
	actionBegin3 = "OpenDoors3";
	actionEnd3   = "OpenDoors3";
	actionBegin4 = "OpenDoors4";
	actionEnd4   = "OpenDoors4";
	actionBegin5 = "OpenDoors5";
	actionEnd5   = "OpenDoors5";
	actionBegin6 = "OpenDoors6";
	actionEnd6   = "OpenDoors6";
	actionBegin7 = "OpenDoors7";
	actionEnd7   = "OpenDoors7";
	actionBegin8 = "OpenDoors8";
	actionEnd8   = "OpenDoors8";
	actionBegin9 = "OpenDoors9";
	actionEnd9   = "OpenDoors9";
//	actionBegin10= "OpenDoors10";
//	actionEnd10  = "OpenDoors10";
};