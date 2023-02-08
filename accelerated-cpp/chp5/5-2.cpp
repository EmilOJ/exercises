//
// Created by emil on 2/8/23.
//

#include "Student_info.h"
#include "grade.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>


int ex52() {
  std::vector<Student_info> students;
  Student_info record;
  std::string::size_type maxlen = 0;

  while(read(std::cin, record)) {
    maxlen = std::max(maxlen, record.name.size());
    students.push_back(record);
  }

  std::sort(students.begin(), students.end(), compare);

  for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
    std::cout << students[i].name << std::string(maxlen + 1 - students[i].name.size(), ' ');

    try {
      students = extract_fails_vector(students);
      double final_grade = grade(students[i]);
      std::streamsize prec = std::cout.precision();
      std::cout << std::setprecision(3) << final_grade << std::setprecision(prec);
    } catch (std::domain_error& e) {
      std::cout << e.what();
    }
  }


  return 0;
}
