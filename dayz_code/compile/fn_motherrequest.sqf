/***********************************************************
REQUEST FROM hive
- Function
- result = [_key] call fnc_usec_hive_request;
************************************************************/
private["_key","_pipe","_result","_resultArray","_buildings","_stream","_data","_attempt"];
_key = _this select 0;
_confirm = _this select 1;
_resultArray = [];
hiveContact = true;
_attempt = 0;

//startLoadingScreen ["Accessing hive"];
//diag_log format ["hive: Request: %1", _key];
while {true} do {
	//Wait until not in use
	scopeName "usePipe";
	while {true} do {
		scopeName "pipeWaiting5";
		_pipe = [dayZ_hivePipe1] call jayarma2lib_fnc_openpipe;
		if ((_pipe != "_JERR_PIPE_INVALID")) then {breakOut "pipeWaiting5";};
	};
	//Send Key
	_ret = [_pipe, _key] call jayarma2lib_fnc_writepipe;
	//Wait until hive replies
	while {true} do {
		scopeName "pipeWaiting6";
		_data = [_pipe] call jayarma2lib_fnc_readpipe;
		if (!(isNil "_data") and (_data != "_JERR_NULL")) then {breakOut "pipeWaiting6";};
	};
	//Release hive
	[_pipe] call jayarma2lib_fnc_closepipe;
	//Do we have an answer?
	if(_data == "_JERR_FALSE" and _confirm) then {
		if (_attempt > 10) then {
			breakOut "usePipe";
		} else {
			//Retry the read
			diag_log format ["hive: Failed with: %1, Retrying", _data];
		};
	} else {
		breakOut "usePipe";
	};
	_attempt = _attempt + 1;
};	
//diag_log format ["hive: Received: %1", _data];
//endLoadingScreen;

//Return information
_resultArray = call compile format ["%1",_data];
_resultArray;