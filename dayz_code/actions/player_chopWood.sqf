private["_item","_location","_isOk","_dir","_classname"];

if(TradeInprogress) exitWith { cutText ["Harvest wood already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

// allowed trees list
_trees = ["t_picea3f.p3d","t_picea2s.p3d","t_picea1s.p3d","t_fagus2w.p3d","t_fagus2s.p3d","t_fagus2f.p3d","t_betula1f.p3d","t_betula2f.p3d","t_betula2s.p3d","t_betula2w.p3d","t_alnus2s.p3d","t_acer2s.p3d","t_populus3s.p3d","t_quercus2f.p3d","t_sorbus2s.p3d","t_malus1s.p3d","t_salix2s.p3d","t_picea1s_w.p3d","t_picea2s_w.p3d","t_ficusb2s_ep1.p3d","t_populusb2s_ep1.p3d","t_populusf2s_ep1.p3d","t_amygdalusc2s_ep1.p3d","t_ficusb2s_ep1.p3d","t_pistacial2s_ep1.p3d","t_pinuse2s_ep1.p3d","t_pinuss3s_ep1.p3d","t_prunuss2s_ep1.p3d","t_pinusn2s.p3d","t_pinusn1s.p3d","t_pinuss2f.p3d","t_poplar2f_dead_pmc.p3d","misc_torzotree_pmc.p3d","misc_burnspruce_pmc.p3d","brg_cocunutpalm8.p3d","brg_umbrella_acacia01b.p3d","brg_jungle_tree_canopy_1.p3d","brg_jungle_tree_canopy_2.p3d","brg_cocunutpalm4.p3d","brg_cocunutpalm3.p3d","palm_04.p3d","brg_cocunutpalm2.p3d","brg_jungle_tree_antiaris.p3d","brg_cocunutpalm1.p3d"];

_item = _this;
call gear_ui_init;

player playActionNow "Medic";
[player,20,false,(getPosATL player)] spawn player_alertZombies;
	
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

	_nearByTrees = 0;

	_findNearestTree = [];
	{
		if("" == typeOf _x) then {
			
			if (alive _x) then {
				
				_objInfo = toArray(str(_x));
				_lenInfo = count _objInfo - 1;
				_objName = [];
				_i = 0;
				// determine where the object name starts
				{
					if (58 == _objInfo select _i) exitWith {};
					_i = _i + 1;
				} forEach _objInfo;
				_i = _i + 2; // skip the ": " part
				for "_k" from _i to _lenInfo do {
					_objName = _objName + [_objInfo select _k];
				};
				_objName = toLower(toString(_objName));

				// Exit since we found a tree
				if (_objName in _trees) exitWith { 
					_findNearestTree set [(count _findNearestTree),_x];
				};
			};
		};

	} foreach nearestObjects [getPos player, [], 5];

	diag_log format["DEBUG TREES: %1", _findNearestTree];

	if (count(_findNearestTree) >= 1) then {

		_result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
		[player,"chopwood",0,false] call dayz_zombieSpeak;
		if (_result) then {
			cutText [localize "str_player_25", "PLAIN DOWN"];
			_tree = _findNearestTree select 0;
			
			if("" == typeOf _tree) then {
				_tree setDamage 1;
			};
			
			diag_log format["DEBUG TREE DAMAGE: %1", _tree];
		} else {
			cutText [localize "str_player_24", "PLAIN DOWN"];
		};

	} else {
		cutText [localize "str_player_23", "PLAIN DOWN"];
	};


} else {
	r_interrupt = false;
	[objNull, player, rSwitchMove,""] call RE;
	player playActionNow "stop";
	cutText ["Canceled Harvest Wood.", "PLAIN DOWN"];
};
TradeInprogress = false;