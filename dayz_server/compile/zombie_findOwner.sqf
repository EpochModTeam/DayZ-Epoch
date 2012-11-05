private["_unit","_potential","_newOwner","_client"];
_unit = _this select 0;

diag_log ("CLEANUP: DELETE UNCONTROLLED ZOMBIE: " + (typeOf _unit) + " OF: " + str(_unit) );
deleteVehicle _unit;

/*

//Not server then exit
if(!isServer) exitWith {
	diag_log ("DW_DEBUG: #findOwner exits as not server: " + str(isServer));
	};
//Not local then exit
if(!local _unit) exitWith {
	diag_log ("DW_DEBUG: #findOwner exits _unit not local: " + str(local _unit));
	};

//Find a new owner
_potential = (getposATL _unit) nearEntities [["CAManBase"],300];
_newOwner = objNull;
{
	if (isPlayer _x) then {
		_newOwner = _x;
	};
	if (!isNull _newOwner) exitWith {
		//diag_log ("DW_DEBUG: #findOwner potencial _newOwner: " + str(_newOwner));
		};
} forEach _potential;

//If no nearby player, delete the agent

//diag_log ("DW_DEBUG: #findOwner isNull _newOwner: " + str(isNull _newOwner));

if(isNull _newOwner) exitWith {
	diag_log ("CLEANUP: NOTHING TO TRANSFER OWNERSHIP OF TYPE: " + (typeOf _unit) + " OF: " + str(_unit) );
	deleteVehicle _unit;
};

//set client as controller
_client = owner _newOwner;

_unit setOwner _client;

diag_log ("CLEANUP: TRANSFERRED OWNERSHIP OF TYPE: " + (typeOf _unit) + " OF _unit: " + str(_unit) + " TO _client: " + str(_client) );

*/