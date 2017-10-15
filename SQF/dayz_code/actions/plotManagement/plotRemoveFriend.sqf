private ["_pos","_plots","_thePlot","_friends","_toRemove","_newList","_hasPole"];

_pos = _this select 0;
if (_pos < 0) exitWith {};
_plots = ([player] call FNC_getPos) nearEntities ["Plastic_Pole_EP1_DZ",15];
_thePlot = _plots select 0;
_friends = _thePlot getVariable ["plotfriends", []];
_toRemove = (_friends select _pos);
_hasPole = false;
_newList = [];

if ((_toRemove select 0) == ((_friends select 0) select 0) && (!(dayz_playerUID in DZE_PlotManagementAdmins) && !(dayz_playerUID == ((_friends select 0) select 0)))) exitWith {systemChat localize "STR_EPOCH_PLOTMANAGEMENT_CANT_REMOVE";};

if (DZE_limitPlots && {!(dayz_playerUID in DZE_PlotManagementAdmins)}) then {
	{
		if (_x getVariable["ownerPUID","0"] == dayz_playerUID || (_x getVariable["CharacterID","0"] == dayz_characterID) || ((((_x getVariable ["plotfriends",[]]) select 0) select 0) == dayz_playerUID) && (_x != _thePlot)) exitWith {
			_hasPole = true;
		};
	} count (entities "Plastic_Pole_EP1_DZ");
};

if (_hasPole) exitWith {systemChat localize "STR_EPOCH_PLAYER_133";};

{
	if (_x select 0 != _toRemove select 0) then {
		_newList set [(count _newList), _x];
	};
} count _friends;
_thePlot setVariable ["plotfriends", _newList, true];

PVDZ_veh_Save = [_thePlot,"gear"];
publicVariableServer "PVDZ_veh_Save";

call PlotGetFriends;
call PlotNearbyHumans;
