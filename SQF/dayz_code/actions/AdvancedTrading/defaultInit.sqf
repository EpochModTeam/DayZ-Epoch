private ["_tempGemList","_tempWorthList","_largest","_LargestGem"];

Z_SellingFrom = 2;
DZE_GemList = [];
DZE_GemWorthList = [];

_tempGemList = [];
_tempWorthList = [];

{
	_tempGemList set [(count _tempGemList), (_x select 0)];
	_tempWorthList set [(count _tempWorthList), (_x select 1)];
} count DZE_GemWorthArray;

for "_i" from 0 to ((count _tempGemList) - 1) do {
	_largest = -1e9;
	
	{
		_largest = _largest max _x;
	} forEach _tempWorthList;
	
	_LargestGem = _tempGemList select (_tempWorthList find _largest);
	_tempWorthList = _tempWorthList - [_largest];
	_tempGemList = _tempGemList - [_LargestGem];
	DZE_GemList set [(count DZE_GemList), _LargestGem];
	DZE_GemWorthList set [(count DZE_GemWorthList), _largest];
};

Z_checkCloseVehicle =  						compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_checkCloseVehicle.sqf");
Z_canAfford =  								compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_canAfford.sqf");
Z_calcFreeSpace = 							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcFreeSpace.sqf");
Z_returnChange =  							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_returnChange.sqf");
Z_payDefault =  							compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_payDefault.sqf");
z_calcDefaultCurrencyNoImg  =				compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\z_at_calcDefaultCurrencyNoImg.sqf");
ZUPA_fnc_removeWeaponsAndMagazinesCargo = 	compile preprocessFileLineNumbers (Z_AT_FolderLocation + "\functions\zupa_fnc_removeWeaponsAndMagazinesCargo.sqf");
