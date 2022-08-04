#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

int main() {
    std::string decimal_number = "40c3";
    print_binary_str(decimal_number);
    return 0;
}