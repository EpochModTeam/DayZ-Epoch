To customize the loot tables copy this CfgLoot folder to your mission.

Then in description.ext replace this line:
#include "\z\addons\dayz_code\Configs\CfgLoot\CfgLoot.hpp"
with this:
#include "CfgLoot\CfgLoot.hpp"


If you do not change anything in the \Buildings\ folder you can delete it and CfgBuildingPos.hpp. Then in CfgLoot.hpp replace:
#include "CfgBuildingPos.hpp"
with:
#include "\z\addons\dayz_code\Configs\CfgLoot\CfgBuildingPos.hpp"


If you do not change anything in the \Groups\Buildings\ folder you can delete it and CfgBuildingLoot.hpp. Then in CfgLoot.hpp replace:
#include "CfgBuildingLoot.hpp"
with:
#include "\z\addons\dayz_code\Configs\CfgLoot\CfgBuildingLoot.hpp"