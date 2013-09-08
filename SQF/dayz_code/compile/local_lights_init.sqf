/*
	DayZ Epoch Lighting System - Light Control
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
	
	To Do - Tidy up decision logic | light poles ? | player movement detection currently removed, need to deal with newly started generators | Tidy up tower light code
*/
private ["_nrGen","_rndLights","_genClass","_i","_doHouse","_doStreet","_doTower","_doLight","_fnHr","_stHr","_plyr","_hndlSLights","_hndlHLights","_hndlTLights","_hndlDelLights","_hndlFailLights","_tmpPlyrPos","_ndGen","_trgRng","_rngPlyr","_arrStreetLights","_rtnLights","_wait","_waitcmd","_trigDist","_lightTrig","_lmpCol","_failPcnt"];

_stHr = _this select 0;//Hour (in 24 hours) to start lights
_fnHr = _this select 1;//Hour (in 24 hours) to stop lights
waitUntil {(daytime<_fnHr||daytime>_stHr)};

_doHouse = _this select 2;//House Lights ?
_doStreet = _this select 3;//Street Lights ?
_doTower = _this select 4;// Tower Lights ?

_ndGen = _this select 5;//Require a Generator ?
_rndLights = _this select 6;//Add a chance for lights to come on as a precentage. 100 = always on.. Use this to reduce frequency of lights, designed for no generator but will work with either option
_trgRng = _this select 7;//Range from trigger (generator or player) to light up objects.
_rngPlyr = _this select 8;//Distance from player to search for generators.
_trigDist = _this select 9;//Distance that player needs to move to trigger the routine.
_lmpCol = _this select 10;//Change Street Lamp Colour
_genClass = _this select 11;//Generator class. NB. Is Epcoh specific as variable 
_tmpPlyrPos = [0,0,0];
_wait = [];
_doLight = true;
_nrGen = [];
_failPcnt = 42;//Percentage to fail house lights
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

	if(_ndGen)then{
	_nrGen = nearestObjects [_plyr, [_genClass], _rngPlyr];
	_lightTrig = _nrGen;
	}else{
	_lightTrig = [_plyr];
	_nrGen = [];
	};
	
	//Logic to decide if lights to be done or not
	if(_ndGen && (count _nrGen)<1)then{_doLight = false;}else{_doLight=true;};//Nearby Generator ?
	if(!_ndGen)then{_doLight = true;};//Generator not required !
	
		{
			if(_ndGen && !(_x getVariable["GeneratorRunning",false]))then{_doLight = false;};//Final check - Not run if nearest gen isn't running
			
			if(_doLight)then{
				
				_rtnLights = [_trgRng,_x] call axe_returnStreetLights;
				_arrStreetLights = _rtnLights select 0;
				_waitcmd="";
				_wait=[];
				
				if(_doTower)then{
				_hndlTLights = [_trgRng,_x,_rndLights] spawn axeTowerLights;
				[_wait , "scriptDone _hndlTLights"] call BIS_fnc_arrayPush;
				};
				if(_doHouse)then{
				_hndlHLights = [_trgRng,_x,_rndLights,_lmpCol] spawn axeHouseLights;
				[_wait , "scriptDone _hndlHLights"] call BIS_fnc_arrayPush;
				};
				if(_doStreet)then{
				_hndlSLights = [_arrStreetLights,_x,_lmpCol,_rndLights] spawn axeStreetLights;
				[_wait , "scriptDone _hndlSLights"] call BIS_fnc_arrayPush;
				};

				for [{_i=0}, {_i<3}, {_i=_i+1}]do{_waitcmd=_waitcmd+format["%1",_wait select _i];if(_i<2)then{_waitcmd=_waitcmd+"&&";};};
				call compile format ["waitUntil {%1}",_waitcmd];
			};
			
			if(_ndGen && !(_x getVariable["GeneratorRunning",false]))then{
			//hint "Lights Off";
			_hndlDelLights = [_trgRng,_x,false] spawn axeDeleteLights;
			waitUntil {scriptDone _hndlDelLights};
			};
			
			//Random Light Failure
			if(_failPcnt>(random 100))then{
			_hndlFailLights = [_trgRng,_x,true] spawn axeDeleteLights;
			waitUntil {scriptDone _hndlFailLights};
			};
		}forEach _lightTrig;	
	};	
};
