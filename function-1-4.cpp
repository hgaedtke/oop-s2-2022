#include <iostream>

void print_scaled(int array[3][3], int scale) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < scale - 1) {
                std::cout << array[i][j] * scale << " ";
            }
            if (j >= scale - 1) {
                std::cout << array[i][j] * scale << std::endl;
            }
        }
    }
}