#include <iostream>

void printNumbers(int *numbers, int length) {
    if (length < 0) {
        return;
    }

    else {
        for (int i = 0; i < length; i++) {

        }
    }

}

int *readNumbers() {
    int length = 10;
    int num[length];
    for (int i = 0; i < 10; i++) {
        std::cin >> num[i];
    }
    printNumbers(num, length);
    return 0;
}