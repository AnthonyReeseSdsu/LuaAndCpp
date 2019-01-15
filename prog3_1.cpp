
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

extern "C"{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

using namespace std;

int main(int argc, char* argv[]){
    printf("Assignment #3-1, Anthony Reese, areese@sdsu.edu\n");

    string filename = argv[1];

    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, filename.c_str());

}
