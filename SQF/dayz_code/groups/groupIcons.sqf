// OnEachFrame loop
private ["_display","_distance","_group","_icon","_index","_pos","_scale","_screen","_text"];

_group = player call dayz_filterGroup;
if (!visibleMap && count _group > 1 && cameraView in ["INTERNAL","EXTERNAL","GUNNER"]) then {
	80000 cutRsc ["DZ_GroupIcons","PLAIN"];
	
	_display = uiNamespace getVariable "DZ_GroupIcons";
	_index = 0;
	{
		_pos = getPosATL _x;
		if (surfaceIsWater _pos) then {_pos = getPosASL _x;};
		_distance = _pos distance player;
		_icon = _display displayCtrl (100 + _index);
		if (_distance > 1 && _distance < 2500) then {
			_pos set [2,(_pos select 2) + 1.5];
			_screen = worldToScreen _pos;
			_text = composeText [image "\ca\ui\data\igui_side_unknown_ca.paa"," ",if (dayz_groupNameTags) then {name _x} else {""}];
			if (count _screen > 1) then {
				_scale = if (_distance < 200) then {.3} else {1 min ((1 - (_distance - 3) / 15) max .3)};	
				_icon ctrlSetStructuredText _text;
				_icon ctrlSetPosition [(_screen select 0),(_screen select 1),.99,.65];
				_icon ctrlSetScale _scale;
				_icon ctrlSetFade ((1 - _scale) / 2);
				_icon ctrlCommit 0;
				_icon ctrlShow true;
			} else {
				_icon ctrlShow false;
			};
		} else {
			_icon ctrlShow false;		
		};
		_index = _index + 1;
	} count _group;
	
	if (dayz_oldGroupCount > count _group) then {
		_display displayCtrl (100 + _index) ctrlShow false;
	};
	
	dayz_oldGroupCount = count _group;
} else {
	if (!isNull (uiNamespace getVariable "DZ_GroupIcons")) then {
		80000 cutText ["","PLAIN"];
	};
};