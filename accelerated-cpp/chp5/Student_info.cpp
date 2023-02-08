//
// Created by emil on 2/6/23.
//

#include "Student_info.h"
#include "grade.h"
#include <list>
#include <string>
#include <vector>
#include <iostream>

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

std::list<Student_info> extract_fails_list(std::list<Student_info>& students) {
  std::list<Student_info> fail;
  auto iter = students.begin();

  while (iter != students.end()) {
    if (fgrade(*iter)) {
      fail.push_back(*iter);
      iter = students.erase(iter);
    } else {
      ++iter;
    }
  }

  return fail;
}

std::vector<Student_info> extract_fails_vector(std::vector<Student_info>& students) {
  std::vector<Student_info> fail;
  auto iter = students.begin();

  while (iter != students.end()) {
    if (fgrade(*iter)) {
      fail.push_back(*iter);
      iter = students.erase(iter);
    } else {
      ++iter;
    }
  }

  return fail;
}
