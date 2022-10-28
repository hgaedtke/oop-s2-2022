#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int price) {
    Car::price = price;
    Car::emissions = 0;
}

int Car::get_price() {
    return price;
}

int Car::set_price(int price) {
    Car::price = price;
    return Car::price;
}

int Car::get_emissions() {
    return emissions;
}

int Car::set_emissions(int emissions) {
    Car::emissions = emissions;
    return Car::emissions;
}

int Car::get_vinNumber() {
    return vinNumber;
}

int Car::set_vinNumber(int vinNumber) {
    return Car::vinNumber;
}