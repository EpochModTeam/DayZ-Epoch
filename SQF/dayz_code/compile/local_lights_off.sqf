/*
	DayZ Epoch Lighting System - Fail / Switch Off Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_hsRange","_rng","_pos","_hsCount","_nrstTrig","_objHouses","_objHouse","_nrTowers","_doRand","_rnd","_animlightpoint","_hasLight","_sleeptime","_lightstate","_objLightPoint"];
_rng = _this select 0;//Full distance to turn off all lights if required
_nrstTrig = _this select 1;
_doRand = _this select 2;//Random if gen not required otherwise just switch thenm off,,
_hsRange = _this select 4;//House range for randomly failing nearby (within lp distance)houses)
_hasLight = false;

if(_doRand)then{//Randomly fail a nearby house - If generator skip and reset house variable so it can be lit again (reliability if gen nearby)
_objHouses = nearestObjects [_nrstTrig, ["House"], _hsRange]; 
	if(count _objHouses >3)then{
	
	_hsCount = count _objHouses;
	_rnd = random _hsCount;
	_objHouse = _objHouses select _rnd;
	_pos = getPos _objHouse;
	_lightstate = _objHouse animationPhase "Lights_1";
		if(_lightstate==1) then{
		_animlightpoint = nearestObject [_objHouse, "#lightpoint"];
		if((abs ([_pos, _animlightpoint] call BIS_fnc_distance2D))<1)then{_hasLight=true;};
			for "_s" from 1 to 6 do {
				if(_s%2==0)then{
				if(_hasLight)then{_animlightpoint setLightBrightness 0;};
				_objHouse animate ["Lights_1",0];
				_objHouse animate ["Lights_2",0];
				}else{
				if(_hasLight)then{_animlightpoint setLightBrightness 0.01;};
				_objHouse animate ["Lights_1",1];
				};
			_sleeptime=(random 100)/100;
			sleep _sleeptime;
			};
		if(_hasLight)then{deleteVehicle _animlightpoint;};
		_objHouse animate ["Lights_1",0];
		_objHouse animate ["Lights_2",0];
		_objHouse setVariable ["axeHLight", 0, true];//Fail light house leccy supply
		};
	};
}else{//Switch them all off

_objHouses = nearestObjects [_nrstTrig, ["House"], _rng]; 
_nrTowers = nearestObjects [_nrstTrig, ["Land_Ind_IlluminantTower"], _rng];
	
	if(count _objHouses >0)then{
		{
		_pos = getPos _x;
		_objLightPoint = nearestObject [_x, "#lightpoint"];
			if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))<1.5)then{
			deleteVehicle _objLightPoint;
			};
		}forEach _objHouses;
	};
	
	if(count _objHouses >0)then{
		{
		_x animate ["Lights_1",0];
		_x animate ["Lights_2",0];
		_x setVariable ["axeHLight", 0, true];
		}forEach _objHouses;
	};
	
	if(count _nrTowers >0)then{
		{
		_pos = getPos _x;
			for "_s" from 1 to 4 do {
			_objLightPoint = nearestObject [_x, "#lightpoint"];
				if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))<25)then{
				deleteVehicle _objLightPoint;
				};
			};

		_x setVariable ["axeTLight", 0, false];
		}forEach _nrTowers;
	};
};
/*
{

if(_cntNrGen>0)then{//reset house if gen nearby to help create reliability regardless of gen requirement ?
	_x setVariable ["axeHLight", 0, false];
	};
}forEach _objHouses;
*/
