#include <iostream>
#include <string>
#include "Bike.h"

using namespace std;

Bike::Bike(){
    int code = 0;
    string brand = "";
}

Bike::Bike(string brand, int code){
    cin >> code;
    cin >> brand;
}

string Bike::get_brand(){
    return brand;
}

int Bike::get_code(){
    return code;
}

Bike::~Bike(){
    delete &code;
    delete &brand;
}