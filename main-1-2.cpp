#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    int array[5] = {0, 1, 0, 0, 0};
    std::cout << "The mean is: " << array_mean(array, 0) << std::endl;
    return 0;
}