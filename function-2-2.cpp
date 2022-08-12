#include <iostream>
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
    int number = 0;
    for (int i = 0; i < number_of_digits; i++) {
        number += binary_digits[i] * pow(2, number_of_digits - i - 1);
    }
    return number;
}




// 1
// 0
// 4
// 0
// 16