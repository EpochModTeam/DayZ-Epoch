/**
*	[_text] call Z_fillTradeTitle
*
*	@param String _this select 0 (_text) -> The text you want in the label.
*
*	Changes the indication of where you are selling/buying from in the trade window.
**/
private "_text";
#include "defines.hpp"	

_text = _this select 0;
ctrlSetText [Z_AT_CONTAINERINDICATOR, _text];
