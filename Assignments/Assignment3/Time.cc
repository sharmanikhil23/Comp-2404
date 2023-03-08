#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Time.h"

Time::Time(int h, int m) { setTime(h, m); }

Time::Time(Time *t) { setTime(t->hours, t->minutes); }

void Time::setTime(int h, int m) {
  hours = (h >= 0 && h < 24) ? h : 0;
  minutes = (m >= 0 && m < 60) ? m : 0;
}

void Time::add(int h, int m) {
  Time temp(h, m);
  int tempMin = temp.convertToMins();
  int currentMin = convertToMins();
  currentMin = currentMin + tempMin;
  hours = currentMin / 60;
  minutes = currentMin % 60;
}

int Time::convertToMins() { return (hours * 60 + minutes); }

void Time::print() {
  cout << setfill('0') << setw(2) << hours << ":" << setfill('0') << setw(2)
       << minutes;
}

void Time::print(int hours, int minutes) {
  cout << setfill('0') << setw(2) << hours << ":" << setfill('0') << setw(2)
       << minutes;
}

bool Time::validate(int hrs, int min) {
  if (hrs >= 0 && hrs < 24 && min >= 0 && min < 60) {
    return true;
  }
  return false;
}

bool Time::lessThan(Time *t) {
  if (hours < t->hours) {
    return true;
  } else if (hours > t->hours) {
    return false;
  } else {
    if (minutes < t->minutes) {
      return true;
    } else {
      return false;
    }
  }
}

bool Time::overlaps(Time *t1, Time *t2) {
  if ((lessThan(t1) && lessThan(t2)) || (!lessThan(t1) && !lessThan(t2))) {
    return false;
  } else {
    return true;
  }
}

bool Time::equals(Time *t) {
  if (hours == t->hours && minutes == t->minutes) {
    return true;
  } else {
    return false;
  }
}
