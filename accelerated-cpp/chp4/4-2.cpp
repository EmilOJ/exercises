//
// Created by emil on 2/6/23.
//

#include <iostream>
#include <iomanip>


int main() {
  int max_i = 1000;
  std::string::size_type max_len = std::to_string(max_i * max_i).size();
  auto c_size = std::setw(max_len);

  std::cout << c_size << "i" << "\t" << c_size << "i*i" << std::endl;
  for (int i = 1; i < max_i; ++i) {
    std::cout << c_size << i << "\t" << c_size << i*i << std::endl;
  }

  return 0;
}
