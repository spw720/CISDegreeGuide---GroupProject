#ifndef __COURSE_HPP
#define __COURSE_HPP

class Courses {
public: 
	Course();
	~Course();

private:
	string name;			// Course Title
	string subject;		 	// Prefix, i.e. CIS
	int number;				// Number, i.e. 330
	int crn;            	// Unique Course Code
	int credits;			// Usually 4
	
	string termsOffered[];	// F, S, W, Summer 
	string prerequisites[];	// Usually just 1, i.e. 211.prerequisite=210

#endif
