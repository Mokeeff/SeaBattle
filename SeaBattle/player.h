#ifndef PLAYER_H
#define PLAYER_H

#include <ships.h>


class Player{
public:
    Player();
    int single, two, three, four;
    int field[10][10];
    bool ready;
    void nulling();
    void nullingfield();
    bool near_cells(int x, int y, int type, bool horiz);
};

#endif // PLAYER_H
