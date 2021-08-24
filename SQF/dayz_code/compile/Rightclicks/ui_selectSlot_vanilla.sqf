disableSerialization;
local _control = _this select 0;
local _button = _this select 1;
local _parent = findDisplay 106;

if (carryClick) then {carryClick = false;};

if (_button == 1) then {
	if (animationState player in ["ainjppnemstpsnonwnondnon_rolltofront","amovppnemstpsnonwnondnon_healed"]) exitWith {
		//Prevent bypassing unconscious wake up animation with bandage or other right click actions
		localize "str_player_actionslimit" call dayz_rollingMessages;
	};

	local _group = _parent displayCtrl 6902;
	local _pos = ctrlPosition _group;
	local _item = gearSlotData _control;
	
	if ( //No right click action
		(!DZE_SelfTransfuse && {_item in ["ItemBloodbag","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"]})
	) exitWith {};
	
	if (mouseOverCarry) then {
		_item = DayZ_onBack;
		carryClick = true;
	};

	_pos set [0,((_this select 2) + 0.46)];
	_pos set [1,((_this select 3) + 0.07)];

	local _conf = configFile >> "cfgMagazines" >> _item;
	if (!isClass _conf) then {
		_conf = configFile >> "cfgWeapons" >> _item;
	};
	local _name = getText(_conf >> "displayName");

	local _cfgActions = _conf >> "ItemActions";
	local _numActions = (count _cfgActions);
	local _height = 0;
	if (!dayz_groupSystem && {_item == "ItemRadio"}) then {_numActions = 1;}; // Used to bypass the group action when not enabled.
	
	local _i = 0;
	//Populate Menu
	while {_i <= (_numActions - 1)} do {
		local _menu = _parent displayCtrl (1600 + _i);
		_menu ctrlShow true;
		local _config = (_cfgActions select _i);
		local _type = getText (_config >> "text");
		local _script = getText (_config >> "script");
		local _outputOriented = getNumber (_config >> "outputOriented") == 1;
		_height = _height + (0.025 * safezoneH);
		local _compile = format["_id = '%2' %1;",_script,_item];
		uiNamespace setVariable ['uiControl', _control];
		if (_outputOriented) then {
			/*
				This flag means that the action is output oriented
				the output class will then be transferred to the script
				and the type used for the name
			*/
			local _array = getArray (_config >> "output");
			local _outputClass = _array select 0;
			local _outputType = _array select 1;
			_name = getText (configFile >> _outputType >> _outputClass >> "displayName");
			_compile = format["_id = ['%2',%3] %1;",_script,_item,_array];
		};

		_menu ctrlSetText format[_type,_name];
		_menu ctrlSetEventHandler ["ButtonClick",_compile];
		_i = _i + 1;
	};
	_pos set [3,_height];

	//hint format["Obj: %1 \nHeight: %2\nPos: %3",_item,_height,_grpPos];

	_group ctrlShow true;
	ctrlSetFocus _group;
	_group ctrlSetPosition _pos;
	_group ctrlCommit 0;
};