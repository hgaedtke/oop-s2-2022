#include <iostream>

extern bool is_more_positive(int vals[], int length);

int main() {
    int vals[] = {-1, 1, -2, 2, -3, 3, 0, 0, -5};
    int vals2[] = {1, 1, 1, 1, -1, -1, -1};
    int vals_length = 9;
    int vals2_length = 7;
    bool res = is_more_positive(vals, vals_length);
    bool res2 = is_more_positive(vals2, vals2_length);
}