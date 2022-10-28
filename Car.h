#include <iostream>

using namespace std;

class Car{

public:
virtual void drive(int kms);
Car();
Car(int price);
int price;
int vinNumber;
int emissions;
int cost;
int get_price();
int get_emissions();
int get_vinNumber();
void set_price(int price);
void set_emissions(int emissions);
void set_vinNumber(int vinNumber);
};