#include <iostream>
#include <string>

using namespace std;

string get_temp_phase(int temp) {
    if (temp <= 273) {
        return "ice";
    }
    if (temp > 273 && temp <= 373) {
        return "liquid";
    }
    if (temp > 373 && temp <= 4700) {
        return "gas";
    }
    else {
        return "decomposed";
    }
}