private["_vehicle","_part","_hitpoint","_type","_selection","_array"];
_id = _this select 2;
_array = 	_this select 3;
_vehicle = 	_array select 0;
_part =		_array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle; 

//
_hasToolbox = 	"ItemToolbox" in items player;
_section = _part in magazines player;

// moving this here because we need to know which part needed if we don't have it
_nameType = 		getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = 		getText(configFile >> "cfgMagazines" >> _part >> "displayName");

if (_section and _hasToolbox) then {

	_damage = [_vehicle,_hitpoint] call object_getHit;
	_vehicle removeAction _id;
	
	//dont waste loot on undamaged parts
	if (_damage > 0) then {
		
		player removeMagazine _part;

		//Fix the part
		_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _hitpoint >> "name");
		dayzSetFix = [_vehicle,_selection,0];
		publicVariable "dayzSetFix";
		if (local _vehicle) then {
			dayzSetFix call object_setFixServer;
		};
		
		player playActionNow "Medic";
		sleep 1;
		
		[player,"repair",0,false] call dayz_zombieSpeak;
		null = [player,50,true,(getPosATL player)] spawn player_alertZombies;
		sleep 5;
		_vehicle setvelocity [0,0,1];

		//Success!
		cutText [format["You have successfully attached %1 to the %2",_namePart,_nameType], "PLAIN DOWN"];
	};
			
} else {
	cutText [format["You need %1 to repair this",_namePart], "PLAIN DOWN"];
};

{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = objNull;

//check if repaired fully
_hitpoints = _vehicle call vehicle_getHitpoints;
_allFixed = true;
{
	_damage = [_vehicle,_x] call object_getHit;
	if (_damage > 0) exitWith {
		_allFixed = false;
	};
} forEach _hitpoints;

//update if repaired
if (_allFixed) then {
	_vehicle setDamage 0;
	dayzUpdateVehicle = [_vehicle,"repair"];
	if (isServer) then {
		if (allowConnection) then {
			dayzUpdateVehicle call server_updateObject;
		};
	} else {
		publicVariable "dayzUpdateVehicle";
	};
};