/*
	DayZ Epoch Lighting System - Street Lights
	Made for DayZ Epoch please ask permission to use/edit/distrubute email gregory.andrew@gmail.com.
*/
//Changed adding variable to generator to adding to new lightpoint as player now a trigger also.
private ["_rndLights","_streetLamps","_sleeptime"];
_streetLamps= _this select 0;
//_sLampCol = _this select 2;
_rndLights = _this select 3;
_rndLights=_rndLights*2;

if(!isNil "_streetLamps")then{
	{
		if(_rndLights>(random 100))then{
		_x select 0 switchlight "on";
		};
		
		if(_rndLights<100)then{//Don't switch off if generator nearby
			if(_rndLights/3>(random 100))then{//Reduce chance more as script run so often
				for "_s" from 1 to 6 do {
					if(_s%2==0)then{
					_x select 0 switchlight "off";
					}else{
					_x select 0 switchlight "on";
					};
				_sleeptime=(random 250)/100;
				sleep _sleeptime;
				};
				
				if(_rndLights>(random 100))then{
				_x select 0 switchlight "off";
				}else{
				_x select 0 switchlight "on";
				};
			};
		};
		
	}forEach _streetLamps;
};
