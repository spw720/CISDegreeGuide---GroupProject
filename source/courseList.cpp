#include <vector>
#include "course.hpp"
#include "courseList.hpp"
using namespace std;
//#define null nullptr;

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

	// CIS Core Classes, Math included to check for the math prereq
	NoPre = new Course("Empty Prereq", "", 0, ' ', false, false, false, nullptr, nullptr, false);
	M112 = new Course("Elementary Functions", "MATH", 112, 'l', true, true, true, NoPre, NoPre, false);
	CIS210 = new Course("Computer Science I", "CIS", 210, 'l', true, true, false, nullptr, nullptr, false);
	CIS211 = new Course("Computer Science II", "CIS", 211, 'l', false, true, true, CIS210, NoPre, false);
	CIS212 = new Course("Computer Sciene III", "CIS", 212, 'l', true, false, true, CIS211, NoPre, false);
	M231 = new Course("Elements of Discrete Mathematics I", "MATH", 231, 'l', true, true, true, M112, NoPre, false);
	M232 = new Course("Elements of Discrete Mathematics II", "MATH", 232, 'l', true, true, true, M231,NoPre, false);

	CIS313 = new Course("Intermediate Data Structures", "CIS", 313, 'u', true, true, false, CIS212, M232, false);
	CIS314 = new Course("Computer Organization", "CIS", 314, 'u', true, true, false, CIS212, M231, false);
	CIS315 = new Course("Intermediate Algorithms", "CIS", 315, 'u', false, true, true, CIS313,NoPre, false);
	CIS330 = new Course("C/C++ and Unix", "CIS", 330, 'u', false, true, true, CIS314,NoPre, false);
	CIS415 = new Course("Operating Systems", "CIS", 415, 'u', true, false, true, CIS313, CIS330, false);
	CIS422 = new Course("Software Methodology I", "CIS", 422, 'u', true, true, true, CIS313,NoPre, false);
	CIS425 = new Course("Principles of Programming Languages", "CIS", 425, 'u', true, false, true, CIS315,NoPre, false);

	
	//300 Level Electives
	CIS322 = new Course("Intro to SOftware Engineering", "CIS", 322, 'l', true, false, true, CIS212, NoPre, false);
	CIS399 = new Course("Topics in Data Science", "CIS", 399, 'l', false, true, true, CIS212, M232, false);

	//Upper Div electives
	CIS407 = new Course("Seminar", "CIS", 407, 'u', true, true, true, NoPre, NoPre, false);
	CIS410 = new Course("Topics Course", "CIS", 410, 'u', true, true, true, NoPre, NoPre, false);
	CIS413 = new Course("Advanced Data Structures", "CIS" , 413, 'u', false, true, false, CIS315,NoPre, false);
	CIS420 = new Course("Automata Theory", "CIS", 420, 'u', false, false, true, CIS315,NoPre, false);
	CIS427 = new Course("Introduction to Logic", "CIS", 427, 'u', false, false, true, CIS315, CIS425, false);
	CIS431 = new Course("Introduction to Parallel Computing", "CIS", 431, 'u', false, true, false, CIS330,NoPre, false);
	CIS432 = new Course("Intro to Computer Networks", "CIS", 432, 'u', true, false, false, CIS330,NoPre, false);
	CIS433 = new Course("Computer & Network Security", "CIS", 433, 'u', false, true, false, CIS415,NoPre, false);
	CIS441 = new Course("Intro Computer Graphics", "CIS", 441, 'u', false, true, false, CIS330,NoPre, false);
	CIS443 = new Course("User Interfaces", "CIS", 443, 'u', true, false, false, CIS313,NoPre, false);
	CIS445 = new Course("Modeling and Simulation", "CIS",445, 'u', false, false, true, CIS315, CIS330, false);
	CIS451 = new Course("Database Processing", "CIS", 451, 'u', true, false, false, CIS313, CIS314, false);
	CIS453 = new Course("Data Mining", "CIS", 453, 'u', false, false, true, CIS451,NoPre,false);
       	CIS461 = new Course("Introduction to Compilers", "CIS", 461, 'u', true, false, false, CIS314, CIS425, false);
	CIS471 = new Course("Introduction to Artificial Intelligence", "CIS", 471, 'u', true, true, false, CIS315,NoPre, false);
	CIS472 = new Course("Machine Learning", "CIS", 472, 'u', false, true, true, CIS315,NoPre, false);
	

	// writing requirments 
	WR320 = new Course("Scientific and Technical Writing", "WR", 320, 'u', true, true, true, NoPre, NoPre, false);
	WR321 = new Course("Business Communications", "WR", 321, 'u', true, true, true, NoPre, NoPre, false);
	// Calculas Sequences, must choose one two course sequence
	M251 = new Course("Calculas I", "MATH", 251, 'l', true, true, true, M112, NoPre, false);
	M252 = new Course("Calculas II", "MATH", 252, 'l', true, true, true, M251, NoPre, false);
	M261 = new Course("Calculas with Theory I", "MATH", 261,'l',  true, true, true, NoPre, NoPre, false);
	M262 = new Course("Calculas with Theory II", "MATH", 262, 'l', true, true, true, M262, NoPre, false);
	M246 = new Course("Calculus for the Biological Sciences I", "MATH", 246,'l', true, true, true, M112, NoPre, false);
	M247 = new Course("Calculus for the Biological Sciences II", "MATH", 247, 'l', true, true, true, M246, NoPre, false);
	
	
	// Additional Math: 2 courses out of the following: 
	M341 = new Course("Elementary Linear Algebra I","MATH", 341, 'u', true, true, false, M252, NoPre, false);
	M253 = new Course("Calculas III", "MATH", 253,'l', false, true, true, M252, NoPre, false);
       	M263 = new Course("Calculas with Theory III", "MATH", 263, 'l',false, true, true, M262, NoPre, false);
	M347 = new Course("Fundamentals of Number Theory I", "MATH", 347,'u', true, true, false, M253, M263, false);
	M351 = new Course("Elementary Numerical Analysis I", "MATH", 351,'u', true, true, false, M253, M263, false);
	M391 = new Course("Fundamentals of Abstract Algebra I", "MATH", 391,'u', true, true, false, M341, M232, false);
	M343 = new Course("Statistical Models/Methods", "MATH", 343,'u', false, true, true, M252, NoPre, false);
	
		



	
	
	//All Courses
	all.reserve(100);
	//all.resize(100);
	all.push_back(*CIS210);
	all.push_back(*CIS211);
	all.push_back(*CIS212);

	all.push_back(*CIS313);
	all.push_back(*CIS314);
	all.push_back(*CIS315);
	all.push_back(*CIS330);
	all.push_back(*CIS415);
	all.push_back(*CIS422);
	all.push_back(*CIS425);
	
	all.push_back(*CIS322);
	all.push_back(*CIS399);
	all.push_back(*CIS407);
	all.push_back(*CIS410);
	all.push_back(*CIS413);
	all.push_back(*CIS420);
	all.push_back(*CIS427);
	all.push_back(*CIS431);
	all.push_back(*CIS432);
	all.push_back(*CIS433);
	all.push_back(*CIS441);
	all.push_back(*CIS443);
	all.push_back(*CIS445);
	all.push_back(*CIS451);
	all.push_back(*CIS453);
	all.push_back(*CIS461);
	all.push_back(*CIS471);
	all.push_back(*CIS472);
	
	all.push_back(*M231);
        all.push_back(*M232);
	all.push_back(*M251);
	all.push_back(*M252);
	all.push_back(*M261);
	all.push_back(*M262);
	all.push_back(*M246);
	all.push_back(*M247);
	all.push_back(*M253);
	all.push_back(*M262);
	all.push_back(*M341);
	all.push_back(*M347);
	all.push_back(*M351);
	all.push_back(*M343);
	all.push_back(*M391);
	
	all.push_back(*WR320);
        all.push_back(*WR321);
	//all.capacity();
	//cout << "Capacity: " << all.capacity() << endl;

	//Lower division core
	coreLower.push_back(*CIS210);
	coreLower.push_back(*CIS211);
	coreLower.push_back(*CIS212);
	coreLower.push_back(*M231);
	coreLower.push_back(*M232);

	//Upper division core
	coreUpper.push_back(*CIS313);
	coreUpper.push_back(*CIS314);
	coreUpper.push_back(*CIS315);
	coreUpper.push_back(*CIS330);
	coreUpper.push_back(*CIS415);
	coreUpper.push_back(*CIS422);
	coreUpper.push_back(*CIS425);

	//Upper division math options
	mathUpper.push_back(*M253);
	mathUpper.push_back(*M341);
	mathUpper.push_back(*M347);
	mathUpper.push_back(*M351);
	mathUpper.push_back(*M343);
	mathUpper.push_back(*M391);

	compSciOpt.push_back(*CIS413);
	compSciOpt.push_back(*CIS443);
	compSciOpt.push_back(*CIS451);
	compSciOpt.push_back(*CIS453);

	compNetworkReq.push_back(*CIS432);
	compNetworkOpt.push_back(*CIS413);
	compNetworkOpt.push_back(*CIS433);
	compNetworkOpt.push_back(*CIS445);

	compSecurityReq.push_back(*CIS433);
	compSecurityOpt.push_back(*CIS432);
	compSecurityOpt.push_back(*CIS445);
	compSecurityOpt.push_back(*CIS472);
	
	dbInfoReq.push_back(*CIS451);
	dbInfoOpt.push_back(*CIS453);
	dbInfoOpt.push_back(*CIS427);
	dbInfoOpt.push_back(*CIS432);
	dbInfoOpt.push_back(*CIS443);
	dbInfoOpt.push_back(*CIS445);
	dbInfoOpt.push_back(*CIS471);
	dbInfoOpt.push_back(*CIS472);

	//foundationReq is empty
	//TODO: fill foundationOpt w courses above 410
	

	//Reqd course not offered!
	//softwareDevReq.push_back(*CIS423);
	softwareDevOpt.push_back(*CIS413);
	softwareDevOpt.push_back(*CIS420);
	softwareDevOpt.push_back(*CIS427);
	softwareDevOpt.push_back(*CIS461);

}

