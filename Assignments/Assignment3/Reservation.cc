#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Reservation.h"

Reservation::Reservation(string n, Table *t, Date *d, Time *tm) {
  patron = n;
  table = t;
  date = d;
  time = tm;
}

Reservation::~Reservation() {
  delete date;
  delete time;
}

int Reservation::getReservedTableNumber() { return table->getTNumber(); }

// if r occur before this reservation
bool Reservation::lessThan(Reservation *r) {
  if (date->lessThan(r->date)) {
    return true;
  } else if (date->equals(r->date)) {
    if (time->lessThan(r->time) || time->equals(r->time)) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

bool Reservation::overlaps(Date *d, Time *t) {

  if (date->equals(d) == true) {
    Time *currentResEnd = new Time(time);
    Time *expectedResEnd = new Time(t);
    expectedResEnd->add(2, 0);
    currentResEnd->add(2, 0);

    if (t->overlaps(time, currentResEnd) == false &&
        time->overlaps(t, expectedResEnd) == false) {
      delete currentResEnd;
      delete expectedResEnd;
      return false;
    } else {
      delete currentResEnd;
      delete expectedResEnd;
      return true;
    }
  }
  return false;
}

void Reservation::print() {
  date->print();
  cout << " @ ";
  time->print();
  cout << "  ==>  Table  " << getReservedTableNumber() << "  " << patron
       << endl;
}

bool Reservation::equalDate(Date *d) { return date->equals(d); }
