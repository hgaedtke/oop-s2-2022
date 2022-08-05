#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main() {
    int integers[5] = {-1, 1, 0, 0, -1};
    int length = 5;
    std::cout << sum_if_palindrome(integers, length) << std::endl;
    return 0;
}