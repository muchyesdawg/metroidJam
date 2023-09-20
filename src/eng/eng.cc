#include "eng.hpp"
engM::eng::eng(){
    phyEng = new phyMain(b2Vec2(0, -10));
    engE::physicsMain = phyEng;//add pointer to entities/entites.hpp
    
}
