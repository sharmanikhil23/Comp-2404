#ifndef TEST_CC
#define TEST_CC

#include <string>
using namespace std;

class Test {
private:
  const string name;
  int getNumber() { return 0; }

public:
  Test(string n) : name(n) {}
  string getName() { return name; }
};
#endif