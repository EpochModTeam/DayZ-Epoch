

private ["_hum","_h","_humanity","_pl_pic","_humanity_readout","_top_joker","_bot_joker","_top_value","_bot_value","_top_suit","_bot_suit","_pl_name"];

//check humanity

_h = player getVariable["humanity", 0];

/*

IDC's
1201 // middle
1202 // bottom
1203 // top
1204 // pic on right hand page

*/

switch (true) do
{
	case (_h < -666666):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_middle_1.paa"];
		ctrlSetText [1202, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_bottom_1.paa"];
		ctrlSetText [1203, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_top_1.paa"];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_3.paa"];
	};
	case (_h < -333333):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_middle_1.paa"];
		ctrlSetText [1202, ""];
		ctrlSetText [1203, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_top_1.paa"];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_2.paa"];
	};
	case (_h < -1999):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_middle_1.paa"];
		ctrlSetText [1202, ""];
		ctrlSetText [1203, ""];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_bandit_1.paa"];
	};
	case (_h < 5000):
	{
		ctrlSetText [1201, ""];
		ctrlSetText [1202, ""];
		ctrlSetText [1203, ""];
		ctrlSetText [1204, ""];
	};
	case (_h < 333333):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_middle_1.paa"];
		ctrlSetText [1202, ""];
		ctrlSetText [1203, ""];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_hero_1.paa"];
	};
	case (_h < 666666):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_middle_1.paa"];
		ctrlSetText [1202, ""];
		ctrlSetText [1203, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_top_1.paa"];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_hero_2.paa"];
	};
	case (_h >= 666666):
	{
		ctrlSetText [1201, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_middle_1.paa"];
		ctrlSetText [1202, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_bottom_1.paa"];
		ctrlSetText [1203, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_heropic_top_1.paa"];
		ctrlSetText [1204, "\z\addons\dayz_communityassets\pictures\playerstats\humanity\humanity_hero_3.paa"];
	};
};