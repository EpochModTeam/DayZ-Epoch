/* 
	Check object's ownership and friends (plot and door)
	Original concept by RimBlock (github.com/RimBlock)

	Extended by Bruce-LXXVI to support different target objects
	and allow fine grained access policies
	
	Parameters: 
	_this select 0: object - player calling this function
	_this select 1: object - target to check ownership and friendlies of
	
	Returns:
	_return select 0: bool - player is owner of target object
	_return select 1: bool - player is friends with owner of target object
	_return select 2: bool - player is plot owner
	_return select 3: bool - player is plot friend
	_return select 4: bool - player is plot management admin
	_return select 5: bool - player is target friend
	_return select 6: bool - player is target management admin
	_return select 7: string - detected target type
	

	2,3,4: always false if no plot nearby
	5,6: always false if _target is not a supported target
*/

private [
	 "_player"						// Player, who wants to access the _target
	,"_target"						// The target object the _player wants to access
	,"_isOwner"						// return value
	,"_isFriendly"					// return value
	,"_isPlotOwner"					// return value
	,"_isPlotFriend"				// return value
	,"_isPlotAdmin"					// return value
	,"_isDoorFriend"				// return value - Only applicable if target is a door
	,"_isDoorAdmin"				    // return value - Only applicable if target is a door
	,"_targetType"					// return value
	,"_targetOwnerUID"				// UID or characterID of the owner of _target
	,"_playerUID"					// UID of the _player
	,"_characterID"					// characterID of the _player
	,"_plotcheck"					// takes return value of FNC_find_plots
	,"_isNearPlot"					// player is in plot's reach
	,"_nearestPlot"					// plot object
	,"_plotOwnerUID"				// plot owner's UID
	,"_plotFriends"					// list of plot friends [["UID", "Name"], ..]
	,"_doorFriends"					// list of door friends [["UID", "Name"], ..]
];


// assign parameters
_player = _this select 0;
_target = _this select 1;

// Initialize return values
_isOwner = false;
_isFriendly = false;
_isPlotOwner = false;
_isPlotFriend = false;
_isPlotAdmin = false;
_isDoorFriend = false;
_isDoorAdmin = false;
_targetType = "";


// determine target type
_targetType = if(typeOf _target in DZE_DoorsLocked) then { "DOOR"; } else { "GENERIC"; };


// determine owner and player id
// and check if player is owner of target object
_playerUID = getPlayerUID _player;
_characterID = dayz_characterID;
if (DZE_permanentPlot) then {
	_targetOwnerUID = if (isPlayer _target) then { getPlayerUID _target } else { _target getVariable ["ownerPUID","0"] };
	_isOwner = (_playerUID == _targetOwnerUID);
} else {
	_targetOwnerUID = _target getVariable ["characterID","0"];
	_isOwner = (_characterID == _targetOwnerUID);
};


// determine _players friends (tagged)
// and check if owner of _target is tagged friendly
_friendlies	= _player getVariable ["friendlyTo",[]];
_isFriendly = (_targetOwnerUID in _friendlies);


// find nearest plot
_plotcheck = [_player, false] call FNC_find_plots;
_isNearPlot = ((_plotcheck select 1) > 0);
_nearestPlot = _plotcheck select 2;
if(_isNearPlot) then {
	// determine plot owner
	// and check if player is owner of plot
	if (DZE_permanentPlot) then {
		_plotOwnerUID = _nearestPlot getVariable ["ownerPUID","0"];
		_isPlotOwner = (_playerUID == _plotOwnerUID);
	} else {
		_plotOwnerUID = _nearestPlot getVariable ["characterID","0"];
		_isPlotOwner = (_characterID == _plotOwnerUID);
	};
	
	
	// determine plot friends
	// and check if player is one of them
	_isPlotFriend = _isPlotOwner;  // Plot owner is always a plot friend
	_plotFriends = _nearestPlot getVariable ["plotfriends", []];
	{
		if( (_x select 0) == _playerUID ) then { _isPlotFriend = true; };
	} count _plotFriends;
	
	
	// determine plot management admins
	// and check if player is one of them
	if(_playerUID in DZE_PlotManagementAdmins) then { _isPlotAdmin = true; };
};


// Process target type DOOR
if(_targetType == "DOOR") then {
	// determine door friends
	// and check if player is one of them
	_isDoorFriend = _isOwner;  // Door owner is always a door friend
	_doorFriends = _target getVariable ["doorfriends",[]];
	{
		if( (_x select 0) == _playerUID ) then { _isDoorFriend = true; };
	} count _doorFriends;
	
	
	// determine door management admins
	// and check if player is one of them
	if(_playerUID in DZE_DoorManagementAdmins) then { _isDoorAdmin = true; };
};


// RESULT
[ _isOwner
, _isFriendly
, _isPlotOwner
, _isPlotFriend
, _isPlotAdmin
, _isDoorFriend
, _isDoorAdmin
, _targetType
]
