#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

Date::~Date() {}

bool Date::validate(int d, int m, int y) {

  int lastDay = lastDayInMonth(m, y);

  if (m > 12 || m < 0) {
    return false;
  } else if (d > lastDay) {
    return false;
  } else {
    return true;
  }
}

bool Date::equals(Date *d) {
  if (d->day == day && d->month == month && d->year == year) {
    return true;
  } else {
    return false;
  }
}

bool Date::lessThan(Date *d) {
  if (year < d->year) {
    return true;
  } else if (year > d->year) {
    return false;
  } else {
    if (month < d->month) {
      return true;
    } else if (month > d->month) {
      return false;
    } else {
      if (day < d->day) {
        return true;
      } else {
        return false;
      }
    }
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

void Date::print() {
  cout << year << "-" <<right<< setfill('0') << setw(2) << month << "-" << setfill('0')
       << setw(2) << day;
}

void Date::print(int year, int month, int day) {
  cout << year << "-" << setfill('0') << setw(2) << month << "-" << setfill('0')
       << setw(2) << day;
}
