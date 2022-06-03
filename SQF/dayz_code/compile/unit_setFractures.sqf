local _unit = _this select 0;
local _selection = _this select 1;
local _damage = _this select 2;
local _fracture_legs = _this select 3;
local _fracture_arms = _this select 4;

local _fracture = "hit_" + _selection;

//	Setting damage directly. Do not get the damage from the new unit first. This damage has to be 0. If not the new unit broke its legs in debug. If we add it with the damage the old unit had before, it will result in broken bones even the player had no broken bones before. 
_unit setVariable [_fracture,_damage,true];
_unit setHit [_selection,_damage];

//	This makes sure that even when the player broke his legs during changing clothes the fracture variables getting properly resetted.
r_fracture_legs = _fracture_legs;
r_fracture_arms = _fracture_arms;