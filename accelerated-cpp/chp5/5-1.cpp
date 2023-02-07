//
// Created by emil on 2/7/23.
//

#include <vector>
#include <list>
#include "chp4/Student_info.h"
#include "chp4/grade.h"


bool fgrade(const Student_info& student) {
  return grade(student) < 60;
}

std::list<Student_info> extract_fails(std::list<Student_info>& students) {
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

std::string::size_type width(const std::vector<std::string>& v) {
  std::string::size_type maxlen = 0;
  for (const auto& str : v) {
    maxlen = std::max(maxlen, str.size());
  }

  return maxlen;
}

std::vector<std::string> frame(const std::vector<std::string>& v) {
  std::vector<std::string> ret;
  std::string::size_type maxlen = width(v);
  std::string border(maxlen + 4, '*');

  ret.push_back(border);

  for (const auto &item: v) {
    ret.push_back("* " + item + std::string(maxlen - item.size(), ' ') + " *");
  }

  ret.push_back(border);

  return ret;
}

std::vector<std::string> vcat(const std::vector<std::string> &top,
                              const std::vector<std::string> &bottom) {
  std::vector<std::string> ret = top;
  ret.insert(ret.end(), bottom.begin(), bottom.end());

  return ret;
}

std::vector<std::string> hcat(const std::vector<std::string>& left,
                              const std::vector<std::string>& right) {
  std::vector<std::string> ret;
  std::string::size_type width1 = width(left) + 1;
  std::vector<std::string>::size_type i = 0, j = 0;

  while (i != left.size() || j != right.size()) {
    std::string s;
    if (i != left.size())
      s = left[i++];

    s += std::string(width1 - s.size(), ' ');

    if (j != right.size())
      s += right[j++];

    ret.push_back(s);
  }

  return ret;
}

int main() {
  std::string test_str = "hej med dig";
  auto res = split(test_str);
  for (const auto &item: res) {
    std::cout << item << std::endl;
  }

  auto fr1 = frame({"hej", "med", "dig!!!!"});
  auto fr2 = frame({"ok", "yearh", "sure!"});
  for (const auto &item: vcat(fr1, fr2)) {
    std::cout << item << std::endl;
  }

  return 0;
}

