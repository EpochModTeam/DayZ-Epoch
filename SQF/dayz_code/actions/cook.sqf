private ["_text","_rawmeat","_cookedmeat","_meat","_meatcooked","_qty","_started","_finished","_animState","_isMedic","_removed","_dis","_sfx","_textraw"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_23") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

// diag_log ("Cook Enabled");
player removeAction s_player_cook;
s_player_cook = 1;

_rawmeat = meatraw;
_cookedmeat = meatcooked;



{
	_meat = _x;
	_meatcooked = _cookedmeat select (_rawmeat find _meat);
	_removed = 0;
	if (_meat in magazines player) then {
		_textraw = 	getText (configFile >> "CfgMagazines" >> _meat >> "displayName");
		_text = 	getText (configFile >> "CfgMagazines" >> _meatcooked >> "displayName");
		
		_qty = {_x == _meat} count magazines player;

		cutText [format[(localize "str_epoch_player_129"),_textraw], "PLAIN DOWN"];
		[1,1] call dayz_HungerThirst;
		player playActionNow "Medic";
		
		_dis=6;
		_sfx = "cook";
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;  
		[player,_dis,true,(getPosATL player)] spawn player_alertZombies;
		
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


		if (_finished) then {

			_removed = _removed + ([player,_meat,_qty] call BIS_fnc_invRemove);
			for "_x" from 1 to _removed do {
				player addMagazine _meatcooked;
			};

			cutText [format[(localize  "str_success_cooked"),_qty,_text], "PLAIN DOWN"];
		
		} else {
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};

			cutText [format[(localize "str_epoch_player_130"),_textraw], "PLAIN DOWN"];
		};
	};
} forEach _rawmeat;

s_player_cook = -1;
DZE_ActionInProgress = false;