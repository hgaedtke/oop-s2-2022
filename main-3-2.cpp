#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int array[5] = {-1, 5, 2, 1, 4};
    std::cout << "The median of array is: " << median_array(array, 5) << std::endl;
    return 0;
}