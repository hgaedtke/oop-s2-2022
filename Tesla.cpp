#include "Tesla.h"
#include <iostream>

void Tesla::drive(int kms){
    batteryPercentage = kms * -0.2;
    if (batteryPercentage > 0) {
        emissions += 74;
    }
    if (batteryPercentage < 0) {
        batteryPercentage = 0;
    }
}

Tesla::Tesla(char model, int price){
    Tesla::model = model;
    Car::price = price;
    Tesla::batteryPercentage = 100;
    vinNumber += 100001;
}

void Tesla::chargeBattery(int mins){
    batteryPercentage += mins * 0.5;
}

char Tesla::get_model() {
    return model;
}

int Tesla::get_batteryPercentage() {
    return batteryPercentage;
}

