#include <iostream>

extern int *array_pad(int *vals, int len);

int main() {
    int vals[] = {1, 2, 3, 4, 5};
    int *pv = array_pad(vals, 5);
}