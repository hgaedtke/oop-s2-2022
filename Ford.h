#include "Car.h"

class Ford: public Car {
    public:

    Ford();
    Ford(int badgeNumebr, int price);

    int badgeNumber;
    float litresOfFuel;

    void refuel(int litres);

};