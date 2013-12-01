private["_character","_clientID"];

_character = _this select 0;
_clientID = owner _character;

#ifdef DZE_SERVER_DEBUG
diag_log ("HIVE: Player Death list Request by ClientID: "+ str(_clientID));
diag_log(PlayerDeaths);
#endif

PVDZE_plr_DeathBResult = PlayerDeaths;

if(!isNull _character) then {
	_clientID publicVariableClient "PVDZE_plr_DeathBResult";
};

PlayerDeaths