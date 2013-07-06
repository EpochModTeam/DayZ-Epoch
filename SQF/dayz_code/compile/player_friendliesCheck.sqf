private ["_charID","_friendlies","_rcharID","_rfriendlyTo","_tag","_player","_newTagList","_position","_rfriendlies","_tagList","_statusNew","_tagColor","_humanity","_status","_everyone"];
_charID = player getVariable ["characterID", "0"];
_friendlies = player getVariable ["friendlies", []];
_everyone = player getVariable ["everyone", []];
_tagList = player getVariable ["tagList", []];

// create tags
{ 
	if (isPlayer _x and player != _x) then { 
		_rcharID = _x getVariable ["characterID", "0"];
		if(!(_rcharID in _everyone)) then {
			
			// Track who has tags
			_everyone set [count _everyone, _rcharID];
			player setVariable ["everyone", _everyone];
			
			// Add sphere to everyone
			_position = [0,0,0];
			_tag = "Sign_sphere10cm_EP1" createVehicleLocal _position;
			_tag attachTo [_x,[0,0,0],"lwrist"]; // Pelvis
			_tag setVariable ["belongsTo", _rcharID];	

			// Force white
			// _tag setobjecttexture [0,"#(argb,8,8,3)color(1,1,1,0.5,ca)"];
			
			//diag_log format["SETUP ORB FOR: %1", _x];
			
			// Maintenance array
			_tagList set [count _tagList, [_x, _tag,"init"]];
			player setVariable ["tagList", _tagList];
		};
	};
} forEach playableUnits;

// keep track of tags created
_newTagList = [];
{
	_player = _x select 0;
	_tag = _x select 1;
	_status = _x select 2;
	_statusNew = "white";
	_tagColor = "";
	// _tagColor = "#(argb,8,8,3)color(1,1,1,0.5,ca)";
	
	
	// friendly player disconnected
	if (!(isPlayer _player) or (vehicle _player != _player)) then {
		deleteVehicle _tag;
	} else {
		
		if (_status != "green") then {	
			//diag_log format["CHECK IF FRIENDLY: %1", _player];
			_rcharID = _player getVariable ["characterID", "0"];
			_rfriendlies = _player getVariable ["friendlies", []];
			_rfriendlyTo = _player getVariable ["friendlyTo", []];
		
			if ((_rcharID in _friendlies) and (_charID in _rfriendlies)) then {
				if (!(_charID in _rfriendlyTo)) then {

					// diag_log format["IS FRIENDLY: %1", _player];
				
					_rfriendlyTo set [count _rfriendlyTo, _charID];
					_player setVariable ["friendlyTo", _rfriendlyTo, true];
					titleText [format["You and %1 are now tagged as friendlies.", (name _player)], "PLAIN DOWN"];
				
					_statusNew = "green";
					_tagColor = "#(argb,8,8,3)color(0,1,0,0.5,ca)";
					// light green #(argb,8,8,3)color(0.04,0.86,0.1,0.5,ca)
				};

			} else {
		
				// Get humanity 
				_humanity = _player getVariable ["humanity",0];  
				
				if(_humanity < -5000) then {
					_statusNew = "red";
					_tagColor = "#(argb,8,8,3)color(1,0,0,0.5,ca)";
				} else {
					if(_humanity > 5000) then {
						_statusNew = "blue";
						_tagColor = "#(argb,8,8,3)color(0,0,1,0.5,ca)";
					};
				};

				// diag_log format["CHECK HUMANITY: %1 %2", _player, _humanity];
			};

			
			if(_statusNew != _status) then {
				//diag_log format["STATUS CHANGED: %1 != %2", _statusNew, _status];
				// Set texture based on humanity or friendship status
				_tag setobjecttexture [0,_tagColor];
				_status = _statusNew;
			}; 

		};
		// diag_log format["CHECK STATUS: %1 != %2", _statusNew, _status];
		_newTagList set [count _newTagList, [_player, _tag, _status]];
	};
} forEach _tagList;

player setVariable ["tagList", _newTagList];

