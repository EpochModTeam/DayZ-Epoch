scriptName "Functions\misc\fn_damageActions.sqf";
/***********************************************************
	ADD ACTIONS FOR A CASUALTY
	- Function
	- [] call fnc_usec_damageActions;
************************************************************/
private ["_action","_weaponName","_turret","_weapons","_assignedRole","_driver","_action1","_action2","_vehicle","_unit","_vehType","_type","_typeVeh","_isDisallowRefuel","_vehClose","_hasVehicle","_unconscious","_lowBlood","_injured","_inPain","_legsBroke","_armsBroke","_charID","_friendlies","_playerMagazines","_hasBandage","_hasEpi","_hasMorphine","_hasBlood","_hasJerry","_hasBarrel","_hasJerryE","_hasBarrelE","_hasPainkillers","_unconscious_crew","_patients","_crew","_menClose","_hasPatient","_inVehicle","_isClose"];

disableSerialization;

if (DZE_ActionInProgress) exitWith {}; // Do not allow if any script is running.

_menClose = cursorTarget;
_hasPatient = alive _menClose;
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_isClose = ((player distance _menClose) < ((sizeOf typeOf _menClose) / 2));
//_bag = unitBackpack player;
//_classbag = typeOf _bag;

if (_inVehicle) then {
	r_player_lastVehicle = _vehicle;
	_assignedRole = assignedVehicleRole player;
	_driver = driver (vehicle player);
	if (str (_assignedRole) != str (r_player_lastSeat)) then {
		call r_player_removeActions2;
	};
		if (!r_player_unconscious && !r_action2) then {
			r_player_lastSeat = _assignedRole;
		if ((_vehicle isKindOf "helicopter") || (_inVehicle && ({(isPlayer _x) && (alive _x)} count (crew _vehicle) > 1))) then {
			//allow switch to pilot
			if (((_assignedRole select 0) != "driver") && ((!alive _driver) || ((_vehicle emptyPositions "Driver") > 0))) then {
				if (_vehicle isKindOf "helicopter") then {
					_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_308A", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToPilot", _driver], 0, false, true];
				} else {
					_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_308", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToPilot", _driver], 0, false, true];
				};
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to cargo
			if (((_assignedRole select 0) != "cargo") && ((_vehicle emptyPositions "Cargo") > 0)) then {
				_action = _vehicle addAction [localize "STR_EPOCH_PLAYER_309", "\z\addons\dayz_code\actions\veh_seatActions.sqf",["MoveToCargo",_driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to gunner
			if (((_assignedRole select 0) != "Turret") && ((_vehicle emptyPositions "Gunner") > 0)) then {
				_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_310", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToTurret", _driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
			//allow switch to commander
			if (((assignedCommander _vehicle) != player) && ((_vehicle emptyPositions "Commander") > 0)) then {
				_action = _vehicle addAction[localize "STR_EPOCH_PLAYER_311", "\z\addons\dayz_code\actions\veh_seatActions.sqf", ["MoveToTurret", _driver], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			};
		};
		if (count _assignedRole > 1) then {
			_turret = _assignedRole select 1;
			_weapons = _vehicle weaponsTurret _turret;
			{
				_weaponName = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
				_action = _vehicle addAction [format["Add AMMO to %1",_weaponName], "\z\addons\dayz_code\actions\ammo.sqf",[_vehicle,_x,_turret], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			} count _weapons;
		};
	};
} else {
	call r_player_removeActions2;
	r_player_lastVehicle = objNull;
	r_player_lastSeat = [];
};

if (!isNull _menClose && _hasPatient && !r_drag_sqf && !r_action && !_inVehicle && !r_player_unconscious && _isClose) then {
	_unit = 		cursorTarget;
	_isDisallowRefuel = typeOf _unit in ["M240Nest_DZ"];
	// player reveal _unit;
	_vehClose = 	(getPosATL player) nearEntities [["Car","Tank","Helicopter","Plane","StaticWeapon","Ship"],5]; //nearestObjects [player, ["Car","Tank","Helicopter","Plane","StaticWeapon","Ship"], 5];
	_hasVehicle = 	({alive _x} count _vehClose > 0);
	_unconscious = 	_unit getVariable ["NORRN_unconscious", false];
	_lowBlood = 	_unit getVariable ["USEC_lowBlood", false];
	_injured = 		_unit getVariable ["USEC_injured", false];
	_inPain = 		_unit getVariable ["USEC_inPain", false];
	_legsBroke = 	_unit getVariable ["hit_legs", 0] >= 1;
	_armsBroke = 	_unit getVariable ["hit_hands", 0] >= 1;
	_charID =		_unit getVariable ["CharacterID", 0];
	_friendlies =	player getVariable ["friendlies", []];
	_playerMagazines = magazines player;
	_hasBandage = 	"ItemBandage" in _playerMagazines;
	_hasEpi = 		"ItemEpinephrine" in _playerMagazines;
	_hasMorphine = 	"ItemMorphine" in _playerMagazines;
	_hasBlood = 	"ItemBloodbag" in _playerMagazines;	
	//_hasToolbox = 	"ItemToolbox" in items player;
	_hasJerry = 	"ItemJerrycan" in _playerMagazines;
	_hasBarrel = 	"ItemFuelBarrel" in _playerMagazines;
	_hasJerryE = 	"ItemJerrycanEmpty" in _playerMagazines;
	_hasBarrelE = 	"ItemFuelBarrelEmpty" in _playerMagazines;
	//_hasEtool = 	"ItemEtool" in weapons player;
	//_hasWire = 		"ItemWire" in _playerMagazines;
	_hasPainkillers = 	"ItemPainkiller" in _playerMagazines;

	//Allow player to drag
	if(_unconscious) then {
		r_action = true;
		_action1 = _unit addAction [localize "str_actions_medical_01", "\z\addons\dayz_code\medical\drag.sqf",_unit, 0, true, true];
		_action2 = _unit addAction [localize "str_actions_medical_02", "\z\addons\dayz_code\medical\pulse.sqf",_unit, 0, true, true];
		r_player_actions = r_player_actions + [_action1,_action2];
	};
	//Load Vehicle
	if (_hasVehicle && _unconscious) then {
		_x = 0;
		r_action = true;
		_unit = _unit;
		_vehicle = (_vehClose select _x);
		while{((!alive _vehicle) && (_x < (count _vehClose)))} do {
			_x = _x + 1;
			_vehicle = (_vehClose select _x);
		};
		_vehType = typeOf _vehicle;
		_action = _unit addAction [format[localize "str_actions_medical_03",_vehType], "\z\addons\dayz_code\medical\load\load_act.sqf",[player,_vehicle,_unit], 0, true, true];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to bandage
	if(_injured && _hasBandage) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_04", "\z\addons\dayz_code\medical\bandage.sqf",[_unit], 0, true, true, "", ""];
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
		_action = _unit addAction [localize "str_actions_medical_06", "\z\addons\dayz_code\medical\morphine.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to give Painkillers
	if(_inPain && _hasPainkillers) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_07", "\z\addons\dayz_code\medical\painkiller.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to transfuse blood
	if(_lowBlood && _hasBlood) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_08", "\z\addons\dayz_code\medical\transfusion.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	
	//Repairs
	if ((_unit isKindOf "AllVehicles") && !(_unit isKindOf "Man") && !_isDisallowRefuel) then {
		_type = TypeOf(_unit);
		_typeVeh = getText(configFile >> "cfgVehicles" >> _type >> "displayName");

		//CAN WE REFUEL THE OBJECT?
		if ((fuel _unit < 1) && (_hasJerry || _hasBarrel)) then {
			r_action = true;
			_action = _unit addAction [format[localize "str_actions_medical_10",_typeVeh], "\z\addons\dayz_code\actions\refuel.sqf",[], 0, true, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};
		//CAN WE siphon fuel from THE OBJECT?
		if ((fuel _unit > 0) && (_hasJerryE || _hasBarrelE)) then {
			r_action = true;
			_action = _unit addAction [format["Siphon fuel from %1",_typeVeh], "\z\addons\dayz_code\actions\siphonFuel.sqf",[], 0, true, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};

	} else {
	
		// should only fire if cursor target is man && not vehicle
		if ((isPlayer _unit) && !(_charID in _friendlies)) then {
			r_action = true;
			_action = _unit addAction ["Tag as friendly", "\z\addons\dayz_code\actions\player_tagFriendly.sqf", [], 0, false, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};
		
	};
	if (r_action) then {
		r_action_targets = r_action_targets + [_unit];
	};
};

/*
if ((r_player_vehicle != _vehicle) && r_action) then {
	//Player is in a new vehicle
	r_action = false;
	call fnc_usec_medic_removeActions;
};
*/

if (_inVehicle) then {
	//Check if patients
	_crew = crew _vehicle;
	if (count _crew > 0) then {
		_unconscious_crew = [];
		{
			if (_x getVariable "NORRN_unconscious") then {
				_unconscious_crew = _unconscious_crew + [_x]
			};
		} count _crew;
		_patients = (count _unconscious_crew);
		if (_patients > 0) then {
			if (!r_action_unload) then {
				r_action_unload = true;
				_vehType = typeOf _vehicle;
				_action = _vehicle addAction [format[localize "str_actions_medical_14",_vehType], "\z\addons\dayz_code\medical\load\unLoad_act.sqf",[player,_vehicle], 0, false, true];
				r_player_actions set [count r_player_actions,_action];
			};
		} else {
			if (r_action_unload) then {
				call fnc_usec_medic_removeActions;
				r_action_unload = false;
			};
		};
	};
	//hintSilent format["Crew: %1\nPatients: %2\nAction: %3",(count _crew),_patients,r_action_unload];
} else {
	if (r_action_unload) then {
		r_action_unload = false;
		call fnc_usec_medic_removeActions;
	};
};

//Remove Actions
if ((!_isClose || !_hasPatient) && r_action) then {
	call fnc_usec_medic_removeActions;
	r_action = false;
};

//Pain Effects
//if (r_player_inpain && !r_player_unconscious) then {
//	playSound "breath_1";
//	addCamShake [2, 1, 25];
//};
