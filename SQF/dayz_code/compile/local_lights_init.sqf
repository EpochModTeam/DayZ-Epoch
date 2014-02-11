/*
	DayZ Epoch Lighting System - Light Init
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com.

*/

if(!isDedicated)then{
	private ["_plyPos","_sunrise","_slpTime","_lpRange","_hsRange","_nrGen","_genCount","_rndLights","_genClass","_doHouse","_doTower","_doLight","_fnHr","_stHr","_plyr","_ndGen","_trgRng","_rngPlyr","_lightTrig","_lmpCol","_houseNum"];

	//Start / Stop Time
	_doHouse = true;
	_doTower = true;
	_noStreetLights = true;
	_ndGen = _this select 0;
	_rndLights = _this select 1;//Default 12
	if(_rndLights<1)exitWith{};//EXIT
	_trgRng = 280;//Distance from Gen
	_rngPlyr = 480;//Distance from Player
	_lmpCol = [0.698, 0.556, 0.419];//Light colour
	_genClass = "Generator_DZ";
	_slpTime = 6;
	_doLight = true;
	_nrGen = [];
	_genCount = 0;
	_hsRange = 250;//set var
	_houseNum = 0;//Monitor house numbers in range.. Pass around and reduce range if too many and/or client lag (NOT server / client lag)
	_lightTrig = vehicle player;//Central point around which to run the lights
	_plyPos = [0,0,0];
	call compile preprocessFileLineNumbers "lights\fn_lightFunctions.sqf";
	axeTowerLights = compile preprocessFileLineNumbers "lights\local_lights_tower.sqf";
	axeHouseLights = compile preprocessFileLineNumbers "lights\local_lights_house.sqf";

	waitUntil {getPos Player select 0 > 0};

	//Detect Dusk and Dawn
	_sunrise = call world_sunRise;
	_fnHr =  _sunrise + 0.5;
	_stHr =  (24 - _sunrise) - 0.5;
	if(_rndLights>75)then{_rndLights=75;};//Max allowed
	//axeDiagLog = format["IL:LIGHTS STARTED: _stHr:%1 | _fnHr:%2 | time:%3 | for:%4",_stHr,_fnHr, dayTime, vehicle player];
	//publicVariable "axeDiagLog";
				
	while {alive player}do{
		if(daytime<_fnHr||daytime>_stHr)then{
		_plyr = vehicle player;
			//if(_plyPos distance _plyr > 6)then{//Only run if player moves
			_lightTrig = _plyr;
			
			if(_ndGen)then{
			_nrGen = nearestObjects [_plyr, [_genClass], _rngPlyr];
			_genCount = count _nrGen;
			
			//Set Generator to use and Assign trigger object
			
				if(_genCount>0)then{
					{
						if(_x getVariable["GeneratorRunning",false])exitWith{
						_lightTrig = _x;
						};
					}forEach _nrGen;
				};
			};
			
			//if(!_ndGen)then{_lightTrig = _plyr;};
			
			//Nearby Generator ?
			if(_ndGen && _genCount<1)then{_doLight = false;}else{_doLight=true;};
			
			//Generator not required !
			if(!_ndGen)then{_doLight = true;};
			
			//Choose range, player or generator
			if(_ndGen)then{_hsRange = _trgRng;}else{_hsRange = _rngPlyr;};
			
			//100% chance of lights with nearby generator - ToDo, make this slightly lower.
			if(_ndGen && _genCount>0&&(_lightTrig getVariable["GeneratorRunning",false]))then{
			_rndLights = 75;
			};
			
			if(_ndGen && !(_lightTrig getVariable["GeneratorRunning",false]))then{_doLight = false;};//Final check - Not run if nearest gen isn't running
			
			//axeDiagLog = format["IL:RUNNING: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLights:%4",_doLight,_ndGen,_lightTrig,_rndLights];
			//publicVariable "axeDiagLog";
					
					if(_doLight)then{
						//if(speed _plyr > 0 )then{
						if(_doHouse)then{
						//axeDiagLog = format["IL:RUNNING HOUSE: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLights:%4",_doLight,_ndGen,_lightTrig,_rndLights];
						//publicVariable "axeDiagLog";
						_houseNum = [_hsRange,_lightTrig,_rndLights,_lmpCol,_plyr,_houseNum] call axeHouseLights;
						};
						//};
						if(_doTower)then{
						//axeDiagLog = format["IL:RUNNING TOWER: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLights:%4",_doLight,_ndGen,_lightTrig,_rndLights];
						//publicVariable "axeDiagLog";
						[_rngPlyr,_lightTrig,_rndLights] call axeTowerLights;
						};
						
						if(_noStreetLights)then{
						[player,_rngPlyr] call axe_NoStreetLights
						};
					};
			//};
		_plyPos = getPos player;
		};	
	sleep _slpTime;
	};
};
//Attempt a server cleanup - Not detectable..
/*
if(isServer)then{

	server_spawnCleanLightpoints = {
		private ["_pos","_delQtyLights","_qty","_missonLights","_nearby","_missionObjs"];
		if(!isNil "DZE_DYN_cleanLightpoints") exitWith { };
		DZE_DYN_cleanLightpoints = true;
		_missonLights = entities "#lightpoint";
		_missionObjs =  allMissionObjects "#lightpoint";
		diag_log (format["CLEANUP: Attempting Cleanup of Lights out of %1 or %2",count _missonLights, count _missionObjs]);
		_delQtyLights = 0;
		{
			if (local _x) then {
				_x call dayz_perform_purge;
				sleep 0.025;
				_delQtyLights = _delQtyLights + 1;
			} else {
				if (!alive _x) then {
					_pos = getPosATL _x;
					if (count _pos > 0) then {
						_nearby = {(isPlayer _x) and (alive _x)} count (_pos nearEntities [["CAManBase","AllVehicles"], 420]);//Use calculated range here.
						if (_nearby==0) then {
							_x call dayz_perform_purge;
							sleep 0.025;
							_delQtyLights = _delQtyLights + 1;
						};
					};
				};
			};
			sleep 0.001;
		} forEach _missonLights;
		if (_delQtyLights > 0) then {
			_qty = count _missonLights;
			diag_log (format["CLEANUP: Deleted %1 Lights out of %2",_delQtyLights,_qty]);
		};
		DZE_DYN_cleanLightpoints = nil;
	};
	
	while{true}do{
	[] spawn server_spawnCleanLightpoints;
	sleep 30;
	};
};
*/
