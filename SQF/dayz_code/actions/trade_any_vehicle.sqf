private ["_sign","_location","_result","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_obj","_objectID","_objectUID","_bos","_started","_finished","_animState","_isMedic","_dir","_helipad","_keyColor","_damage","_tireDmg","_tires","_okToSell","_temp_keys","_hitpoints","_needed","_activatingPlayer","_textPartIn","_textPartOut","_traderID","_canAfford","_trade_total","_total_currency","_return_change","_done"];

if (dayz_actionInProgress) exitWith {localize "str_epoch_player_103" call dayz_rollingMessages;};
dayz_actionInProgress = true;

// Test cannot lock while another player is nearby
//_playerNear = {isPlayer _x} count (player nearEntities ["CAManBase", 12]) > 1;
//if(_playerNear) exitWith {dayz_actionInProgress = false; localize "str_epoch_player_104" call dayz_rollingMessages;};

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

if(_buy_o_sell == "sell") then {
	_bos = 1;
};

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
	dayz_actionInProgress = false;
};

if (_finished) then {

	_canAfford = false;
	if(_bos == 1) then {
		_count = {(typeOf _x) == _part_in} count (nearestObjects [(getPosATL player), [_part_in], Z_VehicleDistance]);
		if (_count >= _qty_in) then {
			_canAfford = true;
		};
		//diag_log format["DEBUG vehicle sell count: %1", _count];

	} else {

		//buy
		_trade_total = [[_part_in,_qty_in]] call epoch_itemCost;
		_total_currency = call epoch_totalCurrency;
		_return_change = _total_currency - _trade_total;
		if (_return_change >= 0) then {
			_canAfford = true;
		};
	};


	if (_canAfford) then {

		// if (isNil "_obj") then { _obj = "Unknown Vehicle" };
		if(_bos == 1) then {
			// Selling
			PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_part_in,inTraderCity,_part_out,_qty_out];
		} else {
			// Buying
			PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_part_out,inTraderCity,_part_in,_qty_in];
		};
		publicVariableServer  "PVDZE_obj_Trade";

		//diag_log format["DEBUG Starting to wait for answer: %1", PVDZE_obj_Trade];

		if(_buy_o_sell == "buy") then {

			waitUntil {!isNil "dayzTradeResult"};

			//diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

			if(dayzTradeResult == "PASS") then {
				_result = call epoch_generateKey;
				if (_result select 0) then {
					_done = [[[_part_in,_qty_in]],0] call epoch_returnChange;
					if (_done) then {

						// spawn vehicle
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

						PVDZE_veh_Publish2 = [[_dir,_location],_part_out,false,_result select 1,_activatingPlayer];
						publicVariableServer  "PVDZE_veh_Publish2";

						format[localize "STR_EPOCH_ACTIONS_11",_qty_in,_textPartIn,_textPartOut] call dayz_rollingMessages;
					};
				} else {
					localize "str_epoch_player_107" call dayz_rollingMessages;
				};
				
			} else {
				format[localize "str_epoch_player_183",_textPartOut] call dayz_rollingMessages;
			};
		} else {
			//sell
			_objects = nearestObjects [(getPosATL player), [_part_in], Z_VehicleDistance];

			//diag_log format["DEBUG vehicle sell objects: %1", _objects];

			_qty = ({(typeOf _x) == _part_in} count _objects);

			if (_qty >= _qty_in) then {

				_obj = (_objects select 0);

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

				_objectID			= _obj getVariable ["ObjectID","0"];
				_objectUID			= _obj getVariable ["ObjectUID","0"];
				_objectCharacterId	= _obj getVariable ["CharacterID","0"];

				_notSetup = (_objectID == "0" && _objectUID == "0");

				if(local _obj && !isNull _obj && alive _obj && !_notSetup) then {

					if(_okToSell) then {

						//if(_objectID != "0" && _objectUID != "0") then {

						PVDZ_obj_Destroy = [_objectID,_objectUID,_activatingPlayer];
						publicVariableServer "PVDZ_obj_Destroy";

						deleteVehicle _obj;

						// remove Key
						_temp_keys = [];
						_keyColor = ["ItemKeyYellow","ItemKeyBlue","ItemKeyRed","ItemKeyGreen","ItemKeyBlack"];
						{
							if (configName(inheritsFrom(configFile >> "CfgWeapons" >> _x)) in _keyColor) then {
								if (str(getNumber(configFile >> "CfgWeapons" >> _x >> "keyid")) == _objectCharacterId) then {
									[_activatingPlayer,_x] call BIS_fnc_invRemove;
								};
							};
						} count (items _activatingPlayer);

						// payout
						_canAfford = [[[_part_out,_qty_out]],1] call epoch_returnChange;

						format[localize "str_epoch_player_181",_qty_in,_textPartIn,_qty_out,_textPartOut] call dayz_rollingMessages;


					} else {
						format[localize "str_epoch_player_182",_textPartIn] call dayz_rollingMessages;
					};
				} else {
					localize "str_epoch_player_245" call dayz_rollingMessages;
				};
			};
		};
		dayzTradeResult = nil;
	} else {
		if(_buy_o_sell == "buy") then {
			_qty = {_x == _part_in} count magazines player;
			_needed =  _qty_in - _qty;
			format[localize "str_epoch_player_184",_needed,_textPartIn] call dayz_rollingMessages;
		} else {
			format[localize "str_epoch_player_185",_textPartIn] call dayz_rollingMessages;
		};
	};
};
dayz_actionInProgress = false;
