private ["_handle", "_dog", "_standing", "_watchDog", "_anim"];
_handle = _this select 3;
_dog = _handle getFSMVariable "_dog";
_standing = _handle getFSMVariable "_standing";
_handle setFSMVariable ["_command","stay"];
_watchDog = _handle getFSMVariable "_watchDog";

_anim = animationState _dog;
if (_anim == "Dog_SitDown" and _watchDog) then {
	//[objNull, _dog, rSwitchMove,"Dog_SitUp"] call RE;
	//sleep 0.5;
	[objNull, _dog, rSwitchMove,"Dog_LieDown"] call RE;
};