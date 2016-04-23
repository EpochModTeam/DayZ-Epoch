#define STRINGIFY(x) #x
#define NAME(name) dz_fn_loot_##name
#define PATH(sub_path) STRINGIFY(\z\addons\dayz_code\loot\sub_path)
#define CPP compile preprocessFileLineNumbers

NAME(select) =      CPP PATH(select.sqf);
NAME(spawn) =       CPP (if (isServer) then { PATH(spawn_server.sqf) } else { PATH(spawn.sqf) });
NAME(spawnGroup) =  CPP PATH(spawnGroup.sqf);
NAME(insert) =      CPP PATH(insert.sqf);
NAME(insertCargo) = CPP PATH(insertCargo.sqf);

//Loot init
call CPP PATH(init.sqf);