#include <iostream>

int sum_diagonal(int array[4][4]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        count += array[i][i];
    }

    return count;
}