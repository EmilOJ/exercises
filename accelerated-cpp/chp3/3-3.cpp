//
// Created by emil on 2/6/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::string> data = {"hej", "igen", "hej", "a", "b", "a", "hej"};
  std::sort(data.begin(), data.end());

  int cnt = 1;
  for (int i = 0; i < data.size(); ++i) {
    if (data[i] == data[i+1]) {
      cnt++;
    } else {
      std::cout << "\"" << data[i] << "\": " << cnt << std::endl;
      cnt = 1;
    }
  }

  return 0;
}
