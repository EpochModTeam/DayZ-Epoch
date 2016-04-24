/* Defines member functions for a dictionary class.
Can be used to associate data with a key.
See https://en.wikipedia.org/wiki/Associative_array

Author: Foxy
*/

#ifndef _INCLUDE_GUARD_DICTIONARY
#define _INCLUDE_GUARD_DICTIONARY

//Initializes a new dictionary
#define Dictionary_New() [0, [], []]

//Adds a key value pair to the specified dictionary.
#define Dictionary_Add(d, key, value) ([d, key, value] call dz_fn_dictionary_add)

//Removes a value from the dictionary using specified key.
#define Dictionary_Remove(d, key) ([d, key] call dz_fn_ictionary_remove)

//Retrieves a value from the dictionary using specified key.
#define Dictionary_Get(d, key) ([d, key] call dz_fn_dictionary_get)

//Determines whether the dictionary contains the specified key.
#define Dictionary_ContainsKey(d, key) ([d, key] call dz_fn_dictionary_containsKey)

//Rearranges the internal data structure of the dictionary to free unused memory.
#define Dictionary_Compact(d) ((d) call dz_fn_dictionary_compact)

#endif