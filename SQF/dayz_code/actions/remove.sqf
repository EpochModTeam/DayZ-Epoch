/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	delete object from db with extra waiting by [VB]AWOL
//
//	Modified by:	Victor the Cleaner
//	Date:		August 2021
//
//	- Will now accept array parameter: [_obj, _actionContext, _isModular]
//
//		* _obj is the object to be removed
//		* _actionContext is a unique ID referencing either remove or deconstruct actions
//		* _isModular is for handling refunds of modular objects only
//
//	- Script now adds colored helpers to modular objects when removing or deconstructing.
//
//		* Green: Refund one kit
//		* Blue:	 Refund entire recipe of parts (multiple items)
//		* Red:	 No refund will be given. Either because the object is too damaged, or the refund feature is disabled
//
//	- Refunds for non-modular objects are handled by their respective config settings.
//
//	- Removed non-lockable storage objects will now refund their contents.
//
//		* The corresponding storage kit will be refunded.
//		* If there is room outdoors, backpacks will be arranged in a neat circle close to the refund point.
//		* If the spawn point is too close to a building, backpacks will spawn at the player's location.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

local _p		= _this select 3;	// get addAction parameter
local _obj		= _p;			// object
local _actionContext	= 2;			// default to remove action
local _isModular	= false;		// for removal of non-modular objects

if (typeName _p == "ARRAY") then {		// allow for remove/deconstruct array to be passed
	_obj		= _p select 0;		// object
	_actionContext	= _p select 1;		// remove or deconstruct
	_isModular	= _p select 2;		// isModular or isModularDoor
};
if (isNull _obj) exitWith {
	dayz_actionInProgress = false;
	systemChat localize "str_cursorTargetNotFound";			// You must be looking at the item to interact with it.
};
if (_obj getVariable ["GeneratorRunning", false]) exitWith {
	dayz_actionInProgress = false;
	localize "str_epoch_player_89" call dayz_rollingMessages;	// Cannot remove a running generator.
};

local _objType	= typeOf _obj;			// object's classname
local _bbObject	= boundingBox _obj select 1;	// positive x,y dimensions

if (_objType in DZE_DoorsLocked && !(_objType in ["WoodenGate_1_DZ","WoodenGate_2_DZ","WoodenGate_3_DZ","WoodenGate_4_DZ"])) exitWith {
	dayz_actionInProgress = false;
	localize "STR_EPOCH_ACTIONS_20" call dayz_rollingMessages;	// You must remove the lock to delete this item!
};

///////////////////////////////////////////////////////////////////////////////////////////////////

// prevent player actions appearing during animation cycle
player removeAction s_player_deleteBuild;
player removeAction s_player_deconstruct;
player removeAction s_player_upgrade_build;
player removeAction s_player_maint_build;
s_player_deleteBuild	= 1;
s_player_deconstruct	= 1;
s_player_upgrade_build	= 1;
s_player_maint_build	= 1;

local _objOwnerID	= _obj getVariable["ownerPUID","0"];
local _isOwnerOfObj	= (_objOwnerID == dayz_playerUID);

if (!DZE_permanentPlot) then {
	_objOwnerID	= _obj getVariable["CharacterID","0"];
	_isOwnerOfObj	= (_objOwnerID == dayz_characterID);
};

local _objectID		= _obj getVariable ["ObjectID","0"];
local _objectUID	= _obj getVariable ["ObjectUID","0"];
local _hasNoID		= (_objectID == "0" && _objectUID == "0");

local _isDestructable	= _obj isKindOf "BuiltItems";
local _isWreck		= _objType in DZE_isWreck;
local _isRemovable	= _objType in DZE_isRemovable;
local _isWreckBuilding	= _objType in DZE_isWreckBuilding;
local _isMine		= _objType in ["Land_iron_vein_wreck","Land_silver_vein_wreck","Land_gold_vein_wreck"];
local _isAmmoSupplyWreck= _objType == "Land_ammo_supply_wreck";
local _isPlotPole	= _objType == "Plastic_Pole_EP1_DZ";
local _isFireBarrel	= _objType == "FireBarrel_DZ";
local _isStorageItem	= _objType in DZE_refundStorageItemContents;	// non-lockable storage (sheds, crates etc.)

local _playerNear = {isPlayer _x} count (([_obj] call FNC_GetPos) nearEntities ["CAManBase", 12]) > 1;

if (_playerNear && (_isMine or _isAmmoSupplyWreck)) exitWith {
	dayz_actionInProgress = false;
	localize "str_pickup_limit_5" call dayz_rollingMessages;	// Another player is nearby. Only one player can be near to perform this action.
};
///////////////////////////////////////////////////////////////////////////////////////////////////

local _limit = 3;

if (DZE_StaticConstructionCount > 0) then {
	_limit = DZE_StaticConstructionCount;
} else {
	if (isNumber (configFile >> "CfgVehicles" >> _objType >> "constructioncount")) then {
		_limit = getNumber(configFile >> "CfgVehicles" >> _objType >> "constructioncount");
	};
};

local _plotCheck	= [player, false] call FNC_find_plots;
local _isNearPlot	= _plotCheck select 1;
local _nearestPole	= _plotCheck select 2;

if (_isNearPlot > 0) then {

	// Since there are plot poles nearby we need to check ownership && friend status
	local _accessCheck	= [player, _nearestPole] call FNC_check_access;
	local _isowner		= _accessCheck select 0;
	local _isfriendly	= ((_accessCheck select 1) or (_accessCheck select 3));

	if (!_isowner && !_isfriendly) then {
		_limit = round(_limit * 2);
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Added functionality to display helpers on modular objects
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _modularRefund	= false;
local _isEnabled	= false;
local _refund		= [];			// can be either STRING or ARRAY
local _helperTexture	= DZE_removeTexture;	// default helper color: green

if (_isModular) then {
	{
		if (_objType == _x select 1) exitWith {				// find matching class
			_isEnabled	= _x select 0;				// is refund enabled?
			_refund		= _x select _actionContext;		// get refund array
		};
	} count DZE_modularConfig;

	if (_actionContext == 2) then {						// if singular kit
		_refund = [[_refund, 1]];					// reformat array
	};

	_modularRefund = (DZE_refundModular && _isEnabled && !((DZE_RefundDamageLimit > 0) && (damage _obj > DZE_RefundDamageLimit)));

	if (_actionContext == 3) then {						// if deconstruct
		_helperTexture	= DZE_deconstructTexture;			// blue helpers
	};
	if (!_modularRefund) then {						// if no refunds are to be given
		localize "STR_EPOCH_ACTIONS_21" call dayz_rollingMessages;	// notify player - Deconstructing modular buildables will not refund any components.
		_helperTexture = DZE_NoRefundTexture;				// red helpers
	};
};

[_obj, _helperTexture] call fn_displayHelpers;					// create helpers


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Begin Removal
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _nameVehicle = getText(configFile >> "CfgVehicles" >> _objType >> "displayName");
//format[localize "str_epoch_player_162", _nameVehicle] call dayz_rollingMessages;	// Starting de-construction of %1.

local _brokenTool	= false;
local _counter		= 0;
local _isOk		= true;
local _proceed		= false;

[player, 50, true, (getPosATL player)] spawn player_alertZombies;	// Alert zombies once

// Start de-construction loop
while {_isOk} do {

	// if object no longer exists this should return true
	if (isNull _obj) exitWith {
		_isOk = false;
		_proceed = false;
	};

	format[localize "str_epoch_player_163", _nameVehicle, (_counter + 1), _limit] call dayz_rollingMessages;	// De-constructing %1, stage %2 of %3 walk away at anytime to cancel.

	[player, (getPosATL player), 25, "repair"] spawn fnc_alertZombies;

	local _finished = ["Medic", 1] call fn_loopAction;

	if (!_finished) exitWith {
		_isOk = false;
		_proceed = false;
	};
	if (_finished) then {
		_counter = _counter + 1;

		if (dayz_toolBreaking) then {
			if ((_isDestructable || _isRemovable) && !_isOwnerOfObj) then {
				if ([0.04] call fn_chance) then {				// 4% chance to break a required tool each pass
					_brokenTool = true;
				};
			};
		};
	};
	if (_brokenTool) exitWith {
		_isOk = false;
		_proceed = false;
	};
	if (_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};
};

[] call fn_displayHelpers;	// delete helpers

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					tool breakage
//
///////////////////////////////////////////////////////////////////////////////////////////////////
local _success = true;

if (_brokenTool) then {
	_success = false;
	local _removeTool = if (_isWreck) then {"ItemToolbox"} else {["ItemCrowbar","ItemToolbox"] call BIS_fnc_selectRandom};
	if (_removeTool == "ItemCrowbar" && !("ItemCrowbar" in items player)) then {
		if ("MeleeCrowbar" in weapons player) then {
			player removeWeapon "MeleeCrowbar";
			_success = true;
		} else {
			if (dayz_onBack == "MeleeCrowbar") then {
				dayz_onBack = ""; // Remove item
				player setVariable ["dayz_onBack", dayz_onBack, true];
				_success = true;
				if (!isNull (findDisplay 106)) then {((findDisplay 106) displayCtrl 1209) ctrlSetText "";};
			};
		};
	} else {
		if (([player, _removeTool, 1] call BIS_fnc_invRemove) > 0) then {_success = true;};
	};

	if (_success) then {
		format[localize "str_epoch_player_164", getText(configFile >> "CfgWeapons" >> _removeTool >> "displayName"), _nameVehicle] call dayz_rollingMessages;	// %1 broke, cannot remove %2.
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				find refund depending on object category
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Remove only if player waited AND tool was successfully removed if broken
if (_proceed && _success) then {

	// Double check that object is not null
	if !(isNull _obj) then {

		local _objectPos		= getPosATL _obj;	// copy now before object deleted
		local _iPos			= _objectPos;		// default refund position
		local _iDir			= getDir _obj;		// default refund direction
		local _selectedRemoveOutput	= [];			// initialize refund array
		local _preventRefund		= false;		// in case object has no id
		local _bpTotal			= 0;			// total number of backpacks to refund

		call {
			///////////////////////////////////////////////////////////////////////////
			//
			//			dynamic debris wreckage
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isWreck) exitWith {

				// Find one random part to refund
				local _refundpart = ["PartEngine","PartGeneric","PartFueltank","PartWheel","PartGlass","ItemJerrycan"] call BIS_fnc_selectRandom;

				_selectedRemoveOutput = [[_refundpart, 1]];
			};

			local _lootGroupIndex = dz_loot_groups find _objType;
			local _output = [];

			///////////////////////////////////////////////////////////////////////////
			//
			//			metal vein wreck
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isMine) exitWith {

				_output = [_lootGroupIndex, 3] call dz_fn_loot_select;
				{_selectedRemoveOutput set [count _selectedRemoveOutput, [_x select 1, [_x select 2, _x select 3]]]} forEach _output;

				// chance of gem occurrence
				if ([0.4] call fn_chance) then {
				
					local _gems	= [];
					local _weights	= [];
					{
						_gems set [count _gems, _x select 0];
						_weights set [count _weights, _x select 1];
					} count DZE_GemOccurance;

					local _gemSelected = [_gems, _weights] call BIS_fnc_selectRandomWeighted;
					_selectedRemoveOutput set [count _selectedRemoveOutput, [_gemSelected, 1]];
				};
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//			roadside ammo crate
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isAmmoSupplyWreck) exitWith {

				_output = [_lootGroupIndex, 5] call dz_fn_loot_select;
				{_selectedRemoveOutput set [count _selectedRemoveOutput, [_x select 1, 1, _x select 0]]} forEach _output;
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//			wrecked modular object
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isWreckBuilding) exitWith {
				_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//				modular object
			//
			///////////////////////////////////////////////////////////////////////////
			if (_modularRefund) exitWith {

				{_selectedRemoveOutput set [count _selectedRemoveOutput, _x]} forEach _refund;
				_preventRefund = _hasNoID;
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//			non-lockable storage item
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isStorageItem) exitWith {

				if (!_hasNoID) then {
					_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");	// refund config array
				};

				local _weapons = getWeaponCargo _obj;
				local _magazines = getMagazineCargo _obj;
				local _backpacks = getBackpackCargo _obj;

				if ((count _weapons > 0 || {count _magazines > 0 || {count _backpacks > 0}})) then {		// has storage items

					// reformat cargo arrays into [class, count, type] and append to _selectedRemoveOutput
					local _format = [[_weapons,2],[_magazines,3],[_backpacks,5]];
					{
						local _class = _x select 0 select 0;	// weapon, magazine, or backpack
						local _total = _x select 0 select 1;	// count array
						local _type  = _x select 1;		// item type
						local _array = [];
						{
							_count = _total select _forEachIndex;
							_array = [_x, _count, _type];						// format array

							_selectedRemoveOutput set [count _selectedRemoveOutput, _array];	// append to output

							if (_type == 5) then {_bpTotal = _bpTotal + _count};			// update backpack count

						} forEach _class;
					
					} count _format;
				};
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//			All other removable objects
			//
			///////////////////////////////////////////////////////////////////////////

			_selectedRemoveOutput = getArray (configFile >> "CfgVehicles" >> _objType >> "removeoutput");	// refund config array
			_preventRefund = _hasNoID;
		};

		call {
			///////////////////////////////////////////////////////////////////////////
			//
			//		check if plot pole helpers remain
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isPlotPole) exitWith {
				if (!isNil "PP_Marks") then {
					{deleteVehicle _x;} count PP_Marks;
					PP_Marks = nil;
				};
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//		check if fire barrel was left burning
			//
			///////////////////////////////////////////////////////////////////////////
			if (_isFireBarrel) exitWith {
				local _flame = nearestObjects [_obj, ["flamable_DZ"], 1];	// check for inflamed objects
				if (count _flame > 0) then {					// if any
					_flame = (_flame select 0);				// get nearest (typeName changes from "ARRAY" to "OBJECT")
					_flame inflame false;					// extinguish flame
					deleteVehicle _flame;					// delete proxy object
				};
			};
		};

		///////////////////////////////////////////////////////////////////////////////////
		//
		//			delete object from database
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (!_isWreck && !_isWreckBuilding) then {
			// Server performs deleteVehicle
			PVDZ_obj_Destroy = [_objectID, _objectUID, player, _obj, dayz_authKey];
			publicVariableServer "PVDZ_obj_Destroy";
		} else {
			deleteVehicle _obj;
		};

		if (_isWreckBuilding) then {
			PVDZ_send = [player, "RemoveObject", _objectPos, [_objectPos, dayz_authKey, player]];
			publicVariableServer "PVDZ_send";
		};

		//format[localize "str_epoch_player_165", _nameVehicle] call dayz_rollingMessages;	// De-constructing %1.
		["Working",0,[3,2,4,0]] call dayz_NutritionSystem;

		///////////////////////////////////////////////////////////////////////////////////
		//
		//			prepare refund and backpack array
		//
		///////////////////////////////////////////////////////////////////////////////////

		if (!_preventRefund && {count _selectedRemoveOutput > 0}) then {

			local _item = "WeaponHolder" createVehicle [0,0,0];
			_item setDir _iDir;


			if ((player distance _objectPos) > 1.5) then {					// if player was not close to the object
				_iDir = [player, _objectPos] call BIS_fnc_dirTo;			// update direction
				_iPos = [player, 1.5, _iDir] call BIS_fnc_relPos;			// update position
			};
			_iPos set [2, ((getPosATL player) select 2) max 0];				// Match refund height to player height, or place on ground

			local _bpDir	= floor(random 360);						// backpack rotation angle around refund point
			local _bpArc	= 360 / (_bpTotal max 1);					// angle between each backpack (prevents divide by zero)
			local _bbMin	= ((_bbObject select 0) min (_bbObject select 1)) * 0.5;	// 50% of storage object's smallest x,y dimension 
			local _bpDist	= (_bbMin max 0.3) min 0.75;					// clamp min/max radial distance from WeaponHolder to backpack pivot point
			local _playerPos= getPosATL player;

			local _isInside = {			// procedure to check whether the supplied position is inside a building's bounding box
				local _pos	= _this;
				local _inside	= false;
				{
					local _building = _x;

					if (_building != _item) then {					// exclude WeaponHolder when placing backpacks
						local _relPos = _building worldToModel _pos;

						local _max	= (boundingBox _building) select 1;
						local _px	= _max select 0;
						local _py	= _max select 1;
						local _pz	= _max select 2;
						local _myX	= abs (_relPos select 0);
						local _myY	= abs (_relPos select 1);
						local _myZ	= abs (_relPos select 2);

						if ((_myX < _px) && {(_myY < _py) && {(_myZ < _pz)}}) then {
							_inside = true;
						};
					};
					if (_inside) exitWith {};
				} forEach (nearestObjects [_pos, ["Building"], 50]);		// scan every "Building" class within 50m

				_inside;
			};

			if (_isStorageItem && (_iPos call _isInside)) then {
				_iPos	= _playerPos;
				_bpDist	= 0.1;
			};

			///////////////////////////////////////////////////////////////////////////
			//
			//				refund items
			//
			///////////////////////////////////////////////////////////////////////////

			local _totalCount = 0;							// total number of refunded items
			{
				local _itemOut	= _x select 0;					// item to refund
				local _countOut	= _x select 1;					// how many

				if (typeName _countOut == "ARRAY") then {			// check for random refund range
					local _min	= _countOut select 0;
					local _max	= _countOut select 1;
					local _range	= (abs (_max - _min)) + 1;		// add 1 because range is numerically inclusive
					_countOut	= (floor (random _range)) + _min;	// randomize
				};

				_totalCount = _totalCount + _countOut;				// running total of items

				if (count _x > 2) then {					// if array item has 3 elements
					local _type = _x select 2;				// get corresponding cargo type
					call {
						if (_type == 2) exitWith {_item addWeaponCargoGlobal   [_itemOut, _countOut]};
						if (_type == 3) exitWith {_item addMagazineCargoGlobal [_itemOut, _countOut]};
						if (_type == 5) exitWith {	//_item addBackpackCargoGlobal [_itemOut, _countOut]; // Needs to make sure object can handle Backpacks or will dump on the ground.

							for "_i" from 1 to _countOut do {

								local _bpObj = _itemOut createVehicle [0,0,0];			// create backpack
								local _bpPos = [_iPos, _bpDist, _bpDir] call BIS_fnc_relPos;	// position it a short distance away from the spawn point

								_bpObj setVectorDirAndUp [
									[0, 0, -1],						// lay it flat
									[[0, 1, 0], -_bpDir] call BIS_fnc_rotateVector2D	// align to holder
								];
								_bpPos set [2, ((_bpPos select 2) max 0) - 0.15];		// match holder height or place on ground (lowered slightly)

								if (_bpPos call _isInside) then {
									_bpObj setPosATL _playerPos;				// prevent backpack from spawning inside an unenterable building
								} else {
									_bpObj setPosATL _bpPos;				// location is good
								};
								_bpDir = (_bpDir + _bpArc) % 360;				// arrange backpacks evenly
							};							
						};
					};
				} else {
					_item addMagazineCargoGlobal [_itemOut, _countOut];	// default magazine cargo
				};
			} count _selectedRemoveOutput;

			if (_totalCount > 0) then {		// Only reveal refund if there is something there. Random ranges can produce zero results.
				_item setPosATL _iPos;
				player reveal _item;

				DZE_GearCheckBypass = true;	// Bypass gear menu checks since dialogue will always open on item
				player action ["Gear", _item];
			};
		} else {
			[localize "str_epoch_player_90", 1] call dayz_rollingMessages;	// No parts were found.
		};
	} else {
		localize "str_epoch_player_91" call dayz_rollingMessages;		// Failed, object no longer exists.
	};
};

dayz_actionInProgress	= false;
s_player_deleteBuild	= -1;
s_player_deconstruct	= -1;
s_player_upgrade_build	= -1;
s_player_maint_build	= -1;