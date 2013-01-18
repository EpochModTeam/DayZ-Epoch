rpcCodeVarName = { format["%1_code",_this] };
rpcDirectCall = { call compile format["[%1,%2] call %3;",str(_this),_this,_this call rpcCodeVarName]; };

//run on all clients
broadcastRpcCallAll = {
	private["_name","_val"];
	_name = _this select 0;
	_val = _this select 1;
	call compile format["%1 = _val;",_name]; //set the value locally
	_name call rpcDirectCall; 	//call on this client
	publicVariable _name; 		//call on other clients
};

//run on client which has the object ownership
broadcastRpcCallIfLocal = {
	private["_name","_val","_reqObj"];
	_name = _this select 0;
	_val = _this select 1;
	_reqObj = _this select 2;

	call compile format["%1 = _val;",_name]; //set the value locally
	if (local _reqObj) then {
		_name call rpcDirectCall; 	//call on this client
	} else {
		publicVariable _name; 		//call on other clients
	}
};

//only run on server
callRpcProcedure = {
	private["_name","_val"];
	_name = _this select 0;
	_val = _this select 1;
	call compile format["%1 = _val;",_name]; //set the value locally
	if (isServer) then {
		_name call rpcDirectCall;	//call here since we are the server
	} else {
		publicVariableServer _name;	//call on the sever
	};
};

//register client->client rpc
registerBroadcastRpc = {
	private["_name","_code"];
	_name = _this select 0;
	_code = _this select 1;

	call compile format["%1 = _code;",_name call rpcCodeVarName]; //set the global var containing the EH code
	_name addPublicVariableEventHandler _code;
};

//both
["dayzSetFuel",		{ (_this select 1) call local_setFuel; }			] call registerBroadcastRpc;
["dayzSetFix",		{ (_this select 1) call object_setFixServer; }		] call registerBroadcastRpc;
["dayzSetDate",		{ setDate (_this select 1); }						] call registerBroadcastRpc;
//EHs that setVariable "medForceUpdate" need to run on the server too
["usecMorphine",		{ (_this select 1) call player_medMorphine; }	] call registerBroadcastRpc;
["usecBandage",			{ (_this select 1) call player_medBandage; }	] call registerBroadcastRpc;
["usecEpi",				{ (_this select 1) call player_medEpi; }		] call registerBroadcastRpc;
["usecTransfuse",		{ (_this select 1) call player_medTransfuse; }	] call registerBroadcastRpc;
["usecPainK",			{ (_this select 1) call player_medPainkiller; }	] call registerBroadcastRpc;
//BIS_Effects_Burn is empty on the server anyway, but this EH is called
["dayzFire",			{ (_this select 1) spawn BIS_Effects_Burn; }	] call registerBroadcastRpc;

//server only
if (isServer) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\publicEH_server.sqf";
};

//clients only
if (!isDedicated) then {
	["norrnRaLW",   		{ [_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf"; }] call registerBroadcastRpc;
	["norrnRLact",			{ [_this select 1] execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"; }	] call registerBroadcastRpc;	
	["usecBleed",			{ (_this select 1) spawn fnc_usec_damageBleed; }									] call registerBroadcastRpc;
	["dayzHideBody",		{ hideBody (_this select 1); }														] call registerBroadcastRpc;
	["dayzHumanity",		{ (_this select 1) spawn player_humanityChange; }									] call registerBroadcastRpc;
	["dayzHitV",			{ (_this select 1) call fnc_usec_damageVehicle; }									] call registerBroadcastRpc;

	["dayzFlies",			{ (_this select 1) call spawn_flies; }												] call registerBroadcastRpc;
	["dayzRoadFlare",		{ (_this select 1) spawn object_roadFlare; }										] call registerBroadcastRpc;
	["norrnRaDrag",			{ [_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\animDrag.sqf"; }	] call registerBroadcastRpc;
};