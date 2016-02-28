/* Provides means for a client to send requests to the server and subsequently receive a reply.
Do not use this header on the server.

Author: Foxy*/

#include "Dictionary.hpp"

#ifndef _INCLUDE_GUARD_REQUEST
#define _INCLUDE_GUARD_REQUEST

assert (!isServer);

#define Request_IsInitialized() (!isNil "dz_owner")

//Waits for initialization to be completed. 
#define Request_WaitInit() waitUntil {Request_IsInitialized()}

/* Send request to server.
Parameters:
	string/scalar request
		Request type. Various request types can be defined by the server.
		See Request_Server.hpp.
	any args
		Argument(s) sent to the server.
	boolean reply
		Whether a reply is wanted from the server.

Return:
	Request object which or can be waited and provides the result once completed.
	See Request_Wait() and Request_GetResult().
	Returns nil if no reply is expected.

Example:
	_myRequest = Request_Send("GetDate", nil, true);
	Request_Wait(_myRequest);
	_myDate = Request_GetResult(_myRequest);
*/
#define Request_Send(request, args, reply) ([request, args, reply] call dz_fn_request_send)

//Determines whether the specified request is completed.
#define Request_IsDone(request) (count (request) > 2)

//Waits for the request to complete.
#define Request_Wait(request) waitUntil {Request_IsDone(request)}

//Retrieves the result of the request.
#define Request_GetResult(request) ((request) select 2)

#undef