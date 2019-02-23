CXX=g++
CXXFLAGS=-g -std=c++14

all: lifeguide.exe test.exe

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

lifeguide.exe: course.o courseList.o main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

test.exe: test.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) -r *.o *.exe
