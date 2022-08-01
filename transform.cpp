#include <iostream>
void convert(unsigned int value) {
  int array[32] = {0};

  for (int i = 31; i > -1 && value > 0; i--) {
    array[i] = value % 2;
    value = value / 2;
  }

  for (int i = 0; i < 32; i++) {
    std::cout << array[i];
  }

  std::cout << std::endl;
}

int main() {
    unsigned int value = 21;
    convert(value);
}