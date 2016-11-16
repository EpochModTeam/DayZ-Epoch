private ["_canDo","_iPos","_inVehicle","_item","_onLadder","_pistol","_primary","_removed"];

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
		_iPos = getPosATL player;
		_item = createVehicle ["WeaponHolder", _iPos, [], 1, "CAN_COLLIDE"];
		_item setposATL _iPos;
		if (_primary != "") then {
			_removed = ([player,_primary,1] call BIS_fnc_invRemove);
			if (_removed == 1) then {
				_item addWeaponCargoGlobal [_primary,1];
			};
		};
		if (_pistol != "") then {
			_removed = ([player,_pistol,1] call BIS_fnc_invRemove);
			if (_removed == 1) then {
				_item addWeaponCargoGlobal [_pistol,1];
			};
		};
		if (dayz_onBack != "") then {
			_item addWeaponCargoGlobal [dayz_onBack,1];
			dayz_onBack = ""; // Remove from back
			if (!isNull findDisplay 106) then {findDisplay 106 displayCtrl 1209 ctrlSetText "";};
		};
		player reveal _item;
	};

	// set publicvariable that allows other player to access gear
	player setVariable ["DZE_Surrendered", true, true];
	// surrender animation
	player playMove "AmovPercMstpSsurWnonDnon";
};