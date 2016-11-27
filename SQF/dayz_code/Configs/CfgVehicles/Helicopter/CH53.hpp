class USEC_ch53_E;
class CH53_DZE : USEC_ch53_E {
	scope = public;
	side = 2;
	displayname = "USEC CH53E DZE";
	displaynameshort = "CH53_DZE";
	destrType = "DestructWreck";
	enablemanualfire = 0;
	crew = "";
	soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.316228,1};
	soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.316228,1,30};
	soundEnviron[] = {"",0.0316228,1};
	soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final",0.1,1};
	soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start",1,1,800};
	soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final",0.1,1};
	soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop",1,1,800};
	soundGear[] = {"\usec_ch53\sound\ch53_gear", db10, 1, 100};
	soundDammage[] = {"\usec_ch53\sound\dws_warning_beeps", 3.16228, 1, 20};
	typicalCargo[] = {};
	hiddenSelections[] = {};
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 25;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 15;
	fuelCapacity = 3849;
	class eventhandlers {
		GetIn = "if ((_this select 2) == player) then {MonitorVM = [_this select 0] execvm '\usec_ch53\scripts\ch53_monitor.sqf';};";
		init = "MonitorVM = [_this select 0] execvm '\usec_ch53\scripts\ch53_monitor.sqf';MonitorSFXVM = [_this select 0] execvm '\usec_ch53\scripts\ch53_monitorSFX.sqf';";
		killed = "_this spawn BIS_Effects_EH_Killed;";
	};
	/*class UserActions {
		class Repair {ACTION_REPAIR; radius = 8;};
		class Salvage {ACTION_SALVAGE; radius = 8;};
		class RampOpen {
			displayName = $STR_EPOCH_OPEN_RAMP;
			position = "ramp action";
			showWindow = 0;
			radius = 5;
			condition = "this animationPhase ""ramp_bottom"" < 0.50;";
			statement = "if(((getPos this) select 2) < 2) then {this animate [""ramp_bottom"",1];this animate [""ramp_top"",1];} else {this animate [""ramp_bottom"",0.56];this animate [""ramp_top"",1];};";
			onlyforplayer = 0;
		};
		class RampClose {
			displayName = $STR_EPOCH_CLOSE_RAMP;
			position = "ramp action";
			showWindow = 0;
			radius = 5;
			condition = "this animationPhase ""ramp_bottom"" > 0.50;";
			statement = "this animate [""ramp_bottom"",0];this animate [""ramp_top"",0];";
			onlyforplayer = 0;
		};
		class LandingGear_down {
			displayName = "Gear Down";
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			shortcut = "landGear";
			radius = 5;
			condition = "(this animationPhase ""gear_nose_1"" > 0.9)&&(player == driver this)";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_geardown.sqf""";
		};
		class LandingGear_up {
			displayName = "Gear Up";
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			shortcut = "landGear";
			radius = 5;
			condition = "(this animationPhase ""gear_nose_1"" < 0.1)&&(player == driver this)";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_gearup.sqf""";
		};
		class StropDown {
			displayName = "Attach Strop";
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			radius = 5;
			condition = "(this animationPhase ""Strop1_Empty"" == 1)&&((this animationPhase 'cargo' == 1) AND (this animationPhase 'cargo2' == 1))&&(player == driver this)";
			statement = "[this,true] execvm ""\usec_ch53\scripts\ch53_strop.sqf""";
		};
		class StropUp {
			displayName = "Detach Strop";
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			radius = 5;
			condition = "(this animationPhase ""Strop1_Empty"" == 0)&&(player == driver this)";
			statement = "[this,false] execvm ""\usec_ch53\scripts\ch53_strop.sqf""";
		};
		class CollectCargo {
			displayName = "Collect Cargo";
			position = "ramp action";
			showWindow = 1;
			onlyforplayer = 0;
			radius = 5;
			condition = "(count(nearestObjects [(this modeltoworld [0,0,-10]), [""USEC_CargoContainer1"",""USEC_CargoContainer2""], 6])>0) and (this animationPhase 'Strop1_Empty' == 0) and (this animationPhase 'cargo' == 1);";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_cargo.sqf"";";
		};
		class DetachCargo {
			displayName = "Detach Cargo";
			position = "ramp action";
			showWindow = 1;
			onlyforplayer = 0;
			radius = 5;
			condition = "((this animationPhase 'cargo' == 0) OR (this animationPhase 'cargo2' == 0));";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_cargodrop.sqf"";";
		};
	};*/
};