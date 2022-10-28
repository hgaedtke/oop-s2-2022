#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

Computer::Computer(string letter){
    play = letter[0];
}

void Computer::move(){
    num_moves++;
}