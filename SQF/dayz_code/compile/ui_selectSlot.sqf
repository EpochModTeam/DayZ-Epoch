//private ["_control","_button","_parent","_group","_pos","_item","_conf","_name","_cfgActions","_numActions","_height","_menu","_config","_type","_script","_outputOriented","_compile","_array","_outputClass","_outputType"];
disableSerialization;
_control = _this select 0;
_button = _this select 1;
_parent = findDisplay 106;

if (carryClick) then {carryClick = false;};

if (_button == 1) then {
	if (animationState player in ["ainjppnemstpsnonwnondnon_rolltofront","amovppnemstpsnonwnondnon_healed"]) exitWith {
		//Prevent bypassing unconscious wake up animation with bandage or other right click actions
		localize "str_player_actionslimit" call dayz_rollingMessages;
	};

	private ["_conf","_name","_compile","_height","_item","_isKey"];
	_group = _parent displayCtrl 6902;

	_pos = ctrlPosition _group;

	_item = gearSlotData _control;
	if ( //No right click action
		(!DZE_SelfTransfuse && {_item in ["ItemBloodbag","wholeBloodBagANEG","wholeBloodBagAPOS","wholeBloodBagBNEG","wholeBloodBagBPOS","wholeBloodBagABNEG","wholeBloodBagABPOS","wholeBloodBagONEG","wholeBloodBagOPOS"]})
	) exitWith {};
	
	if (mouseOverCarry) then {
		_item = DayZ_onBack;
		carryClick = true;
	};

	_pos set [0,((_this select 2) + 0.46)];
	_pos set [1,((_this select 3) + 0.07)];

	_conf = configFile >> "cfgMagazines" >> _item;
	if (!isClass _conf) then {
		_conf = configFile >> "cfgWeapons" >> _item;
	};
	_name = getText(_conf >> "displayName");

	_cfgActions = _conf >> "ItemActions";
	_numActions = (count _cfgActions);
	_height = 0;
	if (!dayz_groupSystem && {_item == "ItemRadio"}) then {_numActions = 1;}; // Used to bypass the group action when not enabled.
	
	//Populate Menu
	for "_i" from 0 to (_numActions - 1) do
	{
		_menu = _parent displayCtrl (1600 + _i);
		_menu ctrlShow true;
		_config = (_cfgActions select _i);
		_type = getText (_config >> "text");
		_script = getText (_config >> "script");
		_outputOriented = getNumber (_config >> "outputOriented") == 1;
		_height = _height + (0.025 * safezoneH);
		_compile = format["_id = '%2' %1;",_script,_item];
		uiNamespace setVariable ['uiControl', _control];
		if (_outputOriented) then {
			/*
				This flag means that the action is output oriented
				the output class will then be transferred to the script
				and the type used for the name
			*/
			_array = getArray (_config >> "output");
			_outputClass = _array select 0;
			_outputType = _array select 1;
			_name = getText (configFile >> _outputType >> _outputClass >> "displayName");
			_compile = format["_id = ['%2',%3] %1;",_script,_item,_array];
		};

		_menu ctrlSetText format[_type,_name];
		_menu ctrlSetEventHandler ["ButtonClick",_compile];
	};

	_isKey = ((["ItemKey",_item] call fnc_inString) && (_item != "ItemKeyKit"));

	{
		private["_classname","_text","_execute","_condition","_option"];
		_classname   = _x select 0;
		_text        = _x select 1;
		_execute     = _x select 2;
		_condition   = _x select 3;
		if (count _this > 4) then {_option = _x select 4};

		// if the clicked item matches, then assign the script call and display text
		if ((_item == _classname || (_isKey && (_className == "ItemKey"))) && (call compile _condition)) then {
			_menu = _parent displayCtrl (1600 + _numActions);
			_menu ctrlShow true;
			_height = _height + (0.025 * safezoneH);
			uiNamespace setVariable ['uiControl', _control];
			_menu ctrlSetText _text;
			if (_isKey && (_className == "ItemKey")) then {
				_menu ctrlSetEventHandler ["ButtonClick",format ["[%1,%2] %3",str _item,_option,_execute]];
			} else {
				_menu ctrlSetEventHandler ["ButtonClick",_execute];
			};
			_numActions = _numActions + 1;
		};
	} forEach DZE_CLICK_ACTIONS;

	_pos set [3,_height];

	//hint format["Obj: %1 \nHeight: %2\nPos: %3",_item,_height,_grpPos];

	_group ctrlShow true;
	ctrlSetFocus _group;
	_group ctrlSetPosition _pos;
	_group ctrlCommit 0;
};
