#include <iostream>
#include <vector>
#include <algorithm> //for std::find
#include "course.hpp"
#include "courseList.hpp"

bool hasLowerDiv(CourseList *CourseList, CourseList *coreLower) { //courses taken, lower division core requirments
  bool hasLower = true;
  std::vector<Course> course_check = {};
  auto x = CourseList->getCourseList().begin();
  for (auto i = coreLower->getCourseList().begin(); i!=coreLower->getCourseList().end(); i++) {
    if (std::find((*i).begin(), (*i).end(), x) != (*i).end()) {
      // vector contains x
      course_check.push_back(x); //insert element
      x += 1;
    } else {
      // vector does not contain x
      hasLower = false;
      if (coreLower.size() == course_check.size()) {break;} //need to test
    }
	}
  return hasLower;
}
