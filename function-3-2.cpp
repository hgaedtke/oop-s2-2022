#include <stdlib.h>
#include <iostream>

int median_array(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        int index = 0;
        int min = array[i];
        int max = array[i];
        for (int j = i + 1; j < n; j++) {
            if (array[j] < min) {
                index = j;
                max = min;
                min = array[j];
                array[i] = min;
                array[j] = max;
            }
        }
    }

    return array[2];
}