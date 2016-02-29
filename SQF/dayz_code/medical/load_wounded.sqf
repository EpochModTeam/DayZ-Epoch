// Load_wounded.sqf
// OCTOBER 2010 - norrin

private ["_wounded","_vcl","_group"];

  _wounded = _this select 0;

if (!local _wounded) exitWith {};

r_action = false;

sleep 1;
_vcl = _wounded getVariable "NORRN_loadVcl";
_wounded setVariable ["NORRN_unit_dragged", true, true];

_wounded assignAsCargo _vcl;
_wounded moveInCargo _vcl;
sleep 1;
//["PVDZ_drg_RaLW",_wounded] call broadcastRpcCallAll;
	PVDZ_drg_RaLW = _wounded;
	publicVariable "PVDZ_drg_RaLW";

if (local _wounded) then
{
	waitUntil {!(_wounded getVariable "NORRN_unconscious")|| !alive _wounded || vehicle _wounded == _wounded || (assignedVehicleRole _wounded) select 0 != "Cargo"};

	if (vehicle _wounded == _wounded || (assignedVehicleRole _wounded) select 0 != "Cargo") exitWith
	{
		if (_wounded getVariable "NORRN_AIunconscious") then
		{
			if (vehicle _wounded != _wounded) then
			{
				unassignVehicle _wounded;
				sleep 0.05;
				_wounded action ["EJECT", _vcl];
				sleep 1;
			};
//			PVDZ_drg_RAlie = _wounded; // not used
//			publicVariable "PVDZ_drg_RAlie"; // not used
			_wounded switchMove "ainjppnemstpsnonwrfldnon";
			_wounded setVariable ["NORRN_unit_dragged", false, true];
			sleep 1;
		};
	};

	if (vehicle _wounded != _wounded && alive _wounded) then
	{
		_wounded playMove "BasicDriver";
	};
};
sleep 0.01;
if (true) exitWith {};