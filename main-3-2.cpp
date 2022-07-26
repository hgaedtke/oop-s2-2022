#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int array[6] = {3, 5, 2, 1, 4, 6};
    std::cout << "The median of array is: " << median_array(array, 6) << std::endl;
    return 0;
}