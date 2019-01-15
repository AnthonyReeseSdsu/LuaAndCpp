
#include <string>
#include <iostream>

extern "C"{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

using namespace std;

int main(int argc, char *argv[]) {

    cout <<"Assignment #3-3,Anthony Reese,areese@sdsu.edu" << endl;

    lua_State *L = luaL_newstate(); 
    luaL_openlibs(L);
    luaL_dofile(L,argv[1]);        

    string input = "";              

    getline(cin,input);

    const char* pushStr = input.c_str();

    lua_getglobal(L, "InfixToPostfix"); 
    lua_pushstring(L, pushStr);         
    lua_pcall(L, 1, 1, 0);  

    cout << lua_tostring(L, -1);  


    lua_close(L);

    return 0;

}
