private["_flare"];
_flare = _this select 3;
player removeAction s_player_dropflare;
detach _flare;
s_player_grabflare = -1;
s_player_removeflare = -1;
_flare setVariable ["owner",objNull,true];
dayz_hasLight = false;