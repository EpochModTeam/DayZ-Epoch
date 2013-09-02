/*
	DayZ Epoch Lighting System
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_nrGen","_i","_doHouse","_doStreet","_doTower","_doAll","_fnHr","_stHr","_plyr","_hndlSLights","_hndlHLights","_hndlTLights","_tmpPlyrPos","_ndGen","_rngGen","_rngPlyr","_arrStreetLights","_rtnLights","_wait","_waitcmd","_trigDist"];

_stHr = 17;//Hour (in 24 hours) to start lights
_fnHr = 6;//Hour (in 24 hours) to stop lights
waitUntil {(daytime<_fnHr||daytime>_stHr)};

_doHouse=true;//House Lights ?
_doStreet=true;//Street Lights ?
_doTower=true;// Tower Lights ?

_ndGen = true;//Require a Generator ?
_rngGen = 120;//Generator power range.
_rngPlyr = 600;//Distance from player to search for generators.
_trigDist = 10;//Distance that player needs to move to trigger the routine.
//END OF EDIT VARS

_wait = [];
_doAll = true;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_lightFunctions.sqf";
axeTowerLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_tower.sqf";
axeHouseLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_house.sqf";
axeStreetLights = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lights_street.sqf";
waitUntil {getPos Player select 0 > 0};

while {alive player}
do
{
	if(daytime<_fnHr||daytime>_stHr)then{
	_plyr = vehicle player;
	_tmpPlyrPos = getPos _plyr;
	
	_nrGen = nearestObjects [player, ["Generator_DZ"], _rngPlyr];
	
	if(count _nrGen >0)then{
	};
		{
			if(_ndGen && (count _nrGen)<1)then{_doAll = false;}else{_doAll=true;};
			
			if(_doAll)then{
				
				_rtnLights = [_rngGen,_x] call axe_returnStreetLights;
				_arrStreetLights = _rtnLights select 0;
				_waitcmd="";
				_wait=[];
				
				if(_doTower)then{
				_hndlTLights = [_rngGen,_x] spawn axeTowerLights;
				[_wait , "scriptDone _hndlTLights"] call BIS_fnc_arrayPush;
				};
				if(_doHouse)then{
				_hndlHLights = [_rngGen,_x] spawn axeHouseLights;
				[_wait , "scriptDone _hndlHLights"] call BIS_fnc_arrayPush;
				};
				if(_doStreet)then{
				_hndlSLights = [_arrStreetLights,_x] spawn axeStreetLights;
				[_wait , "scriptDone _hndlSLights"] call BIS_fnc_arrayPush;
				};

				for [{_i=0}, {_i<3}, {_i=_i+1}]do{_waitcmd=_waitcmd+format["%1",_wait select _i];if(_i<2)then{_waitcmd=_waitcmd+"&&";};};
				call compile format ["waitUntil {%1}",_waitcmd];
				
			};

		}forEach _nrGen;

		if( abs ([_tmpPlyrPos, getPos _plyr] call BIS_fnc_distance2D)<_trigDist)then{_doAll=false;};
		
	};
};
