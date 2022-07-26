bool is_fanarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] != array[n-1-i]) {
            return 0;
        }
    }
    for (int i = 1; i < n / 2 + 1; i++) {
        if (array[i] < array[i-1]) {
            return 0;
        }
    }

    return 1;
}