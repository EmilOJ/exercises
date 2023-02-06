//
// Created by emil on 2/6/23.
//

#include <istream>
#include <vector>
#include <iostream>
#include <algorithm>


std::istream& read_words(std::istream& is, std::vector<std::string>& vec) {
  std::string word;
  if (is) {
    while (is >> word) {
      if (word == "end") {
        break;
      }
      vec.push_back(word);
    }
  }

  return is;
}

int main() {
  std::vector<std::string> vec;
  read_words(std::cin, vec);

  // count number of words in input
  std::cout << "Number of words: " << vec.size() << std::endl;

  // count how many times each word occur
  std::sort(vec.begin(), vec.end());
  int cnt = 1;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] == vec[i+1]) {
      cnt++;
    } else {
      std::cout << "\"" << vec[i] << "\": " << cnt << std::endl;
      cnt = 1;
    }
  }

  return 0;
}

