#ifndef PLAYER_H
#define PLAYER_H

#include <ships.h>


class Player{
public:
    Player();
    int single, two, three, four;
    int field[10][10];
    bool ready;
    void start();
    bool near_cells(int x, int y, int type);
    bool check_field();
};

#endif // PLAYER_H
