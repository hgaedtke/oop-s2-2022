#include "Car.h"
#include <iostream>

using namespace std;

void Car::drive(int kms) {

}

Car::Car(){

}

int Car::get_price() {
    return price;
}

void Car::set_price(int price) {
    Car::price = price;
}

int Car::get_emissions() {
    return emissions;
}

void Car::set_emissions(int emissions) {
    Car::emissions = emissions;
}

int Car::get_vinNumber() {
    return vinNumber;
}

void Car::set_vinNumber(int vinNumber) {
    Car::vinNumber = vinNumber;
}