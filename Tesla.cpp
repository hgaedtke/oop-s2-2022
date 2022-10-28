#include "Tesla.h"
#include <iostream>

void Tesla::drive(int kms){
    batteryPercentage = 100 - (kms * 0.2);
    if (batteryPercentage > 0) {
        emissions = kms * 74;
    }
    if (batteryPercentage < 0) {
        batteryPercentage = 0;
        emissions = 37000;
    }
}

Tesla::Tesla(char model, int price){
    Tesla::model = model;
    Car::price = price;
    Car::emissions = 0;
    Tesla::batteryPercentage = 100;
    int index = 0;
    vinNumber = 1000001 + index;
    index++;
}

void Tesla::chargeBattery(int mins){
    batteryPercentage += mins * 0.5;
    if (batteryPercentage > 100) {
        batteryPercentage = 100;
    }
}

char Tesla::get_model() {
    return model;
}

int Tesla::get_batteryPercentage() {
    return batteryPercentage;
}

