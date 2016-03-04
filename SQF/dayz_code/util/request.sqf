#include "Util.hpp"
#include "Request.hpp"
#include "Array.hpp"
#include "Mutex.hpp"
#include "Dictionary.hpp"
#include "Debug.hpp"

#define Request_New(id) [dz_owner, id]
#define Request_GetOwner(request) ((request) select 0)
#define Request_GetID(request) ((request) select 1)
#define Request_SetResult(request, result) ((request) set [2, result])
#define Request_GetResult(request) ((request) select 2)

#define Reply_GetID(reply) ((reply) select 0)
#define Reply_GetResult(reply) ((reply) select 1)

#define Request_Server_GetFunc(request) ((request) select 2)
#define Request_Server_GetArgs(request) ((request) select 3)
#define Request_Server_ExpectsReply(request) (Request_GetID(request) >= 0)

//TODO: make work for non-dedicated server as well?

if (!isServer) then //CLIENT
{
	dz_request_mutex = Mutex_New();
	dz_request_list = [];
	
	//Send request
	dz_fn_request_send = // [type, args, reply]
	{
		Debug_Assert(Request_IsInitialized());
		Debug_CheckParams3(Array_New2("SCALAR","STRING"),"ANY","BOOL");
		
		private ["_id", "_request"];
		
		//Expecting reply
		if (_this select 2) exitWith
		{
			//Acquire lock
			Mutex_WaitLock_Fast(dz_request_mutex);
			
			//Find first valid id and assign the new request to it
			_id = dz_request_list find 0;
			if (_id < 0) then { _id = count dz_request_list; };
			_request = [dz_owner, _id];
			dz_request_list set [_id, _request];
			
			Mutex_Unlock(dz_request_mutex);
			
			Util_PublicVariableServer_Fast("dz_pvs_request", _request + Array_New2(_this select 0, _this select 1));
			
			/*//send request to server
			dz_pvs_request = _request + [_this select 0, _this select 1];
			publicVariableServer "dz_pvs_request";*/
			
			//return the request object
			_request
		};
		
		//Not expecting reply
		
		Util_PublicVariableServer_Fast("dz_pvs_request", Array_New4(dz_owner, -1, _this select 0, _this select 1));
		
		/*//Acquire lock
		Mutex_WaitLock_Fast(dz_request_mutex);
		
		//Send request to server
		dz_pvs_request = Request_New(-1) + [_this select 0, _this select 1];
		publicVariableServer "dz_pvs_request";
		
		//Unlock
		Mutex_Unlock(dz_request_mutex);*/
		
		//Return nil
		nil
	};
	
	//receive reply
	"dz_pvc_request" addPublicVariableEventHandler
	{
		_id = Reply_GetID(_this select 1);
		
		//retrieve and remove request from global list
		_request = dz_request_list select _id;
		dz_request_list set [_id, 0];
		
		//set result in request object
		Request_SetResult(_request, Reply_GetResult(_this select 1));
	};
}
else //SERVER
{
	//dz_request_mutex = Mutex_New();
	dz_request_handlers = Dictionary_New();
	
	//receive request
	"dz_pvs_request" addPublicVariableEventHandler
	{
		//request handler [handler, async]
		_handler = Dictionary_Get(dz_request_handlers, Request_Server_GetFunc(_this select 1));
		
		//No handler found
		if (isNil "_handler") exitWith
		{
			diag_log format ["ERROR: Received an invalid request:%1 ClientID:%2",
				Request_Server_GetFunc(_this select 1),
				Request_GetOwner(_this select 1) ];
			
			//Send reply to prevent client deadlock
			if (Request_Server_ExpectsReply(_this select 1)) then
			{
				Util_PublicVariableClient_Fast("dz_pvc_request", DEFAULT_REPLY, Request_GetOwner(_this select 1));
				
				//Return default value (empty array)
				/*_temp = dz_pvc_request;
				dz_pvc_request = DEFAULT_REPLY;
				Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
				dz_pvc_request = _temp;*/
			};
		};
		
		//Async
		if (_handler select 1) then
		{
			//Spawn a new thread to handle request asynchronously
			[_this select 1, _handler select 0] spawn
			{
				__reply = Request_Server_ExpectsReply(_this select 0);
				_result = Request_Server_GetArgs(_this select 0) call (_this select 1);
				
				if (!__reply) exitWith {};
				
				_result = [Request_GetID(_this select 0), _result];
				
				Util_PublicVariableClient_Fast("dz_pvc_request", _result, Request_GetOwner(_this select 0));
				
				/*//Acquire lock to prevent race conditions with other asynchronous handlers
				Mutex_WaitLock_Fast(dz_request_mutex);
				
				//Send reply
				dz_pvc_request = _result;
				Request_GetOwner(_this select 0) publicVariableClient "dz_pvc_request";
				
				//Unlock
				Mutex_Unlock(dz_request_mutex);*/
			};
		}
		else //Sync
		{
			//Whether client expects a reply.
			//If the handler knows that the player has disconnected they can set this to false to prevent replying.
			__reply = Request_Server_ExpectsReply(_this select 1);
			
			//Execute handler
			_result = Request_Server_GetArgs(_this select 1) call (_handler select 0);
			
			if (!__reply) exitWith {};
			
			_result = [Request_GetID(_this select 1), _result];
			
			Util_PublicVariableClient_Fast("dz_pvc_request", _result, Request_GetOwner(_this select 1));
			
			//store previous value in case it's being used by a scheduled thread
			/*_temp = dz_pvc_request;
			
			//Send reply
			dz_pvc_request = _result;
			Request_GetOwner(_this select 1) publicVariableClient "dz_pvc_request";
			
			//restore previous value
			dz_pvc_request = _temp;*/
		};
	};
};