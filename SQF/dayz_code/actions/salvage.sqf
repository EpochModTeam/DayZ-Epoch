private ["_vehicle","_part","_hitpoint","_type","_selection","_array","_started","_finished","_animState","_isMedic","_isOK","_brokenPart","_findPercent","_damage","_hasToolbox","_nameType","_namePart"];

if(TradeInprogress) exitWith { cutText ["Salvage already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

//_id = _this select 2;
_array = 	_this select 3;
_vehicle = 	_array select 0;
_part =		_array select 1;
_hitpoint = _array select 2;
_type = typeOf _vehicle; 

_isOK = false;
_brokenPart = false;

//
_hasToolbox = 	"ItemToolbox" in items player;

// moving this here because we need to know which part needed if we don't have it
_nameType = 		getText(configFile >> "cfgVehicles" >> _type >> "displayName");
_namePart = 		getText(configFile >> "cfgMagazines" >> _part >> "displayName");

{_vehicle removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
s_player_repair_crtl = 1;

if (_hasToolbox) then {

	player playActionNow "Medic";

	[player,"repair",0,false] call dayz_zombieSpeak;
	[player,50,true,(getPosATL player)] spawn player_alertZombies;

	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;
	_finished = false;
	
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
	};
	r_doLoop = false;


	if (_finished) then {
	
		_damage = [_vehicle,_hitpoint] call object_getHit;
		// _vehicle removeAction _id;
	
		//dont allow removal of damaged parts
		if (_damage < 1) then {
		
			_findPercent = (1 - _damage) * 10;
			if(ceil (random _findPercent) == 1) then {
				_isOK = true;
				_brokenPart = true;
			} else {
				_isOK = [player,_part] call BIS_fnc_invAdd;
				_brokenPart = false;
			};
		
			if (_isOK) then {	

				//break the part
				_selection = getText(configFile >> "cfgVehicles" >> _type >> "HitPoints" >> _hitpoint >> "name");
			
				//vehicle is owned by whoever is in it, so we have to have each client try and fix it
				//["PVDZE_veh_SFix",[_vehicle,_selection,1],_vehicle] call broadcastRpcCallIfLocal;
		
				PVDZE_veh_SFix = [_vehicle,_selection,1];
				publicVariable "PVDZE_veh_SFix";
				if (local _vehicle) then {
					PVDZE_veh_SFix call object_setFixServer;
				};

				_vehicle setvelocity [0,0,1];

				if(_brokenPart) then {
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
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText ["Canceled Salvage.", "PLAIN DOWN"];
	};
			
} else {
	cutText [format["You need %1 to remove this part.",_namePart], "PLAIN DOWN"];
};

dayz_myCursorTarget = objNull;
s_player_repair_crtl = -1;

TradeInprogress = false;
