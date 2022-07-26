#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << "Smallest number is: " << min_element(array, 5) << std::endl;
    return 0;
}