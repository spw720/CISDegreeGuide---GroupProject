#include "input.hpp"
//start with 210 and discrete 1
Input::Input() : inputStream(& std::cin) {
  //
}

Input::~Input() {
  this->closeStream();
}

void
Input::getClassTaken(int argc, const char *argv[]) {
  bool cis210;
  bool cis211;
  bool cis212;
  bool cis313;
  bool cis314;
  bool cis315;
  bool cis322;
  bool cis330;
  bool cis399;
  bool cis407;
  bool cis415;
  bool cis425;

  bool m231;
  bool m232;

  while (inputStream != 'y' && inputStream != 'n') { //210?
    std::cout << "Have you taken CIS 210? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis210 = 1;}
  else {cis210 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //211?
    std::cout << "Have you taken CIS 211? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis211 = 1;}
  else {cis211 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //212?
    std::cout << "Have you taken CIS 212? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis212 = 1;}
  else {cis212 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //discrete1?
    std::cout << "Have you taken math 231? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {m231 = 1;}
  else {m231 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //discrete2?
    std::cout << "Have you taken math 232? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {m232 = 1;}
  else {m232 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //313?
    std::cout << "Have you taken CIS 313? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis313 = 1;}
  else {cis313 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //314?
    std::cout << "Have you taken CIS 314? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis314 = 1;}
  else {cis314 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //315?
    std::cout << "Have you taken CIS 315? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis315 = 1;}
  else {cis315 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //322?
    std::cout << "Have you taken CIS 322? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis322 = 1;}
  else {cis322 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //330?
    std::cout << "Have you taken CIS 330? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis330 = 1;}
  else {cis330 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //399?
    std::cout << "Have you taken CIS 399? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis399 = 1;}
  else {cis399 == 0;}
  inputStream = null;

  while (inputStream != 'y' && inputStream != 'n') { //407?
    std::cout << "Have you taken CIS 407? (y/n)" << std::endl
    inputStream = & std::cin;
  }
  if (inputStream == 'y') {cis407 = 1;}
  else {cis407 == 0;}
  inputStream = null;
}
