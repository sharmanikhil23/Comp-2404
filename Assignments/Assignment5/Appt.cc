#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "Appt.h"

int Appt::nextId = APPT_IDS;

Appt::Appt(Animal *a, Date *d) {
  animal = a;
  date = d;
  id = nextId++;
}

Appt::~Appt() {}

ostream &operator<<(ostream &output, Appt &a) {
  output << left << setw(4) << a.id << " : " << a.date << a.animal->getName()
         << a.animal->getParentName() << endl;
  return output;
}

int Appt::getAptId() { return id; };
Date *Appt::getAptDate() { return date; };

bool sameDay(Appt *a2) { return true; }