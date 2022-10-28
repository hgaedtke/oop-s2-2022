#include <iostream>

using namespace std;

class Car{

public:
virtual void drive(int kms);
Car(int price);
int price;
int vinNumber;
int emissions;
int cost;
int get_price();
int get_emissions();
int get_vinNumber();
int set_price(int price);
int set_emissions(int emissions);
int set_vinNumber(int vinNumber);
};