	
	//Prevent SVI hack using BattleFieldClearance & al.
	class Logic;
	class BattleFieldClearance: Logic
	{
		vehicleClass = "Modules";
		class Eventhandlers
		{	
			init = "if (isServer) then { diag_log(""WARNING, b4ttlefieldclearance attack from player PID#""+str(owner this)); deleteVehicle this;};";
		};
	};
	class HighCommandSubordinate: Logic
	{
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then { diag_log(""WARNING, HighCommand5ubordinate attack from player PID#""+str(owner this)); deleteVehicle this;};";
		};
	};
	class FirstAidSystem: Logic
	{
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then { diag_log(""WARNING, First4idSystem attack from player PID#""+str(owner this)); deleteVehicle this;};";
		};
	};
	class AlternativeInjurySimulation: Logic
	{
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isServer) then { diag_log(""WARNING, 4lternativeInjurySimulation attack from player PID#""+str(owner this)); deleteVehicle this;};";
		};
	};	
	class FunctionsManager : Logic {
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "diag_log format ['PRELOAD_ Functions\init %1', [_this, BIS_functions_mainscope]];if (isnil 'BIS_functions_mainscope') then { BIS_functions_mainscope = _this select 0;  if (isServer) then {_this execVM 'ca\modules\functions\main.sqf'};} else {_this spawn { diag_log format ['PRELOAD_ Functions\init  ERROR: deleting redundant FM! %1', [_this, (_this select 0), BIS_functions_mainscope]]; _mygrp = group (_this select 0); deleteVehicle (_this select 0); deleteGroup _mygrp;};};if (isnil 'RE') then {diag_log 'MPframework inited';[] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};";
		};
	};  

