#include <iostream>
#include <string>

void string_2d_copy(std::string first[][2], std::string second[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            second[i][j] = first[i][j];
        }
    }
}