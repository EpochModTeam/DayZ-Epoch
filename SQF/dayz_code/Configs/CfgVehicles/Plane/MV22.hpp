class MV22;
class MV22_DZ : MV22 { 
	accuracy = 1000; 
	scope = public; 
	displayName = "MV-22"; 
	crew = ""; 
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 20;
	transportMaxMagazines = 400;
	transportmaxbackpacks = 10;
	fuelCapacity = 6513;
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers
	{
		killed = "_this call BIS_Effects_EH_Killed;";
		engine = "if (_this select 1) then {{_this select 0 animate [_x,0]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions
	{
		//class Repair {ACTION_REPAIR; radius = 8;};
		//class Salvage {ACTION_SALVAGE; radius = 8;};
		class PushPlane {ACTION_PUSH;};
		class Fold {
			displayName = $STR_AM_PACK;
			displayNameDefault = $STR_AM_PACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 8}";
			statement = "{this animate [_x,1]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
		};
		class Unfold {
			displayName = $STR_AM_UNPACK;
			displayNameDefault = $STR_AM_UNPACK;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 1}";
			statement = "{this animate [_x,0]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
		};
		class OpenRamp {
			displayName = $STR_EPOCH_OPEN_RAMP;
			displayNameDefault = $STR_EPOCH_OPEN_RAMP;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 0)";
			statement = "this animate ['ramp_top',1]; this animate ['ramp_bottom',1];";
		};
		class CloseRamp {
			displayName = $STR_EPOCH_CLOSE_RAMP;
			displayNameDefault = $STR_EPOCH_CLOSE_RAMP;
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 1)";
			statement = "this animate ['ramp_top',0]; this animate ['ramp_bottom',0];";
		};
	};
};
