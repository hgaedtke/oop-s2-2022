#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

Computer::Computer(string letter){
    opponent = 'r';
}

void Computer::move(){
    num_moves++;
}