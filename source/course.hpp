#ifndef __COURSE_HPP
#define __COURSE_HPP

class Course {
public: 
	Course();
	~Course();

private:
	char name[20];			// Course Title
	char subject[4];		// Prefix, i.e. CIS
	int number;			// Number, i.e. 330
	int crn;            		// Unique Course Code
	int credits;			// Usually 4
	
	char termsOffered[4][2];	// F, S, W
	char prerequisites[4][20];	// i.e. 211.prerequisites=210
};

#endif
