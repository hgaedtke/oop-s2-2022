#include <iostream>

using namespace std;

int *array_pad(int *vals, int len) {
    int *pv = new int[len+2];
    for (int i = 0; i < len + 2; i++) {
        *pv++ = *vals++;
    }
    return pv;
}