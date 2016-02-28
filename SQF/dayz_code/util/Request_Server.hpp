/*	See Request.hpp
Do not use this header on the client.

Author: Foxy
*/

#include "Array.hpp"
#include "Dictionary.hpp"

#ifndef _INCLUDE_GUARD_REQUEST
#define _INCLUDE_GUARD_REQUEST

assert (isServer);

/* Registers a request handler.
Parameters:
	string/scalar id
		String or number used as an identifier for the function.
		String identifiers are case sensitive.
	code handler
		Function that handles the request.
		If handler return nil an empty array is instead sent to the client.
	boolean async
		Indicates whether the request should be handled asynchronously (handler is spawned).
	
Example:
	Request_RegisterHandler("GetDate", {my_global_date_variable}, false);
	Request_RegisterHandler("GetObjectOwner", {owner _this}, false);
	Request_RegisterHandler("DoSomething", _my_complicated_asynchronous_handler, true);
*/
#define Request_RegisterHandler(id, handler, async) Dictionary_Add(dz_request_handlers, id, Array_New2(handler, async))

#undef