#include "world.hpp"
using namespace engW;

manager::manager(string p){ 
    t = "";
    m.def();
    m.load(p);
    while(t != "EOF"){}
}
