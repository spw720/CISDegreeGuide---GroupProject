#include <iostream>
#include <vector>
#include <algorithm> //for std::find
#include "course.hpp"
#include "courseList.hpp"

bool hasLowerDiv(CourseList *CourseList, CourseList *coreLower) { //courses taken, lower division core requirments
  bool hasLowerDiv = true;
  auto x = coreLower->getCourseList().begin();
  for (auto it = CourseList->getCourseList().begin(); it!=CourseList->getCourseList().end(); it++) {
		//cout << (*it).getSubject() << " " << (*it).getNumber() << endl;
    if (std::find((*it).begin(), (*it).end(), x) != (*it).end()) {
      /* v contains x */
      x += 1;
    } else {
      /* v does not contain x */
      hasLowerDiv = false;
      break;
    }
	}
  return hasLowerDiv;
}
