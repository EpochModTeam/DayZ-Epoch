private["_sellgeneric1"];

{player removeAction _x} forEach s_player_tradecans;s_player_tradecans = [];
{player removeAction _x} forEach s_player_metals;s_player_metals = [];
{player removeAction _x} forEach s_player_bank;s_player_bank = [];

s_player_tradecans_crtl = -1;
s_player_metal_crtl = -1;
s_player_bank_crtl = -1;