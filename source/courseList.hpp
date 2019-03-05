#include <vector>
#include "course.hpp"

class CourseList {
public:
	CourseList();

	//Just for testing
	void print210() {
		cout << CIS210->getNumber();
	}

	std::vector<Course> getAll() {return all;}


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
	Course *CIS322;
	Course *CIS399;

	Course *WR320;
	Course *WR321;
	
	Course *M251;
	Course *M252;
	Course *M261;
	Course *M262;
	Course *M246;
	Course *M247;
	
	Course *M341;
	Course *M253;
	Course *M263;
	Course *M347;
	Course *M351;
	Course *M391;
	Course *M343;	





	//Courses:
	//TODO
	std::vector<Course> all;
	std::vector<Course> coreLower;
	std::vector<Course> coreUpper;
	std::vector<Course> taken;
	std::vector<Course> toTake;

	std::vector<Course> mathUpper;

	//Computational Science Track
	std::vector<Course> compSciReq;
	std::vector<Course> compSciOpt;

	//Computer Networks Track
	std::vector<Course> compNetworkReq;
	std::vector<Course> compNetworkOpt;

	//Computer Security Track
	std::vector<Course> compSecurityReq;
	std::vector<Course> compSecurityOpt;

	//Database and Informatics Track
	std::vector<Course> dbInfoReq;
	std::vector<Course> dbInfoOpt;

	//Foundations Track
	std::vector<Course> foundationReq;
	std::vector<Course> foundationOpt;

	//Software Dev Track
	std::vector<Course> softwareDevReq;
	std::vector<Course> softwareDevOpt;
};
