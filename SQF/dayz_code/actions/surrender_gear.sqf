private ["_hasKnife","_qty","_item","_text","_string","_type","_started","_finished","_animState","_isMedic","_hasHarvested","_hasKnifeBlunt","_humanity"];

player removeAction s_player_SurrenderedGear;

player action ["Gear", (_this select 3)];

s_player_SurrenderedGear = -1;