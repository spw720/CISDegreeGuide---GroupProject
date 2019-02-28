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
	Course *CIS212;
	Course *M232;
	Course *M231;
	Course *M112;
	Course *NoPre;
	Course *CIS313;
	Course *CIS314;
	Course *CIS315;
	Course *CIS330;
	Course *CIS415;
	Course *CIS425;
	Course *CIS422;

	Course *CIS427;
	Course *CIS420;
	Course *CIS407;
	Course *CIS410;
	Course *CIS413;
	Course *CIS431;
	Course *CIS432;
	Course *CIS433;
	Course *CIS441;
	Course *CIS443;
	Course *CIS445;
	Course *CIS451;
	Course *CIS453;
	Course *CIS461;
	Course *CIS471;
	Course *CIS472;

	Course *WR320;
	Course *WR321;
	
	





	//Course Lists:
	//TODO
	std::vector<Course> courseList;
};
