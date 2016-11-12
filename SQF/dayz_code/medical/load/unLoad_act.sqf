// unLoad_act.sqf
// AUGUST 2010 - norrin

private ["_args","_dragger","_vcl","_wounded"];

_args = _this select 3;
_name = _args select 0;
_vcl = _args select 1;
_crewVcl = crew _vcl;
LHA_Deck = [];
LHA_height = 0;

//_name removeAction NORRN_pullOutAction; // NORRN_pullOutAction is defined anywhere

for [{ _loop = 0 },{ _loop < count _crewVcl },{ _loop = _loop + 1}] do
{
	_unit = _crewVcl select _loop;

	if (_unit getVariable "NORRN_unconscious") then
	{
		unassignVehicle _unit;
		uiSleep 0.05;
		_unit action ["EJECT", _vcl];
		uiSleep 1;
		_position = getPosATL _unit;
		_isOnDeck = getPosASL _unit in LHA_Deck;
		if (_isOnDeck) then {
			_unit setPosAsl [(_position select 0), (_position select 1), (LHA_height+1)];
		};
		_unit switchMove "";
		_unit switchMove "ainjppnemstpsnonwrfldnon";
		uiSleep 0.2;
		//Needed or else patient user input is not fully disabled after eject
		PVDZ_drg_RaDrag = [_unit];
		publicVariable "PVDZ_drg_RaDrag";
	};
	uiSleep 0.1;
};

if (true) exitWith {};
