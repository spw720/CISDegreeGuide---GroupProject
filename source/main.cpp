#include <iostream>
#include <vector>
#include "course.hpp"
#include "courseList.hpp"
using namespace std;


int main() {
	//TODO

	//Populates courseList
	CourseList *courseList = new CourseList();

	//Just for testing
	//Prints course's subject and number
	for(auto it = courseList->getCourseList().begin(); it!=courseList->getCourseList().end(); it++) {
		cout << (*it).getSubject() << " " << (*it).getNumber() << endl;
	}

	return 0;
}

