//
// Created by emil on 2/6/23.
//

//
// Created by emil on 2/6/23.
//

#include <vector>
#include <iostream>

int main() {
  std::vector<double> vec = {1.0, 2.2, 4.0, 10.8};

  double sum = 0.0;
  for (const auto &item: vec) {
    sum += item;
  }

  std::cout << "Average: " << sum / vec.size() << std::endl;

  return 0;
}

