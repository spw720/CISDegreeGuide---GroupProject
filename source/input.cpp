#include "input.hpp"

Input::Input() : inputStream(& std::cin) {
  //
}

Input::~Input() {
  this->closeStream();
}
