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
	,"_isTargetFriend"				// return value
	,"_isTargetAdmin"				// return value
	,"_targetType"					// return value
	,"_targetOwnerUID"				// UID of the owner of _target
	,"_playerUID"					// UID of the _player
	,"_plotcheck"					// takes return value of FNC_find_plots
	,"_isNearPlot"					// player is in plot's reach
	,"_nearestPlot"					// plot object
	,"_plotOwnerUID"				// plot owner's UID
	,"_plotFriends"					// list of plot friends [["UID", "Name"], ..]
	,"_targetFriends"				// list of target friends [["UID", "Name"], ..]
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
_isTargetFriend = false;
_isTargetAdmin = false;
_targetType = "";


// determine target type
_targetType = if(typeOf _target in DZE_DoorsLocked) then { "DOOR"; } else { "GENERIC"; };


// determine owner and player id
// and check if player is owner of target object
if(DZE_permanentPlot) then {
	_targetOwnerUID = _target getVariable ["ownerPUID","0"];
	_playerUID = [_player] call FNC_GetPlayerUID;
} else {
	_targetOwnerUID = _target getVariable ["characterID","0"];
	_playerUID = dayz_characterID;
};
_isOwner = (_playerUID == _targetOwnerUID);


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
	} else {
		_plotOwnerUID = _target getVariable ["characterID","0"];
	};
	_isPlotOwner = (_playerUID == _plotOwnerUID);
	
	
	// determine plot friends
	// and check if player is one of them
	_isPlotFriend = (_playerUID == _plotOwnerUID);  // Plot owner is always a plot friend
	_plotFriends = _nearestPlot getVariable ["plotfriends", []];
	{
		if( (_x select 0) == _playerUID ) then { _isPlotFriend = true; };
	} count _plotFriends;
	
	
	// determine plot management admins
	// and check if player is one of them
	{
		if( _x == _playerUID ) then { _isPlotAdmin = true; };
	} count DZE_PlotManagementAdmins;
};


// Process target type DOOR
if(_targetType == "DOOR") then {
	// determine door friends
	// and check if player is one of them
	_isTargetFriend = (_playerUID == _targetOwnerUID);  // Door owner is always a door friend
	_targetFriends = _target getVariable ["doorfriends",[]];
	{
		if( (_x select 0) == _playerUID ) then { _isTargetFriend = true; };
	} count _targetFriends;
	
	
	// determine door management admins
	// and check if player is one of them
	{
		if( _x == _playerUID ) then { _isTargetAdmin = true; };
	} count DZE_DoorManagementAdmins;
};


// RESULT
[ _isOwner
, _isFriendly
, _isPlotOwner
, _isPlotFriend
, _isPlotAdmin
, _isTargetFriend
, _isTargetAdmin
, _targetType
]
