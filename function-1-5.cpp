int size_of_array_arr() {
    int *arr = new int[3];
    int size = sizeof(*arr) * 3;
    return size;
}