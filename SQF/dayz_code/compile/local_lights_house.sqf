/*
	DayZ Epoch Lighting System - House Lights
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com or vbawol@veteranbastards.com.
*/
private ["_objLightPoint","_pos","_objHouse","_dir","_rng","_lpDist","_nrstTrig","_rndLights","_lmpCol","_hsAnimPer","_brtns","_lightPcnt","_hsLPDist","_hsTime","_hsCount","_litCount","_hsAnimPer2","_chnGCount","_debug"];
_hsCount = 0;
_litCount = 0;
_chnGCount = 0;
//_debug = false;

_rng = _this select 0;//player range to light windows
_nrstTrig = _this select 1;
_rndLights = _this select 2;
_lmpCol = _this select 3;
_lpDist =  _this select 4;//Range to create lightpoints at
_hsLPDist = 2; //Distance to dettect local lightpoint from house center
_objHouse = nearestObjects [_nrstTrig, ["House"], _rng]; 
if(!isNil "_objHouse")then{
	_hsTime = time;
	{
	//axeDiagLog = format["HL:ATTEMPT typeof _x:%1 | _x:%2",typeof _x,_x];
	//publicVariable "axeDiagLog";
	_hsAnimPer = getNumber (configFile >> "CfgVehicles" >> (typeof _x) >> "AnimationSources" >> "Lights_1" >> "animPeriod");
	_hsAnimPer2 = getNumber (configFile >> "CfgVehicles" >> (typeof _x) >> "AnimationSources" >> "Lights_2" >> "animPeriod");
	//axeDiagLog = format["HL:CONFIG:%1 | Base:%2 | MLight Bright:%3 | MLight Blink:%4 | Alive:%5 | Lights_2:%6",_hsAnimPer,_base,_mLights,_mLightsBlink, alive _x,_hsAnimPer2];
	//publicVariable "axeDiagLog";
		if(_hsAnimPer>0 && alive _x)then{//Is house with window
				
		_brtns = 0.0025;
		_lightPcnt = (player distance _x)/10;
		_brtns = _brtns * _lightPcnt;//Light brightness by percentage
		//Min / Max Levels
		if (_brtns > 0.06)then{_brtns = 0.06;};
		if (_brtns < 0.015)then{_brtns = 0.015;};
		
		_objLightPoint = nearestObject [_x, "#lightpoint"];
		_pos = getPos _x;
		_dir = getDir _x;
					
			if(_x getVariable ["axeHLight", 0]<1)then{
				if(_rndLights>random 100)then{
				_litCount = _litCount +1;
					if(_x animationPhase "Lights_1"==0) then{
						_x animate ["Lights_1",1];
						if(_hsAnimPer2>0)then{
							if(42 > random 100) then{_x animate ["Lights_2",1];};//Randomly light second set of windows if house has the option
						};
						//Wait for animation phase
						while{true}do{sleep .1;if (_x animationPhase "Lights_1"==1) exitWith {};};
					};
					//axeDiagLog = format["HL: animPhase:%1",_x animationPhase "Lights_1"];
					//publicVariable "axeDiagLog";
					if((_x animationPhase "Lights_1">0))then{
					
						if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))>_hsLPDist)then{
							if(player distance _x < _lpDist)then{
							//if(_debug)then{axeDiagLog = format["HL:NEW LP:%1 | _brtns:%2",_x,_brtns];publicVariable "axeDiagLog";};
							//[_lmpCol,0.01,_lmpCol,[_pos select 0,_pos select 1,1],_dir,[0,0,-1]] call axe_newLightPoint;
							[_lmpCol,_brtns,_lmpCol,getPos _x,_dir,[0,0,-2.6]] call axe_newLightPoint;
							_x setVariable ["brtns", _brtns, false];
							_x setVariable ["axeHLight", 1, false];
							};
						}else{
							if(player distance _x < _lpDist)then{
							//if(_debug)then{axeDiagLog = format["HL:EXISTS LP:%1 | _brtns:%2",_x,_brtns];publicVariable "axeDiagLog";};
							//[_lmpCol,_brtns,_lmpCol,_objLightPoint] call axe_lightPoint;
							_objLightPoint setLightColor _lmpCol;
							_objLightPoint setLightBrightness _brtns;
							_objLightPoint setLightAmbient _lmpCol;
							_chnGCount = _chnGCount + 1;
							_x setVariable ["brtns", _brtns, false];
							_x setVariable ["axeHLight", 1, false];
							};
						};
					};
				};
			}else{//change brightness
				if(player distance _x < _lpDist)then{
					if((abs ([_pos, _objLightPoint] call BIS_fnc_distance2D))<_hsLPDist)then{
					_litCount = _litCount +1;
					//if(_debug)then{axeDiagLog = format["HL:EXISTS LP:%1 | _brtns:%2",_x,_brtns];publicVariable "axeDiagLog";};
					_chnGCount = _chnGCount + 1;
					_x setVariable ["brtns", _brtns, false];
					//[_lmpCol,_brtns,_lmpCol,_objLightPoint] call axe_lightPoint;
					_objLightPoint setLightColor _lmpCol;
					_objLightPoint setLightBrightness _brtns;
					_objLightPoint setLightAmbient _lmpCol;
					};
				}else{
				deleteVehicle _objLightPoint;
				_x setVariable ["axeHLight", 0, false];
				};
			};
		};
		//axeDiagLog = "-------------------------------------------";
		_hsCount = _hsCount + 1;
	} forEach _objHouse;
	if(_debug)then{
	//axeDiagLog = format["HL:FINISHED: Time:%1 | Total Houses:%2 | Lit Houses:%3",time - _hsTime,_hsCount,_litCount];
	//publicVariable "axeDiagLog";
	};
};
