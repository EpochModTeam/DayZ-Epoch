private["_location","_isOk","_dir","_classname","_item"];
_location = player modeltoworld [0,1,0];
_location set [2,0];
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater _location) or dayz_isSwimming;

if(_isWater) exitWith {cutText [localize "str_player_26", "PLAIN DOWN"];};
if(_onLadder) exitWith {cutText [localize "str_player_21", "PLAIN DOWN"];};

if (vehicle player != player) exitWith {cutText ["You may not build while in a vehicle", "PLAIN DOWN"]};

_item =			_this;
_classname = 	getText (configFile >> "CfgMagazines" >> _item >> "ItemActions" >> "Build" >> "create");
_text = 		getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

_hasbuilditem = _this in magazines player;

if (!_hasbuilditem) exitWith {cutText [format[(localize "str_player_31"),_text,"build"] , "PLAIN DOWN"]};

_dir = getDir player;
player removeMagazine _item;

player playActionNow "Medic";
sleep 1;
[player,"repair",0,false] call dayz_zombieSpeak;
_id = [player,50,true,(getPosATL player)] spawn player_alertZombies;
sleep 5;
	
player allowDamage false;
_object = createVehicle [_classname, _location, [], 0, "CAN_COLLIDE"];
_object setDir _dir;
player reveal _object;

cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];

dayzPublishObj = [dayz_characterID,_object,[_dir,_location],_classname];
publicVariable "dayzPublishObj";
if (isServer) then {
	dayzPublishObj call server_publishObj;
};

sleep 2;
player allowDamage true;