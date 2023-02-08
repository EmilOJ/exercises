//
// Created by emil on 2/8/23.
//

#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>


std::vector<std::string> split(const std::string& s) {
  std::vector<std::string> ret;
  typedef std::string::size_type string_size;
  string_size i = 0;

  while (i != s.size()) {
    while(i != s.size() && std::isspace(s[i]))
      ++i;

    string_size j = i;
    while (j != s.size() && !std::isspace(s[j]))
      ++j;

    if (i != j) {
      ret.push_back(s.substr(i, j - i));
      i = j;
    }
  }

  return ret;
}

int main() {
  std::vector<std::string> data = {"the quick brown fox", "jumped over the fence"};

  std::vector<std::vector<std::string>> permutations;
  std::string::size_type max_len(0);
  for (const auto &item: data) {
    if (item.size() > max_len)
      max_len = item.size();

    auto words = split(item);
    words.push_back("\n");
    permutations.push_back(words);


    for (int i = 0; i < words.size()-1; ++i) {
      words.insert(words.begin(), words[words.size()-1]);
      words.pop_back();

      if (words[0] == "\n")
        continue;

      permutations.push_back(words);
    }


  }
  std::sort(permutations.begin(), permutations.end());

  auto c_size = std::setw(max_len);
  for (const auto &item: permutations) {
    auto word = item.begin();
    std::string col1, col2;
    while (*word != "\n") {
      col2 += *word + " ";

      word++;
    }

    word++;
    while (word != item.end()) {
      col1 += *word + " ";
      word++;
    }

    std::cout << c_size << col1 << col2 << std::endl;

  }

  return 0;
}
