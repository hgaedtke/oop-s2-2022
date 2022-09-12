#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

void Person::move() {
  while (player != 'r', 'R', 'p', 'P', 's', 'S') {
    cin >> player;
    if (player != 'r', 'R', 'p', 'P', 's', 'S') {
      cout << "Move unavailable" << endl;
    }
  }
  rec_move + player;
}