/*
	DayZ Epoch Lighting System - Light Init
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com or vbawol@veteranbastards.com.
	
	To Do - Light poles - Automatic lighting for bases (with or without generator) - Menu action to switch off house and tower lights - Add sparks and electrical sound - Add slight randomness to 'reliable' light source - Try and use ASC_EU lights for map based streetlights so they have bulbs and look better - Towers within 20m of 3 house light sources may not always light up - Add Custom (enterable) buildings and items (water pump). Maybe create brighter house lightpoints at further distances to compensate for engine limits.
	Wishlist - Detect weather to make lights fail in thunder :)
*/
private ["_sunrise","_slpTime","_lpRange","_hsRange","_nrGen","_genCount","_rndLightsIn","_rndLightsOut","_genClass","_doHouse","_doTower","_doLight","_fnHr","_stHr","_plyr","_ndGen","_trgRng","_rngPlyr","_lightTrig","_lmpCol"];

//Start / Stop Time
_stHr = _this select 0;
_fnHr = _this select 1;
_doHouse = _this select 2;
_doTower = _this select 3;
_ndGen = _this select 4;
_rndLightsIn = _this select 5;
_trgRng = _this select 6;
_rngPlyr = _this select 7;
_lmpCol = _this select 8;
_genClass = _this select 9;
_slpTime = _this select 10;
_lpRange = _rngPlyr -20;
_doLight = true;
_nrGen = [];
_genCount = 0;
_hsRange = 250;
_lightTrig = vehicle player;//Central point around which to run the lights
call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_lightFunctions.sqf";
axeTowerLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_tower.sqf";
axeHouseLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_house.sqf";
//axeStreetLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_street.sqf";
axeDeleteLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_off.sqf";
waitUntil {getPos Player select 0 > 0};

//Detect Dusk and Dawn
_sunrise = call world_sunRise;
if(_fnHr < 1)then{_fnHr =  _sunrise + 0.5;};
if(_stHr < 1)then{_stHr =  (24 - _sunrise) - 0.5;};

//axeDiagLog = format["IL:LIGHTS STARTED: _stHr:%1 | _fnHr:%2 | time:%3 | for:%4",_stHr,_fnHr, dayTime, vehicle player];
//publicVariable "axeDiagLog";
			
while {alive player}do{
	if(daytime<_fnHr||daytime>_stHr)then{
	_plyr = vehicle player;
	_rndLightsOut = _rndLightsIn;
	_nrGen = nearestObjects [_plyr, [_genClass], _rngPlyr];
	_genCount = count _nrGen;
	
	//Set Generator to use and Assign trigger object
	_lightTrig = _plyr;
	if(_genCount>0)then{
		{
			if(_x getVariable["GeneratorRunning",false])then{
			_lightTrig = _x;
			};
		}forEach _nrGen;
	};
	
	if(!_ndGen)then{_lightTrig = _plyr;};
	
	//Nearby Generator ?
	if(_ndGen && _genCount<1)then{_doLight = false;}else{_doLight=true;};
	
	//Generator not required !
	if(!_ndGen)then{_doLight = true;};
	
	//Choose range, player or generator
	if(_ndGen)then{_hsRange = _trgRng;}else{_hsRange = _rngPlyr;};
	
	//100% chance of lights with nearby generator - ToDo, make this slightly lower.
	if(_genCount>0&&(_lightTrig getVariable["GeneratorRunning",false]))then{
	_rndLightsOut = 100;
	};
	
	//Do streetlight stuff
	[_trgRng,player,_rndLightsOut] call axe_returnStreetLights;	
	
	if(_ndGen && !(_lightTrig getVariable["GeneratorRunning",false]))then{_doLight = false;};//Final check - Not run if nearest gen isn't running
	
	//axeDiagLog = format["IL:RUNNING: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLightsOut:%4",_doLight,_ndGen,_lightTrig,_rndLightsOut];
	//publicVariable "axeDiagLog";
			
			if(_doLight)then{
				//if(speed _plyr > 0 )then{
				if(_doHouse)then{
				//axeDiagLog = format["IL:RUNNING HOUSE: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLightsOut:%4",_doLight,_ndGen,_lightTrig,_rndLightsOut];
				//publicVariable "axeDiagLog";
				[_hsRange,_lightTrig,_rndLightsOut,_lmpCol,_lpRange] call axeHouseLights;
				};
				//};
				if(_doTower)then{
				//axeDiagLog = format["IL:RUNNING TOWER: _doLight:%1 | _ndGen:%2 | _lightTrig:%3 | _rndLightsOut:%4",_doLight,_ndGen,_lightTrig,_rndLightsOut];
				//publicVariable "axeDiagLog";
				[_rngPlyr,_lightTrig,_rndLightsOut] call axeTowerLights;
				};
			};
			
			//Decide how and if to turn lights off
			if(_ndGen && !(_lightTrig getVariable["GeneratorRunning",false]))then{
			[_rngPlyr,_lightTrig,false,_genCount,_lpRange] call axeDeleteLights;
			};
			
			if(_rndLightsOut<random 100)then{
			[_rngPlyr,_lightTrig,true,_genCount,_lpRange] call axeDeleteLights;
			};
	};	
sleep _slpTime;
};
