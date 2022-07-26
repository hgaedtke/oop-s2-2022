#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 100;
    std::cout << "Even numbers between 1 and " << number << " : " << count_evens(number) << std::endl;
    return 0;
}