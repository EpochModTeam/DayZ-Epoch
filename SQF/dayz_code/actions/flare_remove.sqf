private["_flare"];
_flare = _this select 3;
deleteVehicle _flare;
player removeAction s_player_grabflare;
player removeAction s_player_removeflare;
s_player_grabflare = -1;
s_player_removeflare = -1;