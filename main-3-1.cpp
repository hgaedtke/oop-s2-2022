#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person b;
    // Player* b = new Person();
    Player* c = new Computer("r");
    b.move();
    if (b.win(c) == 0){
        cout << "You lost HAHAHHAHA" << endl;;
    }
    else {
        cout << "You won :P" << endl;
    }
}