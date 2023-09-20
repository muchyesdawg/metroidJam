#pragma once
#include "../../main.h"

namespace engM{
    class phyMain{
        private:
            static b2Vec2 grav;
        public:
            static b2World world;
            phyMain(b2Vec2 g);
    };
};
