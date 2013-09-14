/*
	DayZ Epoch Lighting System - House Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_objLightPoint","_pos","_objHouse","_dir","_rng","_lpDist","_nrstTrig","_rndLights","_lmpCol","_failRnd"];
_rng = _this select 0;//player range to light windows
_nrstTrig = _this select 1;
_rndLights = _this select 2;
_lmpCol = _this select 3;
_lpDist =  _this select 4;//Range to create lightpoints at
_failRnd = _this select 5;//use trigger distance value as random for failure. This controls the long term failure of lights
_objHouse = nearestObjects [_nrstTrig, ["House"], _rng]; 
if(!isNil "_objHouse")then{
	{
		if(_x getVariable ["axeHLight", 0]<1)then{
			if(_rndLights>random 100)then{
				if(_x animationPhase "Lights_1"==0) then
				{
					_x animate ["Lights_1",1];
					if(42 > random 100) then{_x animate ["Lights_2",1];};//Randomly light second set of windows (some houses have two)
					sleep .1;//Wait for animation phase
				};
				if((_x animationPhase "Lights_1">0))then{
				_pos = getPos _x;
				_dir = getDir _x;
				
				_objLightPoint = nearestObject [_x, "#lightpoint"];
					if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))>1)then{
						if(player distance _x < _lpDist)then{
						[_lmpCol,0.03,_lmpCol,[_pos select 0,_pos select 1,-3],_dir,[0,0,-1]] call axe_newLightPoint;
						_x setVariable ["axeHLight", 1, false];
						};
					}else{
						if(player distance _x < _lpDist)then{
						[_lmpCol,0.03,_lmpCol,_objLightPoint] call axe_lightPoint;
						_x setVariable ["axeHLight", 1, false];
						}else{
						deleteVehicle _objLightPoint;
						_x setVariable ["axeHLight", 0, false];
						};
					};
				};
			};
		}else{
			if(2>random _failRnd)then{//Low chance that house is failed permanently. Until next generator restart - Generator is being overworked.
			_objLightPoint = nearestObject [_x, "#lightpoint"];
				if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))<1.2)then{
				deleteVehicle _objLightPoint;
				};
			_x animate ["Lights_1",0];
			_x animate ["Lights_2",0];
			_x setVariable ["axeHLight", 2, true];//2 = off
			};
		};
	} forEach _objHouse;
};
