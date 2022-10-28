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

char Player::getMove(){
    return play;
}

bool Player::win(Player * opponent){
    if (play == opponent->getMove()){
        return 0;
    }
    else {
        return 1;
    }
}