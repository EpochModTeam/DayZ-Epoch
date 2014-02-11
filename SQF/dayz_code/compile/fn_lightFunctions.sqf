/*
	DayZ Epoch Lighting System - Light Functions
	Made for DayZ Epoch by axeman please ask permission to use/edit/distribute email gregory.andrew@gmail.com.
*/
axe_NoStreetLights={//For testing - Need to see brightness of house lights
private["_lights","_rng","_target","_objName"];
_target = _this select 0;
_rng = _this select 1;

_lights = ["a_fuelstation_sign.p3d","lampa_ind_zebr.p3d","lampa_ind.p3d","lampa_sidl_3.p3d","lampa_sidl_2.p3d","lampa_sidl.p3d","powlines_concl.p3d","powlines_woodl.p3d"];

	{
		if("" != typeOf _x) then {
				
			if (alive _x) then {
					
				_objName = _x call DZE_getModelName;

				if (_objName in _lights) then {

					_x switchlight "off";

				};
			};
		};
	} foreach nearestObjects [getPos _target, [], _rng];

};

axe_newLightPoint={
private ["_lp","_pos","_col","_brt","_amb","_pos","_dir","_vect"];
_col = _this select 0;
_brt = _this select 1;
_amb = _this select 2;
_pos = _this select 3;
_dir = _this select 4;
_vect = _this select 5;
_lp = "#lightpoint" createVehicleLocal _pos;//Only create locally now.
_lp setLightColor _col;
_lp setLightBrightness _brt;
_lp setLightAmbient _amb;
_lp setDir _dir;
_lp setVectorUp _vect;
//_lp enableSimulation false;//Using this stops lights from illuminating for local player (not tried moving it to before parameters set) - Makes no difference to network broadcast, other players DO NOT see the object anyway
//axeDiagLog = format["FN:LP NEW CREATE:BRIGHT:%3 | %1 for %2",_lp,player,_brt];
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

//return brightness of light attached to object
axe_lightBrightness={
private["_plyr","_brtns","_lightPcnt","_target"];
_plyr = _this select 0;
_target = _this select 1;

if(isNil "dayz_fullMoonNights")then{dayz_fullMoonNights = false;};
if(dayz_fullMoonNights)then{
_brtns = 0.024;
}else{
_brtns = 0.018;
};
_brtns = _brtns + ((_brtns/100) * ((_plyr distance _target)/15)); //Add percentage of brightness based on distance from player
//Min / Max Levels
//if (_brtns > 0.025)then{_brtns = 0.025;};
//if (_brtns < 0.015)then{_brtns = 0.015;};
_brtns
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
