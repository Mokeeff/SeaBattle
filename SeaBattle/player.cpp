#include "player.h"

Player::Player()
{

}

void Player::nulling(){
    single = 4; two = 3; three = 2; four = 1;
}

void Player::nullingfield()
{
    for(int i = 0; i < 10; i++)
        for(int k = 0; k < 10; k++)
            field[i][k] = 0;
}

bool Player::near_cells(int x, int y, int length, bool horiz){
    int px = 0, py = 0;
    if(horiz == true){ px = 1;}
    else{ py = 1; }
    for(int i10 = 1; i10 <= length; i10++){
        if(field[x][y] != 0){
            return false;
        }
        for(int k2 = -1; k2 <= 1; k2++){
            for(int j2 = -1; j2 <= 1; j2++){
                if (k2 !=0 || j2 != 0){
                    if (x + k2 >= 0 && x + k2 <= 9 && y + j2 >= 0 && y + j2 <= 9){
                        if(field[x + j2][y + k2] != 0){
                            return false;
                        }
                    }
                }
            }
        }
        x = x + px;
        y = y + py;
    }
    return true;
}


