private ["_unit","_variable","_arraytosend","_owner","_vehicle","_qty","_exitReason"];
//Inbound [_unit,"PVCDZ_hlt_Transfuse",[_unit,player,1000]]
_unit = _this select 0;
_variable = _this select 1;
_arraytosend = _this select 2;
_owner = owner _unit;
_exitReason = "";

// Add security for higher risk PVDZ_Send usage
if (_variable in ["Unconscious","DragPlayer","DropPlayer","Legs","RemoveObject","CarryPlayer","LoadWounded","UnloadWounded"]) then {
	private ["_verifyArray","_objPos","_clientKey","_activatingPlayer","_playerUID"];
	_verifyArray = _this select 3;
	_objPos = 	_verifyArray select 0; // can be object or position
	_clientKey = _verifyArray select 1;
	_activatingPlayer =  _verifyArray select 2;
	_playerUID = getPlayerUID _activatingPlayer;
	_exitReason = [_verifyArray,_variable,_objPos,_clientKey,_playerUID,_activatingPlayer] call server_verifySender;
	//diag_log text format ["server_sendToClient: Player [%1:%2] used function %3 on/at %4.",(name _activatingPlayer),_playerUID,_variable,_objPos];
};

if (_exitReason != "") exitWith {diag_log _exitReason};

//diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner];

call {
	if (_variable == "VehHandleDam") exitWith {
		_vehicle = _arraytosend select 0;
		if (local _vehicle) then {
			_arraytosend call fnc_veh_handleDam;
		} else {
			PVCDZ_veh_SH = _arraytosend;
			_owner publicVariableClient "PVCDZ_veh_SH";
		};
	};
	
	if (_variable == "SetFuel") exitWith {
		_vehicle = _arraytosend select 0;
		_qty = _arraytosend select 1;
		if (local _vehicle) then {
			_vehicle setFuel _qty;
		} else {
			PVCDZ_veh_SetFuel = _arraytosend;
			_owner publicVariableClient  "PVCDZ_veh_SetFuel";
		};
	};
	
	if (_variable == "SetEngineState") exitWith {
		_vehicle = _arraytosend select 0;
		_state = _arraytosend select 1;	
		if (local _vehicle) then {
			_vehicle engineOn _state;
			_vehicle setOwner _owner;
		} else {
			PVCDZ_veh_engineSwitch = _arraytosend;
			_owner publicVariableClient  "PVCDZ_veh_engineSwitch";
		};
	};
	
	if (_variable == "GutBody") exitWith {
		PVCDZ_obj_GutBody = _arraytosend;
		_owner publicVariableClient "PVCDZ_obj_GutBody";
	};
	
	if (_variable == "Humanity") exitWith {
		PVCDZ_plr_Humanity = _arraytosend select 0;
		_owner publicVariableClient "PVCDZ_plr_Humanity";
		//diag_log ("Humanity" +str(PVCDZ_plr_Humanity));
	};
	
	if (_variable == "dayzSetDate") exitWith {
		dayzSetDate = dayz_storeTimeDate;
		_owner publicVariableClient "dayzSetDate";
		//diag_log ("Time and date: " +str (dayz_storeTimeDate));
	};
	
	if (_variable == "Transfuse") exitWith {
		PVCDZ_hlt_Transfuse = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Transfuse";
	};
	
	if (_variable == "Painkiller") exitWith {
		PVCDZ_hlt_PainK = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_PainK";
	};
	
	if (_variable == "Morphine") exitWith {
		PVCDZ_hlt_Morphine = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Morphine";
	};
	
	if (_variable == "Epinephrine") exitWith {
		PVCDZ_hlt_Epi = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Epi";
	};
	
	if (_variable == "Bandage") exitWith {
		PVCDZ_hlt_Bandage = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Bandage";
	};
	
	if (_variable == "Antibiotics") exitWith {
		PVCDZ_hlt_AntiB = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_AntiB";
	};
	
	if (_variable == "AntiBacterialWipe") exitWith {
		PVCDZ_hlt_Wipe = _arraytosend;
		_owner publicVariableClient "PVCDZ_hlt_Wipe";
	};
	
	if (_variable == "Legs") exitWith {
		PVCDZ_plr_Legs = _arraytosend;
		_owner publicVariableClient "PVCDZ_plr_Legs";
	};
	
	if (_variable == "tagFriendly") exitWith {
		PVDZE_plr_FriendRQ = _arraytosend;
		_owner publicVariableClient "PVDZE_plr_FriendRQ";
	};
	
	if (_variable == "Unconscious") exitWith {
		PVDZ_receiveUnconscious = _arraytosend;
		_owner publicVariableClient "PVDZ_receiveUnconscious";
	};
	
	if (_variable == "DragPlayer") exitWith {
		PVDZ_drg_RaDrag = _arraytosend;
		_owner publicVariableClient "PVDZ_drg_RaDrag";
	};
	
	if (_variable == "DropPlayer") exitWith {
		PVDZ_drg_RaDrop = _arraytosend;
		_owner publicVariableClient "PVDZ_drg_RaDrop";
	};
	
	if (_variable == "CarryPlayer") exitWith {
		PVDZ_drg_RaCarry = _arraytosend;
		_owner publicVariableClient "PVDZ_drg_RaCarry";
	};
	
	if (_variable == "LoadWounded") exitWith {
		PVDZ_drg_RaLW = _arraytosend;
		_owner publicVariableClient "PVDZ_drg_RaLW";
	};
	
	if (_variable == "UnloadWounded") exitWith {
		PVDZ_drg_RaUW = _arraytosend;
		_owner publicVariableClient "PVDZ_drg_RaUW";
	};
	
	if (_variable == "RemoveObject") exitWith {
		PVDZE_obj_Remove = _arraytosend;
		{
			_pOwner = owner _x;
			if (isPlayer _x && {_pOwner != _owner}) then {
				_pOwner publicVariableClient "PVDZE_obj_Remove";
			};
		} forEach playableUnits;
	};
	
	//default 
	diag_log format ["%1, %2, %3, %4", _unit, _variable, _arraytosend, _owner];
};
