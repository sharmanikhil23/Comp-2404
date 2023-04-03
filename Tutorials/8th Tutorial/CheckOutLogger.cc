#ifndef CHECKOUTLOGGER_H
#define CHECKOUTLOGGER_H

#include <iostream>
using namespace std;
#include <string>

#include "Logger.cc"

class CheckOutLogger : public Logger {
public:
  CheckOutLogger(string n) : Logger(n) {
    cout << "CheckOutLogger is being created " << endl;
  }

  virtual ~CheckOutLogger() {
    cout << "CheckOutLogger is being destroyed " << endl;
  }

  virtual void update() {
    cout << "CheckOutLogger update is being called" << endl;
  }
};

#endif