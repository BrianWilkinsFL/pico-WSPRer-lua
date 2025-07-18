#include "lua.h"
#include "lauxlib.h"

int l_read_sensors(lua_State *L) {
    // call into your C backend, return nothing
    return 0;
}

void register_lua_bindings(lua_State *L) {
    lua_register(L, "read_sensors", l_read_sensors);
    // add more as needed
}
