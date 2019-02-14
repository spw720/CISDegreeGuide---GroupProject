#ifndef __COURSES_HPP
#define __COURSES_HPP

class Courses {
public: 
	Courses();
	~Courses();

private:
	string subject;
	int number;
	int credits;
	int crn;
	string termsOffered[];
	string prerequisites[];

#endif
