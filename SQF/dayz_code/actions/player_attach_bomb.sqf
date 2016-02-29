private["_theBomb","_vehicle","_curFuel","_newFuel","_timeLeft","_hasToolbox","_hasCarBomb","_dis","_sfx","_alreadyBombed","_hasCrowbar"];
_vehicle = 		_this select 3;
_hasToolbox = 	"ItemToolbox" in items player;
_hasCrowbar = 	"ItemCrowbar" in items player;
_hasCarBomb = "ItemCarBomb" in magazines player;
_alreadyBombed = _vehicle getVariable["hasBomb",false];
if(!_hasToolbox or !_hasCrowbar) exitWith {
	cutText [localize "str_bombToolMissing", "PLAIN DOWN"];
};
if(!_hasCarBomb) exitWith {
	cutText [localize "str_bombMissing", "PLAIN DOWN"];
};

/*
if(_vehicle getVariable["hasBomb",false]) exitWith {
	cutText [localize "str_bombAlready", "PLAIN DOWN"];
};
*/

player removeMagazine "ItemCarBomb";

//wait a bit
player playActionNow "Medic";
sleep 1;

//DO Animation
_dis=20;
_sfx = "tentunpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

//Send the Eventhandler to Server
if(!_alreadyBombed) then {
	PVDZ_dayzCarBomb = [_vehicle,getPlayerUID player];
	publicVariableServer "PVDZ_dayzCarBomb";
};
cutText [localize "str_bombAttached", "PLAIN DOWN"];