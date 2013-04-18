
private ["_gen","_caller","_id","_NV","_NVOn","_OldAperture"];
_gen = _this select 0;
_caller = _this select 1;
_id = _this select 2;

_gen removeAction _id;

_NV = player getvariable "NV";
_NVOn = (_NV select 0);
_OldAperture = (_NV select 1);

if(_NVOn == "ON") 
exitwith
{
	setaperture -1;
	ppEffectDestroy ppColor;
	ppEffectDestroy ppBlur;
	player setvariable ["NV",["OFF",_oldAperture]];
	player addAction ["Night Vision", "\z\addons\dayz_code\actions\pzombie\pz_vision.sqf", [], 0, false, true, "nightVision", "_this == _target"];
};

ppEffectDestroy ppColor;
ppEffectDestroy ppBlur;

ppColor = ppEffectCreate ["ColorCorrections", 1999];  
ppColor ppEffectEnable true;  
ppColor ppEffectAdjust [1, 1, 0, [0.4, 1, 0.4, 0], [0.4, 1, 0.4, 0.0], [0.4, 1, 0.4, 1.0]];  
ppColor ppEffectCommit 0;

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

player addAction ["Vision", "\z\addons\dayz_code\actions\pzombie\pz_vision.sqf", [], 0, false, true, "nightVision", "_this == _target"];
exit;