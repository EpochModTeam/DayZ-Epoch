private["_unitArray","_handle"];
_unitArray = [];
if (isSinglePlayer) then {
	_unitArray = [player];
} else {
	_unitArray = dayz_players;
};
{
	if (!isNull _x) then {
		//diag_log ("SERVER: Routine Player Check: " + str(_x));
		_handle = _x spawn server_updatePlayer;
		waitUntil{scriptDone _handle};
	};
} forEach _unitArray;