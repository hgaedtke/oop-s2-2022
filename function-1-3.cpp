#include <iostream>

int num_count(int array[], int n, int number) {
    int num_elem = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            num_elem++;
        }
    }
    if (n < 1) {
        return 0;
    }

    return num_elem;
}