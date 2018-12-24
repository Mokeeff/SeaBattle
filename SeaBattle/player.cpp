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
    for(int m = 1; m <= length; m++){
        for(int w = -1; w <= 1; w++){
            for(int h = -1; h <= 1; h++){
                if (x + h >= 0 && x + h <= 9 && y + w >= 0 && y + w <= 9){
                    if(field[x + h][y + w] != 0){
                        return false;
                    }
                }
            }
        }
        x = x + px;
        y = y + py;
    }
    return true;
}


