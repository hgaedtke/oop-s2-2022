#include <iostream>

int array_sum(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    if (sum < 0) {
        return 0;
    }

    return sum;
}