//
// Created by emil on 2/6/23.
//

#include <iostream>
#include <iomanip>


int main() {
  std::string::size_type max_len = std::to_string(100*100).size();
  auto c_size = std::setw(max_len);

  std::cout << c_size << "i" << "\t" << c_size << "i*i" << std::endl;
  for (int i = 1; i <= 100; ++i) {
    std::cout << c_size << i << "\t" << c_size << i*i << std::endl;
  }

  return 0;
}
