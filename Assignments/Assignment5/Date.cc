#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int y, int m, int d, int h, int min) {
  day = d;
  month = m;
  year = y;
  time = new Time(h, min);
}

Date::~Date() { delete time; }

bool Date::validate(int y, int m, int d) {

  int lastDay = lastDayInMonth(m, y);

  if (m > 12 || m < 0) {
    return false;
  } else if (d > lastDay) {
    return false;
  } else {
    return true;
  }
}

bool Date::operator==(Date &d) {

  if (d.day == day && d.month == month && d.year == year &&
      (*(d.time) == *time)) {
    return true;
  } else {
    return false;
  }
}

// if this is greater then d will be less mean true
bool Date::operator<(Date &d) {

  if (year < d.year) {
    return true;
  } else if (year > d.year) {
    return false;
  } else {
    if (month < d.month) {
      return true;
    } else if (month > d.month) {
      return false;
    } else {
      if (day < d.day) {
        return true;
      } else if (day > d.day) {
        return false;
      } else {
        if ((*time < *(d.time))) {
          return true;
        } else {
          return false;
        }
      }
    }
  }
}

bool Date::operator>(Date &d) {
  if ((*this) == d || (*this) < d) {
    return false;
  } else {
    return true;
  }
}

int Date::lastDayInMonth(int month, int year) {
  switch (month) {
  case 2:
    if (leapYear(year))
      return 29;
    else
      return 28;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
  default:
    return 30;
  }
}

bool Date::leapYear(int year) {
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    return true;
  else
    return false;
}

ostream &operator<<(ostream &out, Date &d) {
  out << d.year << "-" << right << setfill('0') << setw(2) << d.month << "-"
      << setfill('0') << setw(2) << d.day << " @ " << *(d.time);
  return out;
}

bool Date::sameDay(Date &d) {
  if (this->year == d.year && this->month == d.month && this->day == d.day) {
    return true;
  } else {
    return false;
  }
}

Time &Date::getTime() { return *time; }
