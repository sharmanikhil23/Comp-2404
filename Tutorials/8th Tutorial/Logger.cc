#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
using namespace std;
#include <string>

class Logger {
private:
  string name;

public:
  Logger(string n) {
    cout << "Logger is being created " << n << endl;
    name = n;
  }

  virtual ~Logger() { cout << "Logger is being destroyed " << name << endl; }

  virtual void update() = 0;
};

#endif