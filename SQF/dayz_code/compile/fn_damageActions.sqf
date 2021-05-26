scriptName "Functions\misc\fn_damageActions.sqf";

#include "\z\addons\dayz_code\util\array.hpp";

/***********************************************************
	ADD ACTIONS FOR A CASUALTY
	- Function
	- [] call fnc_usec_damageActions;
************************************************************/

local _menClose = cursorTarget;
local _hasPatient = alive _menClose;
local _vehicle = vehicle player;
local _inVehicle = (_vehicle != player);
local _isClose = ((player distance _menClose) < ((sizeOf typeOf _menClose) / 2));

if (_inVehicle) then {
	r_player_lastVehicle = _vehicle;
	local _assignedRole = assignedVehicleRole player;
	local _driver = driver (vehicle player);
	if (str (_assignedRole) != str (r_player_lastSeat)) then {
		call r_player_removeActions2;
		if (_vehicle isKindOf "ArmoredSUV_DZE_Base_PMC" && {_vehicle animationPhase "HideGun_01" != 0} && {_vehicle emptyPositions "Gunner" == 0}) then {
			//If player enters gunner's seat while hatch is closed then move them out
			(_vehicle turretUnit [0]) action ["moveToCargo",_vehicle,(count assignedCargo _vehicle)];
		};
	};
		
	if (!r_player_unconscious && !r_action2) then {
		r_player_lastSeat = _assignedRole;
		local _action = [];
		
		if ((_vehicle isKindOf "helicopter") || {_inVehicle && {{(isPlayer _x) && (alive _x)} count (crew _vehicle) > 1}}) then {
			//allow switch to pilot
			if (((_assignedRole select 0) != "driver") && {(!alive _driver) || {(_vehicle emptyPositions "Driver") > 0}}) then {
				if (_vehicle isKindOf "helicopter") then {
					_action = _vehicle addAction [localize "str_actions_helipilotseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToPilot",_driver], 0, false, true];
				} else {
					_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_308", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToPilot", _driver], 0, false, true];
				};
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to cargo
			if !(_vehicle isKindOf "helicopter") then {
				if (((_assignedRole select 0) != "cargo") && {(_vehicle emptyPositions "Cargo") > 0}) then {
					_action = _vehicle addAction [localize "str_actions_helibackseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToCargo",_driver], 0, false, true];
					r_player_actions2 set [count r_player_actions2,_action];
					r_action2 = true;
				};
				//allow switch to gunner
				if ((_assignedRole select 0) != "Turret" && {(_vehicle emptyPositions "Gunner") > 0}) then {
					_action = _vehicle addAction [localize "str_actions_heligunnerseat", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToTurret",_driver], 0, false, true];
					r_player_actions2 set [count r_player_actions2,_action];
					r_action2 = true;
				};
				//allow switch to commander
				if (((assignedCommander _vehicle) != player) && {(_vehicle emptyPositions "Commander") > 0}) then {
					_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_311", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToTurret", _driver], 0, false, true];
					r_player_actions2 set [count r_player_actions2,_action];
					r_action2 = true;
				};
			};	
		};
		if ((count _assignedRole) > 1 || {(_assignedRole select 0) == "driver"}) then {
			local _turret = [-1];
			if ((count _assignedRole) > 1) then {
				_turret = _assignedRole select 1;
			};
			local _weapons = _vehicle weaponsTurret _turret;
			_weapons = _weapons - ["CarHorn","MiniCarHorn","SportCarHorn","BikeHorn","TruckHorn","TruckHorn2"];
			{
				local _weaponName = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
				_action = _vehicle addAction [format[localize "str_actions_addammo",_weaponName], "\z\addons\dayz_code\actions\ammo.sqf",[_vehicle,_x,_turret], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			} count _weapons;
		};
	};
	//Check if patients
	local _crew = crew _vehicle;
	if (count _crew > 0 && !r_player_unconscious) then {
		local _unconscious_crew = [];
		{
			if (_x getVariable "NORRN_unconscious") then {
				_unconscious_crew set [(count _unconscious_crew), _x]
			};
		} forEach _crew;
		local _patients = count _unconscious_crew;
		if (_patients > 0) then {
			if (!r_action_unload) then {
				r_action_unload = true;
				local _vehType = typeOf _vehicle;
				_action = _vehicle addAction [format[localize "str_actions_medical_14",_vehType], "\z\addons\dayz_code\medical\load\unLoad_act.sqf",[player,_unconscious_crew,_vehicle], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
			};
		} else {
			if (r_action_unload) then {
				call r_player_removeActions2;
				r_action_unload = false;
			};
		};
	};
} else {
	call r_player_removeActions2;
	r_player_lastVehicle = objNull;
	r_player_lastSeat = [];
};

if (r_player_unconscious) then {
	call r_player_removeActions2;
	r_player_lastVehicle = objNull;
	r_player_lastSeat = [];
	r_action_unload = false;
};

//Lets make sure the player is looking at the target
if (isPlayer cursorTarget) then {
	if (!r_player_unconscious && !_inVehicle && {!r_drag_sqf && !r_action  && player distance _menClose < 3}) then {
		local _unit = cursorTarget;
		player reveal _unit;

		//Arrays
		local _antibiotics = ["ItemAntibiotic","ItemAntibiotic1","ItemAntibiotic2","ItemAntibiotic3","ItemAntibiotic4","ItemAntibiotic5","ItemAntibiotic6"];
		local _painkillers = ["ItemPainkiller","ItemPainkiller1","ItemPainkiller2","ItemPainkiller3","ItemPainkiller4","ItemPainkiller5","ItemPainkiller6"];
		local _bloodBags = ["bloodBagANEG","bloodBagAPOS","bloodBagBNEG","bloodBagBPOS","bloodBagABNEG","bloodBagABPOS","bloodBagONEG","bloodBagOPOS","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"];

		//Var checks
		local _unconscious = _unit getVariable ["NORRN_unconscious", false];
		local _dragged = _unit getVariable ["NORRN_unit_dragged", false];
		local _lowBlood = _unit getVariable ["USEC_lowBlood", false];
		local _injured = _unit getVariable ["USEC_injured", false];
		local _hasSepsis = _unit getVariable ["USEC_Sepsis", false];
		local _inPain = _unit getVariable ["USEC_inPain", false];
		local _legsBroke = _unit getVariable ["hit_legs", 0] >= 1;
		local _armsBroke = _unit getVariable ["hit_hands", 0] >= 1;
		local _infected = _unit getVariable ["USEC_infected", false];

		//Magazine checks
		local _playerMagazines = magazines player;
		local _hasBandage = "ItemBandage" in _playerMagazines;
		local _hasSepsisBandage = "ItemSepsisBandage" in _playerMagazines;
		local _hasEpi = "ItemEpinephrine" in _playerMagazines;
		local _hasMorphine = "ItemMorphine" in _playerMagazines;
		local _hasSplint = "equip_woodensplint" in _playerMagazines;
		local _hasPainkillers = Array_Any(_playerMagazines, {_this in _painkillers});
		local _hasAntibiotics = Array_Any(_playerMagazines, {_this in _antibiotics});
		local _hasABWipes = "ItemAntibacterialWipe" in _playerMagazines;
		local _hasBloodBag = "ItemBloodbag" in _playerMagazines;
		
		if !(dayz_classicBloodBagSystem) then {
			_hasBloodBag = Array_Any(_playerMagazines, {_this in _bloodBags});
		};

		local _vehClose = (getPosATL player) nearEntities [["Car","Tank","Helicopter","Plane","StaticWeapon","Ship"],5];

		if (_hasPatient) then {
			local _action = [];
			//Allow player to drag
			if(_unconscious && !_dragged) then {
				r_action = true;
				local _action1 = _unit addAction [localize "STR_UI_GEAR", "\z\addons\dayz_code\actions\openGear.sqf",_unit, 0, true, true];
				local _action2 = _unit addAction [localize "str_actions_medical_01", "\z\addons\dayz_code\medical\drag.sqf",_unit, 0, true, true];
				local _action3 = _unit addAction [localize "str_actions_medical_02", "\z\addons\dayz_code\medical\pulse.sqf",_unit, 0, true, true];
				local _action4 = _unit addAction [localize "str_actions_medical_drag", "\z\addons\dayz_code\medical\carry.sqf",_unit, 0, true, true];

				r_player_actions set [count r_player_actions, _action1];
				r_player_actions set [count r_player_actions, _action2];
				r_player_actions set [count r_player_actions, _action3];
				r_player_actions set [count r_player_actions, _action4];
			};
			//Load Vehicle
			if (_unconscious && {(count _vehClose > 0) && !locked (_vehClose select 0)}) then {
				r_action = true;
				local _vehicle = _vehClose select 0;
				local _vehType = getText (configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName");
				_action = _unit addAction [format[localize "str_actions_medical_03",_vehType], "\z\addons\dayz_code\medical\load\load_act.sqf",[player,_vehicle,_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to bandage
			if(_injured && _hasBandage) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_04", "\z\addons\dayz_code\medical\bandage.sqf",[_unit,"ItemBandage"], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give sepsis bandage
			if((_injured || _hasSepsis) && _hasSepsisBandage) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_04_sepsis", "\z\addons\dayz_code\medical\bandage.sqf",[_unit,"ItemSepsisBandage"], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give antibacterial wipe
			if(_hasSepsis && _hasABWipes) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_04_wipes", "\z\addons\dayz_code\medical\wipes.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Epinephrine
			if(_unconscious && _hasEpi) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_05", "\z\addons\dayz_code\medical\epinephrine.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Morphine
			if((_legsBroke || _armsBroke) && _hasMorphine) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_06", "\z\addons\dayz_code\medical\brokeBones.sqf",[_unit,"ItemMorphine"], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give equip_woodensplint
			if((_legsBroke || _armsBroke) && _hasSplint) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_06_splint", "\z\addons\dayz_code\medical\brokeBones.sqf",[_unit,"equip_woodensplint"], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to give Painkillers
			if(_inPain && _hasPainkillers) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_07", "\z\addons\dayz_code\medical\painkiller.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions,_action];
			};
			//Allow player to transfuse blood
			if(_lowBlood && _hasBloodBag) then {
				r_action = true;
				if (dayz_classicBloodBagSystem) then {
					_action = _unit addAction [localize "str_actions_medical_08", "\z\addons\dayz_code\medical\transfusion.sqf",[_unit,"ItemBloodbag"], 0, true, true];
					r_player_actions set [count r_player_actions,_action];
				} else {
					local _tempArray = [];
					{ // This was a TODO by the Vanilla Mod devs.
						if (_x in _playerMagazines && {!(_x in _tempArray)}) then {
							local _displayName = getText(configFile >> "cfgMagazines" >> _x >> "displayName");
							_action = _unit addAction [format[localize "str_actions_medical_08a",_displayName], "\z\addons\dayz_code\medical\transfusion.sqf",[_unit,_x], 0, true, true];
							r_player_actions set [count r_player_actions,_action];
							_tempArray set [count _tempArray, _x];
						};
					} count _bloodBags;
				};
			};
			//Allow player to give antibiotics
			if (_infected && _hasAntibiotics) then {
				r_action = true;
				_action = _unit addAction [localize "str_actions_medical_give_antibiotics", "\z\addons\dayz_code\medical\antibiotics.sqf",[_unit], 0, true, true];
				r_player_actions set [count r_player_actions, _action];
			};
			_isFriendly = [player, _unit] call FNC_check_access;
			if !(_isFriendly select 1) then {
				r_action = true;
				_action = _unit addAction ["Tag as friendly", "\z\addons\dayz_code\actions\player_tagFriendly.sqf", [], 0, false, true];
				r_player_actions set [count r_player_actions,_action];
			};
			if (r_action) then {
				r_action_targets set [(count r_action_targets), _unit];
			};
			if (r_action_unload) then {
				r_action_unload = false;
				call fnc_usec_medic_removeActions;
			};
		};
	};
};

//Remove Actions
if ((!_isClose || !_hasPatient) && r_action) then {
	call fnc_usec_medic_removeActions;
	r_action = false;
};
