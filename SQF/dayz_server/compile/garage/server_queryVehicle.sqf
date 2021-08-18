private ["_player","_query","_result","_clientID","_playerUID"];

_player = _this select 0;
_clientID = owner _player;
_playerUID = if (count _this > 1) then {_this select 1} else {getPlayerUID _player};

_key = format["CHILD:800:%1:%2:",_playerUID,vg_sortColumn];
_result = _key call server_hiveReadWrite;

PVDZE_queryVehicleResult = _result;

if (!isNull _player) then {_clientID publicVariableClient "PVDZE_queryVehicleResult";};
