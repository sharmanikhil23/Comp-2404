#ifndef DATE_H
#define DATE_H

#include "Time.h"
#include "defs.h"

/*
 Class  :   Date
 Purpose:   This class helps us to keep track of the dates for the restaurant

Critical Functions:
validate:    It is the static member function can be run from anywhere with just
the class name
operator==(Date &),bool operator<(Date &),bool operator>(Date &): for all these
we are using the operator overloading

*/
class Date {

  friend ostream &operator<<(ostream &, Date &);

public:
  Date(int = 0, int = 0, int = 2000, int = 0, int = 0);
  ~Date();
  static bool validate(int, int, int);
  bool operator==(Date &);
  bool operator<(Date &);
  bool operator>(Date &);
  bool sameDay(Date &);
  Time &getTime();

private:
  int day;
  int month;
  int year;
  Time *time;
  static int lastDayInMonth(int, int);
  static bool leapYear(int);
};

#endif
