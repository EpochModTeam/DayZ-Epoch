/*
	DayZ Epoch Lighting System - Light Control
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
	
	To Do - Light poles - Automatic lighting for bases (with or without generator) - Menu action to switch off house and tower lights
	Wishlist - Detect weather to make lights fail in thunder :)
*/
private ["_sleep","_lpRange","_hsRange","_nrGen","_genCount","_rndLightsIn","_rndLightsOut","_genClass","_doHouse","_doStreet","_doTower","_doLight","_fnHr","_stHr","_plyr","_hndlSLights","_hndlHLights","_hndlTLights","_hndlDelLights","_hndlFailLights","_ndGen","_trgRng","_rngPlyr","_arrStreetLights","_lightTrig","_lmpCol"];

_stHr = _this select 0;//Hour (in 24 hours) to start lights
_fnHr = _this select 1;//Hour (in 24 hours) to stop lights
waitUntil {(daytime<_fnHr||daytime>_stHr)};

_doHouse = _this select 2;//House Lights ?
_doStreet = _this select 3;//Street Lights ? Currently default to false as server search code handles built in streetlights. Can be switched on, will add an additional routine deciding if to switch streetlights on or off based on _rndLightsIn..?
_doTower = _this select 4;// Tower Lights ?

_ndGen = _this select 5;//Require a Generator ?
_rndLightsIn = _this select 6;//Add a chance for lights to come on as a precentage. 100 = always on.. Use this to reduce frequency of lights, uses the opposite value to delete / fail lights..
_trgRng = _this select 7;//Range from trigger (generator or player) to light up objects.
_rngPlyr = _this select 8;//Distance from player to search for generators. If Generator not required distance to light objects (generally (: )
//_trigDist = _this select 9;//Distance that player needs to move to trigger the routine. (NOT USED CURRENTLY)
_lmpCol = _this select 10;//Change House Light Colour. Streetlamps now set in config, not editable at runtime.
_genClass = _this select 11;//Generator class. Any (client viewable) Object with variable "GeneratorRunning" set to true will suffice.
_lpRange = _this select 12;//Range to create lightpoints (from player). And delete beyond (for houses only).
_sleep = _this select 14;//Sleep time - Code cycles too quickly to be realistic. Increasing _trgRng and/or _rngPlyr will have a similar effect but will cost in processing time..
_doLight = true;
_nrGen = [];
_genCount = 0;
_hsRange = 250;
_lightTrig = [];//Central point around which to run the lights - _trigDist is calculated from the position of this entity (player or generator)
call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_lightFunctions.sqf";
axeTowerLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_tower.sqf";
axeHouseLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_house.sqf";
axeStreetLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_street.sqf";
axeDeleteLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_off.sqf";
waitUntil {getPos Player select 0 > 0};
while {alive player}
do
{
	if(daytime<_fnHr||daytime>_stHr)then{
	

	_plyr = vehicle player;
	_rndLightsOut = _rndLightsIn;
	_nrGen = nearestObjects [_plyr, [_genClass], _rngPlyr];
	_genCount = count _nrGen;
	if(_ndGen)then{_lightTrig = _nrGen;}else{_lightTrig = [_plyr];};
	
	if(_ndGen && _genCount<1)then{_doLight = false;}else{_doLight=true;};//Nearby Generator ?
	if(!_ndGen)then{_doLight = true;};//Generator not required !
	
	if(!_ndGen)then{
	_hsRange = _trgRng;
	}else{
	_hsRange = _rngPlyr;
	};
	
	if(_genCount>0&&((_nrGen select 0) getVariable["GeneratorRunning",false]))then{
	_rndLightsOut = 92;
	};
		
	_arrStreetLights = [_trgRng,player,_rndLightsOut] call axe_returnStreetLights;	
	
		{
			if(_ndGen && !(_x getVariable["GeneratorRunning",false]))then{_doLight = false;};//Final check - Not run if nearest gen isn't running
			
			if(_doLight)then{
			
				
				if(_doTower)then{
				_hndlTLights = [_trgRng,_x,_rndLightsOut] spawn axeTowerLights;
				};
				if(_doHouse)then{
				_hndlHLights = [_hsRange,_x,_rndLightsOut,_lmpCol,_lpRange] spawn axeHouseLights;
				};
				if(_doStreet)then{
				_hndlSLights = [_arrStreetLights,_x,_lmpCol,_rndLightsOut] spawn axeStreetLights;
				};

			};
			
			if(_ndGen && !(_x getVariable["GeneratorRunning",false]))then{
			_hndlDelLights = [_rngPlyr,_x,false,_genCount,_lpRange] spawn axeDeleteLights;
			waitUntil {scriptDone _hndlDelLights};
			};
			
			if(_rndLightsOut<random 100)then{
			_hndlFailLights = [_rngPlyr,_x,true,_genCount,_lpRange] spawn axeDeleteLights;
			waitUntil {scriptDone _hndlFailLights};
			};
		}forEach _lightTrig;	
	};	
sleep _sleep;
};
