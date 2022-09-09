#include <iostream>
#include <string>
#include "Bike_yard.h"

Bike_yard::Bike_yard(){
    capacity = 0;
}

Bike_yard::Bike_yard(int capacity){
    max_capacity = 5;
}

int Bike_yard::get_total_stock_count(){
    return capacity;
}

int Bike_yard::get_stock_quantity(int code){
    int soh = 0;
    for (int i = 0; i < max_capacity; i++) {
        if (code == soh){
            soh++;
        }
    }
    return soh;
}

Bike Bike_yard::*get_current_stock_list(){
    return 0;
}

bool Bike_yard::add_stock(Bike b){
    if (max_capacity == capacity){
        return 0;
    }
    else{
        return 1;
    }
}

Bike_yard::~Bike_yard(){

}