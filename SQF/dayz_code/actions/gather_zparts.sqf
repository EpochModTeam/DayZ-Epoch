private ["_hasKnife","_qty","_item","_text","_string","_type","_started","_finished","_animState","_isMedic","_array","_hasHarvested","_hasKnifeBlunt","_humanity"];

if(TradeInprogress) exitWith { cutText ["Gutting zombie already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_butcher;
s_player_butcher = 1;

_item = _this select 3;
_hasKnife = 	"ItemKnife" in items player;
_hasKnifeBlunt = 	"ItemKnifeBlunt" in items player;
_type = typeOf _item;
_hasHarvested = _item getVariable["meatHarvested",false];
//_config = 		configFile >> "CfgSurvival" >> "Meat" >> _type;

if ((_hasKnife or _hasKnifeBlunt) and !_hasHarvested) then {
	//Get Animal Type
	//_loop = true;	
	//_isListed =		isClass (_config);
	_text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
	
	// force animation 
	player playActionNow "Medic";

	// Alert zombies
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

	if (!_finished) exitWith { 
		r_interrupt = false;
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		cutText ["Canceled gutting." , "PLAIN DOWN"];
		//_abort = true;
	};

	_hasHarvested = _item getVariable["meatHarvested",false];
	
	if(_finished and !_hasHarvested) then {

		_item setVariable["meatHarvested",true,true];
		
		// Play sound since we finished
		[player,"gut",0,false,10] call dayz_zombieSpeak;  
	
		_qty = 1;
	
		PVDZE_plr_GutBody = [_item,_qty];
		PVDZE_plr_GutBody spawn local_gutObjectZ;		
		publicVariable "PVDZE_plr_GutBodyZ";
		
		// Reduce humanity for gutting zeds
		_humanity = player getVariable["humanity",0];
		_humanity = _humanity - 10;
		player setVariable["humanity",_humanity,true];
		

		_string = format["Successfully Gutted Zombie",_text,_qty];
		cutText [_string, "PLAIN DOWN"];
	};
};
s_player_butcher = -1;
TradeInprogress = false;