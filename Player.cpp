#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

void Player::move(){
    
}

string Player::getMoves(){
    string play_str;
    cin >> play_str;
    rec_move = play_str;
    return play_str;
}

char Player::getCompMove(){
    compPlay = opponent;
    return compPlay;
}

char Player::getMove(){
    return play;
}

bool Player::win(Player * opponent){
    if (getMove() == getCompMove()){
        return 0;
    }
    else {
        return 1;
    }
}