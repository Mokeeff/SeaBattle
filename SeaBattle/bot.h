#ifndef BOT_H
#define BOT_H


class Bot
{
public:
    Bot();
    int single, two, three, four;
    int field[10][10] = {
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 2, 0, 0, 0, 0, 3, 3, 3, 0, 0},
        { 2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 2, 2, 0, 0, 0, 0},
        { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 2, 0, 0, 0, 0, 0, 0, 1}
    };
    bool ready;
    void nulling();
    void nullingfield();
    bool near_cells(int x, int y, int type, bool horiz);
};

#endif // BOT_H
