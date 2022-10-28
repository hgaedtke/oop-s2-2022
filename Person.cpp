#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

void Person::move() {
  while (player != 'r') {
    cin >> player;
    if (player != 'r') {
      cout << "Move unavailable" << endl;
    }
  }
  rec_move + player;
}