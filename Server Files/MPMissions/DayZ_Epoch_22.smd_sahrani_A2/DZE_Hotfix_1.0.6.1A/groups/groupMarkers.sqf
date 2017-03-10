private ["_bodyCount","_count","_group","_hasGPS","_index","_inGroup","_marker","_markBody","_markGroup","_markSelf","_name","_pos","_self","_vehicle"];

while {true} do {
	_group = player call dayz_filterGroup;
	_inGroup = count _group > 1;

	if (dayz_requireRadio && {_inGroup} && {!("ItemRadio" in items player)}) then {
		[player] joinSilent grpNull;
		if (!isNull findDisplay 80000) then {findDisplay 80000 closeDisplay 2;};
		terminate dayz_groupTags;
		80000 cutText ["","PLAIN"];
		localize "STR_EPOCH_LOST_RADIO_CONTACT" call dayz_rollingMessages;
	} else {
		if (_inGroup && scriptDone dayz_groupTags) then {
			dayz_groupTags = execVM "DZE_Hotfix_1.0.6.1A\groups\groupTags.sqf";
		};
		
		if (visibleMap or !isNull (uiNamespace getVariable["BIS_RscMiniMap",displayNull])) then {
			_hasGPS = "ItemGPS" in items player;
			_markBody = (dayz_markBody == 1 or (dayz_markBody == 2 && _hasGPS));
			_markGroup = (dayz_markGroup == 1 or (dayz_markGroup == 2 && _hasGPS));
			_markSelf = (dayz_markSelf == 1 or (dayz_markSelf == 2 && _hasGPS));
			
			_index = 0;
			{
				_self = _x == player;
				_vehicle = vehicle _x;
				if ((_self or _markGroup) && (!_self or _markSelf) && (effectiveCommander _vehicle == _x)) then {
					_pos = [_x] call FNC_GetPos;
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
				_bodyCount = 0;
				_name = name player;
				{
					if (_x getVariable["bodyName",""] == _name) then {
						_bodyCount = _bodyCount + 1;
						_pos = [_x] call FNC_GetPos;
						deleteMarkerLocal format["MyBody%1",_bodyCount];
						_marker = createMarkerLocal [format["MyBody%1",_bodyCount],_pos];
						_marker setMarkerTypeLocal "DestroyedVehicle";
						_marker setMarkerTextLocal localize "STR_EPOCH_RIP";
						_marker setMarkerColorLocal "ColorRed";
					};
				} count allDead;
				
				// Remove markers for bodies that were deleted
				if (dayz_oldBodyCount > _bodyCount) then {
					for "_i" from _bodyCount to dayz_oldBodyCount do {deleteMarkerLocal format["MyBody%1",_i];};
				};
				dayz_oldBodyCount = _bodyCount;
			} else {
				for "_i" from 1 to dayz_oldBodyCount do {deleteMarkerLocal format["MyBody%1",_i];};
			};
		};
	};
	
	uiSleep 1;
};