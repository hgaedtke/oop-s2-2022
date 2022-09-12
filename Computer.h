#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Computer: public Player{
    public:
    int num_moves;
    Computer(string letter);
    void move();
};