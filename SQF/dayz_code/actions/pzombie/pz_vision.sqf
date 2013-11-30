
private ["_gen","_caller","_id","_NV","_NVOn","_OldAperture","_NV1","_NV2","_NV3"];
_gen = _this select 0;
_caller = _this select 1;
_id = _this select 2;

_gen removeAction _id;

// get first rbg + m
_NV1 = player getvariable ["NV1",[1.8,-1.5,-0.5,0]];
_NV2 = player getvariable ["NV2",[2.4,0.6,0.3,-0.3]];
_NV3 = player getvariable ["NV3",[-0.6,0.8,0.3,0.6]];

_NV = player getvariable ["NV", ["OFF", 0.1]];
_NVOn = (_NV select 0);
_OldAperture = (_NV select 1);

if(_NVOn == "ON") exitwith
{
	setaperture -1;
	ppEffectDestroy ppColor;
	ppEffectDestroy ppBlur;
	player setvariable ["NV",["OFF",_oldAperture]];
	s_pz_player1 = player addAction ["Vision", "\z\addons\dayz_code\actions\pzombie\pz_vision.sqf", [], 0, false, true, "nightVision", "_this == _target"];
};

ppEffectDestroy ppColor;
ppEffectDestroy ppBlur;

ppColor = ppEffectCreate ["ColorCorrections", 1999];  
ppColor ppEffectEnable true;  
ppColor ppEffectAdjust [1, 1, 0, _NV1, _NV2, _NV3];
ppColor ppEffectCommit 0;

/*
ppInversion = ppEffectCreate ['colorInversion', 2555];
ppInversion ppEffectEnable false;
ppInversion ppEffectAdjust [1,1,1];
ppInversion ppEffectCommit 0;
*/
//diag_log format ["DEBUG: Aperture : %1 First %2 Second %3 Third %4", _OldAperture, _NV1,_NV2,_NV3];

ppBlur = ppEffectCreate ["dynamicBlur", 505];
ppBlur ppEffectEnable true;  
ppBlur ppEffectAdjust [.2];
ppBlur ppEffectCommit 0;

aperture = 0.0001;
while { aperture < _oldAperture } do
{
	aperture = aperture + 0.0005;
	setAperture aperture;
	sleep 0.001;
};

player setVariable ["NV", ["ON", _oldAperture]];
player setVariable ["NV1",_NV1];
player setVariable ["NV2",_NV2];
player setVariable ["NV3",_NV3];

s_pz_player2 = player addAction ["Vision", "\z\addons\dayz_code\actions\pzombie\pz_vision.sqf", [], 0, false, true, "nightVision", "_this == _target"];
