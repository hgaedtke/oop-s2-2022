#include <iostream>

int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  for (int i = 0; i < length; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return -2;
    }
  }

  return 1;
}

bool is_palindrome(int integers[], int length) {
  if (sum_if_palindrome(integers, length) < 0) {
    return 0;
  }

  else {
    return 1;
  }
}

int sum_array_elements(int integers[], int length) {
  if (length <= 1) {
    return -1;
  }

  if (is_palindrome(integers, length) == 1) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += integers[i];
    }
    return sum;
  }
  
  else {
    return 0;
  }
}