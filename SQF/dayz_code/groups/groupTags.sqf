#define DRAW_TAGS (!visibleMap && {count units group player > 1}) //Use && cameraView != "GROUP" if tactical view is allowed (blocked by default)
disableSerialization;
local _refresh = {
	local _group	= player call dayz_filterGroup;
	local _display	= uiNamespace getVariable "DZ_GroupTags";
	local _index	= 0;
	{
		local _pos = vehicle _x modelToWorld [0,0,0];	// AGL

		local _distance = _pos distance player;
		local _icon = _display displayCtrl (100 + _index);

		if (_distance > 1 && {_distance < 2500} && {vehicle _x != vehicle player}) then {
			_pos set [2, (_pos select 2) + 1.5];
			local _screen = worldToScreen _pos;	// AGL
			local _text = composeText [image "\ca\ui\data\igui_side_unknown_ca.paa"," ",if (dayz_groupNameTags) then {name _x} else {""}];

			if (count _screen > 0) then {
				local _scale = [1 min ((1 - (_distance - 3) / 15) max .3),.3] select (_distance < 200);
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
};

while {true} do {
	waitUntil {uiSleep 1; DRAW_TAGS};
	8 cutRsc ["DZ_GroupTags","PLAIN"];

	while {DRAW_TAGS} do {
		call _refresh; //Must be called to finish in current frame
		uiSleep 0.01;
	};

	8 cutText ["","PLAIN"];
};
