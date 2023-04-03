#ifndef CHECKINLOGGER_H
#define CHECKINLOGGER_H
#include <iostream>
using namespace std;
#include <string>

#include "Logger.cc"

class CheckInLogger : public Logger {

public:
  CheckInLogger(string n) : Logger(n) {
    cout << "CheckInLogger is being created " << endl;
  }

  virtual ~CheckInLogger() {
    cout << "CheckinLogger is being destroyed " << endl;
  }

  virtual void update() {
    cout << "CheckInLogger update is being called" << endl;
  }
};

#endif
