#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int secondarray[5] = {2, 3, 4, 5, 6};
    int n = 5;
    std::cout << "Sum of two arrays: " << sum_two_arrays(array, secondarray, n) << std::endl;
    return 0;
}