_dog = _this select 0;
_handle = _this select 3;
_standing = _handle getFSMVariable "_standing";
_handle setFSMVariable ["_command","stay"];
_watchDog = _handle getFSMVariable "_watchDog";

_anim = animationState _dog;
if (_anim == "Dog_SitDown" and _watchDog) then {
	[objNull, _dog, rSwitchMove,"Dog_SitUp"] call RE;
	sleep 0.5;
	[objNull, _dog, rSwitchMove,"Dog_LieDown"] call RE;
};