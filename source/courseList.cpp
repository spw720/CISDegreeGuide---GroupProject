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

	// CIS Core Classes, Math included to check for the math prereq
	NoPre = new Course("Empty Prereq", "", 0, '', false, false, false, null, null, false);
	M112 = new Course("Elementary Functions", "MATH", 112, 'l', true, true, true, NoPre, NoPre, false);
	CIS210 = new Course("Computer Science I", "CIS", 210, 'l', true, true, false, NoPre,NoPre, false);
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

	// upper div electives, course options
	
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
	CIS445 = new Course("Modeling and Simulation", "CIS", 445, false, false, true, CIS315, CIS330, false);
	CIS451 = new Course("Database Processing", "CIS", 451, true, false, false, CIS313, CIS314, false);
	CIS453 = new Course("Data Mining", "CIS", 453, false, false, true, CIS451,NoPre,false);
       	CIS461 = new Course("Introduction to Compilers", "CIS", 461, true, false, false, CIS314, CIS425, false);
	CIS471 = new Course("Introduction to Artificial Intelligence", "CIS", 471, true, true, false, CIS315, false);
	CIS472 = new Course("Machine Learning", "CIS", 472, false, true, true, CIS315, false);
	

	// writing requirments 
	WR320 = new Course("Scientific and Technical Writing", "WR", 320, true, true, true, NoPre, NoPre, false);
	WR321 = new Course("Business Communications", "WR", 321, true, true, true, NoPre, NoPre, false);
	// Calculas Sequences, must choose one two course sequence
	M251 = new Course("Calculas I", "MATH", 251, true, true, true, M112, NoPre, false);
	M252 = new Course("Calculas II", "MATH", 252, true, true, true, M251, NoPre, false);
	M261 = new Course("Calculas with Theory I", "MATH", 261, true, true, true, NoPre, NoPre, false);
	M262 = new Course("Calculas with Theory II", "MATH", 262, true, true, true, M262, NoPre, false);
	M246 = new Course("Calculus for the Biological Sciences I", "MATH", 246, true, true, true, M112, NoPre, false);
	M247 = new Course("Calculus for the Biological Sciences II", "MATH", 247, true, true, true, M246, NoPre, false);
	
	// Additional Math: 2 courses out of the following: 
	M341 = new Course("Elementary Linear Algebra I","MATH", 341, true, true, false, M252, NoPre, false);
	M253 = new Course("Calculas III", "MATH", 253, false, true, true, M252, NoPre, false);
       	M263 = new Course("Calculas with Theory III", "MATH", 263, false, true, true, M262, NoPre, false);
	M347 = new Course("Fundamentals of Number Theory I", "MATH", 347, true, true, false, M253, M263, false);
	M351 = new Course("Elementary Numerical Analysis I", "MATH", 351, true, true, false, M253, M263, false);
	M391 = new Course("Fundamentals of Abstract Algebra I", "MATH", 391, true, true, false, M341, M232, false);
	M343 = new Course("Statistical Models/Methods", "MATH", 343, false, true, true, M252, NoPre, false);
	
		


	courseList.push_back(*CIS210);
	courseList.push_back(*CIS211);
	courseList.push_back(*CIS212);
	
}

