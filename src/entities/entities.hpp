#include "../main.h"
namespace engE{
    class entity{
        b2Body* body;
        
    };
    class character     : public entity{  };
    class player        : public character{  };
    void clBodDef();
    extern b2BodyDef bodyDef;
    extern b2PolygonShape polShape;
    extern  b2World world;
}
