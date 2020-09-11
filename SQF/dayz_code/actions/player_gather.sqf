private ["_plant","_originalCount"];

_plant = _this;

if (_plant getVariable["Gathering",false]) exitWith {};
_originalCount = getNumber (configFile >> "CfgVehicles" >> (typeOf _plant) >> "TransportMagazines" >> "_xx_leaf" >> "count");
if !([ [[["equip_comfreyleafs"],[_originalCount]],[[],[]]] , [getMagazineCargo _plant, getWeaponCargo _plant] ] call BIS_fnc_areEqual) then {
	//diag_log [ [getMagazineCargo _plant, getWeaponCargo _plant], "!=", [[["equip_comfreyleafs"],[_originalCount]],[[],[]]] ];
	_plant setVariable["Gathering",true]; // avoid multiple call because the fn_selfActions is called in an infinite loop
	_plant spawn { // in background to be called after fn_selfActions
		private ["_mags","_weps","_item","_magcounts","_wepcounts","_plant"];
		_plant = _this;
		_mags = (getMagazineCargo _plant) select 0;
		_weps = (getWeaponCargo _plant) select 0;
		if (count _mags != 0 OR count _weps != 0) then { // if not empty
			// replace plant to a regular weaponholder
			_item = createVehicle ["WeaponHolder", (getPosATL _plant), [], 0, "CAN_COLLIDE"];
			_magcounts = (getMagazineCargo _plant) select 1;
			{
				_item addMagazineCargoGlobal [_x, _magcounts select _forEachIndex];
			} forEach _mags;
			_wepcounts = (getWeaponCargo _plant) select 1;
			{
				_item addWeaponCargoGlobal [_x, _wepcounts select _forEachIndex];
			} forEach _weps;
		};

		//remove vehicle, Need to ask server to remove.
		PVDZ_obj_Delete = [_plant,player];
		publicVariableServer "PVDZ_obj_Delete";

		deleteVehicle _plant;

		//Make some noise
		[player,(getPosATL player),2,"tentpack"] spawn fnc_alertZombies;
	};
};
