double sum_even(double array[], int n) {
    int even_sum = 0;
    
    if (n < 1) {
        return 0;
    }
    
    for (int i = 0; i < n; i += 2) {
        even_sum += array[i];
    }

    return even_sum;
}