achievementClientMsg = {
	private ["_achievement","_player","_AchievementText","_text","_display","_achievementID","_serverEvent"];

	/* Only call this from the server
	achievementClientPV = [_achievementID];
	owner publicVariableClient "achievementClientPV";
	*/
	
	_achievement = (_this select 0) select 0;	// what should they get
	_player = (_this select 0) select 1;		// who to send the message to
	
	_AchievementText = switch (_achievement) do
	{
		case 0: {"Time Waster"};				// play for over 1 hour straight
		case 1: {"High Flyer"};					// 500+ AGL
		case 2: {"Grave Robber"};				// Stand near a "mass_grave"
		case 3: {"Shopaholic"};					// Visit 5 supermarkets
		case 4: {"Top Shopper"};				// Visit 10 supermarkets
		case 5: {"Sick Puppy"};					// Visit 4 hospitals
		case 6: {"White Collar Worker"};		// Visit 3 offices
		case 7: {"Fire Warden"};				// Visit 4 firestations
		case 8: {"Slice Of Fried Gold"};		// Visit 8 pubs
		case 9: {"Plane Spotter"};				// Visit all 3 ATCs
		case 10: {"Trinkets of Deceit"};		// Visit 3 churches
		case 11: {"Litter Bug"};				// drop 5 tinned/canned items
		case 12: {"Cannibal"};					// eat a piece of raw meat
		case 13: {"Hunter Gatherer"};			// gut an animal
		case 14: {"Firestarter"};				// light a fire
		case 15: {"Steady Aim"};				// make a kill from over 200m
		case 16: {"Marksman"};					// make a kill from over 500m
		case 17: {"Sniper"};					// make a kill from over 1000m
		case 18: {"Bunny Basher"};				// kill a rabbit from over 200m
		case 19: {"Clean Bill of Health"};		// cure an infection (ABs)
		case 20: {"Medic of the apocalypse"};	// give 4 blood bags
	};

	_display = false;
	_serverEvent = _achievement in [15,16,17];
	if (_serverEvent) then {
		if ((_achievement == 15) && (!achievement_SteadyAim)) then {
			achievement_SteadyAim = true;
			_display = true;
		};
		if ((_achievement == 16) && (!achievement_Marksman)) then {
			_display = true;
			achievement_Marksman = true;
		};
		if ((_achievement == 17) && (!achievement_Sniper)) then {
			_display = true;
			achievement_Sniper = true;
		};
	}
	else
	{
		_display = true;
	};
	
	if (_display) then {
		_text = format["<t size='0.5' color='#ffffff'>Achievement<br/><t size='1.0' color='#F56936'>%1</t>",_AchievementText];
		null = [_text,0,1,5,2] spawn bis_fnc_dynamictext;
		// would like to use localize so text can be tweaked using stringtable.xml
	};
	
};