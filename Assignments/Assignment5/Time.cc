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

ostream &operator<<(ostream &output, Time &t) {
  output << setfill('0') << setw(2) << t.hours << ":" << setfill('0') << setw(2)
         << t.minutes << ":" << setfill('0');

  return output;
}

// comparing the t with this if this is > mean t is less mean true else false;
bool Time::operator<(Time &t) {
  return (convertToMins() > t.convertToMins()) ? true : false;
}

bool Time::operator>(Time &t) {
  return (((*this) < t) == false && ((*this) == t) == false) ? true : false;
}

bool Time::operator==(Time &t) {
  return (convertToMins() == t.convertToMins()) ? true : false;
}