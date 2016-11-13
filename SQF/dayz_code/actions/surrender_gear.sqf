private [];

player removeAction s_player_SurrenderedGear;
DZE_GearCheckBypass = true;
player action ["Gear", (_this select 3)];

s_player_SurrenderedGear = -1;