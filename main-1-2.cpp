#include <iostream>

extern int is_identity(int array[10][10]);

int main() {
    int array[10][10] = {0};
    for (int i = 0; i < 10; i++) {
        array[i][i] = 1;
    }
    std::cout << is_identity(array) << std::endl;
    return 0;
}