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
 	* Course prereq1
 	* Course prereq2
 	* bool hasTaken);
 	*/
	
	//TODO hard-code courses
	//push to courseList
	//make sure to add in courseList.hpp

	//Examples:
	M112 = new Course("Elementary Functions", "MATH", "112", 'l', true, true, true, "", "", false);
	CIS210 = new Course("Computer Science I", "CIS", 210, 'l', true, true, false, "", "", false);
	CIS211 = new Course("Computer Science II", "CIS", 211, 'l', false, true, true, CIS210, "", false);
	CIS212 = new Course("Computer Sciene III", "CIS", 212, 'l', true, false, true, CIS211, "", false);
	M231 = new Course("Elements of Discrete Mathematics I", "MATH", 231, 'l', true, true, true, M112, "", false);
	M232 = new Course("Elements of Discrete Mathematics II", "MATH", 232, 'l', true, true, true, M231, "", false);
	CIS313 = new Course("Intermediate Data Structures", "CIS", 313, 'u', true, true, false, CIS212, M232, false);
	CIS314 = new Course("Computer Organization", "CIS", 314, 'u', true, true, false, CIS212, M231, false);
	CIS315 = new Course("Intermediate Algorithms", "CIS", 315, 'u', false, true, true, CIS313, "", false);
	CIS330 = new Course("C/C++ and Unix", "CIS", 330, 'u', false, true, true, CIS314, "", false);
	CIS415 = new Course("Operating Systems", "CIS", 415, 'u', true, false, true, CIS313, CIS330, false);
	CIS422 = new Course("Software Methodology I", "CIS", 422, 'u', true, true, true, CIS313, "", false);
	CIS425 = new Course("Principles of Programming Languages", "CIS", 425, 'u', true, false, true, CIS315, "", false);

	
	
	courseList.push_back(*CIS210);
	courseList.push_back(*CIS211);

}

