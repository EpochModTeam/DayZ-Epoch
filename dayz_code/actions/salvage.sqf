private["_vehicle","_part","_hitpoint","_type","_selection","_array"];
_id = _this select 2;
_array = 	_this select 3;
_vehicle = 	_array select 0;
_part =		_array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle; 

//
_hasToolbox = 	"ItemToolbox" in items player;

// moving this here because we need to know which part needed if we don't have it
_nameType = 		getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = 		getText(configFile >> "cfgMagazines" >> _part >> "displayName");

if (_hasToolbox) then {

	_damage = [_vehicle,_hitpoint] call object_getHit;
	_vehicle removeAction _id;
	
	//dont allow removal of damaged parts
	if (_damage < 0.15) then {
		
		_isOK = [player,_part] call BIS_fnc_invAdd;
        if (_isOK) then {


			//Fix the part
			_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _hitpoint >> "name");
			//vehicle is owned by whoever is in it, so we have to have each client try and fix it
			
			["dayzSetFix",[_vehicle,_selection,1],_vehicle] call broadcastRpcCallIfLocal;
		
			player playActionNow "Medic";
			sleep 1;
		
			[player,"repair",0,false] call dayz_zombieSpeak;
			null = [player,50,true,(getPosATL player)] spawn player_alertZombies;
			sleep 5;
			_vehicle setvelocity [0,0,1];

			//Success!
			cutText [format["You have successfully removed %1 from the %2",_namePart,_nameType], "PLAIN DOWN"];


		};

		
	};
			
} else {
	cutText [format["You need %1 to remove this part.",_namePart], "PLAIN DOWN"];
};

{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
dayz_myCursorTarget = objNull;
s_player_repair_crtl = -1;