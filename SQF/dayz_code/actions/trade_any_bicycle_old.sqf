private ["_sign","_location","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_obj","_objectID","_objectUID","_bos","_started","_finished","_animState","_isMedic","_dir","_helipad","_removed","_damage","_tireDmg","_tires","_okToSell","_hitpoints","_needed","_activatingPlayer","_textPartIn","_textPartOut","_traderID","_playerNear"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_103" call dayz_rollingMessages;};
dayz_actionInProgress = true;

// [part_out,part_in, qty_out, qty_in, loc];

_activatingPlayer = player;

_part_out = (_this select 3) select 0;
_part_in = (_this select 3) select 1;
_qty_out = (_this select 3) select 2;
_qty_in = (_this select 3) select 3;
_buy_o_sell = (_this select 3) select 4;
_textPartIn = (_this select 3) select 5;
_textPartOut = (_this select 3) select 6;
_traderID = (_this select 3) select 7;
_bos = 0;

if(_buy_o_sell == "buy") then {
	_qty = {_x == _part_in} count magazines player;
} else {
	_obj = nearestObjects [(getPosATL player), [_part_in], Z_VehicleDistance];
	_qty = count _obj;
	_bos = 1;
};

if (_qty >= _qty_in) then {

	localize "str_epoch_player_105" call dayz_rollingMessages;

	player playActionNow "Medic";

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
		if (_started && !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		uiSleep 0.1;
	};
	r_doLoop = false;

	if (!_finished) exitWith { 
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		localize "str_epoch_player_106" call dayz_rollingMessages;
	};

	if (_finished) then {

		// Double check for items
		if(_buy_o_sell == "buy") then {
			_qty = {_x == _part_in} count magazines player;
		} else {
			_obj = nearestObjects [(getPosATL player), [_part_in], Z_VehicleDistance];
			_qty = count _obj;
		};

		if (_qty >= _qty_in) then {

			//["PVDZE_obj_Trade",[_activatingPlayer,_traderID,_bos]] call callRpcProcedure;
			if (isNil "_obj") then { _obj = "Unknown Vehicle" };
			PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_obj,inTraderCity];
			publicVariableServer  "PVDZE_obj_Trade";
	
			//diag_log format["DEBUG Starting to wait for answer: %1", PVDZE_obj_Trade];

			waitUntil {!isNil "dayzTradeResult"};

			//diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

			if(dayzTradeResult == "PASS") then {

				if(_buy_o_sell == "buy") then {	

					_removed = ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
					if(_removed == _qty_in) then {
						_dir = round(random 360);

						// Note server now uses createVehicle "NONE" so next closest safePos is found automatically if location is blocked
						_helipad = nearestObjects [player, ["HeliHCivil","HeliHempty"], 100];
						if(count _helipad > 0) then {
							_location = getPosATL (_helipad select 0);
						} else {
							_location = [player] call FNC_GetPos;
						};
	
						//place vehicle spawn marker (local)
						_sign = "Sign_arrow_down_large_EP1" createVehicleLocal [0,0,0];
						_sign setPos _location;
						_location = [_sign] call FNC_GetPos;
						[_part_out,_sign] call fn_waitForObject;

						PVDZE_veh_Publish2 = [[_dir,_location],_part_out,true,dayz_characterID,_activatingPlayer];
						publicVariableServer  "PVDZE_veh_Publish2";
						
						format[localize "str_epoch_player_180",_qty_in,_textPartIn,_textPartOut] call dayz_rollingMessages;
					};
					
				} else {
					
					_obj = _obj select 0;

					//check to make sure vehicle has no more than 75% average tire damage
					_hitpoints = _obj call vehicle_getHitpoints;
					_okToSell = true;

					// count parts
					_tires = 0; 

					// total damage 
					_tireDmg = 0;

					_damage = 0;
					{					
						if(["Wheel",_x,false] call fnc_inString) then {		
							_damage = [_obj,_x] call object_getHit;
							_tireDmg = _tireDmg + _damage;
							_tires = _tires + 1;
						};
					} count _hitpoints;

					// find average tire damage
					if(_tireDmg > 0 && _tires > 0) then {
						if((_tireDmg / _tires) > 0.75) then {
							_okToSell = false;
						};
					};
					if(local _obj) then {

						if(_okToSell) then {

							if(!isNull _obj && alive _obj) then {
							
								for "_x" from 1 to _qty_out do {
									player addMagazine _part_out;
								};

								_objectID 	= _obj getVariable ["ObjectID","0"];
								_objectUID	= _obj getVariable ["ObjectUID","0"];

								PVDZ_obj_Destroy = [_objectID,_objectUID,_activatingPlayer];
								publicVariableServer "PVDZ_obj_Destroy";

								deleteVehicle _obj; 

								format[localize "str_epoch_player_181",_qty_in,_textPartIn,_qty_out,_textPartOut] call dayz_rollingMessages;
							};
						} else {
							format[localize "str_epoch_player_182",_textPartIn] call dayz_rollingMessages;
						};
					} else {
						localize "str_epoch_player_245" call dayz_rollingMessages;
					};
				};
	
				{player removeAction _x} count s_player_parts;s_player_parts = [];
				s_player_parts_crtl = -1;

			} else {
				format[localize "str_epoch_player_183",_textPartOut] call dayz_rollingMessages;
			};
			dayzTradeResult = nil;
		};
	};

} else {
	_needed =  _qty_in - _qty;
	if(_buy_o_sell == "buy") then {
		format[localize "str_epoch_player_184",_needed,_textPartIn] call dayz_rollingMessages;
	} else {
		format[localize "str_epoch_player_185",_textPartIn] call dayz_rollingMessages;
	};	
};

dayz_actionInProgress = false;