/*
	DayZ Epoch Lighting System - Light Functions
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com or vbawol@veteranbastards.com.
*/
axe_returnStreetLights={
private["_lights","_objName","_rng","_nrstGen","_rndLights","_sleeptime"];
_rng = _this select 0;
_nrstGen = _this select 1;
_rndLights = _this select 2;
_lights = ["a_fuelstation_sign.p3d","lampa_ind_zebr.p3d","lampa_ind.p3d","lampa_sidl_3.p3d","lampa_sidl_2.p3d","lampa_sidl.p3d","powlines_concl.p3d","powlines_woodl.p3d"];
axe_streetLamps=[];

	{
		if("" != typeOf _x) then {
				
			if (alive _x) then {
					
				_objName = _x call DZE_getModelName;

				if (_objName in _lights) then {
					if(_rndLights<random 100)then{
						if(_rndLights/3>random 100)then{//Reduce chance more due to speed of script
						
							for "_s" from 1 to 8 do {
								if(_s%2==0)then{
								_x switchlight "off";
								
								}else{
								_x switchlight "on";
								;
								};
							_sleeptime=(random 100)/100;
							sleep _sleeptime;
							};
							_x switchlight "off";
							//axeDiagLog = format["FN:SL NEW OFF:%1",_x];
							//publicVariable "axeDiagLog";
						}else{
						_x switchlight "on";
						//axeDiagLog = format["FN:SL NEW ON:%1",_x];
						//publicVariable "axeDiagLog";
						};
					}else{
					_x switchlight "on";
					//axeDiagLog = format["FN:SL NEW ON:%1",_x];
					//publicVariable "axeDiagLog";
					};
				[axe_streetLamps , [_x]] call BIS_fnc_arrayPush;
				};
			};
		};
	} foreach nearestObjects [getPos _nrstGen, [], _rng];
axe_streetLamps
};
axe_newLightPoint={
private ["_lp","_pos","_col","_brt","_amb","_pos","_dir","_vect"];
_col = _this select 0;
_brt = _this select 1;
_amb = _this select 2;
_pos = _this select 3;
_dir = _this select 4;
_vect = _this select 5;
_lp = "#lightpoint" createVehicleLocal _pos;
_lp setLightColor _col;
_lp setLightBrightness _brt;
_lp setLightAmbient _amb;
_lp setDir _dir;
_lp setVectorUp _vect;
//axeDiagLog = format["FN:LP NEW CREATE:%1",_lp];
//publicVariable "axeDiagLog";
_lp
};
axe_lightPoint={
private ["_lp","_col","_brt","_amb"];
_col = _this select 0;
_brt = _this select 1;
_amb = _this select 2;
_lp = _this select 3;
_lp setLightColor _col;
_lp setLightBrightness _brt;
_lp setLightAmbient _amb;
//axeDiagLog = format["FN:LP EXISTS LIGHT:%1",_lp];
//publicVariable "axeDiagLog";
};
axe_towerLight={
private["_twr","_lCol","_lbrt","_lamb","_oset","_twrPos","_rad","_a","_b","_ang","_nrTLs","_doLit"];
_twr = _this select 3 select 0;
_lCol = _this select 0;
_lbrt = _this select 1;
_lamb = _this select 2;
_doLit = _this select 4 select 0;
_twrPos =  getPos _twr;
_rad=2.65;
_oset=14;
_nrTLs= position _twr nearObjects ["#lightpoint",20];

	if(count _nrTLs > 3)then{
	//axeDiagLog = format["FN:TL FOUND LP:%1",count _nrTLs];
	//publicVariable "axeDiagLog";
		{
			if(_doLit)then{
			[_lCol,_lbrt,_lamb,_x] call axe_lightPoint;
			}else{
			deleteVehicle _x;
			};
		sleep .2;
		}forEach _nrTLs;
		
	}else{
	//axeDiagLog = format["FN:TL NEW LPS:%1",_twr];
	//publicVariable "axeDiagLog";
		if(_doLit)then{
			for "_tls" from 1 to 4 do {
			_ang=(360 * _tls / 4)-_oset;
			_a = (_twrPos select 0)+(_rad * cos(_ang));
			_b = (_twrPos select 1)+(_rad * sin(_ang));
			[_lCol,_lbrt,_lamb,[_a,_b,(_twrPos select 2) + 26],_ang,[0,0,-1]] call axe_newLightPoint;
			sleep .4;
			};
		};
	};
};
