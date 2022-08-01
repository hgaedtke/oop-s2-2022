#include <iostream>

void addition(int array_1[32], int array_2[32]) {
    int carry = 0;
    int new_array[32] = {0};
    for (int i = 31; i > -1; i--) {
        carry += array_1[i] + array_2[i];
        new_array[i] = carry % 2;
        carry = carry / 2;
    }
}

int convert(unsigned int value) {
  int array[32] = {0};

  for (int i = 31; i > -1 && value > 0; i--) {
    array[i] = value % 2;
    value = value / 2;
  }

  return array[32];
}

int main() {
    int array_1[32] = {convert(18)};
    int array_2[32] = {convert(18)};

    return 0;
}