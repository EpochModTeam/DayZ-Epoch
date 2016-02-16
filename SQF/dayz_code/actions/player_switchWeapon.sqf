private ["_event", "_onLadder", "_inVehicle", "_isOk", "_primary", "_current", "_rifle", "_pistol", "_melee"];
_event = if (count _this > 1) then { _this select 3 } else { _this select 0 };

_findRifle = {
	private ["_return", "_primary"];
	_return = "";
	_primary = primaryWeapon player;

	if (_primary != "") then {
		if !(_primary in MeleeWeapons) then {
			_return = _primary;
		};
	};

	if (dayz_onBack != "" && _return == "") then {
		if !(dayz_onBack in MeleeWeapons) then {
			_return = dayz_onBack;
		};
	};

	_return;
};

_findMelee = {
	private ["_return", "_primary"];
	_return = "";

	_primary = primaryWeapon player;

	if (_primary != "") then {
		if (_primary in MeleeWeapons) then {
			_return = _primary;
		};
	};

	if (dayz_onBack != "" && _return == "") then {
		if (dayz_onBack in MeleeWeapons) then {
			_return = dayz_onBack;
		};
	};

	_return;
};

_findPistol = {
	private ["_return"];
	_return = "";

	{
		if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 2) then {
			_return = _x;
		};
	} foreach (weapons player);

	_return;
};

_selectMuzzle = {
	private ["_return", "_wpn", "_muzzles"];
	_wpn = _this select 0;
	_muzzles = getArray(configFile >> "cfgWeapons" >> _wpn >> "muzzles");

	if (_muzzles select 0 != "this") then {
		_return = (_muzzles select 0);
	} else {
		_return = _wpn;
	};

	_return;
};

_clearActions = {
	if (s_player_equip_carry > -1) then {
		player removeAction s_player_equip_carry;
		s_player_equip_carry = -1;
	};
};

_switchPrimary = {
	private ["_primary", "_current"];
	_primary = primaryWeapon player;
	_current = currentWeapon player;
	_timer = 0;

	[] call _clearActions;
	if (_primary != "") then {
		// check if player is still in the 'open gear' animation state and force him out of it (caused major issues)
		_animState = animationState player;

		switch (true) do {
			// current weapon is a rifle
			case (_animState == "amovpknlmstpsraswrfldnon_gear" || _animState == "amovpercmstpsraswrfldnon_gear"): {
				player playMove "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon";
				waitUntil { animationState player == "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon" };
			};
			// current weapon is a pistol
			case (_animState == "amovpknlmstpsraswpstdnon_gear" || _animState == "amovpercmstpsraswpstdnon_gear"): {
				player playMove "amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon";
				waitUntil { animationState player == "amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon" };
			};
			// is standing with weapon lowered
			case (["aidlpercmstpslowwrfldnon", _animState] call fnc_inString): {
				player playMove "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon";
				waitUntil { animationState player == "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon" };
			};
		};

		player removeWeapon _primary;

		// make sure animation is playing to prevent instant switch (if current weapon is not pisol)
		if (!dayz_quickSwitch) then {
			if (_current != [] call _findPistol) then {
				_timeout = diag_tickTime + 2;
				_animArray = [
					"amovpercmstpsraswrfldnon_amovpercmstpsnonwnondnon", // is standing, has no pistol / is crouched, has no pistol
					"amovpercmstpsraswrfldnon_amovpercmstpsraswpstdnon", // is standing, has pistol
					"amovpknlmstpsraswrfldnon_amovpknlmstpsraswpstdnon", // is crouched, has pistol
					"amovppnemstpsraswrfldnon_amovppnemstpsnonwnondnon", // is prone, has no pistol
					"amovppnemstpsraswrfldnon_amovppnemstpsraswpstdnon" // is prone, has pistol
				];

				waitUntil { (animationState player) in _animArray || diag_tickTime >= _timeout };
				waitUntil { !((animationState player) in _animArray) || diag_tickTime >= _timeout };
			};
		};
	};
	
	if (dayz_onBack != "") then {
		player addWeapon dayz_onBack;
		player selectWeapon ([dayz_onBack] call _selectMuzzle);
	};

	dayz_onBack = _primary;

	call dayz_meleeMagazineCheck;
};

_switchPrimaryUI = {
	private ["_primary", "_current"];
	_primary = primaryWeapon player;
	_current = currentWeapon player;

	[] call _clearActions;

	if (_primary != "") then {
		player removeWeapon _primary;
	};

	if (dayz_onBack != "") then {
		player addWeapon dayz_onBack;

		if (_primary == _current) then {
			player selectWeapon ([dayz_onBack] call _selectMuzzle);
		};
	};

	dayz_onBack = _primary;

	[[(findDisplay 106)],"onLBSelChanged"] execVM "\z\addons\dayz_code\system\handleGear.sqf"; // update gear dialog
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_inVehicle = (vehicle player != player);
_isOK = (!_onLadder && !_inVehicle && !r_player_unconscious && !dayz_onBackActive);

if (_isOK) then { dayz_onBackActive = true };

switch (_event) do {
	case "action": {
		if (_isOK) then {
			[] call _switchPrimary;
		};
	};
	case "gear": {
		[] call _switchPrimaryUI;
	};
	case "rifle": {
		if (_isOK) then {
			_rifle = [] call _findRifle;

			if (_rifle != "") then {
				if (_rifle == dayz_onBack) then {
					[] call _switchPrimary;
				} else {
					player selectWeapon ([_rifle] call _selectMuzzle);
				};
			};
		};
	};
	case "pistol": {
		if (_isOK) then {
			_pistol = [] call _findPistol;

			if (_pistol != "") then {
				player selectWeapon ([_pistol] call _selectMuzzle);
			};
		};
	};
	case "melee": {
		if (_isOK) then {
			_melee = [] call _findMelee;

			if (_melee != "") then {
				if (_melee == dayz_onBack) then {
					[] call _switchPrimary;
				} else {
					player selectWeapon ([_melee] call _selectMuzzle);
				};
			};
		};
	};
};

if (_isOK) then { dayz_onBackActive = false };
