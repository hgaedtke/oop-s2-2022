bool is_descending(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    
    for (int i = 1; i < n; i++) {
        if (array[i] > array [i-1]) {
            return 0;
        }
    }
    
    return 1;
}