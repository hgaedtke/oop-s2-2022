#include <string>

using namespace std;

class Bike{
    public:
    Bike();
    int create_code();
    string create_brand();
    Bike(string brand, int code);
    string get_brand();
    int get_code();
    ~Bike();
    int code;
    string brand;
};
