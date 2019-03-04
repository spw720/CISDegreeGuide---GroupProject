#include <iostream>
#include <vector>
#include <algorithm>
#include "course.hpp"
#include "courseList.hpp"
using namespace std;


int main() {
	//TODO

	//Populates courseList
	CourseList *courseList = new CourseList();

	//Just for testing
	//Prints course's subject and number
	cout << "Capacity: " << courseList->getAll().capacity() << endl;
	//courseList->getAll().capacity();
	for(auto it = courseList->getAll().begin(); it!=courseList->getAll().end(); it++) {
		//cout << "Here " << courseList->getAll().size() << endl;
		cout << (*it).getSubject() << " " << (*it).getNumber() << endl;
	}

	//TODO build courseList->toTake from coreLower, coreUpper, track
	//using find: if(std::find(v.begin(), v.end(), x) != v.end()) {}

	return 0;
}


