_dog = _this select 0;
_dog playActionNow "GestureBark";
[_dog,"dog_bark",0,false] call dayz_zombieSpeak;
/*
_anim = animationState _dog;
_sitDown = false;
if(_anim == "Dog_SitDown") then {
	[objNull, _dog, rSwitchMove,"Dog_SitUp"] call RE;
	sleep 1;
	_sitDown = true;
};

[objNull, _dog, rSwitchMove,"Dog_StopV2"] call RE;

if (_sitDown) then {
	waitUntil{(animationState _dog) != "Dog_StopV2"};
	[objNull, _dog, rSwitchMove,"Dog_SitDown"] call RE;
};
*/