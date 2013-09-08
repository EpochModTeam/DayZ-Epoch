/*
	DayZ Epoch Lighting System - Street Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
//Changed adding variable to generator to adding to new lightpoint as player now a trigger also.
private ["_streetLamps","_num","_location","_objLightPoint","_away","_objSLamp","_dir","_lp","_sLampCol","_rndLights"];
_streetLamps= _this select 0;
_sLampCol = _this select 2;
_rndLights = _this select 3;
_num=0;
if(!isNil "_streetLamps")then{
	{
		if(_rndLights>(random 100))then{
		_objSLamp= _x select 0;
		_location = getPos _objSLamp;
		_objLightPoint = nearestObject [_location, "#lightpoint"];
		_away= abs ([_objSLamp, _objLightPoint] call BIS_fnc_distance2D);
		
			if(_away>1)then{
			
			_dir = getDir _objSLamp;
			_location set [1, (getPos _objSLamp select 1) + ((0.6)*sin(_dir))];
			_location set [2,_location select 2 - 0.2];
			_lp = [_sLampCol,0.04,_sLampCol,_location,_dir,[0,0,-1]] call axe_newLightPoint;
			_lp setVariable ["axeSLight", 1, false];

			}else{
				if((_objLightPoint getVariable ["axeSLight",0])<1)then{

				[_sLampCol,0.04,_sLampCol,_objLightPoint] call axe_lightPoint;
				};
			};
		_num=_num+1;
		};
	}forEach _streetLamps;
};
