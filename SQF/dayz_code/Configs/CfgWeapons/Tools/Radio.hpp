class ItemRadio : ItemCore
{
	class ItemActions
	{
		class Groups
		{
			text = $STR_EPOCH_GROUPS_KEY;
			script = ";if (!isNil 'dayz_groupInit') then {[] spawn dayz_openGroupDialog;};";
		};
	};
};