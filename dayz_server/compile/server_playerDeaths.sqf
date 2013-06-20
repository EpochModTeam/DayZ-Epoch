private["_character","_clientID"];

_character = _this select 0;
_clientID = owner _character;

diag_log ("HIVE: Player Death list Request by ClientID: "+ str(_clientID));
	
diag_log(PlayerDeaths);

dayzPlayerDeathsResult = PlayerDeaths;

if(!isNull _character) then {
	_clientID publicVariableClient "dayzPlayerDeathsResult";
};

PlayerDeaths