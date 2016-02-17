// Load_wounded.sqf
// OCTOBER 2010 - norrin

private ["_wounded","_vcl"];

_wounded 	= _this select 0;

if (!local _wounded) exitWith {};

uiSleep 1;
_vcl = _wounded getVariable "NORRN_loadVcl";
_wounded setVariable ["NORRN_unit_dragged", true, true];

_wounded assignAsCargo _vcl; 
_wounded moveInCargo _vcl;
uiSleep 1;
//["norrnRALW",_wounded] call broadcastRpcCallAll;
	norrnRALW = [_wounded];
	publicVariable "norrnRALW";

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
				uiSleep 0.05;
				_wounded action ["EJECT", _vcl];
				uiSleep 1;
			};
			norrinRAlie = _wounded;
			publicVariable "norrinRAlie";
			_wounded switchMove "ainjppnemstpsnonwrfldnon";
			_wounded setVariable ["NORRN_unit_dragged", false, true];
			uiSleep 1;
		};
	};
	
	if (vehicle _wounded != _wounded && alive _wounded) then
	{	
		_wounded  playMove "BasicDriver";
	};
};
uiSleep 0.01;