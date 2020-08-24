class USEC_ch53_E;
class CH53_DZE : USEC_ch53_E {
	scope = 2;
	displayname = "$STR_VEH_NAME_CH53";
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
	transportMaxMagazines = 250;
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
	
	class Upgrades
	{
		ItemHeliAVE[] = {"CH53_DZE1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH53_DZE1: CH53_DZE
{
	displayName = "$STR_VEH_NAME_CH53+";
	original = "CH53_DZE";
	armor = 80;
	damageResistance = 0.02078;
	
	class Upgrades
	{
		ItemHeliLRK[] = {"CH53_DZE2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class CH53_DZE2: CH53_DZE1
{
	displayName = "$STR_VEH_NAME_CH53++";
	transportMaxWeapons = 80;
	transportMaxMagazines = 500;
	transportmaxbackpacks = 30;
	
	class Upgrades
	{
		ItemHeliTNK[] = {"CH53_DZE3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class CH53_DZE3: CH53_DZE2
{
	displayName = "$STR_VEH_NAME_CH53+++";
	fuelCapacity = 8000;
};