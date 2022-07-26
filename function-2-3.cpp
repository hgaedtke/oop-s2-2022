#include <iostream>

void two_five_nine(int array[], int n) {
    int num_twos = 0, num_fives = 0, num_nines = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                num_twos++;
                break;
            case 5:
                num_fives++;
                break;
            case 9:
                num_nines++;
                break;
        }
    }

    if (num_twos + num_fives + num_nines > 10) {
        std::cout << "BROKEN" << std::endl;
    }
    
    std::cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << std::endl;

}