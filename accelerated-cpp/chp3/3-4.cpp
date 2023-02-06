//
// Created by emil on 2/6/23.
//

#include <iostream>
#include <vector>
#include <limits>


int main() {
  std::vector<std::string> data = {"hej", "igennn", "hej", "a", "b", "a", "hej", "z"};

  int smallest = std::numeric_limits<int>::max();
  int largest = 0;
  for (const auto & i : data) {
    if (i.size() > largest) {
      largest = i.length();
    }

    if (i.size() < smallest) {
      smallest = i.length();
    }
  }

  std::cout << "Smallest: " << smallest << std::endl;
  std::cout << "Largest: " << largest;

  return 0;
}