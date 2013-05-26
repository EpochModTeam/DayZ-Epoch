private ["_flare","_lightArea","_lightSpark","_type","_color"];
_flare = _this select 0;
_type = _this select 1;
//_sfx = objNull;
if (!isNull _flare) then {
	switch (_type) do {
		case 0: {
			//_isLocal = local _flare;
			//Area Light
			_lightArea = "#lightpoint" createVehicleLocal (getPosATL _flare);
			_lightArea setLightColor [0.5,0,0]; //[0.1,0.005,0.005];
			_lightArea setLightAmbient [0.2,0.01,0.01];
			_lightArea setLightBrightness 0.2;
			_lightArea lightAttachObject [_flare, [0,0,0]];
			
			//Spark Light
			_lightSpark = "#lightpoint" createVehicleLocal (getPosATL _flare);
			_lightSpark setLightColor [0.1,0.1,0.1];
			_lightSpark setLightAmbient [0.05,0.05,0.05];
			_lightSpark setLightBrightness 0.05;
			_lightSpark lightAttachObject [_flare, [0,0,0]];
			
			while {alive _flare} do {
				_lightArea setLightAmbient [((random 0.2) + 0.2),0.01,0.01];
				//_lightArea setLightColor [((random 0.1) + 0.1),0.005,0.005];
				sleep (random 0.1);
			};
			deleteVehicle _lightArea;
			deleteVehicle _lightSpark;
		};
		case 1: {
			//Spark Light
			_color =  getArray(configFile >> "cfgAmmo" >> (typeOf _flare) >> "lightColor");
			_lightSpark = "#lightpoint" createVehicleLocal (getPosATL _flare);
			_lightSpark setLightColor _color;
			_lightSpark setLightAmbient _color;
			_lightSpark setLightBrightness 0.01;
			_lightSpark lightAttachObject [_flare, [0,0,0]];
			waitUntil{!(alive _flare)};
			deleteVehicle _lightSpark;
		};
	};
};