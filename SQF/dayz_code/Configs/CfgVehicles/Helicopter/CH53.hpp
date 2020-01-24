class USEC_ch53_E;
class CH53_DZE : USEC_ch53_E {
	scope = public;
	displayname = $STR_VEH_NAME_CH53;
	vehicleClass = "DayZ Epoch Vehicles";
	destrType = "DestructWreck";
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	supplyRadius = 1.3;
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
	transportMaxWeapons = 40;
	transportMaxMagazines = 300;
	transportmaxbackpacks = 15;
	fuelCapacity = 3849;
	class eventhandlers {
		killed = "_this spawn BIS_Effects_EH_Killed;";
	};
	class UserActions {
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
			displayName = $STR_ACTION_GEAR_DOWN;
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			shortcut = "landGear";
			radius = 5;
			condition = "(this animationPhase ""gear_nose_1"" > 0.9)&&(player == driver this)";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_geardown.sqf""";
		};
		class LandingGear_up {
			displayName = $STR_ACTION_GEAR_UP;
			position = "ramp action";
			showWindow = 0;
			onlyforplayer = 0;
			shortcut = "landGear";
			radius = 5;
			condition = "(this animationPhase ""gear_nose_1"" < 0.1)&&(player == driver this)";
			statement = "[this] execvm ""\usec_ch53\scripts\ch53_gearup.sqf""";
		};
	};
};