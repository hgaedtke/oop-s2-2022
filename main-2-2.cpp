#include <iostream>

extern int max_sub_sum(int *nums, int length);

int main() {
    int nums[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = 8;
    std::cout << max_sub_sum(nums, length) << std::endl;
}