// Two second loop
private ["_count","_group","_hasGPS","_index","_marker","_markBody","_markGroup","_markSelf","_pos","_self","_vehicle"];

_group = player call dayz_filterGroup;

if (dayz_requireRadio && {count _group > 1} && {!("ItemRadio" in items player)}) exitWith {
	[player] join grpNull;
	_group = [];
	if (!isNull findDisplay 80000) then {findDisplay 80000 closeDisplay 2;};
	localize "STR_EPOCH_RADIO_CONTACT_LOST" call dayz_rollingMessages;
};

if (visibleMap or !isNull findDisplay 88890) then {
	_hasGPS = "ItemGPS" in items player;
	_markBody = (dayz_markBody == 1 or (dayz_markBody == 2 && _hasGPS));
	_markGroup = (dayz_markGroup == 1 or (dayz_markGroup == 2 && _hasGPS));
	_markSelf = (dayz_markSelf == 1 or (dayz_markSelf == 2 && _hasGPS));
	
	_index = 0;
	{
		_self = _x == player;
		_vehicle = vehicle _x;
		if ((_self or _markGroup) && (!_self or _markSelf) && (driver _vehicle == _x)) then {
			_pos = getPosATL _x;
			if (surfaceIsWater _pos) then {_pos = getPosASL _x;};
			deleteMarkerLocal format["groupMember%1",_index];
			_marker = createMarkerLocal [format["groupMember%1",_index],_pos];
			_marker setMarkerTypeLocal "DestroyedVehicle";
			_marker setMarkerTextLocal format ["%1",if (_vehicle == _x) then {name _x} else {_vehicle call dayz_getCrew}];
			_marker setMarkerColorLocal "ColorGreen";
		} else {
			deleteMarkerLocal format["groupMember%1",_index];
		};
		_index = _index + 1;
	} count _group;
	
	// Remove markers for group members that left
	_count = count _group;
	if (dayz_oldMemberCount > _count) then {
		for "_i" from _count to dayz_oldMemberCount do {deleteMarkerLocal format["groupMember%1",_i];};
	};
	dayz_oldMemberCount = _count;
	
	if (_markBody) then {
		{
			if (_x getVariable["bodyName",""] == name player) then {
				deleteMarkerLocal "MyBody";
				_marker = createMarkerLocal ["MyBody",getPosATL _x];
				_marker setMarkerTypeLocal "DestroyedVehicle";
				_marker setMarkerTextLocal localize "STR_EPOCH_RIP";
				_marker setMarkerColorLocal "ColorRed";
			};
		} count allDead;
	} else {
		deleteMarkerLocal "MyBody";
	};
};