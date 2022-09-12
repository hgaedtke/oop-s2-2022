#include <iostream>
#include <string>
#include "Bike.h"

using namespace std;

Bike::Bike(){
    code = 0;
    brand = "";
}

int Bike::create_code(){
    cin >> code;
    return code;
}

string Bike::create_brand(){
    cin >> brand;
    return brand;
}

Bike::Bike(string brand, int code){
    brand = create_brand();
    code = create_code();
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