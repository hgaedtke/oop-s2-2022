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

protected:
int get_price();
int get_emissions();
int get_vinNumber();
int set_price();
int set_emissions();
int set_vinNumber();
};