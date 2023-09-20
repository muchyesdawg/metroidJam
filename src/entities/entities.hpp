#pragma once

#include "../main.h"
#include "../eng.h"
namespace engE{
    static engM::phyMain* physicsMain;
    class entity{
        b2Body* body;
        
    };
    class character     : public entity{  };
    class player        : public character{  };
    void clBodDef();
    extern b2BodyDef bodyDef;
    extern b2PolygonShape polShape;
}
