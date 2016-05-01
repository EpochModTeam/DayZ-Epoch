disableSerialization;

PlotGetFriends		= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotGetFriends.sqf";
PlotNearbyHumans	= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotNearbyHumans.sqf";
PlotAddFriend		= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotAddFriend.sqf";
PlotRemoveFriend	= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotRemoveFriend.sqf";
PlotObjects			= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotObjects.sqf";
PlotPreview			= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\plotToggleMarkers.sqf";

// use this for gold
MaintainPlot		= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\maintain_area.sqf";

// use this for single currency
//MaintainPlot		= compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\plotManagement\maintain_areaSC.sqf";


createdialog "PlotManagement";
call PlotNearbyHumans;
call PlotGetFriends;
["preview"] call MaintainPlot;
call PlotObjects;

