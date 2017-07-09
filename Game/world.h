//
// World map. Creating it, refreshing it.
//

#ifndef CPPGAME_WORLD_H
#define CPPGAME_WORLD_H

#include <iostream>

class world
{
private:
    int m_xCord = 10;
    int m_yCord = 10;
    char m_place [10] = {'.','.','.','.','.','.','.','.','.','.'};

public:

    // Defaults
    world();
    ~world();
    int getxCord() const { return m_xCord; }
    int getyCord() const { return m_yCord; }
    char getPlace(int x) const { return m_place[x]; }
    void creation(world);
    std::string line = "______________________________";
};


#endif //CPPGAME_WORLD_H
