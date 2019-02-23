#include <vector>
#include "course.hpp"
#include "courseList.hpp"
using namespace std;

CourseList::CourseList() {
	/*Course(
	* string name
 	* string subject
	* int number
 	* char division ('l', 'u')
 	* bool offeredFall
 	* bool offeredWinter
 	* bool offeredSpring
 	* string prereq1
 	* string prereq2
 	* bool hasTaken);
 	*/
	
	//TODO hard-code courses
	//push to courseList
	//make sure to add in courseList.hpp

	//Examples:
	CIS210 = new Course("CIS210", "CIS", 210, 'l', true, true, false, "", "", true);
	CIS211 = new Course("CIS211", "CIS", 211, 'l', false, true, true, "CIS210", "", true);
	
	
	
	courseList.push_back(*CIS210);
	courseList.push_back(*CIS211);

}

