#include <iostream>

using namespace std;

int *array_pad(int *vals, int len) {
    int length = len + 2;
    int pv[7] = {0};
    pv[0] = vals[0];
    for (int i = 0; i < len; i++) {
        pv[i + 1] = vals[i];
    }
    pv[6] = vals[4];
    return pv;
}