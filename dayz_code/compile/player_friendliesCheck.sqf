private["_charID", "_friendlies", "_rcharID", "_rfriendlyTo", "_tag", "_player", "_newTagList"];
_charID = player getVariable ["characterID", "0"];
_friendlies = player getVariable ["friendlies", []];
_tagList = player getVariable ["tagList", []];

// create tags
{ 
	if (isPlayer _x) then { 
		_rcharID = _x getVariable ["characterID", "0"];
		_rfriendlies = _x getVariable ["friendlies", []];
		_rfriendlyTo = _x getVariable ["friendlyTo", []];
		if ((_rcharID in _friendlies) and (_charID in _rfriendlies)) then {
			if (!(_charID in _rfriendlyTo)) then {
				_position = [0,0,0];
				_tag = "Sign_sphere10cm_EP1" createVehicleLocal _position;
				_tag attachTo [_x,[0,0,2]];
				_tag setVariable ["belongsTo", _rcharID];
				_rfriendlyTo set [count _rfriendlyTo, _charID];
				_x setVariable ["friendlyTo", _rfriendlyTo];
				_tagList set [count _tagList, [_x, _tag]];
				player setVariable ["tagList", _tagList];
				titleText [format["You and %1 are now tagged as friendlies.", (name _x)], "PLAIN DOWN"];
			};
		};
	};
} forEach playableUnits;

// keep track of tags created
_newTagList = [];
{
	_player = _x select 0;
	_tag = _x select 1;
	
	// friendly player disconnected
	if (!(isPlayer _player)) then {
		deleteVehicle _tag;
	} else {
		_newTagList set [count _newTagList, [_player, _tag]];
	};
} forEach _tagList;

player setVariable ["tagList", _newTagList];