#include <iostream>

using namespace std;

extern bool is_more_positive(int vals[], int length);

int main() {
    int vals[] = {1, 1, 2, 2, -3, 3, 0, 0, -5};
    int len = 9;
    bool res = is_more_positive(vals, len);
    cout << res;
}