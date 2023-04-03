#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "Appt.h"

int Appt::nextId = APPT_IDS;

Appt::Appt(Animal *a, Date *d) {
  animal = a;
  date = d;
  id = nextId;
  nextId++;
}

Appt::~Appt() { delete date; }

ostream &operator<<(ostream &output, Appt &a) {

  output << left << setw(4) << a.id << " : " << *(a.date) << " -- "
         << setfill(' ') << left << setw(15) << a.animal->getName()
         << " with parent " << a.animal->getParentName() << endl;

  return output;
}

int Appt::getId() { return id; };
Date *Appt::getAptDate() { return date; };

bool sameDay(Appt *a2) { return true; }