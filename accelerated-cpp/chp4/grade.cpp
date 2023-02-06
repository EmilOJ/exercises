//
// Created by emil on 2/6/23.
//

#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <stdexcept>
#include <vector>


double grade(double midterm, double final, double homework) {
  return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const std::vector<double>& hw) {
  if (hw.empty()) {
    throw std::domain_error("student has done no homework");
  }

  return grade(midterm, final, median(hw));
}


double grade(const Student_info &s) {
  return grade(s.midterm, s.final, s.homework);
}
