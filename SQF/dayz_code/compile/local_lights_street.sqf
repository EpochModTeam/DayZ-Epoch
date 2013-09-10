/*
	DayZ Epoch Lighting System - Street Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email axeman@thefreezer.co.uk.
*/
//Changed adding variable to generator to adding to new lightpoint as player now a trigger also.
private ["_rndLights","_streetLamps"];
_streetLamps= _this select 0;
//_sLampCol = _this select 2;
_rndLights = _this select 3;
_rndLights=_rndLights*2;

if(!isNil "_streetLamps")then{
	{
		if(_rndLights>(random 100))then{
		_x select 0 switchlight "on";
		};
		
		if(_rndLights/2>(random 100))then{
		_x select 0 switchlight "off";
		};
		
	}forEach _streetLamps;
};
