#include <iostream>

double array_mean(int array[], int n) {
    double mean = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    mean = sum / n;

    if (n < 1) {
        return 0;
    }

    return mean;
}