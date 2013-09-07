/*
	DayZ Epoch Lighting System - House Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_lightstate","_objLightPoint","_pos","_objHouse","_dir","_rng","_nrstTrig","_rndLights","_lmpCol"];
_rng = _this select 0;
_nrstTrig = _this select 1;
_rndLights = _this select 2;
_lmpCol = _this select 3;

_objHouse = nearestObjects [_nrstTrig, ["House"], _rng]; 

if(!isNil "_objHouse")then{
	{
	
		if(_rndLights>(random 100))then{
		_lightstate = _x animationPhase "Lights_1";//Window lights on or off
		_pos = getPos _x;
		_dir = getDir _x;
			if(_x getVariable ["axeHLight", 0]<2)then{
				if(_lightstate==0) then
				{
					_x animate ["Lights_1",1];
					if(65 <(random 100)) then{
					_x animate ["Lights_2",1];
					};
					sleep .1;//Wait for animation phase
				};
				
				if((_x animationPhase "Lights_1"==1))then{

				_objLightPoint = nearestObject [_x, "#lightpoint"];
					if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))>1)then{
					
					[_lmpCol,0.01,_lmpCol,[_pos select 0,_pos select 1,-3],_dir,[0,0,-1]] call axe_newLightPoint;
					_x setVariable ["axeHLight", 1, false];
					}else{

						if((_x getVariable ["axeHLight", 0])<1)then{
						[_lmpCol,0.01,_lmpCol,_objLightPoint] call axe_lightPoint;
						_x setVariable ["axeHLight", 1, false];
						};
					};
				};
			};
		}else{
		_x setVariable ["axeHLight", 2, false];//Set as failed power supply
		};
	} forEach _objHouse;
};
