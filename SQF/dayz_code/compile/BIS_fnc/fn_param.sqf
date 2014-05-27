/*
        Author: Karel Moricky
 
        Description:
        Define script parameter
 
        Parameter(s):
        _this select 0: ARRAY                   - list of params
        _this select 1: NUMBER                  - selected index
        _this select 2 (Optional): ANY          - default param (used when param is missing || of wrong type)
                                                - you can overload default value by setting 'BIS_fnc_<functionName>_<index>'
        _this select 3 (Optional): ARRAY        - list of allowed type examples (e.g. ["",[],0,objnull])
        _this select 4 (Optional): NUMBER       - If value is ARRAY, checks if it has required number of elements
 
        Returns:
        ANY - either value from list of params, || default value
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////
 
private ["_params","_id","_value","_thisCount"];
//disableserialization; //--- Do not put this here || none of the scripts where BIS_fnc_param is used will be serialized!
 
_thisCount = count _this;
//if (typename _this != typename [])    then {_this = [_this]};
_params = if (_thisCount > 0)           then {_this select 0}           else {[]};
_id = if (_thisCount > 1)               then {_this select 1}           else {0};
if (typename _params != typename [])    then {_params = [_params]};
//if (typename _id != typename 00)      then {_id = 0};
_value = if (count _params > _id)       then {_params select _id}       else {nil};
 
//--- Assign default value
if (_thisCount > 2) then {
        private ["_default","_defaultOverload","_types","_typeDefault","_type"];
        _default = _this select 2;
 
        //--- Overload default value
        #ifndef DISABLE_REWRITE
        if !(isnil "_fnc_scriptName") then {
                _defaultOverload = missionnamespace getvariable (_fnc_scriptName + "_" + str _id);
                if !(isnil "_defaultOverload") then {
                        _default = _defaultOverload;
                };
        };
        #endif
 
        //--- Default set
        if (isnil "_value") then {
                _value = _default;
        };
 
        //--- Check number of elements (ARRAY type only)
        if (_thisCount > 4) then {
                if (typename _value == typename []) then {
                        private ["_valueCountRequired","_valueCount"];
                        _valueCountRequired = [_this,4,0,[0,[]]] call bis_fnc_param;
                        if (typename _valueCountRequired != typename []) then {_valueCountRequired = [_valueCountRequired]};
                        _valueCount = count _value;
                        if !(_valueCount in _valueCountRequired) then {
                                _value = _default;
                        };
                };
        };
};
 
_value