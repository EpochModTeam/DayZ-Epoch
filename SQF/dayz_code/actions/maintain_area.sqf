/*

Examples for config variable DZE_maintainCurrencyRate:

Now that we have gem based currency, maintaining is priced via a "worth".

If you want the price per item to be 1 gold, DZE_maintainCurrencyRate needs to be 100.
600 items * 100 would be worth 6 briefcases or 60k coins on a single currency server.
600 items * 150 would be worth 9 briefcases or 90k coins on a single currency server.

1 10oz silver = 10 worth
1 gold = 100 worth
1 10oz gold = 1,000 worth
1 briefcase = 10,000 worth

Please see configVariables.sqf for the value of gems (DZE_GemWorthArray) and their relevant worth.

*/

if (dayz_actionInProgress) exitWith {localize "STR_EPOCH_ACTIONS_2" call dayz_rollingMessages;};
dayz_actionInProgress = true;

private ["_maintain","_req","_objectID","_objectUID","_target","_objects","_requirements","_count","_objects_filtered","_message1","_message2","_option","_line1","_line2","_plotDialog"];

player removeAction s_player_maintain_area;
s_player_maintain_area = 1;
player removeAction s_player_maintain_area_force;
s_player_maintain_area_force = 1;
player removeAction s_player_maintain_area_preview;
s_player_maintain_area_preview = 1;

_target = (([player] call FNC_getPos) nearEntities ["Plastic_Pole_EP1_DZ",15]) select 0;
_objects = nearestObjects [_target, DZE_maintainClasses, DZE_maintainRange];

_objects_filtered = [];
_requirements = [];
_count = 0;

_req = {
	private ["_count","_amount","_itemText"];

	_count = _this;
	_amount = _count * DZE_maintainCurrencyRate;
	_itemText = if (Z_SingleCurrency) then { CurrencyName } else { [_amount,true] call z_calcCurrency };

	[_amount,_itemText]
};

_maintain = {
	private ["_requirements","_count","_amount","_itemText","_wealth","_success","_message1","_message2","_enoughMoney","_moneyInfo","_finished"];

	_count = count (_this select 0);
	_requirements = _count call _req;

	_amount = _requirements select 0;
	_itemText = _requirements select 1;

	_enoughMoney = false;
	_moneyInfo = [false, [], [], [], 0];
	_wealth = player getVariable[(["cashMoney","globalMoney"] select Z_persistentMoney),0];

	if (Z_SingleCurrency) then {
		_enoughMoney = (_wealth >= _amount);
	} else {
		Z_Selling = false; // Initialize gem currency before Z_canAfford.
		_moneyInfo = _amount call Z_canAfford;
		_enoughMoney = _moneyInfo select 0;
	};

	_success = if (Z_SingleCurrency) then { true } else { [player,_amount,_moneyInfo,true,0] call Z_payDefault };

	if (!_success && _enoughMoney) exitWith { systemChat localize "STR_EPOCH_TRADE_GEAR_AND_BAG_FULL"; }; // Not enough room in gear or bag to accept change

	if (_enoughMoney) then {

		closeDialog 1;
		[player,(getPosATL player),DZE_maintainRange,"repair"] spawn fnc_alertZombies;

		_finished = ["Medic",1] call fn_loopAction;
		if !(_finished) exitWith {};

		_success = if (Z_SingleCurrency) then {_amount <= _wealth} else {[player,_amount,_moneyInfo,false,0] call Z_payDefault};
		if (_success) then {
			["Working",0,[100,15,10,0]] call dayz_NutritionSystem;

			PVDZE_maintainArea = [player,1,_this select 0];
			publicVariableServer "PVDZE_maintainArea";

			if (Z_SingleCurrency) then {
				player setVariable[(["cashMoney","globalMoney"] select Z_persistentMoney),(_wealth - _amount),true];
				_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS",_count,[_amount] call BIS_fnc_numberText,_itemText];
			} else {
				_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_SUCCESS",_count,_itemText,""];
			};

			call player_forceSave;
			_message1 call dayz_rollingMessages;
			systemChat _message1;
		} else {
			systemChat localize "STR_EPOCH_TRADE_DEBUG";
		};
	} else {
		if (Z_SingleCurrency) then {
			_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED",_count,[_amount] call BIS_fnc_numberText,_itemText];
		} else {
			_message1 = format[localize "STR_EPOCH_PLOTMANAGEMENT_OBJECTS_MAINTAINED_FAILED",_count,_itemText,""];
		};

		if (DZE_permanentPlot) then {
			disableSerialization;

			_plotDialog = findDisplay 711194;
			_line1 = _plotDialog displayCtrl 7012;
			_line2 = _plotDialog displayCtrl 7013;
			_message2 = " ";
			_line1 ctrlSetText _message1;
			_line2 ctrlSetText _message2;
		} else {
			_message1 call dayz_rollingMessages;
		};
	};
};

{
	if (damage _x >= DZE_DamageBeforeMaint) then {
		_objectUID = _x getVariable ["ObjectUID","0"];
		_objectID = _x getVariable ["ObjectID","0"];
		_objects_filtered set [count _objects_filtered, [_x, _objectID, _objectUID]];
		_count = _count + 1;
	};
} count _objects;

_option = if (typeName _this == "ARRAY") then {_this select 3} else {_this};

call {
	if (_option == "maintain") exitwith {
		if (_count != 0) then {
			[_objects_filtered] call _maintain;
		} else {
			systemChat localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE";
		};
	};
	if (_option == "force") exitwith {
		_count = 0;
		_objects_filtered = [];
		{
			_objectUID = _x getVariable ["ObjectUID","0"];
			_objectID = _x getVariable ["ObjectID","0"];
			_objects_filtered set [count _objects_filtered, [_x, _objectID, _objectUID]];
			_count = _count + 1;
		} count _objects;

		[_objects_filtered] call _maintain;
	};
	if (_option == "preview") exitwith {
		disableSerialization;

		_plotDialog = findDisplay 711194;
		_line1 = _plotDialog displayCtrl 7012;
		_line2 = _plotDialog displayCtrl 7013;

		if (_count == 0) then {
			_message1 = localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_NONE";
			if (DZE_permanentPlot) then {
				_line1 ctrlSetText _message1;
			} else {
				_message1 call dayz_rollingMessages;
			};
		} else {
			_requirements = _count call _req;

			if (Z_SingleCurrency) then {
				_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", _count,[_requirements select 0] call BIS_fnc_numberText,_requirements select 1];
			} else {
				_message1 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_PRICE", _count,_requirements select 1,""];
			};
			if (DZE_permanentPlot) then {
				_line1 ctrlSetText _message1;
			} else {
				_message1 call dayz_rollingMessages;
			};
		};
		_requirements = count _objects call _req;
		if (Z_SingleCurrency) then {
			_message2 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_FORCE",count _objects,[_requirements select 0] call BIS_fnc_numberText,_requirements select 1];
		} else {
			_message2 = format [localize "STR_EPOCH_PLOTMANAGEMENT_MAINTAIN_FORCE",count _objects,_requirements select 1,""];
		};
		if (_count != count _objects) then {
			if (DZE_permanentPlot) then {
				_line2 ctrlSetText _message2;
			} else {
				_message2 call dayz_rollingMessages;
			};
		};
	};
};

dayz_actionInProgress = false;
