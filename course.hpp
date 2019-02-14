#ifndef __COURSE_HPP
#define __COURSE_HPP

class Courses {
public: 
	Course();
	~Course();

private:
	string subject;
	int number;
	int credits;
	int crn;
	string termsOffered[];
	string prerequisites[];

#endif
