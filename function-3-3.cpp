#include <iostream>

double weighted_average(int array[], int n) {
    double weight_aver = 0;
    for (int i = 0; i < n; i++) {
        double value = array[i];
        double quantity = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                quantity++;
            }
        }
        weight_aver = weight_aver + value * quantity / n;
    }

    return weight_aver;
}