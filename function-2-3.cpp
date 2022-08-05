#include <iostream>

bool is_palindrome(int integers[], int length) {
  for (int i = 0; i < length; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return 0;
    }
  }
  
  return 1;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  if (is_palindrome(integers, length) == 0) {
    return -2;
  }

  else {
    return sum_array_elements(integers, length);
  }
}