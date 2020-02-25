class AK_107_kobra;
class AK107_Kobra_DZ : AK_107_kobra 
{
	displayName = $STR_DZ_WPN_AK107_KOBRA_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};
	
	class Attachments
	{
		Attachment_GP25 = "AK107_GL_Kobra_DZ";
	};
	
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK107_DZ'] call player_removeAttachment";
		};
	};	
};

class AK_107_CP;
class AK107_DZ : AK_107_CP
{
	displayName = $STR_DZ_WPN_AK107_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};	
	
	class Attachments
	{
		Attachment_Kobra = "AK107_Kobra_DZ";
		Attachment_PSO1 = "AK107_PSO_DZ";
		Attachment_GP25 = "AK107_GL_DZ";
	};
	
	class ItemActions {};
};

class AK_107_GL_CP;
class AK107_GL_DZ : AK_107_GL_CP
{
	displayName = $STR_DZ_WPN_AK107_GL_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};
		
	class Attachments
	{
		Attachment_Kobra = "AK107_GL_Kobra_DZ";
		Attachment_PSO1 = "AK107_GL_PSO_DZ";
	};
	class ItemActions
	{
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK107_DZ'] call player_removeAttachment";
		};
	};	
};

class AK_107_pso;
class AK107_PSO_DZ : AK_107_pso
{
	displayName = $STR_DZ_WPN_AK107_PSO1_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};
		
	class Attachments
	{
		Attachment_GP25 = "AK107_GL_PSO_DZ";
	};
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK107_DZ'] call player_removeAttachment";
		};
	};	
};

class AK_107_GL_pso;
class AK107_GL_PSO_DZ : AK_107_GL_pso
{
	displayName = $STR_DZ_WPN_AK107_GL_PSO1_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};
		
	class Attachments {};
	class ItemActions
	{
		class RemovePSO1
		{
			text = $STR_DZ_ATT_PSO1_RMVE;
			script = "; ['Attachment_PSO1',_id,'AK107_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK107_PSO_DZ'] call player_removeAttachment";
		};			
	};		
};

class AK_107_GL_kobra;
class AK107_GL_Kobra_DZ : AK_107_GL_kobra
{
	displayName = $STR_DZ_WPN_AK107_GL_KOBRA_NAME;
	
	magazines[] =
	{
		30Rnd_545x39_AK,
		75Rnd_545x39_RPK
	};
		
	class Attachments {};
	class ItemActions
	{
		class RemoveKobra
		{
			text = $STR_DZ_ATT_KOBRA_RMVE;
			script = "; ['Attachment_Kobra',_id,'AK107_GL_DZ'] call player_removeAttachment";
		};
		class RemoveGL
		{
			text = $STR_DZ_ATT_GP25_RMVE;
			script = "; ['Attachment_GP25',_id,'AK107_Kobra_DZ'] call player_removeAttachment";
		};			
	};	
};