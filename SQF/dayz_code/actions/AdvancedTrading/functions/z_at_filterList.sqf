/**
*	call Z_filterList
*
*   @param String _this select 0 (_query) -> the current string in the filter input
*
*	Filters the buyable or sellable list on your input.
**/

if(count _this > 0) then {
	_query = _this select 0;  // the search string.
	if(Z_Selling)then {
		if(isNil '_query' || _query == "") then {
			_newSellArray = [];
			{
			  if( _x find Z_SellArray < 0) then {
			  	_newSellArray set [count(_newSellArray), _x];	
			  };
			} forEach Z_OriginalSellableArray;

			Z_SellableArray	= [] + _newSellArray;

			call Z_clearSellableList;
			call Z_fillSellList;
		}else {
			_newSellArray = [];
			{
			  if(( [_query,(_x select 0)] call KK_fnc_inString) || ([_query,(_x select 3)] call KK_fnc_inString) ) then {
			  	if( _x find Z_SellArray < 0 ) then {
			  		_newSellArray set [count(_newSellArray), _x];	
			  	};
			  };
			} forEach Z_OriginalSellableArray;	
			Z_SellableArray = [] + _newSellArray;
			call Z_clearSellableList;
			call Z_fillSellList;
		};				
	}else {
		if(isNil '_query' || _query == "") then {
			Z_BuyableArray = [] + Z_OriginalBuyableArray;
			call Z_clearBuyList;
			call Z_fillBuyableList;
		}else {
			_newBuyArray = [];
			{
			  if(( [_query,(_x select 0)] call KK_fnc_inString) || ([_query,(_x select 3)] call KK_fnc_inString) ) then {
			  	_newBuyArray set [count(_newBuyArray), _x];	
			  };
			} forEach Z_OriginalBuyableArray;	
			Z_BuyableArray =  [] + _newBuyArray;
			call Z_clearBuyList;
			call Z_fillBuyableList;	
		};	
	};
};