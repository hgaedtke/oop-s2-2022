#include <string>
#include <iostream>

using namespace std;

extern string get_temp_phase(int temp);

int main() {
    int temp = 2;
    cout << "phase at" << temp << "K is: " << get_temp_phase(temp) << endl;
    return 0;
}