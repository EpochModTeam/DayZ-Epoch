private ["_control","_button","_parent","_group","_pos","_item","_conf","_name","_cfgActions","_numActions","_height","_menu","_config","_type","_script","_outputOriented","_compile","_array","_outputClass","_outputType"];
disableSerialization;
_control = 	_this select 0;
_button =	_this select 1;
_parent = 	findDisplay 106;

//if ((time - dayzClickTime) < 1) exitWith {};
if (!DZE_SelfTransfuse && ((gearSlotData _control) == "ItemBloodBag")) exitWith {};
if (_button == 1) then {
	//dayzClickTime = time;
	_group = _parent displayCtrl 6902;
	
	_pos = 		ctrlPosition _group;
	_pos set [0,((_this select 2) + 0.48)];
	_pos set [1,((_this select 3) + 0.07)];
	
	_item = gearSlotData _control;
	
	_conf = configFile >> "cfgMagazines" >> _item;
	if (!isClass _conf) then {
		_conf = configFile >> "cfgWeapons" >> _item;
	};
	_name = getText(_conf >> "displayName");
	
	_cfgActions = _conf >> "ItemActions";
	_numActions = (count _cfgActions);
	_height = 0;
	
	//Populate Menu
	for "_i" from 0 to (_numActions - 1) do 
	{
		_menu = 	_parent displayCtrl (1600 + _i);
		_menu ctrlShow true;
		_config = 	(_cfgActions select _i);
		_type = 	getText	(_config >> "text");
		_script = 	getText	(_config >> "script");
		_outputOriented = 	getNumber	(_config >> "outputOriented") == 1;
		_height = _height + (0.025 * safezoneH);
		_compile =  format["_id = '%2' %1;",_script,_item];
		uiNamespace setVariable ['uiControl', _control];
		if (_outputOriented) then {
			/*
				This flag means that the action is output oriented
				the output class will then be transferred to the script
				&& the type used for the name
			*/			
			_array = 	getArray	(_config >> "output");
			_outputClass = _array select 0;
			_outputType = _array select 1;
			_name = getText (configFile >> _outputType >> _outputClass >> "displayName");
			_compile =  format["_id = ['%2',%3] %1;",_script,_item,_array];
		};
		
		_menu ctrlSetText format[_type,_name];
		_menu ctrlSetEventHandler ["ButtonClick",_compile];
	};
	_pos set [3,_height];
	//hint format["Obj: %1 \nHeight: %2\nPos: %3",_item,_height,_grpPos];		

	_group ctrlShow true;
	ctrlSetFocus _group;
	_group ctrlSetPosition _pos;
	_group ctrlCommit 0;
};