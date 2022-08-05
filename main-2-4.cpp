#include <iostream>

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main() {
    int integers[5] = {1, 2, 3, 4, 5};
    int length = 5;
    std::cout << sum_min_max(integers, length) << std::endl;
    return 0;
}