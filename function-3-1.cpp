bool is_more_positive(int vals[], int length) {
    int less1 = 0;
    int big1 = 0;
    for (int i = 0; i < length; i++) {
        if (vals[i] > 0) {
            big1++;
        }
        if (vals[i] < 0) {
            less1++;
        }
    }
    if (big1 >= less1) {
        return true;
    }
    else {
        return false;
    }
}