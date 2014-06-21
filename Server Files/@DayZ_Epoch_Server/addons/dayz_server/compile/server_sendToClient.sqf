private ["_unit","_variable","_arraytosend","_owner","_vehicle","_qty"];
//Inbound [_unit,"PVCDZ_hlt_Transfuse",[_unit,player,1000]]
_unit = _this select 0;
_variable = _this select 1;
_arraytosend = _this select 2;
_owner = owner _unit;


//diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner];

//execution
switch (_variable) do {
	case "VehHandleDam": {
		_vehicle = _arraytosend select 0;
		if (local _vehicle) then {
			_arraytosend call fnc_veh_handleDam;
		} else {
			PVCDZE_vehSH = _arraytosend;
			_owner publicVariableClient "PVCDZE_vehSH";
		};
	};
	
	case "SFuel": {
		_vehicle = _arraytosend select 0;
		_qty = _arraytosend select 1;
		if (local _vehicle) then {
			_vehicle setFuel _qty;
		} else {
			PVDZE_veh_SFuel = _arraytosend;
			_owner publicVariableClient  "PVDZE_veh_SFuel";
		};
	};
	
	case "HideBody": {
		PVDZE_plr_HideBody = _arraytosend select 0;
		_owner publicVariableClient "PVDZE_plr_HideBody";
	};
	
	case "Humanity": {
		PVDZE_plr_HumanityChange = _arraytosend;
		_owner publicVariableClient "PVDZE_plr_HumanityChange";
	};
	
	case "PZ_BreakLegs": {
		usecBreakLegs = _arraytosend;
		_owner publicVariableClient "usecBreakLegs";
	};
	
	case "Bleed": {
		usecBleed = _arraytosend;
		_owner publicVariableClient "usecBleed";
	};
	
	case "HideObj": {
		PVDZE_obj_Hide = _arraytosend select 0;
		_owner publicVariableClient "PVDZE_obj_Hide";
	};
	
	case "RoadFlare": {
		PVDZE_obj_RoadFlare = _arraytosend;
		_owner publicVariableClient "PVDZE_obj_RoadFlare";
	};
	
	case "Transfuse": {
		usecTransfuse = _arraytosend;
		_owner publicVariableClient "usecTransfuse";
		_unit setVariable["medForceUpdate",true];
	};

	case "Painkiller": {
		usecPainK = _arraytosend;
		_owner publicVariableClient "usecPainK";
		_unit setVariable["medForceUpdate",true];
	};

	case "Morphine": {
		usecMorphine = _arraytosend;
		_owner publicVariableClient "usecMorphine";
		_unit setVariable ["hit_legs",0,false];
		_unit setVariable ["hit_hands",0,false];
		_unit setVariable["medForceUpdate",true];
	};

	case "Epinephrine": {
		usecEpi = _arraytosend;
		_owner publicVariableClient "usecEpi";
		_unit setVariable["medForceUpdate",true];
	};

	case "Bandage": {
		usecBandage = _arraytosend;
		_owner publicVariableClient "usecBandage";
		_unit setVariable["medForceUpdate",true];
	};
	case "tagFriendly": {
		PVDZE_plr_FriendRQ = _arraytosend;
		_owner publicVariableClient "PVDZE_plr_FriendRQ";
	};
};
