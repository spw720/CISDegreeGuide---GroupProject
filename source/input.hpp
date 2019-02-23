#ifndef __INPUT_HPP
#define __INPUT_HPP

#include <string>
#include <fstream>
#include <iostream>

class Input {
public:
  Input();
  ~Input();

  void openStream(int argc, const char *argv[]);

  std::string readFromString();

  void closeStream();

private:
  std::isstream *inputStream;
};

#endif
