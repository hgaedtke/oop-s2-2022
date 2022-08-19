#include <iostream>

void multiples_of_seven(int *nums, int length) {
    for (int i = 0; i < length; i++) {
        if (*(++nums) % 7 == 0) {
            std::cout << *(++nums) << std::endl;
        }
    }
}