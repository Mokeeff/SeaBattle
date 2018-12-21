#include "player.h"

Player::Player()
{

}

void Player::start(){
    single = 4; two = 3; three = 2; four = 1;
}

/*if(type == 1){
    if(field[x + i][y + j] != 0){
        return false;
    }
}
else{
    if(field[x + i][y + j] != 0 || field[x + i][y + j] != type){
        return false;
    }
}*/

bool Player::check_field(){
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            if(field[i][j] == 1 || field[i][j] == 2 || field[i][j] == 3 || field[i][j] == 4){
                if(near_cells(i, j, field[i][j]) == false){
                    return false;
                }
            }
        }
    }
    return true;
}

bool Player::near_cells(int x, int y, int type){
    int length = type - 1, px = 0, py = 0;
    do{
        for(int i = -1; i<=1; i++){
            for(int j = -1; j<=1; j++){
                if (i !=0 || j != 0){
                    if (x + i >= 0 && x + i <= 9 && y + j >= 0 && y + j <= 9){
                        if(field[x + i][y + j] != 0){
                            if(field[x + i][y + j] != type){
                                return false;
                            }
                            if(field[x + i][y + j] == type){
                                px = i; py = j;
                                length--;
                            }
                        }
                    }
                }
            }
        }
        x = x + px;
        y = y + py;
    }while(length > 0);
    return true;
}


