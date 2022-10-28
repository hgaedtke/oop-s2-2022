#include "Car.h"

class Tesla: public Car {

public:
    Tesla();
    Tesla(char model, int price);

    char model;
    float batteryPercentage;

    void chargeBattery(int mins);
    void drive(int kms);

    char get_model();
    float get_batteryPercentage();
    void set_model();
    void set_batteryPercentage();

private:
    static int nextVinNumber;

};