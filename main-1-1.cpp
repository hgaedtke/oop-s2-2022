#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main() {
    int num, numbers;
    int length = 10;
    readNumbers();
    return 0;
}