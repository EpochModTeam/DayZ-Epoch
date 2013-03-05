private["_position","_veh","_location","_isOk","_backpack","_vehType","_trg","_key","_part_out","_part_in","_qty_out","_qty_in","_qty","_buy_o_sell","_obj","_objectID","_objectUID"];

if(TradeInprogress) exitWith { cutText ["Trade already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// [part_out,part_in, qty_out, qty_in, loc];

_activatingPlayer = _this select 1;

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
	_obj = nearestObjects [(getPosATL player), [_part_in], 20];
	_qty = count _obj;
	_bos = 1;
};


if (_qty >= _qty_in) then {

	//["dayzTradeObject",[_activatingPlayer,_traderID,_bos]] call callRpcProcedure;
	dayzTradeObject = [_activatingPlayer,_traderID,_bos];
	publicVariableServer  "dayzTradeObject";
	

	diag_log format["DEBUG Starting to wait for answer: %1", dayzTradeObject];

	waitUntil {!isNil "dayzTradeResult"};

	diag_log format["DEBUG Complete Trade: %1", dayzTradeResult];

	if(dayzTradeResult == "PASS") then {


		if(_buy_o_sell == "buy") then {	
			for "_x" from 1 to _qty_in do {
				player removeMagazine _part_in;
			};

			disableSerialization;
			call dayz_forceSave;
	
			_dir = round(random 360);

			_helipad = nearestObjects [player, ["HeliHCivil","HeliHempty"], 100];
			if(count _helipad > 0) then {
				_location = (getPosATL (_helipad select 0));
			} else {
				_location = [(position player),0,20,1,0,2000,0] call BIS_fnc_findSafePos;
			};
	
			//place tent (local)
			_veh = createVehicle [_part_out, _location, [], 0, "CAN_COLLIDE"];
			
			_veh setVariable ["JustSpawned",true,true];
			
			_veh setdir _dir;
			_veh setpos _location;
	
			_location = getPosATL _veh;
	
			//_veh setVariable ["ObjectUID",dayz_playerUID,true];
			

			clearWeaponCargoGlobal  _veh;
			clearMagazineCargoGlobal  _veh;

			//["dayzPublishVeh",[_veh,[_dir,_location],_part_out,false,dayz_playerUID]] call callRpcProcedure;
			dayzPublishVeh = [_veh,[_dir,_location],_part_out,false,dayz_playerUID];
			publicVariableServer  "dayzPublishVeh";

			// event handlers to correctly track damage client side
			_veh call fnc_vehicleEventHandler;

			player reveal _veh;

			cutText [format[("Bought %3 %4 for %1 %2"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];

		} else {
			// Sell Vehicle
			for "_x" from 1 to _qty_out do {
				player addMagazine _part_out;
			};

			disableSerialization;
			call dayz_forceSave;

			_obj = _obj select 0;
			_objectID 	= _obj getVariable ["ObjectID","0"];
			_objectUID	= _obj getVariable ["ObjectUID","0"];

			//["dayzDeleteObj",[_objectID,_objectUID]] call callRpcProcedure;
			dayzDeleteObj = [_objectID,_objectUID];
			publicVariableServer "dayzDeleteObj";


			deleteVehicle _obj; 

			cutText [format[("Sold %1 %2 for %3 %4"),_qty_in,_textPartIn,_qty_out,_textPartOut], "PLAIN DOWN"];

		};
	
		{player removeAction _x} forEach s_player_parts;s_player_parts = [];
		s_player_parts_crtl = -1;

	} else {
		cutText [format[("Insufficient Stock %1"),_textPartOut] , "PLAIN DOWN"];
	};
	dayzTradeResult = nil;

} else {
	_needed =  _qty_in - _qty;
	if(_buy_o_sell == "buy") then {
		cutText [format[("Need %1 More %2"),_needed,_textPartIn] , "PLAIN DOWN"];
	} else {
		cutText [format[("No %1 found within 20 meters."),_textPartOut] , "PLAIN DOWN"];
	};
	
};

TradeInprogress = false;