class ItemRadio : ItemCore
{
	model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
	class ItemActions
	{
		class Groups
		{
			text = $STR_EPOCH_GROUPS_KEY;
			script = ";if (!isNil 'dayz_groupInit') then {[] spawn dayz_openGroupDialog;};";
		};
	};
};