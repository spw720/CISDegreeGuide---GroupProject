#include <vector>
#include "course.hpp"

class CourseList {
public:
	CourseList();

	//Just for testing
	void print210() {
		cout << CIS210->getNumber();
	}

	std::vector<Course> getCourseList() {return courseList;}


public:
	//Courses:
	//TODO
	Course *CIS210;
	Course *CIS211;






	//Course Lists:
	//TODO
	std::vector<Course> courseList;
};
