/*
	DayZ Epoch Lighting System - Fail / Switch Off Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_rng","_nrstTrig","_objHouses","_objHouse","_nrLights","_nrTowers","_doRand","_rnd","_animlightpoint","_sleeptime","_brightness"];
_rng = _this select 0;
_rng = _rng + 20;
_nrstTrig = _this select 1;
_doRand = _this select 2;
_nrLights = position _nrstTrig nearObjects ["#lightpoint",_rng];
_objHouses = nearestObjects [_nrstTrig, ["House"], _rng]; 
_nrTowers = nearestObjects [_nrstTrig, ["Land_Ind_IlluminantTower"], _rng];
if(_doRand)then{//Randomly fail a nearby house
	if(count _objHouses >0)then{
	_rnd = random count _objHouses;
	_objHouse = _objHouses select _rnd;
	_animlightpoint = nearestObject [_objHouse, "#lightpoint"];
		for "_s" from 1 to 5 do {
			if(_s%2==0)then
			{
			_brightness=0;
				for "_l" from 1 to 2 do {
				_objHouse animate [format ["Lights_%1",_l],0];
				};
			}
			else
			{
			_brightness=0.01;
				for "_l" from 1 to 2 do {
				_objHouse animate [format ["Lights_%1",_l],1];
				};
			};
		_animlightpoint setLightBrightness _brightness;
		_sleeptime=(random 100)/1200;
		sleep _sleeptime;
		};
	_animlightpoint setLightBrightness 0;
	_objHouse animate ["Lights_1",0];
	_objHouse animate ["Lights_2",0];
	_objHouse setVariable ["axeHLight", 0, false];
	};
}
else{
	if(count _nrLights >0)then{
		{
		deleteVehicle _x;
		}forEach _nrLights;
	};
	
	if(count _objHouses >0)then{
		{
		_x animate ["Lights_1",0];
		_x animate ["Lights_2",0];
		_x setVariable ["axeHLight", 0, false];
		}forEach _objHouses;
	};
	
	if(count _nrTowers >0)then{
		{
		_x setVariable ["axeTLight", 0, false];
		}forEach _nrTowers;
	};
};
