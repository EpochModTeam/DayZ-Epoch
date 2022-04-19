if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

player removeAction s_player_boil;
player removeAction s_player_cook;
player removeAction s_player_thaw;
a_player_cooking	= true;
//s_player_cook		= -1;

local _wasStanding	= ["perc", animationState player] call fnc_inString;
local _finished		= true;

scopeName "main";
{
	local _meat = _x;
	local _meatcooked = Dayz_meatcooked select (Dayz_meatraw find _meat);

	if (_meat in magazines player) then {
		local _text = getText (configFile >> "CfgMagazines" >> _meat >> "displayName");

		[player, (getPosATL player), 10, "cook"] spawn fnc_alertZombies;
		_finished = ["Medic",1] call fn_loopAction;

		if (!_finished) then {breakTo "main";};

		local _qty = {_x == _meat} count magazines player;

		for "_j" from 1 to _qty do {
			local _removed = [player, _meat] call BIS_fnc_invRemove;
			if (_removed == 0) then {
				_finished = false;
				breakTo "main";
			};
			player addMagazine _meatcooked;
		};
		format [localize "str_success_cooked", _qty, _text] call dayz_rollingMessages;
	};
} forEach Dayz_meatraw;

if (!_finished) then {
	localize "STR_EPOCH_ACTION_CANCELED" call dayz_rollingMessages;
} else {
	if (_wasStanding) then {
		player playActionNow "PlayerStand";	// once the action has completed, return player to a standing pose if they were standing before the action
	};
};

a_player_cooking = false;
dayz_actionInProgress = false;
