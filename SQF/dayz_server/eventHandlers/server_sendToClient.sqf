private ["_unit","_variable","_arraytosend","_owner","_vehicle","_qty"];
//Inbound [_unit,"PVCDZ_hlt_Transfuse",[_unit,player,1000]]
_unit = _this select 0;
_variable = _this select 1;
_arraytosend = _this select 2;
_owner = owner _unit;

//diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner];

switch (_variable) do {
	case "VehHandleDam": {
		_vehicle = _arraytosend select 0;
		if (local _vehicle) then {
			_arraytosend call fnc_veh_handleDam;
		} else {
			PVCDZ_veh_SH = _arraytosend;
			_owner publicVariableClient "PVCDZ_veh_SH";
		};
	};
	
	case "SetFuel": {
		_vehicle = _arraytosend select 0;
		_qty = _arraytosend select 1;
		if (local _vehicle) then {
			_vehicle setFuel _qty;
		} else {
			PVCDZ_veh_SetFuel = _arraytosend;
			_owner publicVariableClient  "PVCDZ_veh_SetFuel";
		};
	};
	
	case "SetEngineState": {
		_vehicle = _arraytosend select 0;
		_state = _arraytosend select 1;	
		if (local _vehicle) then {
			//_vehicle engineOn _state;
			_vehicle setOwner _owner;
		} else {
			PVCDZ_veh_engineSwitch = _arraytosend;
			_owner publicVariableClient  "PVCDZ_veh_engineSwitch";
		};
	};
	
	case "GutBody": {
		PVCDZ_obj_GutBody = _arraytosend;
		_owner publicVariableClient "PVCDZ_obj_GutBody";
	};
	
	case "HideBody": {
		PVCDZ_obj_HideBody = _arraytosend select 0;
		_owner publicVariableClient "PVCDZ_obj_HideBody";
	};
	
	case "Humanity": {
		PVCDZ_plr_Humanity = _arraytosend;
		_owner publicVariableClient "PVCDZ_plr_Humanity";
		//diag_log ("Humanity" +str(PVCDZ_plr_Humanity));
	};
	
	case "dayzSetDate": {
		dayzSetDate = dayz_storeTimeDate;
		_owner publicVariableClient "dayzSetDate";
		//diag_log ("Time and date: " +str (dayz_storeTimeDate));
	};

	case "Transfuse": {
		PVCDZ_hlt_Transfuse = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Transfuse";
		_unit setVariable ["medForceUpdate",true];
	};
	
	case "Transfuse_completed": {
		PVCDZ_hlt_Transfuse_completed = true;
		_owner publicVariableClient "PVCDZ_hlt_Transfuse_completed";
		_unit setVariable ["medForceUpdate",true];
	};

	case "Painkiller": {
		PVCDZ_hlt_PainK = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_PainK";
		_unit setVariable ["medForceUpdate",true];
	};

	case "Morphine": {
		PVCDZ_hlt_Morphine = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Morphine";
		_unit setVariable ["hit_legs",0,false];
		_unit setVariable ["hit_hands",0,false];
		_unit setVariable ["medForceUpdate",true];
	};

	case "Epinephrine": {
		PVCDZ_hlt_Epi = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Epi";
		_unit setVariable ["medForceUpdate",true];
	};

	case "Bandage": {
		PVCDZ_hlt_Bandage = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Bandage";
		_unit setVariable ["medForceUpdate",true];
		//diag_log ("Bandage: " +str(PVCDZ_hlt_Bandage));
	};

	case "Antibiotics": {
		PVCDZ_hlt_AntiB = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_AntiB";
		_unit setVariable ["medForceUpdate",true];
	};

	case "Legs": {
		PVCDZ_plr_Legs = _arraytosend;
		_owner publicVariableClient "PVCDZ_plr_Legs";
	};
	
	//reset OpenTarget timer
	case "OpenTarget": {
		_unit setVariable ["OpenTarget",true,true];	
		PVCDZ_OpenTarget_Reset = true;
		_owner publicVariableClient "PVCDZ_OpenTarget_Reset";
	};
	
	case "tagFriendly": {
		PVDZE_plr_FriendRQ = _arraytosend;
		_owner publicVariableClient "PVDZE_plr_FriendRQ";
	};

	case "RemoveObject": {
		PVDZE_obj_Remove = _arraytosend;
		{
			_pOwner = owner _x;
			if (isPlayer _x && {_pOwner != _owner}) then {
				_pOwner publicVariableClient "PVDZE_obj_Remove";
			};
		} forEach playableUnits;
	};
	default { diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner]; };
};