private ["_SWcorner","_NEcorner","_amount","_a","_b","_c"];

#define CONFIGBASE_VEHMAINTENANCE configFile >> "CfgPatches" >> "vehMaint"

if (toLower worldName == "chernarus") then {
	_SWcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "SWcorner");
	_NEcorner = getArray(CONFIGBASE_VEHMAINTENANCE >> (worldName) >> "NEcorner");
} else {
	// Not used, plant spawner is disabled on other maps for now, may add town generator and other coordinates later
	_SWcorner = [0,1360];
	_NEcorner = [14400,13560];
};

_a = [(_SWcorner select 0), (_SWcorner select 1), (_NEcorner select 0) - (_SWcorner select 0), (_NEcorner select 1) - (_SWcorner select 1) ] call psrnd_init; 
_b = [ -15, -15, 30, 30 ] call psrnd_init; 
_c = [ 0, 0, 3, 360 ] call psrnd_init; 

PVCDZ_plr_plantSpawner = [ _a, _b, _c, [] ];
//diag_log [ __FILE__, _a, _b, _c ];

"PVDZ_objgather_Delete" addPublicVariableEventHandler {
	private [ "_pos", "_blacklist"];
	_pos = (_this select 1);

	_blacklist = PVCDZ_plr_plantSpawner select 3;
	_blacklist set [ count _blacklist, _pos ];
	//diag_log [ __FILE__, _this, _blacklist ];
};

