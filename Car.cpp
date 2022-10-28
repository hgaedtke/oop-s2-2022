#include "Car.h"
#include <iostream>

using namespace std;

int Car::get_price() {
    return price;
}

int Car::set_price(Car * price) {
    return Car::price;
}

int Car::get_emissions() {
    return emissions;
}

int Car::set_emissions(Car * emissions) {
    return Car::emissions;
}

int Car::get_vinNumber() {
    return vinNumber;
}

int Car::set_vinNumber(Car * vinNumber) {
    return Car::vinNumber;
}