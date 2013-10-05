/*
	DayZ Enhanced ChopWood
	Usage: spawn player_chopWood;
	Made for DayZ Epoch please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_isOk","_i","_objName","_objInfo","_lenInfo","_started","_finished","_animState","_isMedic","_proceed","_counter","_itemOut","_countOut","_tree","_distance2d","_distance3d","_trees","_findNearestTree"];

if(TradeInprogress) exitWith { cutText ["\n\nHarvest wood already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

if((currentWeapon player) != "MeleeHatchet") exitWith {TradeInprogress = false; cutText ["\n\nHatchet needs to be in your hand to harvest wood.", "PLAIN DOWN"]; };

// allowed trees list move this later
_trees = ["t_larix3s.p3d","t_pyrus2s.p3d","str_briza_kriva.p3d","dd_borovice.p3d","les_singlestrom_b.p3d","les_singlestrom.p3d","smrk_velky.p3d","smrk_siroky.p3d","smrk_maly.p3d","les_buk.p3d","str krovisko vysoke.p3d","str_fikovnik_ker.p3d","str_fikovnik.p3d","str vrba.p3d","hrusen2.p3d","str dub jiny.p3d","str lipa.p3d","str briza.p3d","p_akat02s.p3d","jablon.p3d","p_buk.p3d","str_topol.p3d","str_topol2.p3d","p_osika.p3d","t_picea3f.p3d","t_picea2s.p3d","t_picea1s.p3d","t_fagus2w.p3d","t_fagus2s.p3d","t_fagus2f.p3d","t_betula1f.p3d","t_betula2f.p3d","t_betula2s.p3d","t_betula2w.p3d","t_alnus2s.p3d","t_acer2s.p3d","t_populus3s.p3d","t_quercus2f.p3d","t_sorbus2s.p3d","t_malus1s.p3d","t_salix2s.p3d","t_picea1s_w.p3d","t_picea2s_w.p3d","t_ficusb2s_ep1.p3d","t_populusb2s_ep1.p3d","t_populusf2s_ep1.p3d","t_amygdalusc2s_ep1.p3d","t_ficusb2s_ep1.p3d","t_pistacial2s_ep1.p3d","t_pinuse2s_ep1.p3d","t_pinuss3s_ep1.p3d","t_prunuss2s_ep1.p3d","t_pinusn2s.p3d","t_pinusn1s.p3d","t_pinuss2f.p3d","t_poplar2f_dead_pmc.p3d","misc_torzotree_pmc.p3d","misc_burnspruce_pmc.p3d","brg_cocunutpalm8.p3d","brg_umbrella_acacia01b.p3d","brg_jungle_tree_canopy_1.p3d","brg_jungle_tree_canopy_2.p3d","brg_cocunutpalm4.p3d","brg_cocunutpalm3.p3d","palm_01.p3d","palm_02.p3d","palm_03.p3d","palm_04.p3d","palm_09.p3d","palm_10.p3d","brg_cocunutpalm2.p3d","brg_jungle_tree_antiaris.p3d","brg_cocunutpalm1.p3d"];

//_item = _this;
call gear_ui_init;

_findNearestTree = [];
{
	if("" == typeOf _x) then {
			
		if (alive _x) then {
				
			_objName = _x call DZE_getModelName;

			// Exit since we found a tree
			if (_objName in _trees) exitWith { 
				_findNearestTree set [(count _findNearestTree),_x];
			};
		};
	};

} foreach nearestObjects [getPos player, [], 20];

//diag_log format["DEBUG TREES: %1", _findNearestTree];

if (count(_findNearestTree) >= 1) then {
		
	_tree = _findNearestTree select 0;

	// get 2d distance
	_distance2d = [player, _tree] call BIS_fnc_distance2D;
	_distance3d = player distance _tree;

	if(_distance2d <= 5) then {

		_countOut = ceil(_distance3d-_distance2d);

		//diag_log format["DEBUG TREE DISTANCE: %1 - %2 = %3", _distance3d,_distance2d,(_distance3d-_distance2d)];
	
		// Start chop tree loop
		_counter = 0;
		_isOk = true;
		_proceed = false;
		while {_isOk} do {

			// player playActionNow "Medic";

			player playActionNow "GestureSwing";
			[player,"chopwood",0,false] call dayz_zombieSpeak;
			[player,20,true,(getPosATL player)] spawn player_alertZombies;

			closeDialog 1;
	
			r_interrupt = false;
			r_doLoop = true;
			
			_finished = false;
			_finishedTime = diag_tickTime+3;

			while {r_doLoop} do {
				if (diag_tickTime > _finishedTime) then {
					r_doLoop = false;
					_finished = true;
					
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

			cutText [format["\n\nChopping down tree, walk away at anytime to cancel. (%1/%2)", _counter,  _countOut], "PLAIN DOWN"];

			if(_counter == _countOut) exitWith {
				_isOk = false;
				_proceed = true;
				sleep 1;
			};
		};

		if (_proceed) then {

			_itemOut = "PartWoodPile";
			
			_item = createVehicle ["WeaponHolder", getPosATL player, [], 1, "CAN_COLLIDE"];
			_item addMagazineCargoGlobal [_itemOut,_countOut];

			player reveal _item;
			
			// chop down tree
			if("" == typeOf _tree) then {
				_tree setDamage 1;
			};
			//diag_log format["DEBUG TREE DAMAGE: %1", _tree];

			cutText [format["\n\n%1 piles of wood has been successfully added in front of you.", _countOut], "PLAIN DOWN"];

		} else {
			r_interrupt = false;
			if (vehicle player == player) then {
				[objNull, player, rSwitchMove,""] call RE;
				player playActionNow "stop";
			};
			cutText ["\n\nCanceled Harvesting Wood.", "PLAIN DOWN"];
		};

	} else {
		cutText [localize "str_player_23", "PLAIN DOWN"];
	};

} else {
	cutText [localize "str_player_23", "PLAIN DOWN"];
};
TradeInprogress = false;
