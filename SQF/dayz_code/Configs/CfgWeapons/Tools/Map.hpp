class ItemMap : ItemCore
{
	model = "z\addons\dayz_communityassets\models\map.p3d";
};

class ItemMap_Debug: ItemCore
{
	scope = public;
	
	displayname = "Debug Map";
	descriptionshort = "Debug Map - Admin use only";
	picture = "\z\addons\dayz_communityassets\pictures\gear_picture_map_debug.paa";
	
	simulation = "ItemMap";
	
	class Library
	{
		libtextdesc = "Debug Map - Admin use only";
	};
};