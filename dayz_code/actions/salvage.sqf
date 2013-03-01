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

{_vehicle removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
s_player_repair_crtl = 1;

if (_hasToolbox) then {

	

	_damage = [_vehicle,_hitpoint] call object_getHit;
	// _vehicle removeAction _id;
	
	//dont allow removal of damaged parts
	if (_damage < 1) then {
		
		_isOK = [player,_part] call BIS_fnc_invAdd;
        if (_isOK) then {
			
			// the more damaged the part the higher the chance to loose the part.
			// 0.25 = 25% chance to loose part 
			// 0.5  = 50% chance to loose part 
			// 0.75 = 75% chance to loose part 
			// 0.99 = 99% chance to loose part 

			_findPercent = (1 - _damage) * 10;
			// X = 1 - 0.25 = 0.75 x 10 == 7.5
			// X = 1 - 0.99 = 0.01 x 10 == 0.1
			

			//break the part
			_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _hitpoint >> "name");
			
			//vehicle is owned by whoever is in it, so we have to have each client try and fix it
			//["dayzSetFix",[_vehicle,_selection,1],_vehicle] call broadcastRpcCallIfLocal;
		
			dayzSetFix = [_vehicle,_selection,1];
			publicVariable "dayzSetFix";
			if (local _vehicle) then {
				dayzSetFix call object_setFixServer;
			}
		
			player playActionNow "Medic";
			sleep 1;
		
			[player,"repair",0,false] call dayz_zombieSpeak;
			null = [player,50,true,(getPosATL player)] spawn player_alertZombies;
			sleep 5;
			_vehicle setvelocity [0,0,1];

			if(ceil (random _findPercent) == 1) then {
				// loose part and damage vehicle
				player removeMagazine _part;
				//Failed!
				cutText [format["You have destroyed %1 while attempting to remove from %2",_namePart,_nameType], "PLAIN DOWN"];
			} else {
				//Success!
				cutText [format["You have successfully removed %1 from the %2",_namePart,_nameType], "PLAIN DOWN"];
			};

		} else {
			cutText [localize "STR_DAYZ_CODE_2", "PLAIN DOWN"];
		};

		
	};
			
} else {
	cutText [format["You need %1 to remove this part.",_namePart], "PLAIN DOWN"];
};


dayz_myCursorTarget = objNull;
s_player_repair_crtl = -1;