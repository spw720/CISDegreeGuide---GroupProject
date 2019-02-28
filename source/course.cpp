#include <string>
#include "course.hpp"
using namespace std;

//Constructor
Course::Course(string name, string subject, int number, char division, bool offeredFall, bool offeredWinter, bool offeredSpring, string prereq1, string prereq2, bool hasTaken) {
	this->name = name;
	this->subject = subject;
	this->number = number;
	this->division = division;
	this->offeredFall = offeredFall;
	this->offeredWinter = offeredWinter;
	this->offeredSpring = offeredSpring;
	this->prereq1 = prereq1;
	this->prereq2 = prereq2;
	this->hasTaken = hasTaken;
}

Course::~Course() {};

//Getters
string Course::getName() {return this->name;}
string Course::getSubject() {return this->subject;}
int Course::getNumber() {return this->number;}
char Course::getDivision() {return this->division;}
bool Course::getOfferedFall() {return this->offeredFall;}
bool Course::getOfferedWinter() {return this->offeredWinter;}
bool Course::getOfferedSpring() {return this->offeredSpring;}
Course Course::getPrereq1() {return (this->prereq1)->getName();}	// I made this function return Course instead of String because it will be easier to determine if a student has taken it from their "has Taken" list as opposed to looking @ a string      
Course Course::getPrereq2() {return (this->prereq2)->getName();}
bool Course::getHasTaken() {return this->hasTaken;}
