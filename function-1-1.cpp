int *array_pad(int *vals, int len) {
    int pv[7] = {0}; 
    pv[0] = vals[1];
    pv[6] = vals[5];
    return pv;
}