int size_of_variable_star_t(){
    int a, *p;
    p = &a;
    int size = sizeof(p);
    return size;
}