/****************************************************************************
Copyright (C) 2010 Team ~R3F~
This program is free software under the terms of the GNU General Public License version 3.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
@authors team-r3f.org
@version 1.02
@date 20101018
*****************************************************************************/
#include "R3F_WEIGHT_Configuration.cfg"
R3F_WEIGHT_FNCT_MakeSingleArray = {
	private ["_arr_i","_arr_n", "_arr", "_n", "_nb", "_x"];
	_arr_i = (_this select 0) select 0;
	_arr_n = (_this select 0) select 1;
	
	_arr = [];
	
	_n = 0;
	{
		_nb = _arr_n select _n;
		for [{_i = 0}, {_i < _nb}, {_i = _i + 1}] do{
			_arr = _arr + [_x];
		};
		_n = _n + 1;
		
	}foreach _arr_i;
	
	_arr;
};

R3F_WEIGHT_FNCT_GetItemWeight = {
	private ["_arr_class", "_total_weight", "_weight"];
	_arr_class = (_this select 0) + (_this select 1);
	_total_weight = 0;
	_weight = 0;
	CfgWeight = missionConfigFile >> "CfgWeight";
	{
		if(isclass(CfgWeight >> "Weapons" >> _x)) then {
			_weight = getNumber(CfgWeight >> "Weapons" >> _x >> "weight");
			_total_weight = _total_weight + _weight;
		}else{
			if(isclass(CfgWeight >> "Magazines" >> _x)) then {
				_weight = getNumber(CfgWeight >> "Magazines" >> _x >> "weight");
				_total_weight = _total_weight + _weight;
			}else{
				
				_weight = 0;
				if(isNumber (configFile >> "cfgMagazines" >> _x >> "weight")) then {
					_weight = getNumber(configFile >> "cfgMagazines" >> _x >> "weight");
				};
				
				if(_weight > 0) then {
					_total_weight = _total_weight + _weight;
				} else {
					// log only if not found 
					//diag_log format["Class not found %1", _x];
				};				
			};
		};
	}foreach _arr_class;
	_total_weight;
};

R3F_WEIGHT_FNCT_GetWeight = {
	private ["_bagpack","_bagpack_weapons", "_bagpack_ammo", "_return","_english"];
	_return = 0;
	_bagpack = unitBackpack player;
	if(!isnull(_bagpack)) then {
		_bagpack_weapons = [getWeaponCargo _bagpack] call R3F_WEIGHT_FNCT_MakeSingleArray;
		_bagpack_ammo = [getMagazineCargo _bagpack]  call R3F_WEIGHT_FNCT_MakeSingleArray;
		_return = [_bagpack_weapons, _bagpack_ammo] call R3F_WEIGHT_FNCT_GetItemWeight;
	};
	_return = _return + ([(weapons player), (magazines player)] call R3F_WEIGHT_FNCT_GetItemWeight);
	_english = localize "STR_R3F_WEIGHT_English" == "lb";
	if(_english) then {
		_return = _return /  0.45359 ;
		_return = round (_return * 100)/100;
	};
	_return;
};

