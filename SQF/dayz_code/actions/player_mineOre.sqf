/*
	DayZ Mine Ore
	Usage: spawn player_mineOre;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_objInfo","_lenInfo","_started","_finished","_animState","_isMedic","_proceed","_counter","_itemOut","_countOut","_rock","_distance2d","_rockBox","_rocks","_findNearestRock"];

if(TradeInprogress) exitWith { cutText ["\n\nOre Mining already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// allowed rocks list move this later
_rocks = ["r2_boulder2.p3d","r2_rock1.p3d","r2_rocktower.p3d","r2_boulder1.p3d"];

//_item = _this;
call gear_ui_init;

_findNearestRock = [];
{
	if("" == typeOf _x) then {
			
		if (alive _x) then {
				
			_objName = _x call DZE_getModelName;

			// Exit since we found a tree
			if (_objName in _rocks) exitWith { 
				_findNearestRock set [(count _findNearestRock),_x];
			};
		};
	};

} foreach nearestObjects [getPos player, [], 20];

//diag_log format["DEBUG ROCKS: %1 | Alive:%2", _findNearestRock, alive (_rocks select 0)];

if (count(_findNearestRock) >= 1) then {
		
	_rock = _findNearestRock select 0;

	// get 2d distance
	_distance2d = [player, _rock] call BIS_fnc_distance2D;

	if(_distance2d <= 12) then {
		_rnd=0;
		_rockBox = boundingBox _rock;
		_countOut = ((_rockBox select 1 select 0)+(_rockBox select 1 select 1)+(_rockBox select 1 select 2))/3;
		if(_countOut<1)then{_countOut=_countOut*10};
		_countOut = round (_countOut - _distance2d);
		//Max / Min Values
		if(_countOut>12)then{_countOut=12};
		if(_countOut<1)then{_countOut=4};

		//diag_log format["DEBUG ROCK DISTANCE: %1 - %2 = %3", _rockBox,_distance2d,(_distance3d-_distance2d)];
		//axeDiagLog = format["DEBUG ROCK DISTANCE: _rockBox:%1 | _distance2d:%2  | typeOf:%3 | alive:%4 | _countOut:%5 | damage:%6", _rockBox,_distance2d,typeOf _rock,alive _rock,_countOut,damage _rock ];
		//publicVariable "axeDiagLog";
	
		// Start ore mining
		_counter = 0;
		_isOk = true;
		_proceed = false;
		while {_isOk} do {

			player playActionNow "Medic";
			[player,20,true,(getPosATL player)] spawn player_alertZombies;
	
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
					[player,"repair",0,false] call dayz_zombieSpeak;
				};
				if (r_interrupt) then {
					r_doLoop = false;
				};
		
				sleep 0.1;
		
			};

			if(!_finished) exitWith {
				_isOk = false;
				_proceed = false;
			};

			if(_finished) then {
				_counter = _counter + 1;
			};

			cutText [format["\n\nMining Ore, walk away at any time to cancel. (%1/%2)", _counter,  _countOut], "PLAIN DOWN"];

			if(_counter == _countOut) exitWith {
				_isOk = false;
				_proceed = true;
				sleep 1;
			};
		};

		if (_proceed) then {

			_itemOut = "PartOre";
			
			_item = createVehicle ["WeaponHolder", getPosATL player, [], 1, "CAN_COLLIDE"];
			_item addMagazineCargoGlobal [_itemOut,_countOut];

			player reveal _item;
			
			/* break rock
			if("" == typeOf _rock) then {
				_rock setDamage 1;
			};
			diag_log format["DEBUG TREE DAMAGE: %1", _rock];
			*/
			cutText [format["\n\n%1 piles of ore has been successfully added in front of you.", _countOut], "PLAIN DOWN"];

		} else {
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};
			cutText ["\n\nCancelled Mining Ore.", "PLAIN DOWN"];
		};

	} else {
		cutText [localize "str_player_32", "PLAIN DOWN"];
	};

} else {
	cutText [localize "str_player_32", "PLAIN DOWN"];
};
TradeInprogress = false;
