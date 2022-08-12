#include <iostream>

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main() {
    int integers[5] = {1, 2, 3, 2, 1};
    int length = 5;
    std::cout << palindrome_sum(integers, length) << std::endl;
    return 0;
}