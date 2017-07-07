//
// World map. Creating it, refreshing it.
//

#ifndef CPPGAME_WORLD_H
#define CPPGAME_WORLD_H


class world
{
private:
    int m_xCord = 10;
    int m_yCord = 10;
    int m_place [10] = {1,2,3,4,5,6,7,8,9,10};

public:
    world::World();
    world::~World();
    int getxCord() { return m_xCord; }
    int getyCord() { return m_yCord; }
    int getPlace(int x) { return m_place[x]; }
};


#endif //CPPGAME_WORLD_H
