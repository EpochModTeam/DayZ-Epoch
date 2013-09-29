scriptName "Functions\misc\fn_damageActions.sqf";
/***********************************************************
	ADD ACTIONS FOR A CASUALTY
	- Function
	- [] call fnc_usec_damageActions;
************************************************************/
private ["_weaponName","_action","_turret","_weapons","_assignedRole","_action1","_action2","_x","_vehicle","_unit","_vehType","_displayName","_ammoQty","_ammoSerial","_weapon","_magTypes","_type","_typeVeh","_index","_inventory","_unitTo","_isEngineer","_vehClose","_hasVehicle","_unconscious","_lowBlood","_injured","_inPain","_legsBroke","_armsBroke","_charID","_friendlies","_playerMagazines","_hasBandage","_hasEpi","_hasMorphine","_hasBlood","_hasToolbox","_hasJerry","_hasJerryE","_hasWire","_hasPainkillers","_unconscious_crew","_patients","_crew","_menClose","_hasPatient","_inVehicle","_isClose","_bag","_classbag","_isDisallowRefuel","_hasBarrel","_hasBarrelE"];

disableSerialization;

if (TradeInprogress) exitWith {}; // Do not allow if any script is running.

_menClose = cursorTarget;
_hasPatient = alive _menClose;
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_isClose = ((player distance _menClose) < ((sizeOf typeOf _menClose) / 2));
_bag = unitBackpack player;
_classbag = typeOf _bag;

if (_inVehicle) then {
	r_player_lastVehicle = _vehicle;
	_assignedRole = assignedVehicleRole player;
	if (str (_assignedRole) != str (r_player_lastSeat)) then {
		call r_player_removeActions2;
	};
	if (!r_player_unconscious && !r_action2) then {
		r_player_lastSeat = _assignedRole;
		if (count _assignedRole > 1) then {
			_turret = _assignedRole select 1;
			_weapons = _vehicle weaponsTurret _turret;
			{
				_weaponName = getText (configFile >> "cfgWeapons" >> _x >> "displayName");
				_action = _vehicle addAction [format["Add AMMO to %1",_weaponName], "\z\addons\dayz_code\actions\ammo.sqf",[_vehicle,_x,_turret], 0, false, true];
				r_player_actions2 set [count r_player_actions2,_action];
				r_action2 = true;
			} forEach _weapons;
		};
	};
} else {
	call r_player_removeActions2;
	r_player_lastVehicle = objNull;
	r_player_lastSeat = [];
};

if (!isNull _menClose and _hasPatient and !r_drag_sqf and !r_action and !_inVehicle and !r_player_unconscious and _isClose) then {
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
	_hasToolbox = 	"ItemToolbox" in items player;
	_hasJerry = 	"ItemJerrycan" in _playerMagazines;
	_hasBarrel = 	"ItemFuelBarrel" in _playerMagazines;
	_hasJerryE = 	"ItemJerrycanEmpty" in _playerMagazines;
	_hasBarrelE = 	"ItemFuelBarrelEmpty" in _playerMagazines;
	//_hasEtool = 	"ItemEtool" in weapons player;
	_hasWire = 		"ItemWire" in _playerMagazines;
	_hasPainkillers = 	"ItemPainkiller" in _playerMagazines;

	//Allow player to drag
	if(_unconscious) then {
		r_action = true;
		_action1 = _unit addAction [localize "str_actions_medical_01", "\z\addons\dayz_code\medical\drag.sqf",_unit, 0, true, true];
		_action2 = _unit addAction [localize "str_actions_medical_02", "\z\addons\dayz_code\medical\pulse.sqf",_unit, 0, true, true];
		r_player_actions = r_player_actions + [_action1,_action2];
	};
	//Load Vehicle
	if (_hasVehicle and _unconscious) then {
		_x = 0;
		r_action = true;
		_unit = _unit;
		_vehicle = (_vehClose select _x);
		while{((!alive _vehicle) and (_x < (count _vehClose)))} do {
			_x = _x + 1;
			_vehicle = (_vehClose select _x);
		};
		_vehType = typeOf _vehicle;
		_action = _unit addAction [format[localize "str_actions_medical_03",_vehType], "\z\addons\dayz_code\medical\load\load_act.sqf",[player,_vehicle,_unit], 0, true, true];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to bandage
	if(_injured and _hasBandage) then {
		r_action = true;
		//_unit setdamage 0.8;
		_action = _unit addAction [localize "str_actions_medical_04", "\z\addons\dayz_code\medical\bandage.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to give Epinephrine
	if(_unconscious and _hasEpi) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_05", "\z\addons\dayz_code\medical\epinephrine.sqf",[_unit], 0, true, true];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to give Morphine
	if((_legsBroke or _armsBroke) and _hasMorphine) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_06", "\z\addons\dayz_code\medical\morphine.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to give Painkillers
	if(_inPain and _hasPainkillers) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_07", "\z\addons\dayz_code\medical\painkiller.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	//Allow player to transfuse blood
	if(_lowBlood and _hasBlood) then {
		r_action = true;
		_action = _unit addAction [localize "str_actions_medical_08", "\z\addons\dayz_code\medical\transfusion.sqf",[_unit], 0, true, true, "", ""];
		r_player_actions set [count r_player_actions,_action];
	};
	
	//Repairs
	if ((_unit isKindOf "AllVehicles") and !(_unit isKindOf "Man") and !_isDisallowRefuel) then {
		_type = TypeOf(_unit);
		_typeVeh = getText(configFile >> "cfgVehicles" >> _type >> "displayName");

		//CAN WE REFUEL THE OBJECT?
		if ((fuel _unit < 1) and (_hasJerry or _hasBarrel)) then {
			r_action = true;
			_action = _unit addAction [format[localize "str_actions_medical_10",_typeVeh], "\z\addons\dayz_code\actions\refuel.sqf",[], 0, true, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};
		//CAN WE siphon fuel from THE OBJECT?
		if ((fuel _unit > 0) and (_hasJerryE or _hasBarrelE)) then {
			r_action = true;
			_action = _unit addAction [format["Siphon fuel from %1",_typeVeh], "\z\addons\dayz_code\actions\siphonFuel.sqf",[], 0, true, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};

		//CAN WE ISSUE ANOTHER KIND OF AMMUNITION?
		if (count weapons _unit > 0) then {
			//Get mag array
			_weapon = weapons _unit select 0;
			_magTypes = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
			{
				_ammoSerial = (USEC_LogisticsItems find _x);
				if (_ammoSerial > -1) then {
					//Have the item type
					_ammoQty = ((USEC_LogisticsDetail select _ammoSerial) select 1);
					if (_ammoQty > 0) then {
						//Have at least one
						r_action = true;
						_displayName = getText(configFile >> "cfgMagazines" >> _x >> "displayName");
						_action = _unit addAction [format[localize "str_actions_medical_11",_displayName], "\z\addons\dayz_code\actions\logistics_loadmag.sqf",[_unit,_x], 0, false, true];
						r_player_actions set [count r_player_actions,_action];
					};
				};
			} forEach _magTypes;
		};
		//CAN CARRY BACKPACK
		if ((_type in USEC_PackableObjects) and (_classbag == "")) then {
			r_action = true;
			_action = _unit addAction [format[localize "str_actions_medical_12",_typeVeh], "\z\addons\dayz_code\actions\pack.sqf",[_unit], 0, true, true];
			r_player_actions set [count r_player_actions,_action];
		};
	} else {
	
		// should only fire if cursor target is man and not vehicle
		if ((isPlayer _unit) and !(_charID in _friendlies)) then {
			r_action = true;
			_action = _unit addAction ["Tag as friendly", "\z\addons\dayz_code\actions\player_tagFriendly.sqf", [], 0, false, true, "", ""];
			r_player_actions set [count r_player_actions,_action];
		};
		
	};
	if ((_unit isKindOf "Building")) then {
		_type = TypeOf(_unit);
		_typeVeh = getText(configFile >> "cfgVehicles" >> _type >> "displayName");
		_isEngineer = _hasToolbox;//(_classbag isKindOf "BAF_AssaultPack_Engineer");
		//CAN DISASSEMBLE
		if (_isEngineer and (_type in USEC_CanDisassemble)) then {
			r_action = true;
			_index = USEC_CanDisassemble find _type;
			_inventory = USEC_DisassembleKits select _index;
			_action = _unit addAction [format[localize "str_actions_medical_12",_typeVeh], "\z\addons\dayz_code\actions\disassemble.sqf",[_unit,_inventory], 0, true, true];
			r_player_actions set [count r_player_actions,_action];
		};
		//Upgrade Wire
		if (_isEngineer and (_type == "usec_wire_cat1") and _hasWire) then {
			r_action = true;
			_unitTo = "usec_wire_cat2";
			_action = _unit addAction [format[localize "str_actions_medical_13",_typeVeh], "\z\addons\dayz_code\actions\engineer_upgrade.sqf",[_unit,"ItemWire",_unitTo], 0, false, true];
			r_player_actions set [count r_player_actions,_action];
		};
		if (_isEngineer and (_type == "usec_wire_cat2") and _hasWire) then {
			r_action = true;
			_unitTo = "Fort_RazorWire";
			_action = _unit addAction [format[localize "str_actions_medical_13",_typeVeh], "\z\addons\dayz_code\actions\engineer_upgrade.sqf",[_unit,"ItemWire",_unitTo], 0, false, true];
			r_player_actions set [count r_player_actions,_action];
		};
	};
	if (r_action) then {
		r_action_targets = r_action_targets + [_unit];
	};
};

/*
if ((r_player_vehicle != _vehicle) and r_action) then {
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
		} forEach _crew;
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
if ((!_isClose or !_hasPatient) and r_action) then {
	call fnc_usec_medic_removeActions;
	r_action = false;
};

//Pain Effects
//if (r_player_inpain and !r_player_unconscious) then {
//	playSound "breath_1";
//	addCamShake [2, 1, 25];
//};