#ifndef __COURSE_HPP
#define __COURSE_HPP
#include <iostream>
#include <string>
using namespace std;

class Course {
public: 

	//Constructor
	Course(string name, string subject, int number, char division, bool offeredFall, bool offeredWinter, bool offeredSpring, string prereq1, string prereq2, bool hasTaken);
	//Destructor
	~Course();

	//Getters
	string getName();
	string getSubject();
	int getNumber();
	char getDivision();
	bool getOfferedFall();
        bool getOfferedWinter();
        bool getOfferedSpring();
        Course getPrereq1();       
        Course getPrereq2();
        bool getHasTaken();

private:
	string name;		// Course Title
	string subject;		// Prefix, i.e. CIS
	int number;		// Number, i.e. 330
	char division;		// 'u' or 'l'
	bool offeredFall;
	bool offeredWinter;
	bool offeredSpring;
	Course prereq1;		// i.e. 211.prereq1=210
	Course prereq2;
	bool hasTaken;
};

#endif
