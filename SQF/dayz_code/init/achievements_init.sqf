// Server only
if (isDedicated) then {

	achievementNewDB = true;	// true = object_data table (1.8.x), false = instance_deployable table (1.7.x)
	
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\achievements\achievementsServer.sqf";
	"achievement" addPublicVariableEventHandler {[_this select 1] call achievementServer};
};

// Client only
if (!isDedicated) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\achievements\achievements.sqf";
	
	// Allow server events to trigger the OSD
	"achievementClientPV" addPublicVariableEventHandler {[_this select 1] call achievementClientMsg};
	
	// Start the mustyMonitor
	[] execVM "\z\addons\dayz_code\achievements\achievementsMonitor.sqf";
};


