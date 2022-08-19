#include <iostream>

int max_sub_sum(int *nums, int length) {
    if (length < 1) {
        return 0;
    }
  int max = 0;
  int sum = 0;
  for (int i = 1; i < length + 1; i++) {
    for (int j = 0; j < length - i + 1; j++) {
      for (int k = j; k < j + i; k++) {
        sum += nums[k];
        if (sum > max) {
          max = sum;
        }
      }
    }
    return max;
  }
}