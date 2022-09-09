#include <iostream>
#include <string>
#include "Bike.h"

using namespace std;

int main() {
    Bike a;
    Bike();
    a.brand = "Spider";
    a.code = 1;
    Bike(a.brand, a.code);
    return 0;
}