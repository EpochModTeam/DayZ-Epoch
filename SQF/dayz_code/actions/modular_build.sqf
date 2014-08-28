//Check if building already in progress, exit if so.
if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_40") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

private ["_itemConfig","_classname","_classnametmp","_require","_text","_ghost","_lockable","_requireplot","_isAllowedUnderGround","_offset","_isPole","_isLandFireDZ","_hasRequired","_hasrequireditem","_reason","_buildObject","_location1","_object","_objectHelper","_position","_controls","_cancel","_dir"];

/*Basic Defines*/
DZE_Q = false;
DZE_Z = false;

DZE_Q_alt = false;
DZE_Z_alt = false;

DZE_Q_ctrl = false;
DZE_Z_ctrl = false;

DZE_5 = false;
DZE_4 = false;
DZE_6 = false;

DZE_F = false;

DZE_cancelBuilding = false;

call gear_ui_init;
closeDialog 1;

DZE_buildItem = _this; //This is a magazine! It's global to allow access to it from outside functions

//count nearby objects. Returns [_cnt] number
[] call player_build_countNearby;

//Check illegal player states. Returns [_isFine] string
[] call player_build_states;

//check for nearby requirements (campfire, workshop, fueltank).
[] call player_build_needNearby;

//check config files and gather info about item (if using custom buildables, make your own similar function instead).
_itemConfig = [] call player_build_getConfig;

//define items collected from function
_classname = _itemConfig select 0; //string
_classnametmp = _itemConfig select 1; //string
_require = _itemConfig select 2; // array
_text = _itemConfig select 3; // string
_ghost = _itemConfig select 4; //string
_lockable = _itemConfig select 5; //int -- 0/1=No 2=lockbox, 3=combolock, 4=safe
_requireplot = _itemConfig select 6; //int
_isAllowedUnderGround = _itemConfig select 7; //int
_offset = _itemConfig select 8; //array
_isPole = _itemConfig select 9; //bool
_isLandFireDZ = _itemConfig select 10; //bool

//Check for nearby plotpoles. Returns [_IsNearPlot,_nearestPole,_ownerID,_friendlies] [int,Obj,int,array]
[_isPole, _requireplot, _isLandFireDZ] call player_build_plotCheck;

if (DZE_ActionInProgress) then { //needed otherwise _hasRequired gets RPT error

//Check for build requirements (missing tools and items). Returns [_hasrequireditem,_reason] [bool,string]
_hasRequired = [_require, _text, true, true] call player_build_buildReq;

//define item collected from function
_hasrequireditem = _hasRequired select 0; //bool

	if (_hasrequireditem) then {
		
		//Create object that is attached to a player (i.e Ghost preview if available)
		_buildObject = [_classname, _ghost, _offset, true] call player_build_create;
		
		//define items collected from function
		_location1 = _buildObject select 0; //array
		_object = _buildObject select 1; //Obj
		_objectHelper = _buildObject select 2; //Obj
		
		_controls = [_object, _isAllowedUnderGround, _location1, _objectHelper] call player_build_controls;

		//define items collected from function
		_cancel = _controls select 0; //bool
		_reason = _controls select 1; //string
		_position = _controls select 2; //array
		_dir = _controls select 3; //int
		
		//Publish item to a database
		[_cancel, _position, _classnametmp,_isAllowedUnderGround, _text, _isPole, _lockable,_dir, _reason] call player_build_publish;
	};
};