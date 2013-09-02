/*
	DayZ Epoch Lighting System
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
private ["_streetLamps","_num","_location","_objLightPoint","_away","_objSLamp","_nrstGen","_dir"];

_streetLamps= _this select 0;
_nrstGen = _this select 1;
_num=0;

if(!isNil "_streetLamps")then{
	
	//Illuminate
	{
	_objSLamp= _x select 0;
	_location = getPos _objSLamp;
	_objLightPoint = nearestObject [_location, "#lightpoint"];
	_away= abs ([_objSLamp, _objLightPoint] call BIS_fnc_distance2D);
	
		if(_away>1)then{
		
		_dir = getDir _objSLamp;
		_location set [1, (getPos _objSLamp select 1) + ((0.6)*sin(_dir))];
		_location set [2,_location select 2 - 0.2];
		
		[[1, 0.88, 0.73],0.04,[1, 0.88, 0.73],_location,_dir,[0,0,-1]] call axe_newLightPoint;

		}else{
			if((_nrstGen getVariable ["axeSLight",0])<1)then{

			[[1, 0.88, 0.73],0.04,[1, 0.88, 0.73],_objLightPoint] call axe_lightPoint;

			};
		};
	_num=_num+1;
	}forEach _streetLamps;
	_nrstGen setVariable ["axeSLight", 1, false];
};

