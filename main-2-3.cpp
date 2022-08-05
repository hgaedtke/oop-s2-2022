#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main() {
    int integers[5] = {1, 2, 3, 2, 1};
    int length = 5;
    sum_if_palindrome(integers, length);
    std::cout << sum_array_elements(integers, length) << std::endl;
    return 0;
}