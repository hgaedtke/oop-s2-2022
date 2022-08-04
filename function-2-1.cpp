#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  std::string::size_type size;
  int i_number = std::stoi(decimal_number, &size);

  int array[32] = {0};

  for (int i = 31; i > -1 && i_number > 0; i--) {
    array[i] = i_number % 2;
    i_number = i_number / 2;
  }

  for (int i = 0; i < 32; i++) {
    std::cout << array[i];
  }

  std::cout << std::endl;
}