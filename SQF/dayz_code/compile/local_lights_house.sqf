/*
	DayZ Epoch Lighting System
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_lightstate","_objLightPoint","_pos","_objHouse","_dir","_rng","_nrstGen"];
_rng = _this select 0;
_nrstGen = _this select 1;
_objHouse = nearestObjects [_nrstGen, ["House"], _rng]; 

if(!isNil "_objHouse")then{
	{
	
	_lightstate = _x animationPhase "Lights_1";//Window lights on or off
	_pos = getPos _x;
	_dir = getDir _x;
	 
		if(_lightstate==0) then
		{
			_x animate ["Lights_1",1];
			if(65 <(random 100)) then{
			_x animate ["Lights_2",1];
			};
			sleep .1;
		};
		
		if(_lightstate==1) then
		{
		_objLightPoint = nearestObject [_x, "#lightpoint"];
			if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))>1)then{
			
			[[1, 1, 1],0.01,[5, 5, 5],[_pos select 0,_pos select 1,-3],_dir,[0,0,-1]] call axe_newLightPoint;
			_x setVariable ["axeHLight", 1, false];
		
			}else{

				if((_x getVariable ["axeHLight", 0])<1)then{
				[[1, 1, 1],0.01,[5, 5, 5],_objLightPoint] call axe_lightPoint;
				_x setVariable ["axeHLight", 1, false];
				};
			};
		};
	 
	} forEach _objHouse;
};
