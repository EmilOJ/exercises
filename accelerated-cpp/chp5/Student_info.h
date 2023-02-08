//
// Created by emil on 2/6/23.
//

#ifndef ACCELERATED_CPP_STUDENT_INFO_H
#define ACCELERATED_CPP_STUDENT_INFO_H

#include <string>
#include <vector>
#include <iostream>
#include <list>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};


bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream &read_hw(std::istream&, std::vector<double>&);
std::list<Student_info> extract_fails_list(std::list<Student_info>&);
std::vector<Student_info> extract_fails_vector(std::vector<Student_info>&);

#endif //ACCELERATED_CPP_STUDENT_INFO_H
