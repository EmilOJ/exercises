//
// Created by emil on 2/6/23.
//

#ifndef ACCELERATED_CPP_GRADE_H
#define ACCELERATED_CPP_GRADE_H

#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
bool fgrade(const Student_info&);

#endif //ACCELERATED_CPP_GRADE_H
