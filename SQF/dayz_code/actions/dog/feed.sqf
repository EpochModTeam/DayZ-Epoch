private ["_array","_handle","_type","_onLadder","_removed","_itemIn","_countIn"];
_array = 	_this select 3;
_handle = 	_array select 0;
_type = 	_array select 1;

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

player playActionNow "PutDown";

switch (_type) do {
	case 0: {
		// expanded to allow all meats as input
		_removed = 0;
		_itemIn = "FoodmeatRaw";
		_countIn = 1;
		{					
			if( (_removed < _countIn) && ((_x == _itemIn) || configName(inheritsFrom(configFile >> "cfgMagazines" >> _x)) == _itemIn)) then {
				_removed = _removed + ([player,_x] call BIS_fnc_invRemove);
			};
		} count magazines player;
		if(_removed == _countIn) then {
			_handle setFSMVariable ["_hunger",0];
			player removeAction s_player_feeddog;
			s_player_feeddog = -1;
		};

	};
	case 1: {
		if(([player,"ItemWaterbottle"] call BIS_fnc_invRemove) == 1) then {
			player addMagazine "ItemWaterbottleUnfilled";
		};
		_handle setFSMVariable ["_thirst",0];	
		player removeAction s_player_waterdog;
		s_player_waterdog = -1;
	};
};