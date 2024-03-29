//
// Created by emil on 2/6/23.
//

#include "Student_info.h"

bool compare(const Student_info& x, const Student_info& y) {
  return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s) {
  is >> s.name >> s.midterm >> s.final;
  read_hw(is, s.homework);

  return is;
}

std::istream &read_hw(std::istream &in, std::vector<double> &hw) {
  if (in) {
    hw.clear();
    double x;
    while (in >> x) {
      hw.push_back(x);
    }

    in.clear();
  }

  return in;
}
