private ["_canDo","_inVehicle","_onLadder","_pistol","_primary","_removed"];

_inVehicle = (vehicle player != player);
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf && !r_player_unconscious && !_onLadder && !_inVehicle);

if (_canDo && !DZE_Surrender && !(player isKindOf  "PZombie_VB")) then {
	DZE_Surrender = true;

	_primary = primaryWeapon player;
	_pistol = "";
	{
		if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 2) exitWith {
			_pistol = _x;
		};
	} count (weapons player);

	if (_primary != "" or _pistol != "" or dayz_onBack != "") then {
		player playActionNow "PutDown";
		if (_primary != "") then {
			_removed = ([player,_primary,1] call BIS_fnc_invRemove);
			if (_removed == 1) then {
				[_primary,2,1] call fn_dropItem;
			};
		};
		if (_pistol != "") then {
			_removed = ([player,_pistol,1] call BIS_fnc_invRemove);
			if (_removed == 1) then {
				[_pistol,2,1] call fn_dropItem;
			};
		};
		if (dayz_onBack != "") then {
			[dayz_onBack,2,1] call fn_dropItem;
			dayz_onBack = ""; // Remove from back
			if (!isNull findDisplay 106) then {findDisplay 106 displayCtrl 1209 ctrlSetText "";};
		};
		call player_forceSave;
	};

	// set publicvariable that allows other player to access gear
	player setVariable ["DZE_Surrendered", true, true];
	// surrender animation
	player playMove "AmovPercMstpSsurWnonDnon";
};