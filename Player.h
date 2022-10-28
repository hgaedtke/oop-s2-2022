#include <iostream>
#include <string>

using namespace std;

class Player{

    public:
    virtual void move() = 0;
    string getMoves();
    char getMove();
    bool win(Player * opponent);
    char play;
    char compPlay;
    string rec_move;
    char opponent;
    char player;
};