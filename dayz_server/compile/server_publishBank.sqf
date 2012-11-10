private["_type","_mUID","_deposit","_key","_result","_outcome","_balance","_uid"];
//[UID,_deposit,]
_mUID =			_this select 0;
_deposit = 		_this select 1;
_type = 		_this select 2;
_player = 		_this select 3;


//GET DB ID
_key = format["CHILD:111:%1:%2:%3:",_mUID,_deposit,_type];

diag_log ("HIVE: WRITE: "+ str(_key));

_result = [_key] call server_hiveReadWrite;

_outcome = _result select 0;

if (_outcome == "PASS") then {

	_msg = _result select 1;
	_balance = _result select 2;
	
	diag_log("BANK: Action msg:" + str(_msg) + " Balance:" + str(_player));
		
	_clientID = owner _player;
	
	dayzBankBalance = _balance;
	_clientID publicVariableClient "dayzBankBalance";
	
	diag_log ("PUBLISH BANK: Deposit " + str(_clientID) + " with " + str(_deposit));
	
};

