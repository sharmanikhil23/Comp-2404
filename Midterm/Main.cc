#include <iostream>
using namespace std;
#include <string>

#include "Test.cc"

int main() {
  Test one("Nikko");
  cout << one.getName() << endl;

  return 0;
}