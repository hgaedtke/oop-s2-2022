#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 2, 1};
    std::cout << "The array is: " << is_fanarray(array, 5) << std::endl;
    return 0;
}