private ["_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_traderID","_bos","_needed","_activatingPlayer","_textPartIn","_textPartOut","_started","_finished","_animState","_isMedic","_removed"];
// [part_out,part_in, qty_out, qty_in,"buy"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_103") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

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
	_qty = {_x == _part_in} count weapons player;
	_bos = 1;
};

if (_qty >= _qty_in) then {

	cutText [(localize "str_epoch_player_105"), "PLAIN DOWN"];
	 
	[1,1] call dayz_HungerThirst;
	// force animation 
	player playActionNow "Medic";
	
	//_dis=20;
	//_sfx = "repair";
	//[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	//[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

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
		sleep 0.1;
	};
	r_doLoop = false;

	if (!_finished) exitWith { 
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText [(localize "str_epoch_player_106") , "PLAIN DOWN"];
	};

	if (_finished) then {

		// double check for all parts
		if(_buy_o_sell == "buy") then {
			_qty = {_x == _part_in} count magazines player;
		} else {
			_qty = {_x == _part_in} count weapons player;
		};

		if (_qty >= _qty_in) then {

			//["PVDZE_obj_Trade",[_activatingPlayer,_traderID,_bos]] call callRpcProcedure;
			if (isNil "_part_out") then { _part_out = "Unknown Weapon/Magazine" };
			if (isNil "inTraderCity") then { inTraderCity = "Unknown Trader City" };
			PVDZE_obj_Trade = [_activatingPlayer,_traderID,_bos,_part_out,inTraderCity];
			publicVariableServer  "PVDZE_obj_Trade";
	
			waitUntil {!isNil "dayzTradeResult"};

			//diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

			if(dayzTradeResult == "PASS") then {

				_removed = ([player,_part_in,_qty_in] call BIS_fnc_invRemove);
				
				if(_removed == _qty_in) then {
					for "_x" from 1 to _qty_out do {
						if(_buy_o_sell == "buy") then {
							player addWeapon _part_out;
						} else {
							player addMagazine _part_out;
						};
					};
					cutText [format[(localize "str_epoch_player_186"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];
				};
	
				
		
				{player removeAction _x} count s_player_parts;s_player_parts = [];
				s_player_parts_crtl = -1;

			} else {
				cutText [format[(localize "str_epoch_player_183"),_textPartOut] , "PLAIN DOWN"];
			};
			dayzTradeResult = nil;
		};
	};

} else {
	_needed =  _qty_in - _qty;
	cutText [format[(localize "str_epoch_player_184"),_needed,_textPartIn] , "PLAIN DOWN"];
};

DZE_ActionInProgress = false;