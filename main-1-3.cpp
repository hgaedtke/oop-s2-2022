#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {0, 0, 0, 0, 0};
    int number = 0, n = 5;
    std::cout << "Number of elements equal to " << number << " : " << num_count(array, n, number) << std::endl;
    return 0;
}