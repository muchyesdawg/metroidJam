#include "entities.hpp"
using namespace engE;
b2BodyDef engE::bodyDef;
b2PolygonShape engE::polShape;
b2World engE::world;
void clBodDef(){
    engE::bodyDef.angle=0;
    engE::bodyDef.allowSleep=false;

}
