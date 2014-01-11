private ["_unit","_variable","_arraytosend","_owner","_vehicle","_qty"];
//Inbound [_unit,"PVCDZ_hlt_Transfuse",[_unit,player,1000]]
_unit = _this select 0;
_variable = _this select 1;
_arraytosend = _this select 2;
_owner = owner _unit;


//diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner];

//execution
switch (_variable) do {
	case "VehHandleDam": { //DONE
		_vehicle = _arraytosend select 0;
		if (local _vehicle) then {
			_arraytosend call fnc_veh_handleDam;
		} else {
			PVCDZE_vehSH = _arraytosend;
			_owner publicVariableClient "PVCDZE_vehSH";
		};
	};
	
	case "SetFuel": { //DONE
		_vehicle = _arraytosend select 0;
		_qty = _arraytosend select 1;
		if (local _vehicle) then {
			_vehicle setFuel _qty;
		} else {
			PVDZE_veh_SFuel = _arraytosend;
			_owner publicVariableClient  "PVDZE_veh_SFuel";
		};
	};
	
	case "HideBody": { //DONE
		PVCDZE_hideBody = _arraytosend select 0;
		_owner publicVariableClient "PVCDZE_hideBody";
	};
	
	case "Humanity": { //DONE
		PVDZE_plr_HumanityChange = _arraytosend;
		_owner publicVariableClient "PVDZE_plr_HumanityChange";
	};
	
	case "Transfuse": { //DONE
		usecTransfuse = _arraytosend;
		_owner publicVariableClient "usecTransfuse";
		//Don't forget!! Checkout dayz_code\medical\publicEH\medTransfuse.sqf #30
		_unit setVariable["medForceUpdate",true];
	};

	case "Painkiller": { //DONE
		usecPainK = _arraytosend;
		_owner publicVariableClient "usecPainK";
		//Don't forget!! Checkout dayz_code\medical\publicEH\medPainkiller.sqf #13
		_unit setVariable["medForceUpdate",true];
	};

	case "Morphine": { //DONE
		usecMorphine = _arraytosend;
		_owner publicVariableClient "usecMorphine";
		//Don't forget!! Checkout dayz_code\medical\publicEH\medMorphine.sqf #22
		_unit setVariable ["hit_legs",0,false];
		_unit setVariable ["hit_hands",0,false];
		_unit setVariable["medForceUpdate",true];
	};

	case "Epinephrine": { //DONE
		usecEpi = _arraytosend;
		_owner publicVariableClient "usecEpi";
		//Don't forget!! Checkout dayz_code\medical\publicEH\medEpi.sqf #24
		_unit setVariable["medForceUpdate",true];
	};

	case "Bandage": { //DONE
		usecBandage = _arraytosend;
		_owner publicVariableClient "usecBandage";
		//Don't forget!! Checkout dayz_code\medical\publicEH\medEpi.sqf #21
		_unit setVariable["medForceUpdate",true];
	};
};
