/*
[_objectID,_objectUID,_obj] call server_deleteObjDirect;
*/
private ["_id","_uid","_key","_obj"];

_id 	= _this select 0;
_uid 	= _this select 1;
_obj 	= ["Object",typeof (_this select 2)] select (count _this > 2);

if (isServer) then {
	//remove from database
	if (parseNumber _id > 0) then {
		//Send request
		_key = format["CHILD:304:%1:",_id];
		_key call server_hiveWrite;
		diag_log format["DELETE DIRECT: SERVER deleted %2 with ID: %1", _id, _obj];
	} else  {
		//Send request
		_key = format["CHILD:310:%1:",_uid];
		_key call server_hiveWrite;
		diag_log format["DELETE DIRECT: SERVER deleted %2 with UID: %1", _uid, _obj];
	};
};