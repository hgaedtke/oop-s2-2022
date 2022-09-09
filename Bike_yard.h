#include <iostream>
#include <string>
#include "Bike.h"

using namespace std;

class Bike_yard{
    public:
    int capacity;
    int max_capacity;
    Bike_yard();
    Bike_yard(int capacity);
    int get_total_stock_count();
    int get_stock_quantity(int code);
    Bike *get_current_stock_list();
    bool add_stock(Bike b);
    ~Bike_yard();
};