#pragma once
#include "../world.h"
namespace engW{
    class screen{
        public:
            screen();
        private:
    };
    class world
    {
        public:
            world();
        private:
    };
    class manager{
        public:
            manager(string p);
        private:
            methods m;
            vector<world> loads;
    };
    namespace{
        string t;
    }
}
