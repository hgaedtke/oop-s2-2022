#include <iostream>

int sum = 0;

bool is_array_palindrome(int integers[], int length) {
    for (int i = 0; i < length; i++) {
        if (integers[i] != integers[length - i - 1]) {
            return false;
        }
    }
return true;
}

int sum_integers(int integers[], int length) {
    for (int i = 0; i < length; i++) {
        sum += integers[i];
    }
}

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    if (is_array_palindrome == 0) {
        return -2;
    }

    if (is_array_palindrome == 1) {
        return sum;
    }
    
}