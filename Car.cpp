#include "Car.h"
#include <iostream>

using namespace std;

int Car::get_price() {
    return price;
}

int Car::set_price() {
    cin >> price;
    return price;
}

int Car::get_emissions() {
    return emissions;
}

int Car::set_emissions() {
    cin >> emissions;
    return emissions;
}

int Car::get_vinNumber() {
    return vinNumber;
}

int Car::set_vinNumber() {
    cin >> vinNumber;
    return emissions;
}