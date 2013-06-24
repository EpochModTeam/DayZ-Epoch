private ["_clientID","_character","_traderid","_retrader","_data","_result","_status","_val","_key"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_character = _this select 0;
_traderid = _this select 1;

_retrader = [];

_clientID = owner _character;
diag_log ("HIVE: Menu Request by ClientID: "+ str(_clientID));

_key = format["CHILD:399:%1:",_traderid];
_data = "HiveEXT" callExtension _key;

diag_log "HIVE: Request sent";
		
//Process result
_result = call compile format ["%1",_data];
_status = _result select 0;
		
if (_status == "ObjectStreamStart") then {
	_val = _result select 1;
	//Stream Objects
	diag_log ("HIVE: Commence Menu Streaming...");
	for "_i" from 1 to _val do {
		_data = "HiveEXT" callExtension _key;
		_result = call compile format ["%1",_data];
		_status = _result select 0;
		_retrader set [count _retrader,_result];
				
		//diag_log ("HIVE: Loop ");
	};
	//diag_log ("HIVE: Streamed " + str(_val) + " objects");
};


diag_log(_retrader);
dayzTraderMenuResult = _retrader;
if(!isNull _character) then {
	_clientID publicVariableClient "dayzTraderMenuResult";
};
_retrader;