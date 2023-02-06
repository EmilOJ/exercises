//
// Created by emil on 2/6/23.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

typedef std::vector<int>::size_type vec_sz;

int main() {
  const std::vector<int> data = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  const auto qt_size = data.size() / 4;
  auto rem = data.size() % 4;

  int rem_idx;
  int shift_idx = 0;
  for (int i = 0; i < 4; ++i) {
    cout << "Quartile " << i+1 << ":" << std::endl;
    rem_idx = rem > 0 ? 1 : 0;

    for (int j = 0 + shift_idx; j < qt_size + rem_idx + shift_idx; ++j) {
      cout << data[i*qt_size+j] << std::endl;
    }

    if (rem > 0) {
      shift_idx++;
      --rem;
    }
  }


  return 0;
}