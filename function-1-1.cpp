#include <iostream>

using namespace std;

int *array_pad(int *vals, int len) {
    int *pv = new int[len+2];
    for (int i = 0; i < len; i++) {
        if (i == 0 || i == len) {
            *pv++ = vals[i];
        }
        *pv++ = vals[i];
    }
    return pv;
}